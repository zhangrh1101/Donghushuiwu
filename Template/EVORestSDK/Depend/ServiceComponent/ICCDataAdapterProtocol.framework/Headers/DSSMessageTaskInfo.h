//
//  DSSMessageTaskInfo.h
//  DataAdapterProtocol
//
//  Created by 32943 on 2021/2/26.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger,MBL_MESSAGE_TASK_STATE){
    MBL_MESSAGE_TASK_STATE_ALL = -1,
    MBL_MESSAGE_TASK_STATE_UNFINISHED = 1,  //未完成
    MBL_MESSAGE_TASK_STATE_FINISH = 2,  //已完成
    MBL_MESSAGE_TASK_STATE_DEADLINE     = 3,  //终止
};

typedef NS_ENUM(NSInteger,MBL_MESSAGE_TASK_HANDLE_STATE){
    MBL_MESSAGE_TASK_HANDLE_STATE_ALL = -1,
    MBL_MESSAGE_TASK_HANDLE_STATE_UNPEND = 0,  //未处理
    MBL_MESSAGE_TASK_HANDLE_STATE_PEND = 1,  //已处理
};

@interface DSSMessageTaskInfo : NSObject
@property (nonatomic, assign) NSInteger taskId;
@property (nonatomic, copy) NSString * _Nullable taskCode;      //任务编号
@property (nonatomic, copy) NSString * _Nullable title; //标题
@property (nonatomic, copy) NSString * _Nullable taskLink;//任务环节
@property (nonatomic, copy) NSString * _Nullable createUserName;//创建者
@property (nonatomic, copy) NSString * _Nullable transmitUserName;//发送者
@property (nonatomic, copy) NSString * _Nullable recipientUserName;//处理人
@property (nonatomic, copy) NSString * _Nullable transmitDate;//任务接收时间
@property (nonatomic, copy) NSString * _Nullable createTime;//任务创建时间
@property (nonatomic, copy) NSString * _Nullable taskType;//任务类型
@property (nonatomic, assign) MBL_MESSAGE_TASK_STATE taskState;//任务状态
@property (nonatomic, assign) MBL_MESSAGE_TASK_HANDLE_STATE handleState;//是否处理
@property (nonatomic, copy) NSString * _Nullable deadline;//截止时间
@property (nonatomic, copy) NSString * _Nullable webUrl;//任务编号
@property (nonatomic, copy) NSString * _Nullable appUrl;//任务编号
@property (nonatomic, assign) NSInteger timeApart;//未处理的时间
@property (nonatomic, assign) NSInteger recallDelete;//召回标志

@end

