//
//  DSSVideoShareShareInfo.h
//  DataAdapterProtocol
//
//  Created by 32943 on 2019/5/13.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    DSSVideoShareShareTypeMonitor = 1,
    DSSVideoShareShareTypePlayback = 2,
} DSSVideoShareShareType;

typedef enum : NSUInteger {
    DSSVideoShareShareStatusSuccess = 1,
    DSSVideoShareShareStatusFail = 2,
    DSSVideoShareShareStatusRevoke = 3,
} DSSVideoShareShareStatus;

@interface DSSVideoShareShareInfo : NSObject
@property (nonatomic, copy, nullable) NSString *recordId;
@property (nonatomic, copy, nullable) NSString *channelCode;
@property (nonatomic, copy, nullable) NSString *channelName;
@property (nonatomic, copy, nullable) NSDate   *createTime;
@property (nonatomic, copy, nullable) NSDate   *startTime;
@property (nonatomic, copy, nullable) NSDate   *endTime;
@property (nonatomic, copy, nullable) NSString *sharedCode;
@property (nonatomic, copy, nullable) NSString *sharedName;
@property (nonatomic, copy, nullable) NSString *sharerName;
@property (nonatomic, copy, nullable) NSString *sharerCode;
@property (nonatomic, copy, nullable) NSString *memo;
@property (nonatomic, assign) DSSVideoShareShareType shareType;
@property (nonatomic, assign) DSSVideoShareShareStatus shareStatus;
@end
