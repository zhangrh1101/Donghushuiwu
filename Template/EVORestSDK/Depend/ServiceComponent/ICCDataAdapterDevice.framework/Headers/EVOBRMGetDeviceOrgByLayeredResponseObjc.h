//
//  EVOBRMGetDeviceOrgByLayeredResponseObjc.h
//  ICCDataAdapterDevice
//
//  Created by m1+226507 on 2023/2/4.
//

#import <Foundation/Foundation.h>

@class EVOBRMGetDeviceOrgByLayeredResponseDataValueObjc;
@class EVOBRMGetDeviceOrgByLayeredResponseDataValueOrganizationObjc;
@class EVOBRMGetDeviceOrgByLayeredResponseDataValueDeviceObjc;
@class EVOBRMGetDeviceOrgByLayeredResponseDataValueChannelObjc;

@interface EVOBRMGetDeviceOrgByLayeredResponseObjc : NSObject

@property (nonatomic, nullable, strong) EVOBRMGetDeviceOrgByLayeredResponseDataValueObjc *value;

@end

@interface EVOBRMGetDeviceOrgByLayeredResponseDataValueObjc : NSObject

@property (nonatomic, nullable, strong) NSArray<EVOBRMGetDeviceOrgByLayeredResponseDataValueOrganizationObjc *> *organizations;

@property (nonatomic, nullable, strong) NSArray<EVOBRMGetDeviceOrgByLayeredResponseDataValueDeviceObjc *> *device;

@property (nonatomic, nullable, strong) NSArray<EVOBRMGetDeviceOrgByLayeredResponseDataValueChannelObjc *> *channel;

@end

@interface EVOBRMGetDeviceOrgByLayeredResponseDataValueOrganizationObjc : NSObject

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
/// 是否父节点
@property (nonatomic, assign) BOOL isParent;

@end

@interface EVOBRMGetDeviceOrgByLayeredResponseDataValueDeviceObjc : NSObject

/// 设备编码
@property (nonatomic, nullable, copy) NSString *id;
/// 上级节点编码
@property (nonatomic, nullable, copy) NSString *pId;
/// 排序码
@property (nonatomic, assign) NSInteger sort;

@end

@interface EVOBRMGetDeviceOrgByLayeredResponseDataValueChannelObjc : NSObject

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

@end
