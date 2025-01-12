//
//  LCOpenSDK_Convert.h
//  LCOpenSDK
//
//  Created by qi sun on 2018/12/28.
//  Copyright © 2018年 Dahua. All rights reserved.
//

#ifndef LCOpenSDK_Convert_h
#define LCOpenSDK_Convert_h

#import <Foundation/Foundation.h>
#import "LCOpenSDK_Define.h"

@protocol LCOpenSDK_ConvertListener;
@interface LCOpenSDK_Convert : NSObject 

/**
 设置监听者
 
 @param listener 监听者(需遵守LCOpenSDK_ConvertListener协议)
 */
- (void)setListener:(id<LCOpenSDK_ConvertListener>)listener;

/**
 开始转码
 
 @param srcFile 原始文件名（带路径）
 @param dstFile 目的文件名（带路径）
 @param mediaType 目标编码格式(参考E_MEDIA_CONVERT_TYPE定义)
 @return 0/非0 成功/失败
 
 @note 异步接口，具体转码进度和结果通过回调通知
 */
- (int)startConvert:(NSString*)srcFile dst:(NSString*)dstFile mediaType:(E_MEDIA_CONVERT_TYPE)mediaType;

/**
 * 设置异步回调参数
 */
- (void) setIndex:(NSInteger)index;

/**
 停止转码
 
 @return 0/非0 成功/失败
 */
- (int)stopConvert;

/**
 * 开始实时流转换，Only For 流转流
 *
 * @param type [in] 目标转出类型
 * @param framerate[in] 输入帧率，裸码流必填
 *
 * @return 是否成功
 *  -1 否
 *  else 是
 *
 */
- (int)startConvertReal:(E_MEDIA_CONVERT_TYPE)type FrameRate:(NSInteger)framerate;

/**
 * 开始实时流转换，Only For 流转流
 *
 * @param type [in] 目标转出类型
 * @param framerate[in] 输入帧率，裸码流必填
 * @param srcFormat[in] 输入原始视频类型，如H264,填写UNKNOWN则与老接口功能相同
 *
 * @return 是否成功
 *  -1 否
 *  else 是
 *
 */
- (int)startConvertRealWithDefiniteFormat:(E_MEDIA_CONVERT_TYPE)type FrameRate:(NSInteger)framerate srcFormat:(NSString*)srcFormat;

/**
 * 输入待转码数据
 *
 * @param data [in] 待解码数据
 * @param len  [in] 待解码数据长度
 *
 * @return 是否成功
 * -1 否
 * else 是
 */
- (int)putData:(void*)data len:(NSInteger)len;

/**
* 输入待转码数据
*
* @param data [in] 待解码数据
* @param len  [in] 待解码数据长度
* @param framerate  [in]
*
* @return 是否成功
* -1 否
* else 是
*/
- (int)putDataWithFramerate:(void*)data len:(NSInteger)len framerate:(NSInteger)framerate;

@end

#endif /* LCOpenSDK_Convert_h */
