//
//  DSSMapLayer.h
//  DataAdapterProtocol
//
//  Created by iMac on 2021/1/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class DSSGMResourceChannelInfo;
@interface DSSMapLayer : NSObject
@property (nonatomic,copy) NSString *layerCode;
@property (nonatomic,assign) NSInteger mapType;
@property (nonatomic,copy) NSString *subSystem;
@end

@interface DSSGMResourceInfo : NSObject
@property (nonatomic,assign) NSInteger mapId;
@property (nonatomic,copy) NSString *mapx;
@property (nonatomic,copy) NSString *mapy;
@property (nonatomic,copy) NSString *name;
@property (nonatomic,copy) NSString *resourcesId;
@property (nonatomic,copy) NSString *ownerCode;
@property (nonatomic,copy) NSString *ownerName;
@property (nonatomic,copy) NSString *layerCode;
@property (nonatomic,assign) NSInteger status;
@property (nonatomic,assign) NSInteger alarmCount;
@property (nonatomic,copy) NSString *subSystemType;
@property (nonatomic,copy) NSString *bindingResourceIds;
@property (nonatomic, strong, nullable) NSArray<DSSGMResourceChannelInfo *> *channelVO;
@property (nonatomic,copy)NSString *webUrl;

@end
@interface DSSGMResourceChannelInfo : NSObject
@property (nonatomic,copy) NSString *channelCode;
@property (nonatomic,assign) NSInteger alarm;
@property (nonatomic,copy) NSString *name;

@end


@interface DSSDeviceDTO : NSObject
@property (nonatomic,copy) NSString *deviceCode;
@property (nonatomic,copy) NSString *channels;
@property (nonatomic,copy) NSString *channelName;
@property (nonatomic,copy) NSString *orgName;
@property (nonatomic,assign) NSInteger alarm;
@end
@interface DSSMarkPersonInfo : NSObject
@property (nonatomic,assign) NSInteger mid;
@property (nonatomic,assign) NSInteger personId;
@property (nonatomic,copy) NSString *name;
@property (nonatomic,copy) NSString *phone;
@property (nonatomic,copy) NSString *path;
@property (nonatomic,copy) NSString *type;
@end
@interface DSSGMMarkerDetail : NSObject

@property (nonatomic,assign) NSInteger rid;
@property (nonatomic,copy) NSString *name;
@property (nonatomic,copy) NSString *orgName;
@property (nonatomic,copy) NSString *subsystemType;
@property (nonatomic,copy) NSString *pid;
@property (nonatomic,copy) NSString *pname;
@property (nonatomic,assign) NSInteger rtype;
@property (nonatomic,copy) NSString *orgCode;

@property (nonatomic, strong, nullable) DSSGMResourceInfo *markerInfoDTO;
@property (nonatomic, copy, nullable) NSArray<DSSDeviceDTO *> *deviceDTOs;
@property (nonatomic, copy, nullable) NSArray<DSSGMMarkerDetail *> *bindingResources;
@property (nonatomic, copy, nullable) NSArray<DSSMarkPersonInfo *> *managers;
@property (nonatomic, copy, nullable) NSArray<DSSMarkPersonInfo *> *lawExecutors;
@end

NS_ASSUME_NONNULL_END
