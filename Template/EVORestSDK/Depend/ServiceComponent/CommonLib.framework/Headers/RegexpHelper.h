//
//  RegexpHelper.h
//  CommonLib
//
//  Created by ding_qili on 15/12/18.
//  Copyright © 2015年 ding_qili. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RegexpHelper : NSObject

///检测是否是手机号码
+ (BOOL)isMobileNumber:(NSString *)mobileNum;

///检测非特殊字符
+ (BOOL)verifyNonSpecialCharacters:(NSString *)str;

@end
