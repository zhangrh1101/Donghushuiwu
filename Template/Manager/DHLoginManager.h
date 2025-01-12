//
//  DHLoginManager.h
//  DataAdapterExample_Example
//
//  Created by 32943 on 2018/1/31.
//  Copyright © 2018年 ly. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ICCDataAdapterProtocol/DSSUserInfo.h>

@interface DHLoginManager : NSObject
@property (nonatomic, strong) DSSUserInfo *userInfo;

+ (DHLoginManager *)sharedInstance;

+ (void)unSharedInstance;
/**
 登陆

 @param userName userName
 @param password password
 @param error error
 @return UserInfo UserInfo
 */
- (DSSUserInfo *)loginWithUserName:(NSString *)userName Password:(NSString *)password error:(NSError **)error;

/**
 *  获取用户信息
 *
 *  @param error NSError
 *
 *  @return UserInfo
 */
- (DSSUserInfo *)getUserInfo:(NSError **)error;

/**
 *  退出登录
 *
 *  @return BOOL
 */
- (BOOL)logout:(NSError **)error;

/**
 *  修改密码
 *
 *  @param newPassword
 *
 *  @return BOOL
 */
- (BOOL)modifyPassword:(NSString *)newPassword error:(NSError **)error;

@end
