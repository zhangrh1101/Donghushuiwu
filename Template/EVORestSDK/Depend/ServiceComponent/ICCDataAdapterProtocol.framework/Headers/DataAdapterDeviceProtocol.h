//
//  DataAdapterDeviceProtocol.h
//  Pods
//
//  Created by zyx on 17/2/21.
//
//

#import <Foundation/Foundation.h>
#import "DSSGroupInfo.h"
#import "DSSDeviceInfo.h"
#import "DSSChannelInfo.h"
#import "DSSUserInfo.h"
#import "DSSEMapUIDataModel.h"
#import "DataAdapterRemoteNotifyProtocol.h"
#import "DataAdapterCoreProtocol.h"
#import "DSSMediaVKInfo.h"
#import "DSSUserViewInfo.h"

typedef NS_ENUM (NSInteger, DSSOrganOrderType){
    DSSOrganOrderDefault,
    DSSOrganOrderAscending,
    DSSOrganOrderDescending
};

/**
 *  需要实现的基本协议
 *  need implement protocol
 */
@protocol DataAdapterDeviceProtocol<NSObject>


/**
 登录成功之后需要调用的函数
 invoke after login

 @param userInfo userInfo
 */
#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginInExcute:(DSSUserInfo *_Nullable)userInfo;



/**
 登出成功之后需要调用的函数
 invoke after logout

 @param userInfo userInfo
 */
#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginOutExcute:(DSSUserInfo *_Nullable)userInfo;

/**
 设置web平台端口
 set web ip地址
 
 @param ip strIp
 */
#pragma mark--register function to IDHModuleProtocol
- (void)setHost:(NSString *_Nullable)host;

/**
 设置web平台端口
 set web port

 @param port port
 */
#pragma mark--register function to IDHModuleProtocol
- (void)setPort:(NSInteger)port;

/**
 设置通知回调
 set remoteNotify block

 @param remoteNotifyBlock block
 */
#pragma mark--register function to IDHModuleProtocol
- (void)setRemoteNotifyBlock:(void (^_Nonnull)(ADAPTER_NOTIFY_ACTION, id _Nullable))remoteNotifyBlock;

/**
 获取所有组织信息，视频云平台不包含设备ID和通道ID
 get all groupInfo
 
 @param block 每加载完一个组织，会执行block; execute block after load a group
 @param error error
 @return root groupInfo
 */
#pragma mark--register function to IDHModuleProtocol
- (DSSGroupInfo *_Nullable)getRootGroupWithGroupBlock:(BOOL (^_Nonnull)(DSSGroupInfo *_Nullable groupInfo))block;

/**
 获取组织详细信息

 @param DSSGroupInfo
 @return
 */
#pragma mark--register function to IDHModuleProtocol
- (DSSGroupInfo *_Nullable)getGroupDetailInfo:(DSSGroupInfo *_Nonnull)groupInfo groupBlock:(BOOL (^_Nonnull)(DSSGroupInfo *_Nullable groupInfo))block error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (DSSGroupInfo *_Nullable)getGroupDetailInfo:(DSSGroupInfo *_Nonnull)groupInfo error:(NSError*_Nullable*_Nullable)error;
/**
 加载设备信息
 load devices
 
 @param devices 设备id数组; deviceId arry
 @param deviceBlock 加载完所有设备执行block; execute block after load all devices
 @param channelBlock 加载完一个设备的所有的通道，执行block; execute block after load a device
 @return
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL)getDevices:(NSMutableArray *_Nonnull)devices withDeviceBlock:(BOOL (^_Nonnull)(NSArray * _Nullable deviceInfosArray))deviceBlock channelBlock:(BOOL (^_Nonnull)(NSArray * _Nullable channelInfosArray))channelBlock;

#pragma mark--register function to IDHModuleProtocol
- (BOOL)getDevices:(NSMutableArray *_Nonnull)devices fromGroup:(NSString *_Nullable)groupId withDeviceBlock:(BOOL (^_Nonnull)(NSArray *_Nullable deviceInfosArray))deviceBlock channelBlock:(BOOL (^_Nonnull)(NSArray *_Nullable channelInfosArray))channelBlock;
/**
 是否逻辑树
 is logic tree
 
 @return
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL)isLogicTree;

/**
 根据通道id获取设备id
 get deviceId from channelId
 
 @param channelId channelId
 @return deviceId
 */
#pragma mark--register function to IDHModuleProtocol
- (NSString *_Nullable)getDeviceIdFromChannelId:(NSString *_Nullable)channelId;

/**
 查询nvr等设备的通道状态
 query NVR channel status
 
 @param ocDeviceInfo deviceInfo
 */
