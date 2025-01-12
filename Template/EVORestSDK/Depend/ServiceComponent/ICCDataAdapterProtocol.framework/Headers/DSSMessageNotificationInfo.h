//
//  DSSMessageNotificationInfo.h
//  DataAdapterProtocol
//
//  Created by 32943 on 2021/2/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger,MBL_MESSAGE_INFO_STATE){
    MBL_MESSAGE_INFO_STATE_ALL = -1,
    MBL_MESSAGE_INFO_STATE_UNREAD = 0,  //未读
    MBL_MESSAGE_INFO_STATE_READ = 1,  //已读
};

@interface DSSMessageNotificationInfo : NSObject
@property (nonatomic, assign) NSInteger infoId;
@property (nonatomic, copy) NSString * _Nullable infoCode;      //通知编号
@property (nonatomic, copy) NSString * _Nullable title; //标题
@property (nonatomic, copy) NSString * _Nullable createUserName;//创建者
@property (nonatomic, copy) NSString * _Nullable transmitDate;//通知接收时间
@property (nonatomic, copy) NSString * _Nullable createTime;//通知创建时间
@property (nonatomic, copy) NSString * _Nullable infoType;//通知类型
@property (nonatomic, assign) MBL_MESSAGE_INFO_STATE infoState;//通知状态
@property (nonatomic, copy) NSString * _Nullable handleDate;//处理时间
@property (nonatomic, copy) NSString * _Nullable webUrl;//web
@property (nonatomic, copy) NSString * _Nullable appUrl;//app
@property (nonatomic, assign) NSInteger timeApart;//未处理的时间
@property (nonatomic, copy) NSDictionary * _Nullable content;//原始内容

@end

@interface DSSMessageNotificationDetailInfo : DSSMessageNotificationInfo
@property (nonatomic, copy) NSString * _Nullable infoContent;      //内容
@end

NS_ASSUME_NONNULL_END
