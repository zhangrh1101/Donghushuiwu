//
//  DataAdapterFavProtocol.h
//  Pods
//
//  Created by zyx on 17/3/7.
//
//

#import <Foundation/Foundation.h>
#import "DSSGroupInfo.h"
#import "DSSChannelInfo.h"
#import "DSSUserInfo.h"
#import "DataAdapterRemoteNotifyProtocol.h"

@protocol DataAdapterFavProtocol <NSObject>

#pragma mark--register function to IDHModuleProtocol
- (void)setRemoteNotifyBlock:(void (^)(ADAPTER_NOTIFY_ACTION, id))remoteNotifyBlock;

//登录成功之后需要调用的函数
#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginInExcute:(DSSUserInfo *)userInfo;
//登出成功之后需要调用的函数
#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginOutExcute:(DSSUserInfo *)userInfo;

#pragma mark--register function to IDHModuleProtocol
- (BOOL)addFavouriteChannel:(NSArray<DSSChannelInfo *> *)channelArray error:(NSError **)error;

#pragma mark--register function to IDHModuleProtocol
- (BOOL)saveFavouriteOrgs:(NSArray<DSSFavGroupInfo *> *)orgArray operatorType:(NSInteger)operatorType error:(NSError **)error;

#pragma mark--register function to IDHModuleProtocol
- (BOOL)deleteFavouriteChannel:(NSString *)channelId orgCode:(NSString *)orgCode error:(NSError **)error;
#pragma mark--register function to IDHModuleProtocol
- (BOOL)deleteFavouriteGroups:(NSArray<DSSFavGroupInfo *> *)groupArray channels:(NSArray<DSSChannelInfo *> *)channelArray orgCode:(NSString *)orgCode error:(NSError **)error;
#pragma mark--register function to IDHModuleProtocol
- (BOOL)shareFavouriteGroups:(NSArray<DSSFavGroupInfo *> *)groupArray channels:(NSArray<DSSChannelInfo *> *)channelArray userIds:(NSArray<NSString *> *)userIds error:(NSError **)error;

#pragma mark--register function to IDHModuleProtocol
- (DSSFavGroupInfo *)getFavouriteOrgsWithGroupBlock:(BOOL (^)(DSSFavGroupInfo *))block error:(NSError **)error;

#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSChannelInfo *> *)getFavouriteChannelsWithOrgCode:(NSString *)orgCode error:(NSError **)error;

@end
