//
//  BRMDeviceGetCurrentMediaVKResponseObjc.h
//  ICCDataAdapterDevice
//
//  Created by m1+226507 on 2023/2/4.
//

#import <Foundation/Foundation.h>

@interface BRMDeviceGetCurrentMediaVKResponseObjc : NSObject

/// 秘钥ID
@property (nonatomic, nullable, copy) NSString *vkId;
/// 秘钥
@property (nonatomic, nullable, copy) NSString *vkValue;
/// 加密算法
@property (nonatomic, nullable, copy) NSString *algorithm;
/// 生成时间，时间戳（秒）
@property (nonatomic, nullable, copy) NSString *createDate;

@end
