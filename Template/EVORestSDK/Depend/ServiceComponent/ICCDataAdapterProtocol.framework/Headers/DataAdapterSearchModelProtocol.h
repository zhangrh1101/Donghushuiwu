//
//  DataAdapterSearchModelProtocol.h
//  AESCrypt-ObjC
//
//  Created by he_jinbiao on 2018/3/9.
//

#import <Foundation/Foundation.h>

@protocol DataAdapterSearchModelProtocol <NSObject>
#pragma mark--register function to IDHModuleProtocol
- (NSArray*)getRecentSearchModelsRecord:(NSError**)error;
    
#pragma mark--register function to IDHModuleProtocol
- (BOOL)addSearchModuleRecord:(NSString *)searchkey error:(NSError**)error;
    
#pragma mark--register function to IDHModuleProtocol
- (BOOL)deleteSearchModuleRecord:(NSString *)searchKey error:(NSError**)error;
    
#pragma mark--register function to IDHModuleProtocol
- (BOOL)clearAllSearchModuleRecords;
    
#pragma mark--register function to IDHModuleProtocol
- (BOOL)addSearchModuleRecords:(NSArray *)keyArr error:(NSError**)error;

@end
