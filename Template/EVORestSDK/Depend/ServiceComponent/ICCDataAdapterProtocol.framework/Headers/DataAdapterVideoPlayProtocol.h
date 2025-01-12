//
//  DataAdapterVideoPlayProtocol.h
//  Pods
//
//  Created by 28404 on 2019/6/27.
//
//

#import <Foundation/Foundation.h>
#import "DSSVideoUrlInfo.h"
#import "DSSUserInfo.h"
#import "DSSChannelInfo.h"
#import "DSSRecordInfo.h"
#import "DataAdapterCoreProtocol.h"

@protocol DataAdapterVideoPlayProtocol <NSObject>

/**
 查询通道实时预览地址
 @param channelId 通道id
 @param deviceId 设备id
 @param streamType 码流类型 MBL_STREAM_TYPE
 @param protocolType 码流协议类型 MBL_STREAM_PROTOCOL_TYPE
 @param error 错误
 @return 播放地址信息
 */
#pragma mark--register function to IDHModuleProtocol
- (DSSVideoUrlInfo *)getLivePlayUrlWithChannelId:(NSString *)channelId deviceId:(NSString *)deviceId streamType:(MBL_STREAM_TYPE)streamType protocolType:(MBL_STREAM_PROTOCOL_TYPE)protocolType error:(NSError **)error;
/**
 查询通道录像回放地址
 @param channelId 通道id
 @param deviceId 设备id
 @param streamType 码流类型 MBL_STREAM_TYPE
 @param protocolType 码流协议类型 MBL_STREAM_PROTOCOL_TYPE
 @param source 录像来源 RecordSource
 @param beginDate 开始时间
 @param endDate 结束时间
 @param error 错误
 @return 播放地址信息
 */
#pragma mark--register function to IDHModuleProtocol
- (DSSVideoUrlInfo *)getRecordPlayUrlWithChannelId:(NSString *)channelId deviceId:(NSString *)deviceId streamType:(MBL_STREAM_TYPE)streamType protocolType:(MBL_STREAM_PROTOCOL_TYPE)protocolType source:(RecordSource)source beginDate:(NSDate *)beginDate endDate:(NSDate *)endDate error:(NSError **)error;

/**
 停止播放码流
 @param channelId 通道id
 @param deviceId 设备id
 @param mediaSession dss平台MTS和SS生成的每次视频请求的唯一ID
 @param error 错误
 @return BOOL
 */
#pragma mark--register function to IDHModuleProtocol
- (BOOL)closeStreamWithChannelId:(NSString *)channelId deviceId:(NSString *)deviceId mediaSession:(int)mediaSession error:(NSError **)error;

#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginInExcute:(DSSUserInfo *)userInfo;

#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginOutExcute:(DSSUserInfo *)userInfo;

@end
