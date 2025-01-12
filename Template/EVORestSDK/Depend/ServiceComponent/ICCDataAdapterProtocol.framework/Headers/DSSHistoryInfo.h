//
//  HistoryInfo.h
//  Pods
//
//  Created by zyx on 17/3/7.
//
//

#import <Foundation/Foundation.h>
#import "DSSBaseInfo.h"

typedef enum : NSUInteger {
    HISTORY_CAMERA_TYPE_NORMAL,                        // 枪机
    HISTORY_CAMERA_TYPE_SD,                            // 球机
    HISTORY_CAMERA_TYPE_HALFSD,                        // 半球
    HISTORY_CAMERA_TYPE_DOOR,                          // 门禁
} HISTORY_CAMERA_TYPE;

typedef NS_ENUM(NSUInteger, HISTORY_OPERATE_RESULT) {
    HISTORY_OPERATE_RESULT_OPENDOOR_SUCCESS,                        // 开门成功
    HISTORY_OPERATE_RESULT_OPENDOOR_FAILED,                         // 开门失败
    HISTORY_OPERATE_RESULT_CLOSEDOOR_SUCCESS,                       // 关门成功
    HISTORY_OPERATE_RESULT_CLOSEDOOR_FAILED,                        // 关门失败
    HISTORY_OPERATE_RESULT_PREVIEW_SUCCESS,                         // 预览成功
    HISTORY_OPERATE_RESULT_PREVIEW_FAILED,                          // 预览失败
    HISTORY_OPERATE_RESULT_PLAYBACK_SUCCESS,                        // 回放成功
    HISTORY_OPERATE_RESULT_PLAYBACK_FAILED,                         // 回放失败
};

@interface DSSHistoryInfo : DSSBaseInfo <NSCoding>

@property (nonatomic, copy,nonnull) NSString* channelid;
@property (nonatomic, copy,nonnull) NSString* deviceid;
@property (nonatomic, assign) NSTimeInterval lastVisitTime;
@property (nonatomic, copy,nullable) NSString* channelName;
@property (nonatomic, copy,nullable) NSString* deviceName;
@property (nonatomic, copy,nullable) NSString* groupName;
@property (nonatomic, assign) BOOL isOnline;
@property (nonatomic, assign) HISTORY_CAMERA_TYPE cameraType;
@property (nonatomic, assign) HISTORY_OPERATE_RESULT operateResult;
@property (nonatomic, strong, nullable) UIImage* picImage;

@end
