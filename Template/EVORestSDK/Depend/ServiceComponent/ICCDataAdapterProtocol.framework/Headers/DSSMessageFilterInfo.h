//
//  DSSMessageFilterInfo.h
//  AESCrypt-ObjC
//
//  Created by iMac on 2020/4/27.
//

#import <Foundation/Foundation.h>
#import "DSSMessageInfo.h"
NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    DSSMessageFilterTimeTypeLastHour, //过去一小时
    DSSMessageFilterTimeTypeLast7Days, //过去7天
    DSSMessageFilterTimeTypeToday, //今天
    DSSMessageFilterTimeTypeYesterday,
    DSSMessageFilterTimeTypeCustom,
} DSSMessageFilterTimeType;

typedef enum : NSUInteger {
    DSSMessageFilterSourceDevice,
    DSSMessageFilterSourceChannel,
    DSSMessageFilterSourceRule,
} DSSMessageFilterSourceType;

/// 消息过滤条件类，通过该类对于报警查询接口进行条件设置
@interface DSSMessageFilterInfo : NSObject
@property (nonatomic,assign) DSSMessageFilterTimeType timeType;
@property (nonatomic,strong, nullable) NSDate *startTime;
@property (nonatomic,strong, nullable) NSDate *endTime;
@property (nonatomic,copy) NSString *alarmGroupId;//报警大类的ID，0表示全部
@property (nonatomic, assign) NSInteger status;//处理状态，MBL_ALARM_STATUS_NONE表示所有,MBL_ALARM_DEAL_STATUS有对应的类型
@property (nonatomic, copy) NSNumber *level;//高中低等级1为高
@property (nonatomic, copy) NSArray<NSString *> *sourceIds;//报警源，如果count == 0表示所有
@property (nonatomic,assign) DSSMessageFilterSourceType sourceType; //报警源类型
@property (nonatomic, copy) NSNumber * event;//报警状态 1.发生。2.消失
@property (nonatomic, copy) NSString *alarmType;

/// 自定义
@property (nonatomic, assign) NSInteger subAlarmTypeIndex;//顺序
@property (nonatomic,copy) NSString *customAlarmName;//自定义报警分类名称
@property (nonatomic,strong) NSArray<NSString *> *customTypes;//自定义报警分类下报警类型
@property (nonatomic, assign) NSInteger customAlarmId;//自定义报警分类ID

-(BOOL)isUnfilter;
-(BOOL)isUnCustomFilterWithIp:(NSString *)ip username:(NSString *)username;
@end

NS_ASSUME_NONNULL_END
