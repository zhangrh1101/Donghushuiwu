//
//  DataAdapterSignalProtocol.h
//  Pods
//
//  Created by iMac on 2018/9/18.
//
#import <Foundation/Foundation.h>
#import "DSSSpecialTaskInfo.h"
#import "DSSChannelInfo.h"

@protocol DataAdapterSignalProtocol <NSObject>

#pragma mark--register function to IDHModuleProtocol
- (void)setRemoteNotifyBlock:(void (^)(ADAPTER_NOTIFY_ACTION, id))remoteNotifyBlock;
/**
 注册信号灯的webScoket
 
 @return 信号灯Id
 */
#pragma mark--register function to IDHModuleProtocol
- (void)subscribeSignalData:(NSString *)signalId manuId:(NSString* )manuId serverId:(NSString* )serverId session:(NSString* )session seq:(NSString* )seq;

#pragma mark--register function to IDHModuleProtocol
- (void)subscribeCurrentSignalStaticData;

#pragma mark--register function to IDHModuleProtocol
- (void)setControlMode:(ControlModeType)controlModeType signalId:(NSString *)signalId manuId:(NSString* )manuId serverId:(NSString* )serverId session:(NSString* )session seq:(NSString* )seq;

#pragma mark--register function to IDHModuleProtocol
- (void)nextPhase:(NSString *)signalId manuId:(NSString *)manuId serverId:(NSString *)serverId session:(NSString *)session seq:(NSString *)seq;

#pragma mark--register function to IDHModuleProtocol
- (void)subscribeSignalStaticData:(NSString *)signalId manuId:(NSString* )manuId serverId:(NSString* )serverId session:(NSString* )session seq:(NSString* )seq;

#pragma mark--register function to IDHModuleProtocol
- (void)subscribeSignalDatas:(NSArray *)signalDicArray;

#pragma mark--register function to IDHModuleProtocol
- (void)lockPhase:(DSSChannelInfo *)signalInfo lockTime:(NSInteger)lockTime phaseId:(NSArray<NSString *> *)phaseId;

#pragma mark--register function to IDHModuleProtocol
- (void)unlockPhase:(DSSChannelInfo *)signalInfo phaseId:(NSString *)phaseId;

#pragma mark--register function to IDHModuleProtocol
- (void)lockStage:(NSString *)signalId lockTime:(NSInteger)lockTime stageNo:(NSString *)stageNo;
    
#pragma mark--register function to IDHModuleProtocol
- (void)unLockStage:(NSString *)signalId stageNo:(NSString *)stageNo;
/**
 反注册信号灯的webScoket

 @return 信号灯Id
 */
#pragma mark--register function to IDHModuleProtocol
- (void)unSubscribeSignalData;

#pragma mark--register function to IDHModuleProtocol
- (BOOL)getSubscribeAddress;
    
#pragma mark--register function to IDHModuleProtocol
- (void)changePlan:(NSString *)signalId planNo:(NSString *)planNo;

#pragma mark--register function to IDHModuleProtocol
- (NSString*)addSpecialTask:(DSSSpecialTaskInfo *)taskInfo error:(NSError **)error;

#pragma mark--register function to IDHModuleProtocol
- (DSSSpecialTaskInfo *)specialTaskDetail:(NSString *)taskId error:(NSError **)error;

#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSSpecialTaskInfo *> *)specialTaskList:(NSError **)error;

#pragma mark--register function to IDHModuleProtocol
- (void)specialTaskListByWebScoket:(NSString* )manuId serverId:(NSString* )serverId;

#pragma mark--register function to IDHModuleProtocol
- (BOOL)modifySpecialTask:(DSSSpecialTaskInfo *)taskInfo error:(NSError **)error;

- (NSUInteger)getAccessControlRight:(NSString *)userId error:(NSError **)error;
@end
