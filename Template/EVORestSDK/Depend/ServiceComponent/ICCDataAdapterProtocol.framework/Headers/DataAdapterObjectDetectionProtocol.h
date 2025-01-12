//
//  DataAdapterSubSystemArmProtocol.h
//  DataAdapterProtocol
//
//  Created by chenfeifei on 2018/9/20.
//


#import <Foundation/Foundation.h>
#import "DSSUserInfo.h"
#import "DSSObjectDetectionInfo.h"

@protocol DataAdapterObjectDetectionProtocol <NSObject>

//获取人体抓拍列表
#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSHumanInfo *> *_Nullable)getHumanInfo:(DSSQueryHumanInfo *_Nonnull)queryInfo  error:(NSError *_Nullable*_Nullable)error;

//继续获取人体抓拍列表下一页
#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSHumanInfo *>*_Nullable)getNextPageHumanInfo:(NSError *_Nullable*_Nullable)error;


//获取机动车抓拍列表
#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSVehicleDetailInfo *>*_Nullable)getVehicleInfo:(DSSQueryVehicleInfo *_Nonnull)queryInfo error:(NSError *_Nullable*_Nullable)error;

//获取下一页机动车抓拍列表
#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSVehicleDetailInfo *>*_Nullable)getNextPageVehicleInfo:(NSError *_Nullable*_Nullable)error;

//获取非机动车抓拍列表
#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSNonVehicleDetailInfo*>*_Nullable)getNonVehicleInfo:(DSSQueryNonVehicleInfo *_Nonnull)queryInfo error:(NSError *_Nullable*_Nullable)error;


//获取下一页非机动车抓拍列表
#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSNonVehicleDetailInfo*>*_Nullable)getNextPageNonVehicleInfo:(NSError *_Nullable*_Nullable)error;


//获取字典内容
#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSBaseDictionaryInfo*> *_Nullable)getDictionaryInfoByTypeCode:(NSInteger)type error:(NSError *_Nullable*_Nullable)error;



@end


