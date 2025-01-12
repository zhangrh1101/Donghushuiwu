//
//  DPRestProSDKHeartbeat.h
//  Pods
//
//  Created by huang_yundi on 2017/8/11.
//
//

#import <Foundation/Foundation.h>

@interface DPRestProSDKHeartbeat : NSObject

@property (copy, nonatomic) NSString* magicId;
@property (copy, nonatomic) NSString* refreshToken;
@property (copy, nonatomic) NSString* user;

@property (assign, nonatomic) BOOL updateToken;//是否使用update接口
@property (copy, nonatomic) BOOL(^reconnectBlock)();
@property (copy, nonatomic) void(^tokenChange)(NSString *token);
@property (assign, nonatomic) NSTimeInterval sendHeartbeatTime;
@property (copy, nonatomic) BOOL(^logoutBlock)(NSString *logoutMsg);

//@property (nonatomic,weak)  id<DataAdapterCoreProtocol> core;
-(BOOL)keepAlive:(NSError **)error;
- (BOOL)startThread;
- (BOOL)stopThread;

@end
