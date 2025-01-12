//
//  IPv6Adapter.h
//  LCManager
//  根据网络环境将IPv4的地址做相应转换
//  Created by zhangyp on 16/5/20.
//  Copyright © 2016年 Dahua. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IPv6Adapter : NSObject

/** 
 *  @brif 根据网络环境将IPv4的地址做相应转换
 *  @param ipv4Url 包含IPv4地址的URL
 *  @param flag     地址是否加上中括号，YES:-地址组装成形如[64:ff9b::785c:84cf]; NO:-地址组装成形如64:ff9b::785c:84cf
 *  @return 如果当前处于IPv6网络，将其中的IPv4地址转换成IPv6地址，
 */
+ (NSString*)adapterIPv4Addr:(NSString*)ipv4Url withBracket:(BOOL)flag;

@end
