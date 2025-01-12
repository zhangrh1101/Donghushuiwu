//
//  MD5Helper.h
//  CommonLib
//
//  Created by ding_qili on 15/7/16.
//  Copyright (c) 2015年 ding_qili. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MD5HelperEx : NSObject
/**
 *  MD5 加密
 *
 *  @param digest <#digest description#>
 *
 *  @return 小写字符串
 */
+(NSString*) MD5:(const char*)digest;

+(NSString*) PSDK_GetSignature_MD5:(NSString *)randomKey realm:(NSString *)realm username:(NSString *)username password:(NSString *)password;

+(NSString*) PSDK_UpdateSignature:(NSString *)token;
@end
