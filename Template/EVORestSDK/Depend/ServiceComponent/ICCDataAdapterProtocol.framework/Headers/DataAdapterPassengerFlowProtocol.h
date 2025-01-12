//
//  DataAdapterPassengerFlowProtocol.h
//  DataAdapterProtocol
//
//  Created by hsd on 2019/11/4.
//

#import <Foundation/Foundation.h>
#import "DSSPassengerFlowDataInfo.h"
#import "DataAdapterRemoteNotifyProtocol.h"
#import "DSSUserInfo.h"

@class DSSGetStayRuleInfo;
@protocol DataAdapterPassengerFlowProtocol <NSObject>
/**
根据通道获取数据
加密方式：AES_128_ECB_PKCS7Padding(MD5(MD5(userName + MD5(password))))
@param channels code
@param countType  日1；周2; 月3；年4
@param date  日：2019-05-28; 周：2019-06-01 每周的最后一天 即周六; 月：2019-05; 年：2019
*/
#pragma mark--register function to IDHModuleProtocol
-(DSSPassengerFlowDataInfo *_Nullable) getChartDataWithOrgCode:(NSString *_Nonnull)channels countType:(NSString *_Nonnull)countType date:(NSString *_Nonnull)date error:(NSError *_Nullable*_Nullable)error;

/**
 获取客流统计规则列表
 @param page 页码
 @param pageSize  每页数量
*/
#pragma mark--register function to IDHModuleProtocol
-(NSArray<DSSPassengerFlowRuleListInfo*>*_Nullable)getChartDataRuleListWithPage:(NSString*_Nonnull)page pageSize:(NSString*_Nonnull)pageSize error:(NSError *_Nullable*_Nullable)error;
/**
根据规则获取数据
加密方式：AES_128_ECB_PKCS7Padding(MD5(MD5(userName + MD5(password))))
@param ruleId code
@param countType  日1；周2; 月3；年4
@param date  日：2019-05-28; 周：2019-06-01 每周的最后一天 即周六; 月：2019-05; 年：2019
*/
#pragma mark--register function to IDHModuleProtocol
-(DSSPassengerFlowDataInfo *_Nullable) getChartDataWithRuleId:(NSString *_Nonnull)ruleId countType:(NSString *_Nonnull)countType date:(NSString *_Nonnull)date error:(NSError *_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (void)setRemoteNotifyBlock:(void (^_Nonnull)(ADAPTER_NOTIFY_ACTION, id _Nullable))remoteNotifyBlock;

#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginInExcute:(DSSUserInfo *_Nullable)userInfo;

#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginOutExcute:(DSSUserInfo *_Nullable)userInfo;

#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSPFRegionInfo*>*_Nullable)requestRegionList:(NSError *_Nullable*_Nullable)error;
- (NSArray<DSSPFAnalyseInfo*>*_Nullable)requestAnalyseList:(NSInteger)regionType regionIds:(NSArray< NSString * > *_Nullable)regionIds reportBeginTime:(NSInteger)reportBeginTime reportTime:(NSInteger)reportTime reportType:(NSInteger)reportType error:(NSError *_Nullable*_Nullable)error;
- (NSArray<DSSPFLabelInfo*>*_Nullable)requestLabelList:(NSError *_Nullable*_Nullable)error;
- (NSArray<DSSPFRankItemInfo*>*_Nullable)requestRankList:(NSInteger)superLabelId regionIds:(NSArray< NSString * > *_Nullable)regionIds reportBeginTime:(NSInteger)reportBeginTime reportTime:(NSInteger)reportTime reportType:(NSInteger)reportType error:(NSError *_Nullable*_Nullable)error;
- (NSArray<DSSPFRankDetailItemInfo*>*_Nullable)requestRankDetailList:(NSInteger)superLabelId labelId:(NSInteger)labelId regionIds:(NSArray< NSString * > *_Nullable)regionIds reportBeginTime:(NSInteger)reportBeginTime reportTime:(NSInteger)reportTime reportType:(NSInteger)reportType error:(NSError *_Nullable*_Nullable)error;

-(DSSPFReportInfo *_Nullable)requestReportDay:(NSString *_Nullable)regionId reportBeginTime:(NSInteger)reportBeginTime reportTime:(NSInteger)reportTime reportType:(NSInteger)reportType error:(NSError *_Nullable*_Nullable)error;
-(DSSPFReportInfo *_Nullable)requestReportList:(NSString *_Nullable)regionId reportBeginTime:(NSInteger)reportBeginTime reportTime:(NSInteger)reportTime reportType:(NSInteger)reportType error:(NSError *_Nullable*_Nullable)error;

-(DSSPFNode *_Nullable)requestPFTree:(NSError *_Nullable*_Nullable)error;
-(DSSPFNode *_Nullable)requestPFTree:(NSString *_Nullable)Id orgName:(NSString *_Nullable)orgName error:(NSError *_Nullable*_Nullable)error;
-(DSSPFNode *_Nullable)searchPFTree:(NSString *_Nullable)key error:(NSError *_Nullable*_Nullable)error;
@end
