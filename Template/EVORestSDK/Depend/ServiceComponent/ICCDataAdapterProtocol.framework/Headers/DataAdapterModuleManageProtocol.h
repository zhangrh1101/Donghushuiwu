//
//  DataAdapterModuleManageProtocol.h
//  Pods
//
//  Created by zf's on 2018/3/6.
//

#import <Foundation/Foundation.h>
#import "DSSModuleInfo.h"
#import "DSSAppConfigInfo.h"

@protocol DataAdapterModuleManageProtocol <NSObject>

#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSModuleInfo *> *)loadUserSelectedModuleIsAMS:(BOOL)isAms error:(NSError **)error;

#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSModuleInfo *> *)loadRecentModule:(NSError **)error;

#pragma mark--register function to IDHModuleProtocol
- (BOOL)modifyUserSelectedModuleArray:(NSArray<DSSModuleInfo*>*)moduleArray error:(NSError **)error;

#pragma mark--register function to IDHModuleProtocol
- (BOOL)updateRecentModule:(DSSModuleInfo*)module error:(NSError **)error;

#pragma mark--register function to IDHModuleProtocol
- (BOOL)clearAllRecords;

-(BOOL)updateAppConfigMenuListWithMenus:(NSArray <DSSAppConfigMenuInfo *>*_Nonnull)menus error:(NSError * _Nullable *_Nullable)error;

-(BOOL)updateAppConfigCardListWithCards:(NSArray <DSSAppConfigCardInfo *>*_Nonnull)cards error:(NSError * _Nullable *_Nullable)error;

-(NSArray <DSSAppConfigMenuInfo *>*_Nullable)getAppConfigMenuList:(NSError * _Nullable *_Nullable)error;

-(NSArray <DSSAppConfigCardInfo *>*_Nullable)getAppConfigCardList:(NSError * _Nullable *_Nullable)error;
@end
