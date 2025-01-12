//
//  GuardPersonDepartmentInfo.h
//  MobileBaseLineSDK
//
//  Created by zf's on 2018/1/18.
//

#import <Foundation/Foundation.h>

@interface DSSGuardPersonDepartmentInfo : NSObject
@property(nonatomic,copy)NSString* departmentId;//用户部门id
@property(nonatomic,copy)NSString* departmentName;//用户部门名称
@property(nonatomic,copy)NSString* parentId;//父部门Id
@property(nonatomic,copy)NSString* parentName;//父部门名称
@property(nonatomic,assign)NSInteger childNum;//子部门数量
@end
