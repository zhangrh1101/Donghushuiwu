//
//  VTSSUserGroupInfo.h
//  Pods
//
//  Created by 28404 on 2017/11/9.
//

#import <Foundation/Foundation.h>
#import "DSSBaseInfo.h"
/**
 VTSS用户群组信息
 */
@interface DSSVTSSUserGroupInfo : DSSBaseInfo
@property (nonatomic, copy) NSString *groupId;      ///< 群组ID
@property (nonatomic, copy) NSString *groupNum;     ///< 群组号码
@property (nonatomic, copy) NSString *groupName;    ///< 群组名称
@property (nonatomic, copy) NSString *upperBound;   ///< 成员上限
@end


