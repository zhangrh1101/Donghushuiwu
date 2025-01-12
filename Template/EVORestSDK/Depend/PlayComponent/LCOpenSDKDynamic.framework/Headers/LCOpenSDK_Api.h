//
//  LCOpenSDK_Api.h
//  LCOpenSDK
//
//  Created by chenjian on 16/5/16.
//  Copyright (c) 2016年 lechange. All rights reserved.
//

#ifndef LCOpenSDK_LCOpenSDK_Api_h
#define LCOpenSDK_LCOpenSDK_Api_h
#import <Foundation/Foundation.h>
#import "LCOpenSDK_Define.h"

#pragma mark - 协议类型
typedef NS_ENUM(NSInteger, E_PROTO_TYPE)
{
    HTTP,
    HTTPS
};

@interface LCOpenSDK_Api: NSObject
@property (nonatomic) BOOL isAhEnable;

/**
 *  获取LCOpenSDK_Api单例
 *
 *  @return LCOpenSDK_Api单例指针
 */
+ (LCOpenSDK_Api*) shareMyInstance;

/**
 *  初始化LCOpenSDK_Api
 *
 *  @param addr   域名
 *  @param port   端口
 *  @param caPath CA证书路径
 *
 *  @return LCOpenSDK_Api指针
 */
- (id)initOpenApi:(NSString*)addr port:(NSInteger)port CA_PATH:(NSString*)caPath protoType:(E_PROTO_TYPE)type;

/**
*  设置证书开关和路径
*
*  @param caSwitch 证书开关。NO：关闭所有证书验证；YES：若caPath非空，使用设置的证书，否则使用组件内部默认的证书。
*  @param caPath CA证书路径（同initOpenApi接口），可更新证书路径
*/
- (void)setCaInfo:(BOOL)caSwitch caPath:(NSString* )caPath;

/**
*  设置uri的prefix
*
*  @param uriPrefix uri的前缀，起始字符均为/，如/gateway/media-paas/media/
*/
- (void)setUriPrefix:(NSString *)uriPrefix;

/**
*  设置appId & appSecret
*
*  @param appId   appId
*  @param appSecret   appSecret
*/
- (void)setAppId:(NSString *)appId appSecret:(NSString *)appSecret;

/**
 * 设置COS Auth
 *
 * @param cosAuth cosAuth
 */
- (void)setCosAuth:(NSString *)cosAuth;

/**
 *  LCOpenSDK_Api请求返回值
 *
 *  @param req     结构化请求体
 *  @param resp    结构化返回体
 *  @param timeout 超时时长
 *
 *  @return      0, 接口调用成功
 *              -1, 接口调用失败
 */
- (NSInteger)request:(void*)req resp:(void*)resp timeout:(NSInteger)timeout;
/**
 *  反初始化LCOpenSDK_Api接口
 */
- (void)uninitOpenApi;

/**
 * 安恒初始化
 */
- (void)initAhService;

#pragma mark - Encrypt & Decrypt

/**
 DCloud 报警网关设备密码加密
 @param encBuf【IN】 待加密数据
 @param key【IN】 加密原始密钥
 @param iv【IN】  随机向量
 @param out【OUT】 加密后输出数据
 @return 加密结果(see DECRYPT_RESULT)
 */
- (E_ENCRYPT_RESULT)encryptDevPwd:(NSData *)encBuf key:(NSData *)key iv:(NSData *)iv encBufOut:(NSData **)out;

/**
 DCloud 报警网关设备密码解密
 @param decBuf【IN】 待解密数据
 @param key【IN】 解密原始密钥
 @param iv【IN】  随机向量
 @param decBufOut【OUT】 解密后输出数据
 @return 解密结果(see DECRYPT_RESULT)
 */
- (E_DECRYPT_RESULT)decryptDevPwd:(NSData *)decBuf key:(NSData *)key iv:(NSData *)iv decBufOut:(NSData **)out;

/**
 * DCloud 设备信息加密算法
 *
 * @param source 待解密数据
 * @param sDevId [in] 设备序列号
 * @param sAppSecret [in] app secret
 * @param out 解密后输出数据
 * @return 解密结果(see DECRYPT_RESULT)
 */
- (NSString *)encryptDeviceInfoData:(NSString *)source deviceID:(NSString *)sDevId appSecret:(NSString *)sAppSecret out:(NSString **)out;


@end
#endif
