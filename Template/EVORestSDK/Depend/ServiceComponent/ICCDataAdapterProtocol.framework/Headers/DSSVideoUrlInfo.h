//
//  DSSVideoUrlInfo.h
//  Pods
//
//  Created by 28404 on 2019/6/27.
//
//

#import <Foundation/Foundation.h>
#import "DSSBaseInfo.h"

/// 取流协议类型：hls，rtsp，rtmp，ali-cdn，lecheng-cdn，flv
typedef enum:NSUInteger {
    MBL_STREAM_PROTOCOL_TYPE_UNKNOWN = 0,   ///< 未知
    MBL_STREAM_PROTOCOL_TYPE_HLS,           ///< hls
    MBL_STREAM_PROTOCOL_TYPE_RTSP,          ///< rtsp
    MBL_STREAM_PROTOCOL_TYPE_RTMP,          ///< rtmp
    MBL_STREAM_PROTOCOL_TYPE_ALI_CDN,       ///< ali-cdn
    MBL_STREAM_PROTOCOL_TYPE_LECHENG_CDN,   ///< lecheng-cdn
    MBL_STREAM_PROTOCOL_TYPE_FLV,           ///< flv
}MBL_STREAM_PROTOCOL_TYPE;


/**
 视频播放地址信息
 */
@interface DSSVideoUrlInfo: DSSBaseInfo
@property (nonatomic, copy, nullable) NSString *videoUrl;   ///< 视频播放地址
@property (nonatomic, assign) int mediaSession;             ///< dss平台MTS和SS生成的每次视频请求的唯一ID
@end

