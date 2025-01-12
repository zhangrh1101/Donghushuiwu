//
//  DataAdapterHistoryProtocol.h
//  Pods
//
//  Created by zyx on 17/3/7.
//
//

#import <Foundation/Foundation.h>
#import "DSSHistoryInfoGroup.h"
#import "DSSHistoryInfo.h"

@protocol DataAdapterHistoryProtocol <NSObject>

#pragma mark--register function to IDHModuleProtocol

- (NSArray<DSSHistoryInfoGroup *> *)getRecentRecordGroups:(NSError **)error;

- (BOOL)addRecordGroup:(DSSHistoryInfoGroup *)historyInfoGroup error:(NSError **)error;

- (BOOL)updataHistoryInfoGroup:(DSSHistoryInfoGroup *)historyInfoGroup error:(NSError **)error;

- (BOOL)deleteRecordGroup:(DSSHistoryInfoGroup *)historyInfoGroup error:(NSError **)error;

- (BOOL)addRecordGroups:(NSArray<DSSHistoryInfoGroup *> *)groupArr error:(NSError **)error;

/// 删除所有记录
- (BOOL)clearAllRecords;

/// 门禁相关
- (BOOL)addDoorControllRecordUntillStatusArrived:(NSString *)channelId isOpen:(BOOL)isOpen error:(NSError **)error;

/// 图片相关
- (UIImage *)getImageWithChannelId:(NSString *)channelId error:(NSError **)error;

- (BOOL)addPicImage:(UIImage *)picImage forChannelId:(NSString *)channelId error:(NSError **)error;

-(BOOL) saveUserLocalInfo:(NSString *)json;

- (NSString*)getLastLocalInfo;

- (BOOL)clearLocalInfoForInterval:(NSInteger)hours;

#pragma mark 原来的方法
- (NSArray *) getRecentRecords:(NSError**) error;
- (BOOL)updataHistoryInfo:(DSSHistoryInfo *)historyInfo error:(NSError *__autoreleasing *)error;
-(BOOL) addRecord:(DSSHistoryInfo*) historyInfo error:(NSError**) error;
-(BOOL)addRecords:(NSArray *)channelArr error:(NSError**) error;
-(BOOL) deleteRecord:(DSSHistoryInfo*) historyInfo error:(NSError**) error;
@end
