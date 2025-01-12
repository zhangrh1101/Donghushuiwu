//
//  DataAdapterRecordProtocol.h
//  Pods
//
//  Created by zyx on 17/2/27.
//
//

#import <Foundation/Foundation.h>
#import "DSSRecordInfo.h"
#import "DSSUserInfo.h"
#import "DataAdapterCoreProtocol.h"

@protocol DataAdapterRecordProtocol <NSObject>
/** 查询某个月份的录像掩码如果当前有录像number为1
 * query record bitmask in a month
 * @pararm channelid 通道id channelid
 * @pararm month 查询月份 month
 * @pararm source 录像来源 record source
 * @pararm error error
 * @return [1, 0, 1, 0, 0 ...]类似的表示该月某天是否有录像
 */
#pragma mark--register function to IDHModuleProtocol
-(NSArray<NSNumber*>*_Nullable) queryRecordBitmask:(NSString*_Nonnull)channelid month:(NSDate*_Nonnull)month source:(RecordSource)source error:(NSError *_Nullable*_Nullable)error;

/** 查询某个时间段的录像记录
  * query recordinfo at a time
 * @pararm channelid 通道id channelid
 * @pararm begin 查询开始时间 begin time
 * @pararm end 查询结束时间 end time
 * @pararm source 录像来源 record source
 * @pararm error error
 * @return 录像列表 recordinfo list
 */
#pragma mark--register function to IDHModuleProtocol
-(NSArray<DSSRecordInfo*>*_Nullable) queryRecord:(NSString*_Nonnull)channelid begin:(NSDate*_Nonnull)begin end:(NSDate*_Nonnull)end source:(RecordSource)source error:(NSError *_Nullable*_Nullable)error;

/** 查询某个时间段的录像记录
  * query recordinfo at a time
 * @pararm channelid 通道id channelid
 * @pararm begin 查询开始时间 begin time
 * @pararm end 查询结束时间 end time
 * @pararm source 录像来源 record source
 * @pararm error error
 * @return 录像列表 recordinfo list
 */
#pragma mark--register function to IDHModuleProtocol
-(NSArray<DSSRecordInfo*>*_Nullable) queryRecord:(NSString*_Nonnull)channelid begin:(NSDate*_Nonnull)begin end:(NSDate*_Nonnull)end source:(RecordSource)source recordType:(MBL_RECORD_TYPE)recordType error:(NSError *_Nullable*_Nullable)error;

/**
 查询某个时间段的录像记录

// @param channelid 通道id channelid
// @param begin 查询开始时间 begin time
// @param end 查询结束时间 end time
// @param source 录像来源 record source
// @param streamType 码流类型 streamType
// @param error error
// @return 录像列表 recordinfo list
// */
//#pragma mark--register function to IDHModuleProtocol
//-(NSArray<DSSRecordInfo*>*_Nullable) queryRecordEX:(NSString*_Nonnull)channelid begin:(NSDate*_Nonnull)begin end:(NSDate*_Nonnull)end source:(RecordSource)source streamType:(StreamType)streamType error:(NSError *_Nullable*_Nullable)error;

/** 查询某个时间段的录像记录（安保子系统），参数与基线相同
 * query recordinfo at a time
 * @pararm channelid 通道id channelid
 * @pararm begin 查询开始时间 begin time
 * @pararm end 查询结束时间 end time
 * @pararm source 录像来源 record source
 * @pararm error error
 * @return 录像列表 recordinfo list
 */
#pragma mark--register function to IDHModuleProtocol
-(NSArray<DSSRecordInfo*>*_Nullable) queryEvoSecurityRecord:(NSString*_Nonnull)channelid begin:(NSDate*_Nonnull)begin end:(NSDate*_Nonnull)end source:(RecordSource)source error:(NSError *_Nullable*_Nullable)error;

/**查询报警联动录像
   query alarm record
 *@param alarmId 报警id alarmId
 *return 录像列表 recordinfo list
*/
#pragma mark--register function to IDHModuleProtocol
-(NSArray<DSSRecordInfo*>*_Nullable)queryAlarmRecord:(NSString *_Nonnull)alarmId error:(NSError *_Nullable*_Nullable)error;
//
//#pragma mark--register function to IDHModuleProtocol
//- (void)afterLoginInExcute:(DSSUserInfo *_Nullable)userInfo;
//
//#pragma mark--register function to IDHModuleProtocol
//- (void)afterLoginOutExcute:(DSSUserInfo *_Nullable)userInfo;

@end
