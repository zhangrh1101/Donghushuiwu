//
//  DataAdapterTVWallProtocol.h
//  Pods
//
//  Created by zf's on 2017/11/25.
//
#import <Foundation/Foundation.h>
#import "DSSGuardPersonInfo.h"
#import "DSSGuardPersonDepartmentInfo.h"
#import "DSSGuardPersonGroupInfo.h"
#import "GuardDoorComand.h"
#import "DataAdapterCoreProtocol.h"
#import "DataAdapterRemoteNotifyProtocol.h"
#import "DSSUserInfo.h"
#import "DSSGuardDoorStatus.h"
#import "DSSDoorHistoryInfo.h"
typedef void (^remoteNotifyBlock)(ADAPTER_NOTIFY_ACTION, id _Nullable );




@protocol DataAdapterEntranceGuardProtocol <NSObject>
#pragma mark--register function to IDHModuleProtocol
- (void)setRemoteNotifyBlock:(void (^ _Nullable)(ADAPTER_NOTIFY_ACTION, id _Nullable))remoteNotifyBlock;
#pragma mark--register function to IDHModuleProtocol
//- (NSMutableArray<GuardPersonGroupInfo *> *)loadGuardPersonGroupList:(NSError**)error;

#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSGuardPersonDepartmentInfo *> * _Nullable)loadGuardPersonDepartmentList:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSGuardPersonInfo *> *_Nullable)loadGuardPersonList:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (BOOL)loadGuardPersonPicList:(NSMutableArray *_Nullable)personListArr dic:(NSMutableDictionary *_Nullable)dic error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (UIImage *_Nullable)loadGuardPersonPicWithPersonInfo:(DSSGuardPersonInfo *_Nullable)personInfo;

#pragma mark--register function to IDHModuleProtocol
- (DSSGuardPersonInfo *_Nullable)loadGuardPersonInfoDetail:(DSSGuardPersonInfo *_Nullable)guardPersonInfo withPersonId:(NSString *_Nullable)personId error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (BOOL)deleteGuardUsersByPersonIdArray:(NSArray<NSString *> *_Nullable)personIdArray error:(NSError*_Nullable*_Nullable)error;

/**
 门禁操作
 @param channelId 通道id
 @param comand 门禁操作类型
 @param startTime 开始时间
 @param endTime 结束时间
 @param error 错误
 @return BOOL: YES-操作成功 NO-操作失败
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL)setDoorCmdWithChannelId:(NSString *_Nullable)channelId comand:(MBL_DOOR_COMAND)comand startTime:(NSTimeInterval)startTime endTime:(NSTimeInterval)endTime error:(NSError*_Nullable*_Nullable)error;

/**
 呼梯，把电梯呼叫到用户所在楼层
 @param roomINumber 房间号
 @param error 错误
 @return BOOL: YES-操作成功 NO-操作失败
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL)callElevatorWithError:(NSError*_Nullable*_Nullable)error;
@optional
/**注册mq的主题
 * @param userId 用户id
 */
#pragma mark--register function to IDHModuleProtocol
- (void)registerGuardTopic:(DSSUserInfo *_Nullable)userInfo;
/**注销mq的主题
 * @param userId 用户id
 */
#pragma mark--register function to IDHModuleProtocol
- (void)unRegisterGuardTopic:(DSSUserInfo *_Nullable)userInfo;

/**
获取门禁关联视频通道

 @param sourceId 门禁通道Id
 @param error error
 @return 关联的视频通道
 */
#pragma mark--register function to IDHModuleProtocol
- (NSArray *_Nullable)getVideoRealation:(NSString *_Nullable)sourceId error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSArray *_Nullable)getDoorHistoryInfoByPersonId:(NSString *_Nullable)personId channelIds:(NSArray *_Nullable)channelIds error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (BOOL)globalControlDoors:(NSArray *_Nullable)channelIds controlType:(GlobalControlType)controlType error:(NSError*_Nullable*_Nullable)error;

- (NSString *_Nonnull)getAlarmAccessRecordInfoPic:(NSString *_Nonnull)alarmCode;
@end
