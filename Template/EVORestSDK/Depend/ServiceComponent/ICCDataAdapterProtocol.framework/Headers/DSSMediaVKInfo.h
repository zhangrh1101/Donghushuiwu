//
//  DSSMediaVKInfo.h
//  DataAdapterProtocol
//
//  Created by 朱枫 on 2018/6/27.
//  用于记录I帧加密的秘钥

#import <Foundation/Foundation.h>

@interface DSSMediaVKInfo : NSObject
@property (nonatomic, copy, nullable) NSString *videoKey;//vk使用base64编码
@property (nonatomic, copy, nullable) NSString *deviceId;
@property (nonatomic, assign) NSTimeInterval startTime;
@property (nonatomic, assign) NSTimeInterval endTime;
@property (nonatomic, copy, nullable) NSString *algorithm;
@property (nonatomic, copy, nullable) NSString *vkId;//id使用base64编码
@property (nonatomic, copy, nullable) NSString *vkIdAndVk;//为了解决播放库拼接的问题上层直接解码拼接，再用Base64编码

@end


@interface DSSPlateMediaVKInfo : NSObject
@property (nonatomic, copy, nullable) NSString *vkId;
@property (nonatomic, copy, nullable) NSString *vkValue;
@property (nonatomic, copy, nullable) NSString *algorithm;
@property (nonatomic, copy, nullable) NSString *createDate;
@end
