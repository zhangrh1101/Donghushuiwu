//
//  DSSPatrolInfo.h
//  DataAdapterProtocol
//
//  Created by hsd on 2020/10/12.
//
#import <Foundation/Foundation.h>
#import "DSSBaseInfo.h"

@class DSSPatrolClassInfo;
@class DSSPatrolPersionInfo;
@class DSSPatrolTaskDetailInfo;
@class DSSPatrolTaskDetailRouteInfo;
@interface DSSPatrolInfo : DSSBaseInfo

@end

@interface DSSPatrolPlanInfo : DSSBaseInfo
@property (nonatomic,copy) NSNumber *ruleId;
@property (nonatomic,copy) NSNumber *routeId;
@property (nonatomic,copy, nullable) NSString *ruleName;
@property (nonatomic,copy, nullable) NSString *startDate;
@property (nonatomic,copy, nullable) NSString *endDate;
@property (nonatomic,copy) NSNumber *stat;
@property (nonatomic,copy) NSNumber *mode;
@property (nonatomic,copy) NSString *routeName;
@property (nonatomic,copy) NSNumber *Id;

@property (nonatomic,strong) NSMutableArray<DSSPatrolClassInfo *> *schedules;
@end

@interface DSSPatrolClassInfo : DSSBaseInfo
@property (nonatomic,copy) NSNumber *Id;
@property (nonatomic,copy) NSString *routeName;
@property (nonatomic,copy,nullable) NSString *startTime;
@property (nonatomic,copy,nullable) NSString *endTime;
@property (nonatomic,copy) NSString *routeId;
@property (nonatomic,copy) NSNumber *configTimer;
@property (nonatomic,strong) NSMutableArray<DSSPatrolPersionInfo *> *scheduleUsers;


@end

@interface DSSPatrolPersionInfo : DSSBaseInfo
@property (nonatomic,copy) NSNumber *Id;
@property (nonatomic,copy) NSString *userName;
@property (nonatomic,copy) NSNumber *userId;
@property (nonatomic,copy) NSNumber *userSource;


@end
@interface DSSPatrolGroupInfo : DSSBaseInfo
@property (nonatomic,copy) NSNumber *Id;
@property (nonatomic,copy) NSString *groupName;
@property (nonatomic,copy) NSNumber *userCount;
@property (nonatomic,strong) NSMutableArray<DSSPatrolPersionInfo *> *gruopUsers;


@end
@interface DSSPatrolNFCInfo : DSSBaseInfo
@property (nonatomic,copy) NSString *nfcName;
@property (nonatomic,copy) NSNumber *nfcId;

@end

@interface DSSPatrolTaskInfo : DSSBaseInfo
@property (nonatomic,copy) NSNumber *currentPage;
@property (nonatomic,copy) NSNumber *totalPage;
@property (nonatomic,copy) NSNumber *pageSize;
@property (nonatomic,copy) NSNumber *totalRows;
@property (nonatomic,strong) NSMutableArray<DSSPatrolTaskDetailInfo *> *pageData;

@end
@interface DSSPatrolTaskDetailInfo : DSSBaseInfo
@property (nonatomic,copy) NSNumber *Id;
@property (nonatomic,copy) NSNumber *stat;
@property (nonatomic,copy) NSString *ruleName;
@property (nonatomic,copy) NSNumber *ruleId;
@property (nonatomic,copy) NSString *routeName;
@property (nonatomic,copy) NSNumber *routeId;
@property (nonatomic,copy) NSNumber *sort;
@property (nonatomic,copy,nullable) NSString *startTime;
@property (nonatomic,copy,nullable) NSString *endTime;
@property (nonatomic,copy) NSString *userNames;
@property (nonatomic,copy) NSNumber *mode;
@property (nonatomic,copy) NSNumber *seq;
@property (nonatomic,strong) NSMutableArray<DSSPatrolTaskDetailRouteInfo *> *routes;
@property (nonatomic,copy) NSString *picPath;


@end
@interface DSSPatrolTaskDetailRouteInfo : DSSBaseInfo
@property (nonatomic,copy) NSNumber *stat;
@property (nonatomic,copy) NSString *channelName;
@property (nonatomic,copy) NSString *swipeTime;
@property (nonatomic,copy) NSString *mapx;
@property (nonatomic,copy) NSString *mapy;

@end
