//
//  DataAdapterAlarmHostsProtocol.h
//  DataAdapterProtocol
//
//  Created by hsd on 2020/7/30.
//

#import <Foundation/Foundation.h>
#import "DSSAlarmHostsInfo.h"
#import "DSSUserInfo.h"
#import "DataAdapterRemoteNotifyProtocol.h"

@protocol DataAdapterAlarmHostsProtocol <NSObject>
/**
 根据设备编码获取子系统
 @param device code
 return 子系统 DSSAlarmHostsInfo
*/
#pragma mark--register function to IDHModuleProtocol
-(DSSAlarmHostsInfo *_Nullable)getAlarmHostsWithDeviceCode:(NSString *_Nonnull)deviceCode error:(NSError *_Nullable*_Nullable)error;

/**
 报警主机操作
 @param  deviceCode deviceCode
 @param operate arm-立即布防，forceArm-强制布防，disArm-撤防，clearAlarm-消警 normal-正常，byPass-旁路， isolate-隔离
*/

-(BOOL)configAlarmHosts:(NSString *_Nonnull)deviceCode operate:(NSString *_Nonnull)operate error:(NSError *_Nullable*_Nullable)error;

/**
 子系统操作
 @param subSystemIds subSystemIds
 @param operate arm-立即布防，forceArm-强制布防，disArm-撤防，clearAlarm-消警 normal-正常，byPass-旁路， isolate-隔离
*/
-(BOOL)configSubSystems:(NSString *_Nonnull)subSystemIds operate:(NSString *_Nonnull)operate error:(NSError *_Nullable*_Nullable)error;

/**
 防区操作
 @param defenceAreaIds defenceAreaIds
 @param operate arm-立即布防，forceArm-强制布防，disArm-撤防，clearAlarm-消警 normal-正常，byPass-旁路， isolate-隔离
*/
-(BOOL)configDefenceAreas:(NSString *_Nonnull)defenceAreaIds operate:(NSString *_Nonnull)operate error:(NSError *_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (void)setRemoteNotifyBlock:(void (^_Nonnull)(ADAPTER_NOTIFY_ACTION, id _Nullable))remoteNotifyBlock;

#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginInExcute:(DSSUserInfo *_Nullable)userInfo;

#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginOutExcute:(DSSUserInfo *_Nullable)userInfo;
@end


