//
//  ExpressaccessdoorgetDoorAlwaysOpenCloseStatusResponseObjc.h
//  ICCDataAdapterDevice
//
//  Created by m1+226507 on 2023/2/4.
//

#import <Foundation/Foundation.h>

@class ExpressaccessdoorgetDoorAlwaysOpenCloseStatusResponseDataStatuslistObjc;

@interface ExpressaccessdoorgetDoorAlwaysOpenCloseStatusResponseObjc : NSObject

@property (nonatomic, nullable, strong) NSArray<ExpressaccessdoorgetDoorAlwaysOpenCloseStatusResponseDataStatuslistObjc *> *statusList;

@end

@interface ExpressaccessdoorgetDoorAlwaysOpenCloseStatusResponseDataStatuslistObjc : NSObject

/// 门禁通道ID
@property (nonatomic, nullable, copy) NSString *channelId;
/// 门状态0-正常1-常关2-常开
@property (nonatomic, nullable, copy) NSString *status;

@end
