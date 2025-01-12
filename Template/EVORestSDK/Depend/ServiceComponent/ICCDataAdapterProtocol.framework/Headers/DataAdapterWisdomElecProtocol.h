//
//  DataAdapterWisdomElecProtocol.h
//  Pods
//
//  Created by zhangquan  on 2021/2/22.
//
#import <Foundation/Foundation.h>
#import "DSSUserInfo.h"
#import "DSSWisdomElecListNode.h"
#import "DataAdapterRemoteNotifyProtocol.h"


@protocol DataAdapterWisdomElecProtocol <NSObject>

#pragma mark--register function to IDHModuleProtocol
-(DSSWisdomElecListNode *_Nullable)getWisdomElecList: (NSArray<NSString *>*_Nullable) gatewayData action:(NSInteger) action data:(NSArray<NSString *>*_Nonnull) data serachKey:(NSString*_Nullable) searchKey pageNumber:(NSInteger)pageNumber pageSize:(NSInteger)pageSize orgData:(NSArray<NSString *>*_Nullable) orgData error:(NSError*_Nullable*_Nullable)error;

- (NSDictionary<NSString*,NSString*> *_Nullable)changeACBState:(NSArray<NSString *> *_Nullable) dataList action:(NSInteger) action error:(NSError*_Nullable*_Nullable)error;

- (BOOL)getACBOperationPermissions:(NSError*_Nullable*_Nullable)error;
- (NSInteger)getExpireMessage:(NSError*_Nullable*_Nullable)error;

//#pragma mark--register function to IDHModuleProtocol
//- (void)afterLoginInExcute:(DSSUserInfo *_Nullable)userInfo;
//
//#pragma mark--register function to IDHModuleProtocol
//- (void)afterLoginOutExcute:(DSSUserInfo *_Nullable)userInfo;

@end
