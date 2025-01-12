//
//  DSSSpecialTaskInfo.h
//  DataAdapterProtocol
//
//  Created by iMac on 2019/4/10.
//

#import <Foundation/Foundation.h>
#import "DSSSignalInfo.h"
#import "DSSEMapUIDataModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface DSSTaskChannelInfo : NSObject
@property (nullable,nonatomic,copy) NSString *channelId;
@property (nullable,nonatomic,copy) NSString *channelName;
@end

@interface DSSTaskSignalInfo : NSObject
@property (nullable,nonatomic,copy) NSString *signalId;
@property (nullable,nonatomic,copy) NSString *signalName;
@property (nonatomic,assign) NSInteger triggerDistance;//最多999
@property (nonatomic,assign) NSInteger leavingTriggerDistance;
@property (nullable,nonatomic,copy) NSString *createTime;
@property (nullable,nonatomic,copy) NSString *phaseId;
@property (nullable,nonatomic,strong) NSArray<NSString *> *lockPhaseList;
@property (nullable,nonatomic,copy) NSString *stageNo;
@property (nullable,nonatomic,strong) NSArray<DSSTaskChannelInfo *> *channelInfos;
@property (nullable,nonatomic,strong) DSSSignalInfo *signalInfo;
@property (nonatomic,assign) BOOL isExpand;
@property (nonatomic,assign) BOOL isLocked;
@property (nullable,nonatomic,strong) NSArray<DSSEMapUIDataModel *> *emapChannels;
@property (nullable,nonatomic,strong) NSArray<NSString *> *relateChannels;
@end

@interface DSSSpecialTaskInfo : NSObject
@property (nullable,nonatomic,copy) NSString *taskId;
@property (nullable,nonatomic,copy) NSString *specialName;//32位
@property (nullable,nonatomic,strong) NSDate *executeTime;
@property (nonatomic,assign) NSInteger executeDuration;
@property (nullable,nonatomic,strong) NSArray<DSSTaskSignalInfo*> *signalGroups;
@property (nonatomic,assign) BOOL wuxiTask;

@end



NS_ASSUME_NONNULL_END
