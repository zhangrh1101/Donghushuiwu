//
//  VTSSACRecordInfo.h
//  Pods
//
//  Created by 28404 on 2017/11/9.
//

#import <Foundation/Foundation.h>
#import "DSSBaseInfo.h"

/**
 门禁消息
 */
@interface DSSVTSSACRecordInfo : DSSBaseInfo
@property (nonatomic,copy,nullable)  NSString                    *recordId;      ///< 门禁记录ID
@property (nonatomic,copy,nullable)  NSString                    *cardNumber;    ///< 门禁卡号
@property (nonatomic,copy,nullable)  NSString                    *deviceName;    ///< 设备名称
@property (nonatomic,copy,nullable)  NSString                    *deviceCode;    ///< 设备编码
@property (nonatomic,copy,nullable)  NSString                    *swipeTime;     ///< 刷卡时间
@property (nonatomic,assign)NSInteger                   openType;       ///< 开门类型
@property (nonatomic,copy,nullable)  NSString                    *openResult;    ///< 开门结果 0：未开，1：已开

@property (nonatomic,copy,nullable)  NSString                    *hourStr;       ///< 刷卡时间：HH:mm:ss
@end


/**
 报警消息
 */
@interface DSSVTSSAlarmMessageInfo : DSSBaseInfo
@property (nonatomic,copy,nullable)  NSString                    *messageId;     ///< 报警消息ID
@property (nonatomic,copy,nullable)  NSString                    *deviceName;    ///< 设备名称
@property (nonatomic,copy,nullable)  NSString                    *deviceCode;    ///< 设备编码
@property (nonatomic,copy,nullable)  NSString                    *alarmTime;     ///< 报警时间
@property (nonatomic,assign)NSInteger   alarmType;                      ///< 报警类型
@end
