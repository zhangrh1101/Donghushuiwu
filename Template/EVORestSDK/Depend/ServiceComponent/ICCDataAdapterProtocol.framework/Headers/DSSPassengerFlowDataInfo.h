//
//  DSSPassengerFlowDataInfo.h
//  DataAdapterProtocol
//
//  Created by hsd on 2019/11/4.
//

#import <Foundation/Foundation.h>
#import "DSSBaseInfo.h"
@class DSSPassengerFlowChannelInfo;
@class DSSPFRankDetailItemInfo;
@class DSSPFReportItemInfo;
@interface DSSPassengerFlowDataInfo : DSSBaseInfo
@property (nonatomic,copy) NSString *  enteredTotal;
@property (nonatomic,copy) NSString *exitedTotal;
@property (nonatomic,strong) NSArray<NSString *> *recordDateList;
@property (nonatomic,strong) NSArray<NSString *> *enteredSubtotalList;
@property (nonatomic,strong) NSArray<NSString *> *exitedSubtotalList;
@property (nonatomic,strong) NSArray<NSString *> *holdTotalList;
@property (nonatomic,strong) NSArray<NSString *> *dateList;
@property (nonatomic,assign) CGFloat valueMax;//出入与客流量最大数值
@property (nonatomic,assign) CGFloat valueHoldMax;//滞留量最大数值

@end

@interface DSSPassengerFlowRuleListInfo : DSSBaseInfo
@property (nonatomic,strong) NSNumber *ruleId;
@property (nonatomic,copy) NSString *ruleName;
@property (nonatomic,copy) NSString *ruleRemark;
@property (nonatomic,strong) NSArray<DSSPassengerFlowChannelInfo *> *channelRules;

@end

@interface DSSPassengerFlowChannelInfo : DSSBaseInfo
@property (nonatomic,copy) NSString *channelName;
@property (nonatomic,strong) NSString *channelID;
@property (nonatomic,strong) NSNumber *cameraType;
@property (nonatomic, assign) BOOL isOnline;
@end




@interface DSSPFRegionInfo : DSSBaseInfo
@property (nonatomic,copy) NSString *regionName;
@property (nonatomic,strong) NSNumber *regionId;
@end
@interface DSSPFAnalyseInfo : DSSBaseInfo
@property (nonatomic,copy) NSString *regionName;
@property (nonatomic,strong) NSNumber *regionCode;
@property (nonatomic, assign)NSInteger enterNumber;
@property (nonatomic, assign)NSInteger outNumber;

@end
@interface DSSPFLabelInfo : DSSBaseInfo
@property (nonatomic,copy) NSString *labelName;
@property (nonatomic,strong) NSNumber *labelId;
@property (nonatomic,strong) NSNumber *superLabelId;

@end

@interface DSSPFRankItemInfo : DSSBaseInfo
@property (nonatomic,copy) NSString *labelName;
@property (nonatomic,strong) NSNumber *labelId;
@property (nonatomic, assign)float proportion;
@property (nonatomic, assign)NSInteger enterNumber;
@property (nonatomic,strong) NSArray<DSSPFRankDetailItemInfo *> *ranks;
@property (nonatomic,assign) BOOL isShow;
@end
@interface DSSPFRankDetailItemInfo : DSSBaseInfo
@property (nonatomic,copy) NSString *labelName;
@property (nonatomic,strong) NSNumber *labelId;
@property (nonatomic, assign)float proportion;
@property (nonatomic, assign)NSInteger enterNumber;

@end

@interface DSSPFReportInfo : DSSBaseInfo
@property (nonatomic, assign)NSInteger averageEnterNum;
@property (nonatomic, assign)NSInteger averageOutNum;
@property (nonatomic,strong) NSArray<DSSPFReportItemInfo *> *datas;
@property (nonatomic, assign)NSInteger totalRetentionCount;

@end
@interface DSSPFReportItemInfo : DSSBaseInfo
@property (nonatomic, assign)NSInteger inCount;
@property (nonatomic, assign)NSInteger outCount;
@property (nonatomic, copy)NSString * reportBeginTime;
@property (nonatomic, copy)NSString *reportEndTime;
@property (nonatomic, copy)NSString *reportTimeQuantum;
@property (nonatomic, assign)double enterYearCompare;
@property (nonatomic, assign)double outYearCompare;
@property (nonatomic, assign)double enterChainComparison;
@property (nonatomic, assign)double outChainComparison;
@property (nonatomic, assign)NSInteger totalRetentionCount;

@end
/**
 报警图表缓存数据
 */
@interface DSSPFCacheInfo : DSSBaseInfo

@property (nonatomic, assign)NSInteger reportType;//1日 2周 3月 4年 5自定义
@property (nonatomic, strong)DSSPFRegionInfo * regionInfo;
@property (nonatomic, strong)DSSPFLabelInfo * labelInfo;
@property (nonatomic, assign)NSInteger dayStartTime;
@property (nonatomic, assign)NSInteger weekStartTime;
@property (nonatomic, assign)NSInteger monthStartTime;
@property (nonatomic, assign)NSInteger yearStartTime;
@property (nonatomic, assign)NSInteger customStartTime;
@property (nonatomic, assign)NSInteger customEndTime;

@end


/**
 区域组织树节点
 */
@interface DSSPFNode: DSSBaseInfo
@property (nonatomic, strong)NSArray<DSSPFNode *> *children;;
@property (nonatomic,copy) NSString *type;
@property (nonatomic,copy) NSString *pId;
@property (nonatomic,copy) NSString *name;
@property (nonatomic,copy) NSString *Id;
@property (nonatomic, assign)BOOL isParent;
@property (nonatomic, assign)BOOL isSelected;
@property (nonatomic, assign)BOOL isRequestChild; //请求过子节点不再请求


@end
