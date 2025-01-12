//
//  DSSSignalInfo.h
//  DataAdapterProtocol
//
//  Created by iMac on 2018/9/20.
//

#import <Foundation/Foundation.h>
typedef NS_ENUM(NSInteger, CrossType) {
    CrossTypeNorthEastSouthWest  = 0,    // 十字路口
    CrossTypeNorthEastSouth      = 1,    // 没有西面
    CrossTypeNorthSouthWest      = 2,    // 没有东面
    CrossTypeNorthEastWest       = 3,    // 没有南面
    CrossTypeEastWestSouth       = 4,    // 没有北面
    CrossTypeEastWest            = 5,    // 东西直行
    CrossTypeNorthSouth          = 6,    // 南北直行
};

typedef NS_ENUM(NSInteger, LaneMovemenType) {
    //0x00000000
    LaneMovemenTypeNone = 0x00000000,
    LaneMovemenTypeNorthStraight  = 0x00000001,    // 北
    LaneMovemenTypeNorthLeft = 0x00000002,
    LaneMovemenTypeNorthRight = 0x00000004,
    LaneMovemenTypeNorthStraightLeft = 0x00000003,
    LaneMovemenTypeNorthStraightRight = 0x00000005,
    LaneMovemenTypeNorthLeftRight = 0x00000006,
    LaneMovemenTypeNorthStraightLeftRight = 0x00000007,
    
    LaneMovemenTypeSouthStraight = 0x00000010, // 南
    LaneMovemenTypeSouthLeft = 0x00000020,
    LaneMovemenTypeSouthRight = 0x00000040,
    LaneMovemenTypeSouthStraightLeft = 0x00000030,
    LaneMovemenTypeSouthStraightRight = 0x00000050,
    LaneMovemenTypeSouthLeftRight = 0x00000060,
    LaneMovemenTypeSouthStraightLeftRight = 0x00000070,
    
    LaneMovemenTypeEastStraight = 0x00000100, // 东
    LaneMovemenTypeEastLeft = 0x00000200,
    LaneMovemenTypeEastRight = 0x00000400,
    LaneMovemenTypeEastStraightLeft = 0x00000300,
    LaneMovemenTypeEastStraightRight = 0x00000500,
    LaneMovemenTypeEastLeftRight = 0x00000600,
    LaneMovemenTypeEastStraightLeftRight = 0x00000700,
    
    LaneMovemenTypeWestStraight = 0x00001000, // 西
    LaneMovemenTypeWestLeft = 0x00002000,
    LaneMovemenTypeWestRight = 0x00004000,
    LaneMovemenTypeWestStraightLeft = 0x00003000,
    LaneMovemenTypeWestStraightRight = 0x00005000,
    LaneMovemenTypeWestLeftRight = 0x00006000,
    LaneMovemenTypeWestStraightLeftRight = 0x00007000,
};

typedef NS_ENUM(NSInteger, ControlModeType) {
    ControlModeTypeManual    = 0,    // 阶段锁定
    ControlModeTypeLocked      = 1,    // 阶段锁定
    ControlModeTypeLightOff      = 11,    // 关灯
    ControlModeTypeAllRed      = 12,    // 全红
    ControlModeTypeYellowFlash      = 13,    // 黄闪
    ControlModeTypeNormal  = 21,    // 正常模式
};

@interface DSSPhaseInfo : NSObject
@property (nonatomic,copy) NSString *phaseNo;
@property (nonatomic,assign) LaneMovemenType laneMovement;
@end

@interface DSSStageInfo : NSObject
@property (nonatomic,copy) NSString *stageNo;
@property (nonatomic,strong) NSArray<NSString *> *phaseNoList;
@property (nonatomic,assign) NSInteger stageTime;
@property (nonatomic,assign) NSInteger curCenterTime;
@property (nonatomic,copy) NSString *planNo;
@property (nonatomic,assign) ControlModeType controlMode;
@property (nonatomic,copy) NSString *signalId;
@end

@interface DSSPlanInfo : NSObject
@property (nonatomic,copy) NSString *planNo;
@property (nonatomic,copy) NSString *planName;
@property (nonatomic,strong) NSArray<NSString *> *stageNoList;
@end


@interface DSSSignalInfo : NSObject
@property (nonatomic,copy) NSString *signalId;
@property (nonatomic,copy) NSString *signalName;
@property (nonatomic,assign) CrossType crossType;
@property (nonatomic,strong) NSDictionary<NSString*,DSSPhaseInfo*> *phaseList;
@property (nonatomic,strong) NSDictionary<NSString*,DSSStageInfo*> *stageList;
@property (nonatomic,copy) NSString *planNo;
@property (nonatomic,strong) NSDictionary<NSString*,DSSPlanInfo*> *planList;
@end
