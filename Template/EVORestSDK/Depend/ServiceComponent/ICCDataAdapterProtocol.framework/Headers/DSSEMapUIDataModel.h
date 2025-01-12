//
//  EMapUIDataModel.h
//  Pods
//
//  Created by zf's on 2017/3/28.
//
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "DSSChannelInfo.h"
#import "DSSMessageInfo.h"
#import "DSSMapLayer.h"
typedef NS_ENUM(NSInteger,MapSettingType){
    MapSettingTypeBaidu = 0,      ///GIS地图
    MapSettingTypeGoogle = 1,      ///GIS地图
    MapSettingTypeRaster = 2,    ///< 光栅图
};


//地图类型 map type
typedef NS_ENUM(NSInteger,MapSDKType){
    MapSDKTypeUnknown = 0,  ///未知
    MapSDKTypeBaidu = 1,    ///< baidu
    MapSDKTypeGoogle,       ///< google
    MapSDKTypeGaode,        ///< gaode
    MapSDKTypeRaster,       ///< raster
};

//坐标系类型，由平台决定 Map Coordinate System
typedef NS_ENUM(NSInteger,MapCoordinateSystemType){
    MapCoordinateSystemTypeSuperMap = 1,    ///<SuperMap, GPS
    MapCoordinateSystemTypeGoogle,          ///<Google
    MapCoordinateSystemTypeRaster,          ///<Raster
    MapCoordinateSystemTypeBaidu,           ///<Baidu
    MapCoordinateSystemTypeGaode            ///<Gaode
    
};
//Channel State Type
typedef NS_ENUM(NSInteger,ChannelStateType){
    CHANNEL_STATE_OFFLINE = 0,  					///< offline
    CHANNEL_STATE_ONLINE,                           ///< online
    CHANNEL_STATE_UNKNOW                            ///< unknow
};

//MapData Type
typedef NS_ENUM(NSInteger,MapDataType){
    MAPDATA_COMMON = 0,  					///< Common
    MAPDATA_GPS,                           ///< GPS
};

//地图图层状态
typedef enum : NSUInteger {
    MAP_LAYER_STATE_NONE, //不存在，默认状态
    MAP_LAYER_STATE_ON,//开启  
    MAP_LAYER_STATE_OFF,//关闭
} MAP_LAYER_STATE;

/// 设备详情模型 EMap Detail Model
@interface DSSEMapDetailModel :NSObject
/// 设备名称
@property (nonatomic, copy, nullable) NSString *name;
/// 资产编号 property Number
@property (nonatomic, copy, nullable) NSString *propertyNum;
/// 资产厂商 property Manufacturer
@property (nonatomic, copy, nullable) NSString *propertyManufacturer;
/// 资产类型 property Type
@property (nonatomic, copy, nullable) NSString *propertyType;
/// 资产型号 property Model
@property (nonatomic, copy, nullable) NSString *propertyModel;
/// 所属组织 belonging
@property (nonatomic, copy, nullable) NSString *belonging;
/// 监控类别 monitor Category
@property (nonatomic, copy, nullable) NSString *monitorCategory;

@end

/** EMap地图上的点位数据源 */
@interface DSSEMapUIDataModel : NSObject

/// 是否在线
@property (nonatomic, assign) BOOL online;

/// 通道id, 可空, 空表示是聚合点
@property (nonatomic, copy, nullable) NSString *channelId;

///点位名称(通道名称)
@property (nonatomic, copy, nullable) NSString *name;

/// 点位icon名称
@property (nonatomic, copy, nullable) NSString *icon;

/// 地理坐标
@property (nonatomic, assign) CLLocationCoordinate2D location;

/// 聚合点(count == 0 ? 非聚合点 : 聚合点)
@property (nonatomic, assign) NSInteger count;

/// 聚合点位范围
@property (nonatomic, copy, nullable) NSString *geomBBOX;

/// 通道类型
@property (nonatomic, copy, nullable) NSString *channelType;

/// 设备id
@property (nonatomic, copy, nullable) NSString *deviceCode;

/// 单元类型
@property (nonatomic, copy, nullable) NSString *unitType;

/// 功能: 如 支持鱼眼, 电动聚焦 eg..
@property (nonatomic, copy, nullable) NSString *cameraFunctions;

/// 所属组织
@property (nonatomic, copy, nullable) NSString *orgCode;

///
@property (nonatomic, copy, nullable) NSString *cameraType;

///
@property (nonatomic, copy, nullable) NSString *subType;

/// 挂在本聚合点位下的所有点位
@property (nonatomic, strong, nullable) NSArray<DSSEMapUIDataModel *> *channelArray;

@property (nonatomic, strong, nullable) NSArray<DSSAlarmMessageInfo *> *alarmArray;

