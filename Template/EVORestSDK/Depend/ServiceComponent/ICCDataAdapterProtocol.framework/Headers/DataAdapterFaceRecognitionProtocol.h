//
//  DataAdapterSubSystemArmProtocol.h
//  DataAdapterProtocol
//
//  Created by chenfeifei on 2018/9/20.
//


#import <Foundation/Foundation.h>
#import "DSSUserInfo.h"
#import "DSSFaceRecognitionInfo.h"
//#import "DSSFaceDataBaseInfo.h"
#import "DataAdapterRemoteNotifyProtocol.h"
#import "DSSFaceStatisticsInfo.h"

typedef void (^remoteNotifyBlock)(ADAPTER_NOTIFY_ACTION, id _Nullable);

@protocol DataAdapterFaceRecognitionProtocol <NSObject>
#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSFaceRepositoryInfo *> *_Nullable)getFaceRepositoryInfoList:(NSError *_Nullable*_Nullable)error;
#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSFacePersonTypeInfo *> *_Nullable)getFacePersonTypeInfoList:(NSError *_Nullable*_Nullable)error;
#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSRepositoryFaceInfo *>*_Nullable)getRepositoryFaceInfoListWithImage:(NSString *_Nonnull)imageData similarity:(NSString *_Nonnull)similarity repositoryId:(NSString *_Nonnull)repositoryId pageNumber:(NSInteger)pageNumber pageSize:(NSInteger)pageSize error:(NSError *_Nullable*_Nullable)error;
#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSRepositoryFaceInfo *>*_Nullable)getRepositoryFaceInfoListWithRepositoryId:(NSString *_Nonnull)repositoryId beginAge:(NSString *_Nonnull)beginAge endAge:(NSString *_Nonnull)endAge gender:(NSString *_Nonnull)gender personId:(NSString *_Nonnull)personId personName:(NSString *_Nonnull)personName personTypeIds:(NSArray<NSString *> *_Nonnull)personTypeIds pageNumber:(NSInteger)pageNumber pageSize:(NSInteger)pageSize error:(NSError *_Nullable*_Nullable)error;
#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSSnapLibraryFaceInfo *>*_Nullable)getSnapLibraryFaceInfoListWithImage:(NSString *_Nonnull)imageData similarity:(NSString *_Nonnull)similarity channelIds:(NSArray<NSString *> *_Nonnull)channelIds beginTime:(NSInteger)beginTime endTime:(NSInteger)endTime pageNumber:(NSInteger)pageNumber pageSize:(NSInteger)pageSize error:(NSError *_Nullable*_Nullable)error;
#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSSnapLibraryFaceInfo *>*_Nullable)getSnapLibraryFaceInfoListWithChannelIds:(NSArray<NSString *> *_Nonnull)channelIds beginAge:(NSString *_Nonnull)beginAge endAge:(NSString *_Nonnull)endAge gender:(NSString *_Nonnull)gender beginTime:(NSInteger)beginTime endTime:(NSInteger)endTime pageNumber:(NSInteger)pageNumber pageSize:(NSInteger)pageSize error:(NSError *_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSArray<NSDictionary<NSString*,NSString*>*> *_Nullable)getNationalityDic:(NSError *_Nullable*_Nullable)error;
/**
 登录成功之后需要调用的函数
 invoke after login
 @param userInfo userInfo
 */
//#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginInExcute:(DSSUserInfo *_Nonnull)userInfo;

/**
 登出成功之后需要调用的函数
 invoke after logout
 @param userInfo userInfo
 */
//#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginOutExcute:(DSSUserInfo *_Nonnull)userInfo;
#pragma mark--register function to IDHModuleProtocol
- (void)setRemoteNotifyBlock:(void (^_Nullable)(ADAPTER_NOTIFY_ACTION, id _Nullable))remoteNotifyBlock;

#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSFaceRepositoryInfo *>*_Nullable)queryFullFaceRepositoryList:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSRepositoryFaceInfo *>*_Nullable)queryFaceListByRepositoryId:(NSString *_Nonnull)repositoryId searchKey:(NSString *_Nullable)searchKey error:(NSError*_Nullable*_Nullable)error;
#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSRepositoryFaceInfo *>*_Nullable)queryFaceListNextPage:(NSMutableArray*_Nonnull)faceArray error:(NSError*_Nullable*_Nullable)error;
#pragma mark--register function to IDHModuleProtocol
- (DSSRepositoryFaceInfo *_Nullable)queryFaceinfo:(NSString*_Nonnull)faceId error:(NSError*_Nullable*_Nullable)error;
#pragma mark--register function to IDHModuleProtocol
- (BOOL)deleteFace:(NSString*_Nonnull)faceId error:(NSError*_Nullable*_Nullable)error;
#pragma mark--register function to IDHModuleProtocol
- (BOOL)faceListCanloadmore;
#pragma mark--register function to IDHModuleProtocol
- (BOOL)registFaceInfo:(DSSRepositoryFaceInfo *_Nonnull)faceInfo inRepository:(NSString *_Nonnull)repositoryId error:(NSError*_Nullable*_Nullable)error;
#pragma mark--register function to IDHModuleProtocol
- (BOOL)updateFaceInfo:(DSSRepositoryFaceInfo *_Nonnull)faceInfo withPersonId:(NSString *_Nonnull)personId inRepository:(NSString *_Nonnull)repositoryId error:(NSError*_Nonnull*_Nonnull)error;

- (DSSFaceStatisticsInfo *_Nullable)getFaceStatisticsInfoWithChannels:(NSArray<NSString*> *_Nonnull)channels type:(DSSFaceStatisticsType)type timeType:(DSSFaceStatisticsTimeType)timeType styleType:(DSSFaceStatisticsStyleType)styleType time:(NSTimeInterval)time error:(NSError*_Nullable*_Nullable)error;
@end


