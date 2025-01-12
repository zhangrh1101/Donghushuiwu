//
//  DSSGroupInfo+FinanceInfo.h
//  DataAdapterProtocol
//
//  Created by 32943 on 2018/9/12.
//

#import "DSSGroupInfo.h"

/// 金融平台 组织附加信息

typedef enum:NSUInteger
{
    MBL_GROUP_TYPE_UNKONW = 0,    ///< 未知 unknow
    MBL_GROUP_TYPE_DEP,              ///< 1-机构
    MBL_GROUP_TYPE_PLACE,            ///< 2-场所
    MBL_GROUP_TYPE_AREA,             ///< 3-区域
} MBL_GROUP_TYPE;

@interface DSSGroupInfo ()
@property (nonatomic, assign) MBL_GROUP_TYPE groupType;     ///< 组织类型
@property (nonatomic, assign) int placeType;                ///< 场所类型（场所专有）56- 办公场所 57-金库 58-营业大厅 60-自助渠道
@property (nonatomic, copy, nullable) NSString *groupUUID;  ///< 组织UUID
@end
