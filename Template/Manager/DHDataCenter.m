//
//  DHDataCenter.m
//  DataAdapterExample_Example
//
//  Created by 32943 on 2018/1/31.
//  Copyright © 2018年 ly. All rights reserved.
//

#import "DHDataCenter.h"

@interface DHDataCenter()

@end

static DHDataCenter* g_shareInstance = nil;
@implementation DHDataCenter
+ (DHDataCenter *) sharedInstance
{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        g_shareInstance = [[self alloc] init];
    });
    return g_shareInstance;
}

- (id) init
{
    self = [super init];
    if (self)
    {
     _coreAdapter = [DPRestProSDKDataAdapterCore shareInstance];
    }
    
    return self;
}

- (void)setHost:(NSString *)hostIp port:(int)port {
    [_coreAdapter setHost:hostIp port:port phoneSN:@""];
}

- (NSString *)getHost {
    return [_coreAdapter getHost];
}
- (int)getPort {
    return [_coreAdapter getPort];
}

- (NSString *)getLoginToken {
    NSString *token = [_coreAdapter getLoginToken];
    if (!token) {
        token = @"";
    }
   return token;
}

- (NSString *)getTokenType {
    NSString *token = [_coreAdapter getTokenType];
    if (!token) {
        token = @"";
    }
   return token;
}

- (void)setLoginToken:(NSString *)loginToken{
    [_coreAdapter setLoginToken:loginToken];
}

- (void)setTokenType:(NSString *)tokenType{
    [_coreAdapter setTokenType:tokenType];
}

- (void)setMagicId:(NSString *)magicId{
    [_coreAdapter setMagicId:magicId];
}

- (void)setPlateFormVersion:(NSString *)platerFormVersion{
    [_coreAdapter setPlatformVersion:platerFormVersion];
}

- (void)setSubSystemVersion:(NSString *)version name:(NSString *)name{
    [_coreAdapter setSubSystemVersion:name version:version];
}
@end
