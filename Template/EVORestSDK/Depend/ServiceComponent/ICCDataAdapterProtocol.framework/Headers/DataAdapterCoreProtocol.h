//
//  DataAdapterCoreProtocol.h
//  Pods
//
//  Created by zyx on 17/2/14.
//
//

#import <Foundation/Foundation.h>
#import "DHModuleEventDefine.h"
#import "DHSubSystemDefine.h"

typedef void (^callBackWithError)(id _Nullable,NSError * _Nullable error);

/**
 *  需要实现的基本协议
 *  need implement protocol
 */
@protocol DataAdapterCoreProtocol<NSObject>
@optional

- (NSInteger)converErrorCodeToBaseError:(NSInteger)errorCode;

+ (id _Nonnull)shareInstance;
/**
 *  平台信息
 *  Platform Info
 *
 *  @param host 平台地址  ip
 *  @param port  平台端口  port
 *  @param phoneSN 硬件唯一编号: 设置--通用--关于本机--IMEI  IMEI
 *  (区别于[UIDevice currentDevice].identifierForVendor获取到的唯一识别码， identifierForVendor需要app启动以后才能获取得到，但是类似dss平台，需要在开通账号过程中，就知道唯一识别码，用于限制终端登录；所以一般为引导用户前往设置中去获取到，然后设置进来)
 *
 */
@required
#pragma mark--register function to IDHModuleProtocol
-(void)setHost:(NSString *_Nonnull)host port:(NSInteger)port phoneSN:(NSString*_Nonnull)phoneSN;

- (void)setNeedAddAudioRight:(BOOL)addAudioRight;
- (BOOL)getNeedAddAudioRight;
- (BOOL)hasSetSeverInfo;
#pragma mark--register function to IDHModuleProtocol
-(void)setHost:(NSString *_Nonnull)host webPort:(NSInteger)webport;
/**
 设置登录token
 set login token
 */
#pragma mark--register function to IDHModuleProtocol
- (void)setLoginToken:(NSString *_Nullable)token;

/// 设置magicId
/// @param magicId ptz等接口需要
- (void)setMagicId:(NSString *_Nonnull)magicId;
- (void)setTokenType:(NSString *_Nullable)tokenType;


/// 获取magicId
- (NSString *_Nonnull)getMagicId;

/**
 *  获取Host
 *  get ip
 *
 *  @return Host地址
 */
#pragma mark--register function to IDHModuleProtocol
-(NSString *_Nonnull)getHost;

/**
 *  get port
 *
 *  @return  port
 */
#pragma mark--register function to IDHModuleProtocol
-(NSInteger)getPort;

#pragma mark--register function to IDHModuleProtocol
-(NSInteger)getWebPort;
/**
 *  get IMEI
 *
 */
#pragma mark--register function to IDHModuleProtocol
-(NSString*_Nonnull)getPhoneSN;

/**
 *get login token
 *
 */
#pragma mark--register function to IDHModuleProtocol
- (NSString *_Nullable)getLoginToken;

#pragma mark--register function to IDHModuleProtocol
- (NSString *_Nullable)getTokenType;

#pragma mark--获取公共请求头
- (NSDictionary *_Nonnull)getRequestHeader;
/**
 set sip number
 */
#pragma mark--register function to IDHModuleProtocol
- (void)setSipNumber:(NSString *_Nonnull)sipNum;

/**
 get sip number
 @return sip number
 */
#pragma mark--register function to IDHModuleProtocol
- (NSString *_Nonnull)getSipNumber;

/**
 set remoteNotification token
 @param token RemoteNotification Token
 */
#pragma mark--register function to IDHModuleProtocol
- (void)setRemoteNotificationToken:(NSString *_Nonnull)token;

/**
 get remoteNotification token
 @return RemoteNotification Token
 */
#pragma mark--register function to IDHModuleProtocol
- (NSString *_Nonnull)getRemoteNotificationToken;

/**
 set PushKit Token
 @param token PushKit Token
 */
#pragma mark--register function to IDHModuleProtocol
- (void)setPushKitToken:(NSString *_Nonnull)token;

/**
 get pushkit token
 @return PushKit Token
 */
#pragma mark--register function to IDHModuleProtocol
- (NSString *_Nonnull)getPushKitToken;

/**
 set userId
 @param NSString userId
 */
#pragma mark--register function to IDHModuleProtocol
- (void)configUserId:(NSString *_Nonnull)userId;

/**
 get userId
 @return userId
 */
#pragma mark--register function to IDHModuleProtocol
- (NSString *_Nonnull)getUserId;

#pragma mark--register function to IDHModuleProtocol
-(NSString *_Nonnull)getUserName;

