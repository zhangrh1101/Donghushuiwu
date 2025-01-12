//
//  DSSVideoShareDeptInfo.h
//  DataAdapterProtocol
//
//  Created by 32943 on 2019/4/28.
//

#import <Foundation/Foundation.h>
#import "DSSBaseInfo.h"
#import "DHThreadSafeMultableArray.h"

@interface DSSVideoShareDeptInfo : DSSBaseInfo

@property (nonatomic, copy, nullable) NSString *deptCode;
@property (nonatomic, copy, nullable) NSString *name;
@property (nonatomic, copy, nullable) NSString *parentCode;
@property (nonatomic, strong, nullable) DHThreadSafeMultableArray<NSString *> *childUserList;
@property (nonatomic, strong, nullable) DHThreadSafeMultableArray<NSString *> *childDeptList;

@end

extern NSString * _Nullable const isChildDeptLoaded; ///< is child GroupInfo loaded
