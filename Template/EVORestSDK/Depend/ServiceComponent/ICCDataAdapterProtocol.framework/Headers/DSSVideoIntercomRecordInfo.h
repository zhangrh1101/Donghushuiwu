//
//  DSSVideoIntercomRecordInfo.h
//  Pods
//
//  Created by hsd on 2019/8/8.
//

#import <Foundation/Foundation.h>
#import "DSSBaseInfo.h"


@interface DSSVideoIntercomRecordInfo : DSSBaseInfo
@property (nonatomic, copy, nullable) NSString *time;///<时间
@property (nonatomic, copy, nullable) NSString *number;///<号码
@property (nonatomic, copy, nullable) NSString *duration; ///<通话时长
@property (nonatomic, assign) int callCount; ///<通话次数
@property (nonatomic, copy, nullable) NSString *callType; ///<呼叫类型 (0-呼入,1-呼出)
@property (nonatomic, copy, nullable) NSString *endState; ///<呼叫类型 (0-未接,1-已接)
@property (nonatomic, assign) int recordId; ///<数据编号


@end
