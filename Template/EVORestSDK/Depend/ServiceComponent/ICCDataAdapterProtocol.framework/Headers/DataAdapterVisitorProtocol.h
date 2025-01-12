//
//  DataAdapterVTSSProtocol.h
//  Pods
//
//  Created by 28404 on 2017/11/9.
//

#import <Foundation/Foundation.h>
#import "DataAdapterCoreProtocol.h"
#import "DataAdapterRemoteNotifyProtocol.h"
#import "DSSUserInfo.h"
#import "DSSVTSSVisitorInfo.h"
#import "DSSVTSSVisitorConfigInfo.h"

typedef void (^remoteNotifyBlock)(ADAPTER_NOTIFY_ACTION, id _Nullable);

@protocol DataAdapterVisitorProtocol <NSObject>

/**
 添加访客

 @param visitorInfo 访客详情
 @param error error
 @return visitorId 访客id
 */
#pragma mark--register function to IDHModuleProtocol
- (NSString *_Nullable)addVisitorWith:(DSSVTSSVisitorInfo *_Nonnull)visitorInfo error:(NSError *_Nullable*_Nullable)error;

/**
 获取访客历史记录

 @param visitedName 被访者名称
 @param page 页码
 @param pageSize 每页个数
 @param error error
 @return 历史记录里列表
 */
#pragma mark--register function to IDHModuleProtocol
- (NSArray <DSSVTSSVisitorInfo *> *_Nullable)getVisitorHistoryRecordsError:(NSError *_Nullable*_Nullable)error;

/**
 获取访客详情

 @param visitorId visitorId
 @param error error
 @return 访客详情
 */
#pragma mark--register function to IDHModuleProtocol
- (DSSVTSSVisitorInfo *_Nullable)getVisitorInfo:(NSString *_Nonnull)visitorId error:(NSError *_Nullable*_Nullable)error;
/**
 更新访客信息

 @param info 访客详情
 @param visitorId 访客id
 @param error error
 @return YES 成功 NO 失败
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL)updateVisitorInfo:(DSSVTSSVisitorInfo *_Nonnull)visitorInfo error:(NSError *_Nullable*_Nullable)error;

/// 获取访客配置
/// @param error <#error description#>
#pragma mark--register function to IDHModuleProtocol
- (DSSVTSSVisitorConfigInfo *_Nullable)getVisitorConfig:(NSError *_Nullable*_Nullable)error;

/// 保存访客设置
/// @param configInfo <#configInfo description#>
/// @param error <#error description#>
#pragma mark--register function to IDHModuleProtocol
- (BOOL)saveVisitorConfig:(DSSVTSSVisitorConfigInfo *_Nonnull)configInfo error:(NSError *_Nullable*_Nullable)error;

/// 获取访客记录（在访、预约）
/// @param error <#error description#>
#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSVTSSVisitorInfo *> *_Nullable)getVisitors:(NSInteger)startTime endTime:(NSInteger)endTime pageNo:(NSInteger)page pageSize:(NSInteger)pageSize error:(NSError *_Nullable*_Nullable)error;

/// 获取历史记录（离访、取消）
/// @param error <#error description#>
#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSVTSSVisitorInfo *> *_Nullable)getHistoryVisitors:(NSInteger)startTime endTime:(NSInteger)endTime pageNo:(NSInteger)page pageSize:(NSInteger)pageSize error:(NSError *_Nullable*_Nullable)error;

/// 生成二维码
/// @param error <#error description#>
#pragma mark--register function to IDHModuleProtocol
- (DSSVTSSVisitorAuthInfo *_Nullable)generateVisitorQRCode:(NSError *_Nullable*_Nullable)error;

/// 立即签离
/// @param error <#error description#>
#pragma mark--register function to IDHModuleProtocol
- (BOOL)clearOverdueVisitors:(NSError *_Nullable*_Nullable)error;
#pragma mark--register function to IDHModuleProtocol
- (void)setRemoteNotifyBlock:(void (^_Nonnull)(ADAPTER_NOTIFY_ACTION, id _Nullable))remoteNotifyBlock;
//登录成功之后需要调用的函数
#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginInExcute:(DSSUserInfo *_Nullable)userInfo;
//登出成功之后需要调用的函数
#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginOutExcute:(DSSUserInfo *_Nullable)userInfo;
@end