#pragma mark--register function to IDHModuleProtocol
- (void)queryChannelStates:(DSSDeviceInfo *_Nullable)ocDeviceInfo;
#pragma mark--register function to IDHModuleProtocol
- (NSArray <NSString *> *_Nullable)searchDeviceTree:(NSInteger)searchType
                                 searchKey:(NSString *_Nullable)searchKey
                                 fromGroup:(NSString *_Nullable)groupId
                                groupBlock:(BOOL (^_Nonnull)(DSSGroupInfo *_Nullable groupInfo))block
                                     error:(NSError *_Nullable*_Nullable)error;

#pragma mark - 地图webservice
/**
 搜索通道信息（webservice）
 search channelInfo
 
 @param name name
 @param error error
 @return channel array
 */
#pragma mark--register function to IDHModuleProtocol
- (NSArray<NSString *> *_Nullable)requestChInfowithChName:(NSString *_Nullable)name error:(NSError *_Nullable*_Nullable)error;

/**
 根据位置查询通道信息
 request all gis channels
 
 @param locationDic json串
 @param error error
 @return channelInfo array
 */
#pragma mark--register function to IDHModuleProtocol
- (NSArray *_Nullable)requestAllGisChannels:(NSDictionary *_Nonnull)locationDic error:(NSError *_Nullable*_Nullable)error;

/**
 查询地图类型
 request map type
 
 @param error error
 @return map type
 */
#pragma mark--register function to IDHModuleProtocol
- (NSString *_Nullable)requestGisMapType:(NSError *_Nullable*_Nullable)error;

/**
 查询通道地图信息
 request Gis channel
 
 @param channelId channelId
 @param error error
 @return
 */
#pragma mark--register function to IDHModuleProtocol
- (NSDictionary *_Nullable)requestGisChannel:(NSString *_Nonnull)channelId error:(NSError *_Nullable*_Nullable)error;

/**
 查询gps信息
 request GPS info
 
 @param deviceId 设备id deviceId
 @param startTime 开始时间 start time
 @param endTime 结束时间 end time
 @param interval interval
 @param error error
 @return
 */
#pragma mark--register function to IDHModuleProtocol
- (NSDictionary *_Nullable)requestGpsInfoByDeviceId:(NSString *_Nullable)deviceId startTime:(NSDate *_Nullable)startTime endTime:(NSDate *_Nullable)endTime interval:(NSString *_Nullable)interval error:(NSError *_Nullable*_Nullable)error;

/// 查询设备最后一次GPS地址
/// @param deviceId 设备ID
/// @param error error
- (NSDictionary *_Nullable)requestLastGpsByDeviceId:(NSString *_Nullable)deviceId error:(NSError *_Nullable*_Nullable)error;

/**
 查询bitmap信息
 request BitMapInfos
 
 @param error error
 @return
 */
