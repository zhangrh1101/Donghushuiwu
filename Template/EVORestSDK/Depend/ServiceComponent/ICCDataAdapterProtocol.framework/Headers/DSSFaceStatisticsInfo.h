//
//  DSSFaceStatisticsInfo.h
//  DataAdapterProtocol
//
//  Created by iMac on 2020/9/25.
//

#import <Foundation/Foundation.h>
#import "DSSBaseInfo.h"

typedef enum : NSUInteger {
    DSSFaceStatisticsTimeTypeDay,
    DSSFaceStatisticsTimeTypeWeek,
    DSSFaceStatisticsTimeTypeMonth,
} DSSFaceStatisticsTimeType;//统计类型：月报周报日报

typedef enum : NSUInteger {
    DSSFaceStatisticsTypeGender,
    DSSFaceStatisticsTypeAge,
} DSSFaceStatisticsType;//统计类型：年龄、性别

typedef enum : NSUInteger {
    DSSFaceStatisticsStyleTypeBar,
    DSSFaceStatisticsStyleTypePie,
} DSSFaceStatisticsStyleType;//统计类型：柱状、饼状

NS_ASSUME_NONNULL_BEGIN

@interface DSSFaceStatisticsInfo : DSSBaseInfo
@property (nonatomic,strong) NSArray<NSString *> *xList;//横坐标标题
@property (nonatomic,strong) NSArray<NSNumber *> *totalList;
@property (nonatomic,strong) NSArray<NSNumber *> *femaleList;
@property (nonatomic,strong) NSArray<NSNumber *> *maleList;
@property (nonatomic,strong) NSArray<NSNumber *> *unknownList;
@property (nonatomic,strong) NSArray<NSNumber *> *percentList;
@property (nonatomic,strong) NSArray<NSString *> *percentStrList;

@property (nonatomic,assign) DSSFaceStatisticsTimeType timeType;
@property (nonatomic,assign) DSSFaceStatisticsType type;
@property (nonatomic,assign) DSSFaceStatisticsStyleType styleType;
@end

NS_ASSUME_NONNULL_END

NS_ASSUME_NONNULL_BEGIN

@interface DSSFaceStatisticsConfig : DSSBaseInfo
@property (nonatomic,assign) DSSFaceStatisticsTimeType lastTimeType;//
@property (nonatomic,assign) DSSFaceStatisticsStyleType lastStyleType;//
@property (nonatomic,strong) NSDate *lastDate;//查询时间
@property (nonatomic,strong) NSArray<NSString *> *channels;//通道
@end

NS_ASSUME_NONNULL_END

