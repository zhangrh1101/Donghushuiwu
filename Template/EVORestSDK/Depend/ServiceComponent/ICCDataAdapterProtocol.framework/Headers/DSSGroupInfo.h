//
//  GroupInfo.h
//  Pods
//
//  Created by zyx on 17/2/21.
//
//

#import <Foundation/Foundation.h>
#import "DSSBaseInfo.h"
#import "DHThreadSafeMultableArray.h"
#import "DSSDeviceInfo.h"
// groupInfo
@interface DSSGroupInfo : DSSBaseInfo

@property (nonatomic, copy, nullable) NSString* groupid;  ///< 组织id groupId
@property (nonatomic, copy, nullable) NSString* name;     ///< 名称 name
@property (nonatomic, copy, nullable) NSString* parentid;      ///<父节点 parentId
@property (nonatomic, strong, nullable) DHThreadSafeMultableArray<NSString*> *childgroups;  ///< 子组织 child groups
@property (nonatomic, strong, nullable) DHThreadSafeMultableArray<NSString*> *devices;     ///< 子设备 child devices
@property (nonatomic, strong, nullable) DHThreadSafeMultableArray<NSString*> *channels;    ///< 子通道 child channels
@property (nonatomic, assign) NSTimeInterval createTime; ///< create time
@property (nonatomic, assign) int sort; ///< sort
@property (nonatomic, strong, nullable) DHThreadSafeMultableArray<DSSDeviceInfo*> *deviceArr;     ///< 子设备 child deviceArr

// 0：默认，1：升序，2：降序
@property (nonatomic, assign) NSInteger sortedType;

@end

@interface DSSFavGroupInfo : DSSGroupInfo
@property (nonatomic, assign) BOOL hasData;//是否有直属数据
- (int)childNum;
@end

// extend property
extern NSString * _Nullable const isDeviceLoaded; ///< is child devices loaded
extern NSString * _Nullable const isChannelLoaded; ///< is child channels loaded
extern NSString * _Nullable const isGroupInfoLoaded; ///< is child GroupInfo loaded
