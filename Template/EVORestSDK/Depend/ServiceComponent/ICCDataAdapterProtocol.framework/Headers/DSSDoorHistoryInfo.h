//
//  DSSDoorHistoryInfo.h
//  DataAdapterProtocol
//
//  Created by iMac on 2019/2/19.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger,OpenDoorType){
    OpenDoorTypeFailed = 0,
    OpenDoorTypeCard,
    OpenDoorTypeFinger,
    OpenDoorTypeFace,
    OpenDoorTypePassword,
};
NS_ASSUME_NONNULL_BEGIN

@interface DSSDoorHistoryInfo : NSObject
@property (nonatomic,copy,nullable) NSString *deviceName;
@property (nonatomic,copy,nullable) NSString *channelName;
@property (nonatomic,copy,nullable) NSString *channelId;
@property (nonatomic,assign) NSTimeInterval time;
@property (nonatomic,assign) OpenDoorType openDoorType;
@property (nonatomic,copy,nullable) NSString *captureIamgePath;
@property (nonatomic,copy,nullable) NSString *alarmCode;

@end

NS_ASSUME_NONNULL_END
