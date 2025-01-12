//
//  DataAdapterGMCommonMessageProtocol.h
//  DataAdapterProtocol
//
//  Created by yaochi on 2021/10/8.
//

#import <Foundation/Foundation.h>
#import "DSSMessageInfo.h"
#import "DataAdapterRemoteNotifyProtocol.h"
#import "DataAdapterCoreProtocol.h"
#import "DSSUserInfo.h"
#import "DSSMessageFilterInfo.h"
typedef void (^remoteNotifyBlock)(ADAPTER_NOTIFY_ACTION, id _Nullable);

@protocol DataAdapterGMCommonMessageProtocol <NSObject>
#pragma mark--register function to IDHModuleProtocol

-(NSArray <NSString *>*_Nullable)gmCommonSubsystemList:(NSError*_Nullable*_Nullable)error;
-(NSArray <DSSAlarmTypeInfo *>* _Nullable)gmCommonAlarmTypes:(NSString*_Nullable)subSystem error:(NSError*_Nullable*_Nullable)error;

- (DSSAlarmMessageInfo *_Nullable)getGMCommonAlarmMessageInfoByAlarmCode:(NSString *_Nullable)alarmCode error:(NSError *_Nullable*_Nullable)error;
-(NSArray<DSSAlarmMessageInfo*>*_Nullable)queryAlarmMessage:(NSString*_Nullable)subSystem alarmTypes:(NSArray <NSString *>*_Nullable)types dealState:(NSArray <NSString *>*_Nullable)dealState begin:(NSDate*_Nullable)beginTime end:(NSDate*_Nullable)endTime nPageNo:(int)pageNo error:(NSError*_Nullable*_Nullable)error;
-(BOOL)gmClaimAlarm:(NSString*_Nullable)alarmId error:(NSError*_Nullable*_Nullable)error;
-(NSArray <DSSAlarmTypeInfo *>* _Nullable)gmCommonExtendAlarmTypes:(NSString*_Nullable)subSystem alarmType:(NSString *_Nullable)type isAlarm:(BOOL)isAlarm error:(NSError*_Nullable*_Nullable)error;
-(BOOL)gmHandleAlarm:(NSString*_Nullable)alarmId eventGrade:(int)eventGrade extendTypeId:(NSString*_Nullable)extendTypeId status:(int)status memo:(NSString*_Nullable)memo attachmentList:(NSArray <NSString *>*_Nullable)attachmentList precessionIds:(NSArray <NSString *>*_Nullable)precessionIds subSystemName:(NSString*_Nullable)subSystemName taskTitle:(NSString*_Nullable)taskTitle error:(NSError*_Nullable*_Nullable)error;
-(NSArray<DSSGMPersonInfo*>*_Nullable)gmGetPersionList:(NSString*_Nullable)orgCode error:(NSError*_Nullable*_Nullable)error;
-(NSArray<DSSGMPersonTree*>*_Nullable)gmGetPersionTreeWithParentId:(NSString*_Nullable)parentId error:(NSError*_Nullable*_Nullable)error;
-(NSArray<DSSAlarmMessageInfo*>*_Nullable)queryAlarmMessage:(NSString*_Nullable)resourceId pageNo:(NSInteger)pageNo error:(NSError*_Nullable*_Nullable)error;
-(NSArray <DSSGMEventGradeInfo *>* _Nullable)gmCommonEventGrades:(NSError*_Nullable*_Nullable)error;
-(NSArray <NSString *>* _Nullable)gmGetLinkChannels:(NSString*_Nullable)linkId error:(NSError*_Nullable*_Nullable)error;
-(NSArray <NSString *>* _Nullable)oldGetLinkChannels:(NSString*_Nullable)linkId error:(NSError*_Nullable*_Nullable)error;
-(NSString *_Nullable)gmGetEventCount:(NSInteger)handleState date:(NSDate* _Nonnull)date subSystem:(NSString *_Nullable)subSystem error:(NSError*_Nullable*_Nullable)error;
-(NSDictionary *_Nullable)getAlarmRecordCount:(NSDate* _Nonnull)date error:(NSError*_Nullable*_Nullable)error;
- (NSArray<DSSProcessRoleInfo *> * _Nullable)getProcessRoleUser:(NSString *_Nonnull)system error:(NSError * __autoreleasing _Nullable*_Nullable)error;
-(BOOL)gmHandleTaskAlarm:(NSString*_Nullable)alarmId users:(NSString*_Nullable)users error:(NSError*__autoreleasing _Nullable*_Nullable)error;

- (NSString *_Nullable)getGMCommonAlarmTypeName:(NSInteger )alarmType;
//- (NSArray<DSSAlarmMessageInfo *> *_Nullable)getRecentAlarms:(NSTimeInterval)endTime types:(NSArray<NSNumber *>*_Nullable)types error:(NSError *_Nullable*_Nullable)error;
//- (NSArray<DSSAlarmMessageInfo *> *_Nullable)getRecentAlarmsContinue:(NSTimeInterval)endTime types:(NSArray<NSNumber *>*_Nullable)types error:(NSError *_Nullable*_Nullable)error;
- (NSString *_Nullable)getGMConfinInfoLatAndLon:(NSError*_Nullable*_Nullable)error;
@end

