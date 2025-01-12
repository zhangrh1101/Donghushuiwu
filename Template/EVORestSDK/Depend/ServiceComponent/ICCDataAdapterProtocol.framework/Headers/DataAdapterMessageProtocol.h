//
//  DataAdapterMessageProtocol.h
//  Pods
//
//  Created by zyx on 17/2/27.
//
//

#import <Foundation/Foundation.h>
#import "DSSMessageInfo.h"
#import "DataAdapterRemoteNotifyProtocol.h"
#import "DataAdapterCoreProtocol.h"
#import "DSSUserInfo.h"
#import "DSSMessageFilterInfo.h"
#import "DataAdapterPassengerFlowProtocol.h"

typedef void (^remoteNotifyBlock)(ADAPTER_NOTIFY_ACTION, id _Nullable);

@protocol DataAdapterMessageProtocol <NSObject>

#pragma mark--register function to IDHModuleProtocol
- (void)setRemoteNotifyBlock:(void (^_Nullable)(ADAPTER_NOTIFY_ACTION, id _Nullable))remoteNotifyBlock;


#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSAlarmMessageInfo*>*_Nullable)getAlarmMessageList:(NSString*_Nonnull)alarmsrcid device:(BOOL)bDevice alarmTypes:(NSMutableArray<NSNumber*>*_Nullable)types deviceType:(NSInteger)devType dealState:(NSArray<NSNumber *> *_Nullable)dealState alarmLevels:(NSArray *_Nullable)levels handleUsers:(NSArray<NSString *> *_Nullable)users begin:(NSDate*_Nullable)beginTime end:(NSDate*_Nullable)endTime error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSAlarmMessageInfo*>*_Nullable)continueGetAlarmMessageList:(NSError *_Nullable*_Nullable)error;

/**
 报警处理

 @param arrayMessageInfo <#arrayMessageInfo description#>
 @param msg <#msg description#>
 @param time <#time description#>
 @param name <#name description#>
 @param error <#error description#>
 @param content 附加的额外信息
 @return <#return value description#>
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL)alarmConfirm:(NSArray<DSSAlarmMessageInfo *>*_Nullable)arrayMessageInfo dealType:(MBL_ALARM_DEAL_STATUS)dealType alarmDealMsg:(NSString *_Nullable)msg confirmTime:(NSDate *_Nullable)time userName:(NSString *_Nullable)name content:(NSString *_Nullable)content error:(NSError *_Nullable*_Nullable)error;

/**
 获取报警类型
 @param error 错误
 @return NSDictionary<NSString, AlarmTypeInfo>B
 */
#pragma mark--register function to IDHModuleProtocol
- (NSDictionary*_Nullable)getAlarmTypes:(NSError *_Nullable*_Nullable)error;
/**
 报警是否需要过滤报警预案 必须实现的接口

 @return <#return value description#>
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL)needMessageToAlarmSchemeFilter;

//登录成功之后需要调用的函数
#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginInExcute:(DSSUserInfo *_Nullable)userInfo;
//登出成功之后需要调用的函数
#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginOutExcute:(DSSUserInfo *_Nullable)userInfo;

//获取设备或者通道所支持的报警类型
#pragma mark--register function to IDHModuleProtocol
- (NSMutableArray *_Nullable)GetAlarmTypesByDeviceType:(NSInteger)deviceType bDevice:(BOOL)device uintType:(NSInteger)type faceFunctionType:(NSInteger)faceType capability:(NSDictionary*_Nullable)capability alarmCategory:(NSInteger)alarmCategory;

//通过报警类型获取报警名称
#pragma mark--register function to IDHModuleProtocol
- (NSString *_Nullable)getAlarmNameByType:(NSInteger)alarmType;

//通过报警类型获取报警信息
#pragma mark--register function to IDHModuleProtocol
- (DSSAlarmTypeInfo *_Nullable)getAlarmTypeInfoByType:(NSInteger)alarmType;

//@optional
//**ZGYH 业务类型订阅
//@param businessType是业务类型的组合 格式如“1，3”表示订阅报警和布撤防
//用逗号隔开 类型见ZGYH_Business_Class
#pragma mark--register function to IDHModuleProtocol
- (BOOL)subScribleBusiness:(NSString *_Nullable)businessType error:(NSError*_Nullable*_Nullable)error;

//获取报警的处理详情 会有很多条情况 因为涉及用户与用户转发流程处理信息
#pragma mark--register function to IDHModuleProtocol
- (NSMutableArray<DSSAlarmHandleInfo*>*_Nullable)getAlarmProceduresByAlarmID:(NSString *_Nullable)alarmID error:(NSError*_Nullable*_Nullable)error;

//获取缓存的报警类型组合
#pragma mark--register function to IDHModuleProtocol
- (NSDictionary*_Nullable)getAlarmTypesByCache;
#pragma mark--register function to IDHModuleProtocol
- (NSArray<NSDictionary<NSString*,NSString*>*> *_Nullable)getAlarmNationalityDic:(NSError*_Nullable*_Nullable)error;
#pragma mark--register function to IDHModuleProtocol
- (DSSFaceMessageInfo *_Nullable)getAlarmExtFaceRecognitionInfo:(NSString *_Nullable)alarmCode error:(NSError*_Nullable*_Nullable)error;

// V8下
- (DSSFaceMessageInfo *_Nullable)getAlarmExtFaceRecognitionInfo:(NSString *_Nonnull)alarmCode alarmDate:(NSInteger)alarmDate deviceCode:(NSString *_Nonnull)deviceCode error:(NSError*_Nullable*_Nullable)error;

//获取滞留报警详情信息
#pragma mark--register function to IDHModuleProtocol
- (DSSGetAlarmStayNumberInfo *_Nullable)getAlarmStayNumberRuleInfo:(NSString *_Nullable)alarmCode error:(NSError *_Nullable*_Nullable)error;


#pragma mark--register function to IDHModuleProtocol
- (NSDictionary<NSString*,NSMutableArray<DSSAlarmLinkVideoChannelInfo*>*>*_Nullable)getAlarmPlanList:(NSError *_Nullable*_Nullable)error;


/**
 获取报警订阅状态

 @param messageType
 @param error error
 @return
 {
 "staus"            :   "订阅状态，0=未订阅，1=全部订阅（默认），2=部分订阅",
 "alarmGroups"    :   ["报警分组编号，部分订阅时有效"]
 }
 */
