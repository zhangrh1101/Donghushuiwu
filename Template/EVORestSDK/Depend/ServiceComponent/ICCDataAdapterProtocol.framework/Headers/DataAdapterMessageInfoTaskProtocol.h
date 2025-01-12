//
//  DataAdapterMessageInfoTaskProtocol.h
//  DataAdapterProtocol
//
//  Created by 32943 on 2021/2/26.
//
#import <Foundation/Foundation.h>
#import "DSSMessageTaskInfo.h"
#import "DSSMessageCountInfo.h"
#import "DSSMessageTaskTypeInfo.h"
#import "DSSMessageNotificationInfo.h"
#import "DataAdapterRemoteNotifyProtocol.h"
#import "DataAdapterCoreProtocol.h"

typedef void (^remoteNotifyBlock)(ADAPTER_NOTIFY_ACTION, id _Nullable);

@protocol DataAdapterMessageInfoTaskProtocol <NSObject>

#pragma mark--register function to IDHModuleProtocol
- (void)setRemoteNotifyBlock:(void (^_Nullable)(ADAPTER_NOTIFY_ACTION, id _Nullable))remoteNotifyBlock;

#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSMessageTaskTypeInfo *>*_Nullable)getMessageTaskTypes:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSMessageTaskInfo *> *_Nullable)getMessageTaskList:(NSInteger)pageNum pageSize:(NSInteger)pageSize startDate:(NSString *_Nullable)startDate endDate:(NSString *_Nullable)endDate taskType:(NSArray<NSString *> *_Nullable)taskType taskState:(NSArray<NSString *> *_Nullable)taskState handleState:(NSArray<NSString *> *_Nullable)handleState searchWay:(NSInteger)searchWay error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSMessageTaskTypeInfo *>*_Nullable)getMessageNotificationTypes:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSMessageNotificationInfo *> *_Nullable)getMessageNotificationList:(NSInteger)pageNum pageSize:(NSInteger)pageSize startDate:(NSString *_Nullable)startDate endDate:(NSString *_Nullable)endDate infoType:(NSArray<NSString *> *_Nullable)infoType infoState:(NSArray<NSString *> *_Nullable)infoState error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (DSSMessageNotificationDetailInfo *_Nullable)getMessageNotificationDetailInfo:(NSString *_Nonnull)infoCode transmitDate:(NSString *_Nonnull)transmitDate error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (BOOL)handleNotifications:(NSArray<DSSMessageNotificationInfo *> *_Nullable)infoList infoState:(NSInteger)infoState error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (BOOL)handleAllNotification:(NSInteger)infoState error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (DSSMessageCountInfo *_Nullable)getMessageCount:(NSString *_Nullable)startDate endDate:(NSString *_Nullable)endDate error:(NSError*_Nullable*_Nullable)error;


//登录成功之后需要调用的函数
#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginInExcute:(DSSUserInfo *_Nullable)userInfo;
//登出成功之后需要调用的函数
#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginOutExcute:(DSSUserInfo *_Nullable)userInfo;
- (NSString *_Nullable)getPicWithUrl:(NSString *_Nullable)urlStr error:(NSError*_Nullable*_Nullable)error;
- (BOOL)addCustomAlarm:(DSSMessageFilterInfo *_Nullable)filterInfo error:(NSError*_Nullable*_Nullable)error;
- (NSArray<DSSMessageFilterInfo *> *_Nullable)getCustomAlarms:(NSError*_Nullable*_Nullable)error;
- (BOOL)deleteCustomAlarm:(DSSMessageFilterInfo *_Nullable)filterInfo error:(NSError*_Nullable*_Nullable)error;
- (BOOL)updateCustomAlarm:(DSSMessageFilterInfo *_Nullable)filterInfo error:(NSError*_Nullable*_Nullable)error;

@end

