//
//  EVOBRMGetDeviceOrgResponseObjc.h
//  ICCDataAdapterDevice
//
//  Created by m1+226507 on 2023/2/4.
//

#import <Foundation/Foundation.h>

@class EVOBRMGetDeviceOrgResponseDataOrganizationObjc;
@class EVOBRMGetDeviceOrgResponseDataOrganizationDeviceObjc;
@class EVOBRMGetDeviceOrgResponseDataOrganizationChannelObjc;

@interface EVOBRMGetDeviceOrgResponseObjc : NSObject

@property (nonatomic, nullable, strong) NSArray<EVOBRMGetDeviceOrgResponseDataOrganizationObjc *> *organizations;

@end

@interface EVOBRMGetDeviceOrgResponseDataOrganizationObjc : NSObject

/// 001当前节点的编码
@property (nonatomic, nullable, copy) NSString *code;
/// 当前节点的父编码（为001时候表明为根节点）
@property (nonatomic, nullable, copy) NSString *parentCode;
/// root节点名称
@property (nonatomic, nullable, copy) NSString *name;
/// 下级组织的数量
@property (nonatomic, assign) NSInteger orgsCount;
/// 组织节点排序码
@property (nonatomic, assign) NSInteger sort;
/// 组织序列号
@property (nonatomic, nullable, copy) NSString *sn;
/// 域ID
@property (nonatomic, assign) NSInteger domainId;

@property (nonatomic, nullable, strong) NSArray<EVOBRMGetDeviceOrgResponseDataOrganizationDeviceObjc *> *device;

@property (nonatomic, nullable, strong) NSArray<EVOBRMGetDeviceOrgResponseDataOrganizationChannelObjc *> *channel;

@end

@interface EVOBRMGetDeviceOrgResponseDataOrganizationDeviceObjc : NSObject

/// 设备编码
@property (nonatomic, nullable, copy) NSString *id;
/// 上级节点编码
@property (nonatomic, nullable, copy) NSString *pId;
/// 排序码
@property (nonatomic, assign) NSInteger sort;

@property (nonatomic, nullable, copy) NSString *deviceCode;

@end

@interface EVOBRMGetDeviceOrgResponseDataOrganizationChannelObjc : NSObject

/// 通道编码
@property (nonatomic, nullable, copy) NSString *id;
/// 设备编码
@property (nonatomic, nullable, copy) NSString *deviceCode;
/// 所属组织编码
@property (nonatomic, nullable, copy) NSString *ownerCode;
/// 上级节点类型，1=设备，2=组织
@property (nonatomic, assign) NSInteger pIdType;
/// 排序码
@property (nonatomic, assign) NSInteger sort;

@property (nonatomic, nullable, copy) NSString *parentNodeCode;

@property (nonatomic, nullable, copy) NSString *channelCode;

@end
