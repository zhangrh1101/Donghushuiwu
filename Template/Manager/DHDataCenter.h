//
//  DHDataCenter.h
//  DataAdapterExample_Example
//
//  Created by 32943 on 2018/1/31.
//  Copyright © 2018年 ly. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ICCDataAdapterCore/DPRestProSDKDataAdapterCore.h>
#import "DHDeviceManager.h"

@interface DHDataCenter : NSObject
@property (nonatomic, strong) DPRestProSDKDataAdapterCore *coreAdapter;
@property (nonatomic, strong) TreeNode *selectNode;
+ (DHDataCenter *)sharedInstance;

/**
 set ip and port
 
 @param hostIp ip
 @param port port
 */
- (void)setHost:(NSString *)hostIp port:(int)port;

/**
 get ip

 @return ip
 */
- (NSString *)getHost;

/**
 get port

 @return port
 */
- (int)getPort;

/**
 get login token

 @return token
 */
- (NSString *)getLoginToken;

- (NSString *)getTokenType;

/// Set LoginToken
/// @param loginToken loginToken
- (void)setLoginToken:(NSString *)loginToken;


/// setTokenTpe
/// @param tokenType tokenType
- (void)setTokenType:(NSString *)tokenType;


/// setMagicId
/// @param magicId magicId
- (void)setMagicId:(NSString *)magicId;

/// setPlateFormVersion
/// @param platerFormVersion platerFormVersion
- (void)setPlateFormVersion:(NSString *)platerFormVersion;


/// setSubSystemVersion
/// @param version version
/// @param name name
- (void)setSubSystemVersion:(NSString *)version name:(NSString *)name;
@end
