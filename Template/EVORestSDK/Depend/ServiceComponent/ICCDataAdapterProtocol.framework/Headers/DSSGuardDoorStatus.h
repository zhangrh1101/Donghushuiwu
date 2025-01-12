//
//  GuardDoorStatus.h
//  DataAdapterProtocol
//
//  Created by zf's on 2018/5/24.
//

#import <Foundation/Foundation.h>

/** 门禁开门状态类型 */
typedef NS_ENUM(NSInteger, MBL_DOOR_STATUS){
    MBL_DOOR_STATUS_UNKNOW,
    MBL_DOOR_STATUS_OPEN,
    MBL_DOOR_STATUS_CLOSE,
};

@interface DSSGuardDoorStatus : NSObject
@property(nonatomic,assign)MBL_DOOR_STATUS doorStatus;
@property(nonatomic,copy)NSString* channelId;
@property(nonatomic,assign)NSTimeInterval changeTime;

@end
