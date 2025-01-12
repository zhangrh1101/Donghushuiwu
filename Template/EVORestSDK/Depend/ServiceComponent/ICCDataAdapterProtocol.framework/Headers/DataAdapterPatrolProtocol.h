//
//  DataAdapterPassengerFlowProtocol.h
//  DataAdapterProtocol
//
//  Created by hsd on 2019/11/4.
//

#import <Foundation/Foundation.h>
#import "DataAdapterRemoteNotifyProtocol.h"
#import "DSSUserInfo.h"

@class DSSPatrolPlanInfo;
@class DSSPatrolPlanInfo;
@class DSSPatrolGroupInfo;
@class DSSPatrolNFCInfo;
@class DSSPatrolTaskInfo;
@class DSSPatrolTaskDetailInfo;
@protocol DataAdapterPatrolProtocol <NSObject>

/**
获取巡更计划列表

*/
#pragma mark--register function to IDHModuleProtocol
-(NSMutableArray<DSSPatrolPlanInfo *> *)getPatrolPlanList:(NSError **)error;

#pragma mark--register function to IDHModuleProtocol
-(DSSPatrolPlanInfo *)getClassList:(NSString *)planId error:(NSError **)error;

#pragma mark--register function to IDHModuleProtocol
-(NSMutableArray<DSSPatrolGroupInfo *> *)getPatrolGroupList:(NSError **)error;

#pragma mark--register function to IDHModuleProtocol
-(DSSPatrolGroupInfo *)getPatrolGroupPersionList:(NSString *)groupId error:(NSError **)error;

#pragma mark--register function to IDHModuleProtocol
-(BOOL)patrolUpdateRule:(DSSPatrolPlanInfo*)planInfo error:(NSError **)error;

#pragma mark--register function to IDHModuleProtocol
-(BOOL)patrolUpdateRuleStat:(NSString *)ruleId ruleName:(NSString *)ruleName status:(NSString *)stat error:(NSError **)error;
#pragma mark--register function to IDHModuleProtocol
-(BOOL)configureNfc:(NSString*)code name:(NSString *)name error:(NSError **)error;

#pragma mark--register function to IDHModuleProtocol
-(BOOL)changeNfc:(NSString*)code name:(NSString *)name Id:(NSString *)Id error:(NSError **)error;

#pragma mark--register function to IDHModuleProtocol
-(DSSPatrolNFCInfo *)getNfcDetail:(NSString*)code error:(NSError **)error;

#pragma mark--register function to IDHModuleProtocol
-(BOOL)swingNfc:(NSString*)code error:(NSError **)error;

#pragma mark--register function to IDHModuleProtocol
-(DSSPatrolTaskInfo *)getTaskList:(NSString *)status error:(NSError **)error;

#pragma mark--register function to IDHModuleProtocol
-(DSSPatrolTaskDetailInfo *)getTaskDetail:(NSString *)taskId error:(NSError **)error;
#pragma mark--register function to IDHModuleProtocol
- (void)setRemoteNotifyBlock:(void (^)(ADAPTER_NOTIFY_ACTION, id))remoteNotifyBlock;

#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginInExcute:(DSSUserInfo *)userInfo;

#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginOutExcute:(DSSUserInfo *)userInfo;
@end
