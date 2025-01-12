//
//  GroupJsonParse.h
//  DPRestSDKDataAdapter
//
//  Created by 32943 on 2017/12/11.
//

#import <Foundation/Foundation.h>
#import <ICCDataAdapterProtocol/ICCDataAdapterProtocol-umbrella.h>


@class EVOBRMGetDeviceOrgResponseObjc;
@class EVOBRMGetDeviceOrgByLayeredResponseObjc;

//#import "DSSGroupInfo.h"
//#import "DHThreadSafeMultableDictionary.h"
//#import "EVO.BRM.EVOBRMGetDeviceOrg.h"
//#import "EVO.BRM.EVOBRMGetDeviceOrgByLayered.h"

@interface GroupJsonParse : NSObject
@property (copy, nonatomic) BOOL(^finishParseGroup)(DSSGroupInfo* data);
- (DSSGroupInfo *)parseData:(EVOBRMGetDeviceOrgResponseObjc *)response;
- (DSSGroupInfo *)parseGradeData:(EVOBRMGetDeviceOrgByLayeredResponseObjc *)response groupInfo:(DSSGroupInfo *)groupInfo;
- (DSSGroupInfo *)parseGradeDic:(NSDictionary *)dic groupInfo:(DSSGroupInfo *)groupInfo;
- (NSArray *)parseSearchData:(NSArray *)value searchKey:(NSString *)searchKey searchType:(NSInteger)searchType;
@end
