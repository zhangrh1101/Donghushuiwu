//
//  EVOBRMGetChannelsCountResponseObjc.h
//  ICCDataAdapterDevice
//
//  Created by m1+226507 on 2023/2/3.
//

#import <Foundation/Foundation.h>

@interface EVOBRMGetChannelsCountResponseObjc : NSObject

/// 组织节点数
@property (nonatomic, assign) NSInteger orgCount;
/// 通道节点数
@property (nonatomic, assign) NSInteger channelCount;
/// 设备节点数
@property (nonatomic, assign) NSInteger deviceCount;
/// 根节点组织编码
@property (nonatomic, nullable, copy) NSString *rootOrgCode;

@end
