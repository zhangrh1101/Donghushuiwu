//
//  DSSAlarmHostsInfo.h
//  DataAdapterProtocol
//
//  Created by hsd on 2020/7/30.
//

#import <Foundation/Foundation.h>
#import "DSSBaseInfo.h"
@class DSSDefenceAreaInfo;
@class DSSSubSystemInfo;
typedef NS_ENUM(NSInteger,DSSAlarmHostControllType) {
    ControllTypeArm,
    ControllTypeDisArm,
    ControllTypeClearAlarm,
    ControllTypeNormal,
    ControllTypeByPass,
    ControllTypeIsolate,
};


@interface DSSAlarmHostsInfo : DSSBaseInfo
@property (nonatomic,copy) NSString *deviceCode;
@property (nonatomic,strong) NSArray<DSSSubSystemInfo *> *subSystems;
@property (nonatomic,strong) NSArray<DSSDefenceAreaInfo *> *defenceAreas;

@end

@interface DSSSubSystemInfo : DSSBaseInfo
@property (nonatomic,copy) NSString *Id;
@property (nonatomic,copy) NSString *subSystemName;
@property (nonatomic,copy) NSString *status;
@property (nonatomic,strong) NSArray<DSSDefenceAreaInfo *> *defenceAreas;

@end

@interface DSSDefenceAreaInfo : DSSBaseInfo
@property (nonatomic,copy) NSString *Id;
@property (nonatomic,copy) NSString *channelId;
@property (nonatomic,copy) NSString *defenceAreaName;
@property (nonatomic,copy) NSString *status;
@end