/// 车载上报 gps点位
@property (nonatomic, strong, nullable) DSSReportGpsInfo *reportGpsInfo;


//---------------------------------------------------------------------

/// 设备详情模型 EMap Detail Model
@property (nonatomic, strong, nullable) DSSEMapDetailModel *detail;
/// 通道名称 channel Name
@property (nonatomic, copy, nullable) NSString *channelName;
/// 通道名称 device Name
@property (nonatomic, copy, nullable) NSString *deviceName;
/// 地址 channel Address
@property (nonatomic, copy, nullable) NSString *channelAddress;
/// 状态（是否在线) channel Status
@property (nonatomic, assign) ChannelStateType channelState;
/// 是否有地理信息 has location Info
@property (nonatomic, assign) BOOL hasLocation;
/// 所属光栅图ID raster id
@property (nonatomic, strong, nullable) NSNumber *mapId;
/// 状态（是否在线） mapdata Type
@property (nonatomic, assign) MapDataType mapdataType;
/// 点位类型枪球半
@property (nonatomic, assign) MBL_CAMERA_TYPE channelCameraType;

//公民公共
@property (nonatomic,copy, nullable) NSString *layerCode;
@property (nonatomic,copy, nullable) NSString *resourcesId;
@property (nonatomic,assign) NSInteger alarmCount;
@property (nonatomic,copy, nullable) NSString *subSystemType;
@property (nonatomic,copy, nullable) NSString *ownerName;
@property (nonatomic,copy, nullable) NSString *bindingResourceIds;
@property (nonatomic, strong, nullable) NSArray<DSSGMResourceChannelInfo *> *channelList;

@property (nonatomic,copy,nullable)NSString *webUrl;

/// 展示使用wgs84坐标， 地图上 计算距离用原来的GCJ坐标
@property (nonatomic, assign) CLLocationCoordinate2D wgsCoor;
@end

/// EMap Raster DataModel
@interface DSSEMapUIRasterDataModel : NSObject
@property (nonatomic,copy, nullable) NSString     *name;
@property (nonatomic,strong, nullable) NSNumber   *markerID;
@property (nonatomic,strong, nullable) NSNumber   *parentID;
@property (nonatomic,copy, nullable) NSString     *imagePath;
@property (nonatomic,assign) CGFloat    mapX;
@property (nonatomic,assign) CGFloat    mapY;
@property (nonatomic,strong, nullable) NSMutableArray<DSSEMapUIRasterDataModel *> *childHotZones;

///+ (EMapUIRasterDataModel *)getRootRasterDataModelWithArray:(NSArray *)array;
//////返回值表示当前Raster节点是否依然存在
///- (BOOL)loadChildRasterWithArray:(NSArray *)array;
///- (EMapUIRasterDataModel *)getFatherRasterWithArray:(NSArray *)array;
@end

///@interface EMapUIGPSDeviceModel : NSObject
///@property (nonatomic,copy) NSString     *deviceName;
///@property (nonatomic,strong) NSNumber   *markerID;
///@property (nonatomic,strong) NSNumber   *parentID;
///@property (nonatomic,copy) NSString     *imagePath;
////// 地理位置
///@property (nonatomic, assign) CLLocationCoordinate2D location;
///
///@end

@interface DSSEMapGMDeviceUIModel : NSObject
@property (nonatomic,copy, nullable) NSString *deviceCode;
@property (nonatomic,copy, nullable) NSString *channels;
@property (nonatomic,copy, nullable) NSString *channelName;
@property (nonatomic,assign) NSInteger alarm;
@property (nonatomic,copy, nullable) NSString *orgName;
@end

@interface DSSEMapGMPersonUIModel : NSObject
@property (nonatomic,copy, nullable) NSString *name;
@property (nonatomic,copy, nullable) NSString *phone;
@property (nonatomic,copy, nullable) NSString *path;
@end

@interface DSSEMapGMMarkerDetailUIModel : NSObject
@property (nonatomic,copy, nullable) NSString *name;
@property (nonatomic,copy, nullable) NSString *orgName;
@property (nonatomic,copy, nullable) NSString *subsystemType;
@property (nonatomic,copy, nullable) NSString *resourcesId;
@property (nonatomic,copy, nullable) NSString *ownerName;
@property (nonatomic,copy, nullable) NSString *layerCode;
@property (nonatomic,copy, nullable) NSString *orgCode;

@property (nonatomic,copy, nullable) NSArray<DSSEMapGMDeviceUIModel *> *deviceDTOs;
@property (nonatomic,copy, nullable) NSArray<DSSEMapGMPersonUIModel *> *managers;
@property (nonatomic,copy, nullable) NSArray<DSSEMapGMPersonUIModel *> *lawExecutors;
@property (nonatomic,copy, nullable) NSArray<DSSEMapGMMarkerDetailUIModel *> *bindingResources;

@end
