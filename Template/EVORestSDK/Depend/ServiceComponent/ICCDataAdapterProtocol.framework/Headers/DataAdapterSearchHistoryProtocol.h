//
//  DataAdapterSearchHistoryProtocol.h
//  Pods
//
//  Created by 32943 on 2017/9/21.
//
//

#import <Foundation/Foundation.h>

@protocol DataAdapterSearchHistoryProtocol <NSObject>

#pragma mark--register function to IDHModuleProtocol
- (NSArray *)getRecentSearchRecords:(NSError**)error;

#pragma mark--register function to IDHModuleProtocol
- (BOOL)addSearchRecord:(NSString *)searchkey error:(NSError**)error;

#pragma mark--register function to IDHModuleProtocol
- (BOOL)deleteSearchRecord:(NSString *)searchKey error:(NSError**)error;

#pragma mark--register function to IDHModuleProtocol
- (BOOL)clearAllSearchHistoryRecords;

#pragma mark--register function to IDHModuleProtocol
- (BOOL)addSearchRecords:(NSArray *)keyArr error:(NSError**)error;
@end

