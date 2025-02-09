//
//  LCOpenSDK_Utils.h
//  LCOpenSDK
//
//  Created by chenjian on 16/7/14.
//  Copyright (c) 2016年 lechange. All rights reserved.
//

#ifndef LCOpenSDK_LCOpenSDK_Utils_h
#define LCOpenSDK_LCOpenSDK_Utils_h
#import <Foundation/Foundation.h>
/*
*   解密结果
*   0, 表示解密成功
*   1, 表示完整性校验失败
*   2, 表示密钥错误
*   3, 表示图片非加密
*   4, 不支持的加密方式
*   5, 缓冲区长度不够
*   99,内部错误
*/
typedef NS_ENUM(NSInteger, LC_ENCRYPT_CODE)
{
    ENCRYPT_SUCCESS = 0,
    ENCRYPT_CHECK_FAIL,
    ENCRYPT_KEY_ERROR,
    ENCRTPT_NONE,
    ENCRYPT_BUFFER_LACK,
    ENCRYPT_INSIDE_ERROR = 99
};

//日志等级
typedef NS_ENUM(NSInteger, E_LOG_LEVEL)
{
    LOGLEVEL_FATAL,     //致命错误
    LOGLEVEL_ERR,       //错误
    LOGLEVEL_WARNING,   //可能导致出错
    LOGLEVEL_INFO,      //当前运行状态
    LOGLEVEL_DEBUG,     //详细调试信息
    LOGLEVEL_ALL,       //所有日志信息
};

@interface LCOpenSDK_Utils: NSObject

/**
*数据解密
*
*@param pSrcBufIn     [in]  待解密数据内容
*@param srcBufLenIn   [in]  数据实际长度
*@param devKeyIn      [in]  解密密钥
*@param pDestBufOut   [out] 解密后数据内容
*@param destBufLenOut [out] 解密后数据长度
*
*@return 解密结果
*   0, 表示解密成功
*   1, 表示完整性校验失败
*   2, 表示密钥错误
*   3, 表示图片非加密
*   4, 不支持的加密方式
*   5, 缓冲区长度不够
*   99,内部错误
*/

-(NSInteger) decryptPic:(NSData *)pSrcBufIn deviceID:(NSString*)deviceID key:(NSString*)key bufOut:(NSData**)pDestBufOut;

+ (void)setSaveStreamFlag:(BOOL)isOpen;

+ (BOOL)getSaveStreamFlag;

+ (void)setMobileLogFile:(NSString*)logFilePath maxSize:(NSUInteger)maxSize;

/*
 *设置日志级别
 *备注：需要在LCOpenSDK_LoginManager中的init接口之后调用；
 *否则，无法记录P2P日志，需要在上述init接口后重新调用此接口。
 *
 */
+ (void)setMobileLogLevel:(E_LOG_LEVEL)logLevel logTag:(NSString*)logTag;

+ (void)setPlaySDKLogLevel:(E_LOG_LEVEL)logLevel;

+ (void)destroyThreadPool;

/*
 *设置DNS服务器的地址;
 *备注，需要在拉流之前调用该接口，否则无法走入到DNS自动分配的机制里，会产生较久的卡顿；
 */
+ (void)setCustomDNS:(NSString *)strDNS timeout:(NSInteger)timeoutMs;
@end

#endif
