//
//  DSSHistoryInfoGroup.h
//  Pods
//
//  Created by zhangbeihao on 2020/6/17.
//

#import <Foundation/Foundation.h>

@class DSSHistoryInfo;

NS_ASSUME_NONNULL_BEGIN

@interface DSSHistoryInfoGroup : NSObject <NSCoding>

@property (nonatomic, strong) NSArray<DSSHistoryInfo *> *infos;
@property (nonatomic, assign) NSTimeInterval lastVisitTime;

/// 通过 infos 中的 DSSHistoryInfo 的 channelid 拼接的
- (NSString *)getCustomGroupId;

@end

NS_ASSUME_NONNULL_END