#pragma mark--register function to IDHModuleProtocol
- (NSArray *_Nullable)requestBitMapInfos:(NSError *_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (BOOL)ptzThreeD:(NSString *_Nonnull)channelid windowWidth:(CGFloat)windowWidth windowHeight:(CGFloat)windowHeight boxWidth:(CGFloat)boxWidth boxHeight:(CGFloat)boxHeight boxMidx:(CGFloat)boxMidx boxMidy:(CGFloat)boxMidy zoomOut:(BOOL)zoomOut error:(NSError *_Nullable*_Nullable)error;

/**
 query Ptz prePoint
 
 @param channelid channelId
 @param error error
 @return prePointInfo array
 */
#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSPtzPrePointInfo *> *_Nullable)queryPtzPrePoint:(NSString *_Nonnull)channelid error:(NSError *_Nullable*_Nullable)error;

/**
 prePoint location
 
 @param channelid channelId
 @param prepointcode prepointcode
 @param error error
 @return
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL)ptz:(NSString *_Nonnull)channelid location:(NSInteger)prepointcode error:(NSError *_Nullable*_Nullable)error;

- (BOOL)ptz:(NSString *_Nonnull)channelid location:(NSInteger)prepointcode presetPointName:(NSString*_Nonnull)presetPointName error:(NSError *_Nullable*_Nullable)error;

/**
 prePoint add
 
 @param channelid channelId
 @param prepointcode prepointcode
 @param name name
 @param error error
 @return
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL)ptz:(NSString *_Nonnull)channelid add:(NSInteger)prepointcode name:(NSString *_Nonnull)name error:(NSError *_Nullable*_Nullable)error;
/**
 prePoint delete
 
 @param channelid channelId
 @param prepointcode prepointcode
 @param error error
 @return
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL)ptz:(NSString *_Nonnull)channelid delete:(NSInteger)prepointcode error:(NSError *_Nullable*_Nullable)error;

/**
 ptz operation
 
 @param channelid channelId
 @param direction direction
 @param steplength step length
 @param bTry2Stop isStop
 @param error error
 @return
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL)ptz:(NSString *_Nonnull)channelid direction:(MBL_PTZ_DIRECTION_GO)direction step:(NSInteger)steplength stop:(BOOL)bTry2Stop error:(NSError *_Nullable*_Nullable)error;
/**
 zoom\foucus\aperture
 
 @param channelid channelId
 @param operation MBL_PTZ_OPERATION
 @param steplength step length
 @param bTry2Stop isStop
 @param error error
 @return
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL)ptz:(NSString *_Nonnull)channelid operation:(MBL_PTZ_OPERATION)operation step:(NSInteger)steplength stop:(BOOL)bTry2Stop error:(NSError *_Nullable*_Nullable)error;

/**
 三维定位
 
 @param channelid channelId
 @param extend MBL_PTZ_POSITION
 @param pointX x
 @param pointY y
 @param pointZ z
 @param error error
 @return
 */
#pragma mark--register function to IDHModuleProtocol
-(BOOL)ptz:(NSString *_Nonnull)channelid extend:(MBL_PTZ_POSITION)extend pointX:(NSInteger)x pointY:(NSInteger)y pointZ:(NSInteger)z error:(NSError * _Nullable *_Nullable)error;

/**
 获取设备当前的VKInfo
 
 @param  deviceId 设备编号
 @param  error error
 
 @return DSSMediaVKInfo
 */
#pragma mark--register function to IDHModuleProtocol
- (DSSMediaVKInfo *_Nullable)queryCurrentMediaVKByDeviceId:(NSString *_Nonnull)deviceId error:(NSError *_Nullable*_Nullable)error;



/**
 获取设备一段时间的VKInfo的数组
 
 @param  deviceId 设备编号
 @param  startTime 开始时间
 @param  endTime 结束时间
 @param  error error
 
 @return NSArray<DSSMediaVKInfo *>
 */
#pragma mark--register function to IDHModuleProtocol
- (NSString *_Nullable)queryMediaVKByDeviceId:(NSString *_Nullable)deviceId startTime:(NSDate *_Nullable)startTime endTime:(NSDate *_Nullable)endTime error:(NSError *_Nullable*_Nullable)error;

@optional
/**
 MQ notity parse deviceInfo
 
 @param dict MQ message
 @param deviceBlock execute block after load all devices
 @param channelBlock execute block after load a device
 @return
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL)getMQDevices:(NSDictionary *_Nonnull)dict withDeviceBlock:(BOOL (^_Nonnull)(NSArray *_Nullable))deviceBlock channelBlock:(BOOL (^_Nonnull)(NSArray *_Nullable))channelBlock;

/**
 获取设备callNumber
 @param deviceInfo 设备信息
 */
#pragma mark--register function to IDHModuleProtocol
- (void)getDeviceCallNumbers:(DSSDeviceInfo *_Nonnull)deviceInfo;

#pragma mark--register function to IDHModuleProtocol
- (NSDictionary *_Nullable)queryAccessDoorStatus:(NSArray *_Nonnull)channelArray error:(NSError *_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSArray *_Nullable)queryAccessDoorGlobalConfig:(NSError *_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSNumber *_Nullable)queryAccessDoorGlobalStatus:(NSError *_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (BOOL)getAllSignalDevicesWithDeviceBlock:(BOOL (^_Nonnull)(NSArray *_Nullable))deviceBlock channelBlock:(BOOL (^_Nonnull)(NSArray *_Nullable))channelBlock error:(NSError *_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSEMapUIDataModel *> *_Nullable)requestEMapGisChannels:(NSDictionary *_Nonnull)locationDic error:(NSError *_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (DSSUserViewDeptInfo *_Nullable)getUserView:(NSError *_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSNumber *_Nullable)queryTemperature:(NSString *_Nonnull)channelId point:(CGPoint)point error:(NSError *_Nullable*_Nullable)error;

- (BOOL)isGradeLoadTree;

- (void)clearUp;

- (void)controlSoundLight:(NSArray<NSString *> *_Nonnull)channelIds isOn:(BOOL)isOn callback:(callBackWithError _Nonnull)callback;

- (void)controlAlarmOut:(NSString *_Nonnull)channelId isOn:(BOOL)isOn callback:(callBackWithError _Nonnull)callback;

- (void)getSoftTriggerList:(NSString *_Nonnull)channelId callback:(callBackWithError _Nonnull)callback;

- (void)generateSoftTrigger:(NSString *_Nonnull)channelId alarmTypeId:(NSString *_Nonnull)alarmTypeId callback:(callBackWithError _Nonnull)callback;

- (BOOL)openDoorVims:(NSString *)deviceId error:(NSError *__autoreleasing *)error;

- (NSArray *)getVimsDeviceListWithPageNo:(NSInteger)pageNo pageSize:(NSInteger)pageSize containBrm:(NSInteger)containBrm error:(NSError * _Nullable __autoreleasing *)error;
@end

