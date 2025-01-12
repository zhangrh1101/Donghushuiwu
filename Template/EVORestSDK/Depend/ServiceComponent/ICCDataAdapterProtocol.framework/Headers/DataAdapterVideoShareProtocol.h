//
//  DataAdapterSubSystemArmProtocol.h
//  DataAdapterProtocol
//
//  Created by chenfeifei on 2018/9/20.
//


#import <Foundation/Foundation.h>
#import "DSSUserInfo.h"
#import "DSSVideoShareDeptInfo.h"
#import "DSSVideoShareUserInfo.h"
#import "DSSVideoShareResultInfo.h"
#import "DSSVideoShareChannelInfo.h"
#import "DSSVideoShareShareInfo.h"
#import "DataAdapterRemoteNotifyProtocol.h"

typedef void (^remoteNotifyBlock)(ADAPTER_NOTIFY_ACTION, id);

@protocol DataAdapterVideoShareProtocol <NSObject>
#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSVideoShareResultInfo *> *)videoShareWithType:(int)type shareUser:(NSArray<DSSVideoShareUserInfo *> *)userArray shareChannels:(NSArray<DSSVideoShareChannelInfo *> *)channelArray userCode:(NSString *)userCode memo:(NSString *)memo error:(NSError **)error;
#pragma mark--register function to IDHModuleProtocol
- (NSArray <DSSVideoShareDeptInfo *>*)getChildDeptInfo:(NSString *)deptId error:(NSError **)error;
#pragma mark--register function to IDHModuleProtocol
- (NSArray <DSSVideoShareUserInfo *>*)getChildUserInfo:(NSString *)deptId error:(NSError **)error;

#pragma mark--register function to IDHModuleProtocol
- (NSArray <DSSVideoShareShareInfo *>*)getShareList:(NSInteger)queryType userCode:(NSString *)userCode pageNo:(NSInteger)pageNo pageSize:(NSInteger)pageSize error:(NSError **)error;
#pragma mark--register function to IDHModuleProtocol
- (BOOL)revokeVideoShare:(NSString *)recordId error:(NSError **)error;

#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginInExcute:(DSSUserInfo *)userInfo;

#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginOutExcute:(DSSUserInfo *)userInfo;
#pragma mark--register function to IDHModuleProtocol
- (void)setRemoteNotifyBlock:(void (^)(ADAPTER_NOTIFY_ACTION, id))remoteNotifyBlock;

@end


