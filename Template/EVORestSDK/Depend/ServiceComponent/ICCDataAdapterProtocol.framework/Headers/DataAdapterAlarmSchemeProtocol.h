//
//  DataAdapterAlarmSchemeProtocol.h
//  Pods
//
//  Created by zyx on 17/2/27.
//
//

#import <Foundation/Foundation.h>
#import "DSSAlarmSchemeInfo.h"
#import "DataAdapterRemoteNotifyProtocol.h"


@protocol DataAdapterAlarmSchemeProtocol <NSObject>
#pragma mark--register function to IDHModuleProtocol
- (void)setRemoteNotifyBlock:(void (^_Nonnull)(ADAPTER_NOTIFY_ACTION, id _Nullable))remoteNotifyBlock;
/**
 向服务请求获取报警预案列表

 @param error <#error description#>
 @return <#return value description#>
 */
#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSAlarmSchemeInfo*>*_Nullable) getAlarmSchemeList:(NSError*_Nullable*_Nullable)error;

/**
 开启/关闭报警预案时候 比setAlarmEnableToADS多了一步保存预案的信息给服务

 @param alarmSchemeInfo <#alarmSchemeInfo description#>
 @param bEnable <#bEnable description#>
 @param error <#error description#>
 @return <#return value description#>
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL) setAlarmScheme:(DSSAlarmSchemeInfo* _Nonnull)alarmSchemeInfo enable:(BOOL)bEnable error:(NSError*_Nullable*_Nullable)error;

/**
 删除预案

 @param alarmSchemeInfo <#alarmSchemeInfo description#>
 @param error <#error description#>
 @return <#return value description#>
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL) deleteScheme:(DSSAlarmSchemeInfo*_Nonnull)alarmSchemeInfo error:(NSError*_Nullable*_Nullable)error;


/**
 使能预案开启预案给ads

 @param alarmSchemeInfo <#alarmSchemeInfo description#>
 @param error <#error description#>
 @return <#return value description#>
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL)setAlarmEnableToADS:(DSSAlarmSchemeInfo *_Nonnull)alarmSchemeInfo error:(NSError*_Nullable*_Nullable)error;


/**
 预案失效发送给ads

 @param schemeID <#schemeID description#>
 @param error <#error description#>
 @return <#return value description#>
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL) notifyInvalidateScheme:(NSInteger)schemeID error:(NSError*_Nullable*_Nullable)error;


@end
