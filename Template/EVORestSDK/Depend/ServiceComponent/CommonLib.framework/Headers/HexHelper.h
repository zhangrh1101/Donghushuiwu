//
//  HexHelper.h
//  CommonLib
//
//  Created by chenfeifei on 2019/8/5.
//  Hex

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HexHelper : NSObject

//encode
+ (NSString *)hex:(NSData *)data useLower:(BOOL)isOutputLower;


//decode 
+ (NSData *)hex:(NSString *)data;


@end

NS_ASSUME_NONNULL_END
