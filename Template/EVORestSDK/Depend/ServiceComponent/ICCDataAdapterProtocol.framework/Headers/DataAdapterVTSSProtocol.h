//
//  DataAdapterVTSSProtocol.h
//  Pods
//
//  Created by 28404 on 2017/11/9.
//

#import <Foundation/Foundation.h>
#import "DSSVTSSUserGroupInfo.h"
#import "DSSVTSSACRecordInfo.h"
#import "DSSVTSSCallRecordInfo.h"
#import "DataAdapterCoreProtocol.h"
#import "DataAdapterRemoteNotifyProtocol.h"
#import "DSSUserInfo.h"


#pragma mark - ****************
#pragma mark User
@protocol DataAdapterVTSSUserProtocol <NSObject>

@optional
/**
 注册
 @param userName 用户名
 @param pwd 密码
 @param roomId 房间号
 @param error NSError
 @return YES:请求成功；NO:请求失败。
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL)registerVTSSWithUserName:(NSString *_Nonnull)userName passWord:(NSString *_Nonnull)pwd roomId:(NSString *_Nonnull)roomId error:(NSError *_Nullable*_Nullable)error;

/**
 新加群组注册
 @param userName 用户名
 @param phone 手机号
 @param pwd 密码
 @param groupName 群组名
 @param groupPass 群组密码（MD5加密）
 @param error NSError
 @return YES:请求成功；NO:请求失败。
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL)registerVTSSWithUserName:(NSString *_Nonnull)userName phone:(NSString *_Nonnull)phone passWord:(NSString *_Nonnull)pwd groupName:(NSString *_Nonnull)groupName groupPass:(NSString *_Nonnull)groupPass error:(NSError *_Nullable*_Nullable)error;
@end

#pragma mark - ****************
#pragma mark Message
@protocol DataAdapterVTSSMessageProtocol <NSObject>
@optional
/**
 分页获取 门禁消息
 @param pageNumber 页码
 @param pageSize 获取条数
 @param channelIds 通道ID列表
 @param beginTime 开始时间戳（单位 秒）
 @param endTime 结束时间戳（单位 秒）
 @param error 错误
 @return NSArray<VTSSACRecordInfo>
 */
#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSVTSSACRecordInfo *> *_Nullable)getAcRecordsWithPageNumber:(NSInteger)pageNumber
                                                   pageSize:(NSInteger)pageSize
                                                 channelIds:(NSString *_Nonnull)channelIds
                                                  beginTime:(NSTimeInterval)beginTime
                                                    endTime:(NSTimeInterval)endTime
                                                      error:(NSError *_Nullable*_Nullable)error;

/**
 删除门禁消息
 @param records 需要删除的消息数组
 @param error 错误
 @return YES:请求成功；NO:请求失败。
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL)deleteAcRecords:(NSArray<DSSVTSSACRecordInfo *> *_Nonnull)records error:(NSError *_Nullable*_Nullable)error;

/**
 分页获取 报警消息
 @param pageNumber 页码
 @param pageSize 获取条数
 @param channelIds 通道ID列表
 @param beginTime 开始时间戳（单位 秒）
 @param endTime 结束时间戳（单位 秒）
 @param error 错误
 @return NSArray<VTSSAlarmMessageInfo>
 */
#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSVTSSAlarmMessageInfo *> *_Nullable)getVTSSAlarmMessagesWithPageNumber:(NSInteger)pageNumber
                                                               pageSize:(NSInteger)pageSize
                                                             channelIds:(NSString *_Nonnull)channelIds
                                                              beginTime:(NSTimeInterval)beginTime
                                                                endTime:(NSTimeInterval)endTime
                                                                  error:(NSError *_Nullable*_Nullable)error;

/**
 获取离线推送订阅开关状态
 @param error 错误
 @return YES:推送开启 NO:推送关闭
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL)getVTSSOfflineNotificationSubscribeStatus:(NSError *_Nullable*_Nullable)error;

/**
 设置离线推送订阅开关状态
 @param status 离线推送订阅开关状态,NO:关闭,YES:开启
 @param error 错误
 @return YES:请求成功；NO:请求失败
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL)setVTSSOfflineNotificationSubscribeStatus:(BOOL)status error:(NSError *_Nullable*_Nullable)error;

@end

@protocol DataAdapterVTSSProtocol <DataAdapterVTSSUserProtocol, DataAdapterVTSSMessageProtocol>

#pragma mark--register function to IDHModuleProtocol
- (void)setRemoteNotifyBlock:(void (^_Nonnull)(ADAPTER_NOTIFY_ACTION, id _Nullable))remoteNotifyBlock;

/**
 获取VTSS最新app版本
 @param NSError 错误
 @return 最新版本号
 */
#pragma mark--register function to IDHModuleProtocol
- (NSString *_Nullable)getVTSSUpdateVersion:(NSError *_Nullable*_Nullable)error;

/**
 根据设备获取呼叫日志
 加密方式：AES_128_ECB_PKCS7Padding(MD5(MD5(userName + MD5(password))))
 @param callEndTime 呼叫结束时间戳
 @param callStartTime 呼叫开始时间戳
 @param page 页码
 @param deviceCodes 呼叫设备编码
 @param pagesize 每页记录数
 */
#pragma mark--register function to IDHModuleProtocol

-(NSArray <DSSVTSSCallRecordInfo *>*_Nullable)getCallLogListWithStartTime:(NSString *_Nonnull)callStartTime endTime:(NSString *_Nonnull)callEndTime deviceCode:(NSString *_Nonnull)deviceCodes page:(NSString *_Nonnull)page pageSize:(NSString *_Nonnull)pagesize error:(NSError *_Nullable*_Nullable)error;

//登录成功之后需要调用的函数
#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginInExcute:(DSSUserInfo *_Nullable)userInfo;
//登出成功之后需要调用的函数
#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginOutExcute:(DSSUserInfo *_Nullable)userInfo;
@end
