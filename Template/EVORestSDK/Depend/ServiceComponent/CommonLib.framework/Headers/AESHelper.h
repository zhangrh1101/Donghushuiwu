//
//  NSData+AES.h
//  CommonLib
//
//  Created by ding_qili on 15/7/17.
//  Copyright (c) 2015年 ding_qili. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AESHelper :NSObject

/**
 *  加密
 *
 *  @param key <#key description#>
 *
 *  @return <#return value description#>
 */
+(NSData*)aES128EncryptWithKey:(NSString*)key data:(NSData *)data;

/**
 *  解密
 *
 *  @param key <#key description#>
 *
 *  @return <#return value description#>
 */
+(NSData*)aES128DecryptWithKey:(NSString*)key data:(NSData *)data;
/**
 *  加密
 *
 *  @param key <#key description#>
 *
 *  @return <#return value description#>
 */
+(NSData*)aES256EncryptWithKey:(NSString*)key data:(NSData *)data;

/**
 *  解密
 *
 *  @param key <#key description#>
 *
 *  @return <#return value description#>
 */
+(NSData*)aES256DecryptWithKey:(NSString*)key data:(NSData *)data;

/**
 *  解密
 *
 *  @param key key description
 *  @param vector 向量
 *
 *  @return <#return value description#>
 */
+(NSData*)aES256DecryptWithKey:(NSString*)key secretVector:(NSString *)vector data:(NSData *)data;

/**
 加密

 @param key key
 @param vector vector
 @param data data
 @return data
 */
+(NSData*)aES256EncryptWithKey:(NSString*)key secretVector:(NSString *)vector data:(NSData *)data;
@end
