//
//  DHLoginManager.m
//  DataAdapterExample_Example
//
//  Created by 32943 on 2018/1/31.
//  Copyright © 2018年 ly. All rights reserved.
//

#import "DHLoginManager.h"
#import "DHDataCenter.h"
#import "DHPlaybackManager.h"
#import <ICCDataAdapterUser/DPRestProSDKDataAdapterUser.h>

@interface DHLoginManager()
@property (nonatomic, strong) DPRestProSDKDataAdapterUser *userAdapter;
@end

static DHLoginManager* g_loginManager = nil;

@implementation DHLoginManager
+ (DHLoginManager *)sharedInstance
{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        g_loginManager = [[self alloc] init];
    });
    return g_loginManager;
}

+ (void)unSharedInstance {
    if (g_loginManager) {
        g_loginManager = nil;
    }
}

- (instancetype)init {
    self = [super init];
    if (self)
    {
        _userAdapter = [[DPRestProSDKDataAdapterUser alloc] init];
       // _userAdapter.core = [DHDataCenter sharedInstance].coreAdapter;
        _userAdapter.remoteNotifyBlock = ^(ADAPTER_NOTIFY_ACTION action, id content) {
            //TODO
            switch (action) {
                case ADAPTER_NOTIFY_ACTION_SERVER_DISCONNECT:
                    NSLog(@"server disconnect");
                    break;
                case ADAPTER_NOTIFY_ACTION_USER_LOCKED:
                    NSLog(@"user locked");
                    break;
                case ADAPTER_NOTIFY_ACTION_USER_DELETE:
                    NSLog(@"user delete");
                    break;
                case ADAPTER_NOTIFY_ACTION_USER_LOGIN_TIME_EXPIRE:
                   NSLog(@"login time expire");
                    break;
                case ADAPTER_NOTIFY_ACTION_SERVER_CONNECTED:
                   NSLog(@"server connected");
                    break;
                case ADAPTER_NOTIFY_ACTION_SERVER_CONNECTING:
                    NSLog(@"server connecting");
                    break;
                case ADAPTER_NOTIFY_ACTION_SERVER_LOGOUT:
                   NSLog(@"server logout");
                    break;
                default:
                    break;
            }
        };
    }
    
    return self;
}

- (DSSUserInfo *)loginWithUserName:(NSString *)userName Password:(NSString *)password error:(NSError **)error {
        _userInfo = [_userAdapter login:userName byPassword:password userType:@(0) error:error];
    return _userInfo;
}

- (DSSUserInfo *)getUserInfo:(NSError **)error {
    return _userInfo;
}

- (BOOL)logout:(NSError **)error {
    int ret = [_userAdapter logout:error];
    [[DHDeviceManager sharedInstance] afterLoginOutExcute:_userInfo];
    [DHDeviceManager unSharedInstance];
    [DHPlaybackManager unSharedInstance];
     _userInfo = nil;
    return ret;
}

- (BOOL)modifyPassword:(NSString *)newPassword error:(NSError **)error {
    return [_userAdapter modifyPassword:newPassword error:error];
}


@end
