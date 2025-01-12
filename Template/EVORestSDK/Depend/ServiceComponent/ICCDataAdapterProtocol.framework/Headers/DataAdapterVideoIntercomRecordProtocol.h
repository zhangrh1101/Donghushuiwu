//
//  DataAdapterVideoIntercomRecordProtocol.h
//  DataAdapterProtocol
//
//  Created by hsd on 2019/8/8.
//

#import <Foundation/Foundation.h>
#import "DSSVideoIntercomRecordInfo.h"


@protocol DataAdapterVideoIntercomRecordProtocol <NSObject>
#pragma mark--register function to IDHModuleProtocol
-(NSArray<DSSVideoIntercomRecordInfo*> *)getCallRecordList:(NSError**)error;
#pragma mark--register function to IDHModuleProtocol
- (BOOL)saveVideoIntercomRecord:(DSSVideoIntercomRecordInfo *)record error:(NSError**)error;
#pragma mark--register function to IDHModuleProtocol
- (BOOL)addVideoIntercomRecord:(DSSVideoIntercomRecordInfo *)record error:(NSError**)error;
#pragma mark--register function to IDHModuleProtocol
- (BOOL)deleteVideoIntercomRecord:(DSSVideoIntercomRecordInfo *)record error:(NSError**)error;
#pragma mark--register function to IDHModuleProtocol
- (BOOL)deleteVideoIntercomRecords:(NSArray <DSSVideoIntercomRecordInfo *>*)records error:(NSError**)error;
#pragma mark--register function to IDHModuleProtocol
- (BOOL)clearRecords:(NSError**)error;

@end