#pragma mark--register function to IDHModuleProtocol
- (NSDictionary *_Nullable)getAlarmSubscribeStatusWithMessageType:(OfflineMessageType)messageType error:(NSError *_Nullable*_Nullable)error;


/**
 设备报警订阅状态

 @param status 订阅状态，0=未订阅，1=全部订阅（默认），2=部分订阅
 @param messageType
 @param alarmGroups "报警分组编号，部分订阅时有效"
 @param error error
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL)setAlarmSubscribeStatus:(AlarmSubscribeStatus)status messageType:(OfflineMessageType)messageType alarmGroups:(NSString *_Nullable)alarmGroups error:(NSError *_Nullable*_Nullable)error;
/**
 alarmCode获取报警详情

 @param alarmCode 报警唯一ID
 @param error errot
 @return DSSAlarmMessageInfo
 */
#pragma mark--register function to IDHModuleProtocol
- (DSSAlarmMessageInfo *_Nullable)getAlarmMessageInfoByAlarmCode:(NSString *_Nullable)alarmCode alarmDate:(NSInteger)alarmDate error:(NSError *_Nullable*_Nullable)error;

/**获取滞留人数的规则列表
 */
#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSGetStayRuleInfo *>*_Nullable)getStayNumberRuleList:(NSError *_Nullable*_Nullable)error;

/*获取指定滞留人数规则的详情
 */
#pragma mark--register function to IDHModuleProtocol
- (DSSGetStayRuleInfo *_Nullable)getStayNumberRule:(NSInteger)ruleID error:(NSError *_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSAlarmMessageInfo *> *_Nullable)getRecentAlarms:(NSTimeInterval)endTime types:(NSArray<NSNumber *>*_Nullable)types error:(NSError *_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSAlarmMessageInfo *> *_Nullable)getRecentAlarmsContinue:(NSTimeInterval)endTime types:(NSArray<NSNumber *>*_Nullable)types error:(NSError *_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSAlarmMessageInfo *> *_Nullable)getRecentAlarms:(NSTimeInterval)endTime error:(NSError *_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSAlarmMessageInfo *> *_Nullable)getRecentAlarmsContinue:(NSTimeInterval)endTime error:(NSError *_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSAlarmMessageInfo *> *_Nullable)getFilterAlarms:(DSSMessageFilterInfo *_Nullable)filterInfo error:(NSError *_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSAlarmMessageInfo *> *_Nullable)getFilterAlarmsCountinue:(NSError *_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSAlarmMessageInfo *> *_Nullable)getChannelIdAlarms:(DSSMessageFilterInfo *_Nullable)filterInfo error:(NSError *_Nullable*_Nullable)error;

- (void)clearUp;

#pragma mark- 工单消息
/// 查询工单消息列表
/// @param beginTime 开始时间；与结束时间成对传入，若都为空，查所有
/// @param endTime 结束时间
/// @param keyword 关键字，包含消息名称，消息内容；为空时查所有
/// @param messageType 消息类型，为MBL_WORKSHEET_MESSAGE_TYPE_All时查所有
/// @param status 消息已读状态, 为MBL_MESSAGE_READ_STATUS_ALL时查所有
/// @param page 第几页
/// @param pageSize 每页条目数
/// @param error 错误
#pragma mark--register function to IDHModuleProtocol
- (NSArray<DSSWorkSheetMessageInfo *> * _Nullable)getWorkSheetMessageListWithBeginTime:(NSDate *_Nullable)beginTime endTime:(NSDate *_Nullable)endTime keyword:(NSString *_Nullable)keyword messageType:(MBL_WORKSHEET_MESSAGE_TYPE)messageType status:(MBL_MESSAGE_READ_STATUS)status page:(NSInteger)page pageSize:(NSInteger)pageSize error:(NSError *_Nullable*_Nullable)error;

/// 设置工单消息已读
/// @param messageId 消息id
/// @param error 错误
#pragma mark--register function to IDHModuleProtocol
- (BOOL)readWorkSheetMessageWithId:(NSString *_Nullable)messageId error:(NSError *_Nullable*_Nullable)error;

/// 设置所有工单消息已读
/// @param error 错误
#pragma mark--register function to IDHModuleProtocol
- (BOOL)readAllWorkSheetMessage:(NSError *_Nullable*_Nullable)error;
//文件上传
#pragma mark--register function to IDHModuleProtocol
- (NSArray<NSString *> *_Nullable)uploadFile:(NSArray<NSString *> *_Nullable)filePathArr error:(NSError * __autoreleasing _Nullable*_Nullable)error;
- (NSString *_Nullable)uploadImageData:(NSString *_Nullable)imagePath error:(NSError * __autoreleasing _Nullable*_Nullable)error;
- (NSString *_Nullable)uploadCarImageData:(NSString *_Nullable)imagePath error:(NSError * __autoreleasing _Nullable*_Nullable)error;
- (NSDictionary *_Nullable)getErrorMessage:(NSError * __autoreleasing _Nullable*_Nullable)error;
@end