#pragma mark--register function to IDHModuleProtocol
- (void)setUserName:(NSString *_Nonnull)userName;

/**
 *get core
 *
 */
#pragma mark--register function to IDHModuleProtocol
- (instancetype _Nonnull)getCore;

/**
 *设置Https模式
 */
#pragma mark--register function to IDHModuleProtocol
- (void)setHttpsMode:(BOOL)bHttpsEnable;

/**
 *获取https模式
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL)isHttpsEnable;

/**
 设置视频会议id
 @param vId 视频会议id
 */
#pragma mark--register function to IDHModuleProtocol
- (void)setVideoMettingId:(NSString *_Nonnull)vId;

/**
 获取视频会议id
 @return 视频会议id
 */
#pragma mark--register function to IDHModuleProtocol
- (NSString *_Nonnull)getVideoMettingId;

/**
 设置视频会议内网地址、端口
 @param iHost 内网地址
 @param iPort 内网端口
 */
#pragma mark--register function to IDHModuleProtocol
- (void)setVideoMettingIntranetHost:(NSString *_Nonnull)iHost intranetPort:(NSInteger)iPort;

/**
 设置视频会议外网地址、端口
 @param eHost 外网地址
 @param ePort 外网端口
 */
#pragma mark--register function to IDHModuleProtocol
- (void)setVideoMettingExtranetHost:(NSString *_Nonnull)eHost extranetPort:(NSInteger)ePort;

/**
 获取视频会议内网地址
 @return 视频会议内网地址
 */
#pragma mark--register function to IDHModuleProtocol
- (NSString *_Nonnull)getVideoMettingIntranetHost;

/**
 获取视频会议内网端口
 @return 视频会议内网端口
 */
#pragma mark--register function to IDHModuleProtocol
- (NSInteger)getVideoMettingIntranetPort;

/**
 获取视频会议外网地址
 @return 视频会议外网地址
 */
#pragma mark--register function to IDHModuleProtocol
- (NSString *_Nonnull)getVideoMettingExtranetHost;

/**
 获取视频会议外网端口
 @return 视频会外网端口
 */
#pragma mark--register function to IDHModuleProtocol
- (NSInteger)getVideoMettingExtranetPort;

#pragma mark--register function to IDHModuleProtocol
- (void)setPlatformVersion:(NSString *_Nullable)version;

#pragma mark--register function to IDHModuleProtocol
- (NSString *_Nullable)getPlatformVersion;

/**设置达尔文BRM的版本号
 */
#pragma mark--register function to IDHModuleProtocol
- (void)setSubSystemVersion:(NSString *_Nonnull)systemName version:(NSString *_Nonnull)version;
- (void)resetSubSystemVersion;
/**获取达尔文BRM的版本号
 */
#pragma mark--register function to IDHModuleProtocol
- (NSString *_Nonnull)getSubSystemVersion:(NSString *_Nonnull)systemName;

/**设置达尔文子系统url
 */
#pragma mark--register function to IDHModuleProtocol
- (void)setSubSystemUrl:(NSString *_Nonnull)systemName url:(NSString *_Nonnull)url;
-(void)clearSubSystemUrl;

/**设置达尔文子系统url
 */
#pragma mark--register function to IDHModuleProtocol
- (NSString *_Nonnull)getSubSystemUrl:(NSString *_Nonnull)systemName;
- (NSArray *_Nonnull)getSubSystemNames;
#pragma mark--register function to IDHModuleProtocol
- (void)setCloudPushDeviceId:(NSString *_Nonnull)deviceId;

/**
 get CloudPushDeviceId
 @return CloudPushDeviceId
 */
#pragma mark--register function to IDHModuleProtocol
- (NSString *_Nullable)getCloudPushDeviceId;


/// 版本号是否大于等于 V8
- (BOOL)isGreaterOrEqualTo_V8_Platform;
- (void)setDefaultOrgCode:(NSString *_Nullable)defaultOrgCode;
- (NSString *_Nullable)getDefaultOrgCode;
- (void)setShowDevice:(BOOL)showDevice;
- (BOOL)getShowDevice;

/**
 下载视频
 @param videoUrlStr 视频路径URL
 @param error 错误
 @return 下载成功后返回本地路径
 */
- (NSString *_Nullable)downloadVideoFromUrl:(NSString*_Nullable)videoUrlStr error:(NSError *_Nullable*_Nullable)error;

/// 是否包含某个子系统
- (BOOL)containSubSystem:(NSString *)systemName;

- (NSString *_Nullable)getPicWithUrl:(NSString *_Nullable)urlStr error:(NSError**)error;
@end

