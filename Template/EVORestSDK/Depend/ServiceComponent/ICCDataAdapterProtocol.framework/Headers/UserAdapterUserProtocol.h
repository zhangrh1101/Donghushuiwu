//
//  UserAdapterUserProtocol.h
//  Pods
//
//  Created by zyx on 17/2/14.
//
//

#import <Foundation/Foundation.h>
#import "DSSUserInfo.h"
#import "DataAdapterRemoteNotifyProtocol.h"
#import "DataAdapterCoreProtocol.h"

typedef void (^remoteNotifyBlock)(ADAPTER_NOTIFY_ACTION, id _Nullable);

@protocol UserAdapterUserProtocol <NSObject>
@required
#pragma mark--register function to IDHModuleProtocol
- (void)setRemoteNotifyBlock:(void (^_Nonnull)(ADAPTER_NOTIFY_ACTION, id _Nullable))remoteNotifyBlock;
/**
 *  login
 *
 *  @param name name
 *  @param pwd  password (MD5)
 *  @param userType 用户类型，0是普通用户，1是域用户
 *  @return UserInfo
 */
#pragma mark--register function to IDHModuleProtocol
-(DSSUserInfo *_Nullable)login: (NSString *_Nonnull)name byPassword: (NSString *_Nonnull)pwd userType:(NSNumber *_Nonnull)userType error:(NSError *_Nullable*_Nullable)error;
/**
 *  verify
 *
 *  @param name name
 *  @param pwd  password (MD5)
 *  @param userType 用户类型，0是普通用户，1是域用户
 *  @return UserInfo
 */
#pragma mark--register function to IDHModuleProtocol
-(DSSUserInfo *_Nullable)verify: (NSString *_Nonnull)name byPassword: (NSString *_Nonnull)pwd userType:(NSNumber *_Nonnull)userType byHost:(NSString *_Nonnull)host byPort:(NSNumber *_Nonnull)port error:(NSError *_Nullable*_Nullable)error;
/**
*  updateToken
*  @param name name
*  @return UserInfo
*/
-(DSSUserInfo *_Nullable)refreshAccessToken:(NSString *_Nonnull)name host:(NSString *)host port:(NSInteger)port error:(NSError *_Nullable*_Nullable)error;
/**
 *  get userInfo
 *
 *  @param error NSError
 *
 *  @return UserInfo
 */
#pragma mark--register function to IDHModuleProtocol
-(DSSUserInfo *_Nullable)getUserInfo:(NSError *_Nullable*_Nullable)error;

/**
 *  logout
 *
 *  @return BOOL
 */
#pragma mark--register function to IDHModuleProtocol
-(BOOL)logout:(NSError *_Nullable*_Nullable)error;

/**
 *  logoutNotDestroyToken
 *
 *  @return BOOL
 */
#pragma mark--register function to IDHModuleProtocol
-(BOOL)logoutNotDestroyToken:(NSError *_Nullable*_Nullable)error;
/**
 *  modify password
 *
 *  @param newPassword NSString MD5
 *
 *  @return BOOL
 */
#pragma mark--register function to IDHModuleProtocol
-(BOOL)modifyPassword:(NSString*_Nonnull)newPassword error:(NSError *_Nullable*_Nullable)error;

/**
 *  modify password
 *  @param oldPassword NSString MD5
 *  @param newPassword NSString MD5
 *  @return BOOL
 */
#pragma mark--register function to IDHModuleProtocol
-(BOOL)modifyPasswordWithOldPassword:(NSString *_Nonnull)oldPassword newPassword:(NSString *_Nonnull)newPassword error:(NSError *_Nullable*_Nullable)error;

/**
 * query picture ftp Ip
 */
#pragma mark--register function to IDHModuleProtocol
- (DSSFtpAddressInfo *_Nullable)queryPicFtpIp;

/**
 * get user menu right
 */
#pragma mark--register function to IDHModuleProtocol
- (NSDictionary<NSNumber *, NSNumber *> *_Nullable)getUserMenuRight:(NSError *_Nullable*_Nullable)error isExpress:(BOOL)isExpress;


/**
 * get user list获取平台用户列表
 */
#pragma mark--register function to IDHModuleProtocol
- (NSMutableArray*_Nullable)getAllUserInfoList:(NSError *_Nullable*_Nullable)error;


/**
* 通过设备或者通道等资源ID获取平台用户列表 是过滤权限之后的用户列表
*/
#pragma mark--register function to IDHModuleProtocol
- (NSMutableArray *_Nullable)getUserInfoListByResourceID:(NSString *_Nonnull)resourceID error:(NSError *_Nullable*_Nullable)error;

/**
 设置deviceToken
 @param error 错误
 @return YES:请求成功；NO:请求失败
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL)setUserDeviceToken:(NSError *_Nullable*_Nullable)error;

/**
*  modify password
*  @param name NSString
*  @param newPassword NSString
*  @param oldPassword NSString
*  @return BOOL
*/
#pragma mark--register function to IDHModuleProtocol
-(BOOL)changeLoginPassword:(NSString *_Nonnull)name newPassword:(NSString *_Nonnull)newPassword oldPassword:(NSString *_Nonnull)oldPassword error:(NSError *_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (BOOL)setOfflineCallSubscribeStatus:(BOOL)status error:(NSError *_Nullable*_Nullable)error;


#pragma mark--register function to IDHModuleProtocol
- (BOOL)getOfflineCallSubscribeStatus:(NSError *_Nullable*_Nullable)error;


/**EVO在线订阅
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL)subscribeMqInfoByCategory:(NSMutableArray<NSString *>* _Nonnull)arrayCategory error:(NSError *_Nullable*_Nullable)error;


/// 获取远程更新信息
/// @param error error
#pragma mark--register function to IDHModuleProtocol
- (DSSRemoteUpdateInfo *_Nullable)queryRemoteUpdateInfo:(NSError *_Nullable*_Nullable)error;

/**
 获取推送开关状态
 @param error 错误
 @return YES:打开；NO:关闭
 */
#pragma mark--register function to IDHModuleProtocol
- (DSSPushStatusInfo *_Nullable)getPushStatus:(NSError *_Nullable*_Nullable)error;

/**
 推送开关
 @param isOpenPushStatus 是否打开 ture:请求成功；false:请求失败
 @param error 错误
 @return YES:请求成功；NO:请求失败
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL)changePushStatus:(BOOL)isOpenPushStatus error:(NSError *_Nullable*_Nullable)error;


/**
 验证密码
 @param password 密码
 @param error 错误
 @return YES:密码正确；NO:密码错误
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL)verifyPassword:(NSString *_Nullable) password error:(NSError *_Nullable*_Nullable)error;

- (BOOL)getServerConfig:(NSError *_Nullable*_Nullable)error;

- (NSInteger)adpaterMenuRightType:(NSString * _Nullable)type;


//开启gps上报 公民

- (void)startGpsUpdate:(BOOL)isUpdateGps;

#pragma mark--register function to IDHModuleProtocol
- (BOOL)openIOTWebsocket:(NSError *_Nullable*_Nullable)error;

@end


