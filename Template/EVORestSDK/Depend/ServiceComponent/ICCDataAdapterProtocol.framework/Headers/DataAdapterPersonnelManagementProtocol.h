//
//  DataAdapterPersonnelManagementProtocol.h
//  DataAdapterProtocol
//
//  Created by hsd on 2019/11/4.
//

#import <Foundation/Foundation.h>
#import "DataAdapterRemoteNotifyProtocol.h"
#import "DSSUserInfo.h"
#import "DSSPersonnelManagementInfo.h"


@protocol DataAdapterPersonnelManagementProtocol <NSObject>


#pragma mark--register function to IDHModuleProtocol
-(NSArray<DSSPersonnelManagementInfo *> *)getPMList:(NSString *)searchKey departmentId:(NSString *)departmentId pageNo:(int)pageNo error:(NSError **)error;
#pragma mark--register function to IDHModuleProtocol
-(NSArray<DSSPersonnelIdentityInfo *> *)getPersonnelIdentityList:(NSError **)error;
#pragma mark--register function to IDHModuleProtocol
-(NSArray<DSSPersonnelFaceInfo *> *)getPersonnelFaceList:(NSString *)imageDataStr error:(NSError **)error;
#pragma mark--register function to IDHModuleProtocol
-(DSSPersonnelManagementInfo *)getPersonnelDetail:(NSString *)personId error:(NSError **)error;

-(BOOL)addPersion:(DSSPersonnelManagementInfo *) info error:(NSError **)error;
-(BOOL)updatePersion:(DSSPersonnelManagementInfo *) info error:(NSError **)error;
-(BOOL)deletePeople:(NSArray<NSString *>*)ids departmentId:(int)departmentId error:(NSError **)error;

-(DSSPMDepartmentInfo *)getDepartmentTree:(NSError **)error;

-(BOOL)addCard:(DSSCardInfo *) info error:(NSError **)error;
-(BOOL)updateCard:(DSSCardInfo *) info error:(NSError **)error;
-(BOOL)deleteCards:(NSArray<NSString *>*)ids error:(NSError **)error;

#pragma mark--register function to IDHModuleProtocol
- (void)setRemoteNotifyBlock:(void (^)(ADAPTER_NOTIFY_ACTION, id))remoteNotifyBlock;

#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginInExcute:(DSSUserInfo *)userInfo;

#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginOutExcute:(DSSUserInfo *)userInfo;
@end
