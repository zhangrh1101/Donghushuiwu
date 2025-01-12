//
//  GuardUserInfo.h
//  Pods
//
//  Created by zf's on 2017/11/25.
//

#import <Foundation/Foundation.h>
#import "DSSDoorHistoryInfo.h"
typedef NS_ENUM(NSInteger,SexualityType){
    SexualityTypeFemale = 0,
    SexualityTypeMale,
    SexualityTypeUnknow
};

typedef NS_ENUM(NSInteger,CardType){
    CardTypeNormal = 0,
    CardTypeBlacklist,
    CardTypeVisitor,
    CardTypeGuard,
    CardTypeVIP,
    CardTypeOther
};

typedef NS_ENUM(NSInteger,GlobalControlType){
    GlobalControlTypeRecover = 0,
    GlobalControlTypeAlwayClose,
    GlobalControlTypeAlwayOpen,
    GlobalControlTypeNone
};

@interface DSSGuardPersonInfo : NSObject
@property(nonatomic,assign)NSInteger identify;//id
@property(nonatomic,copy,nullable)NSString* firstName;//用户名
@property(nonatomic,copy,nullable)NSString* lastName;//真实姓名
@property(nonatomic,copy,nullable)NSString* personId;//用户编码
@property(nonatomic,copy,nullable)UIImage* picImage;//头像
@property(nonatomic,copy,nullable)NSString* picUrl;//头像
@property(nonatomic,assign)SexualityType sexuality;//性别
@property(nonatomic,copy,nullable)NSString* departmentId;//部门
@property(nonatomic,copy,nullable)NSString* departmentName;//部门名称
@property(nonatomic,copy,nullable)NSString* phoneNumber;//联系方式
@property(nonatomic,copy,nullable)NSString* emailAddress;//邮箱地址
@property(nonatomic,strong,nullable)NSDate* initialTime;//开始时间
@property(nonatomic,strong,nullable)NSDate* expireTime;//超期时间
@property(nonatomic,assign)NSInteger fingerRightCount;//指纹数量
@property(nonatomic,assign)NSInteger cardRightCount;//
@property(nonatomic,assign)NSInteger keyRightCount;//
@property(nonatomic,assign)NSInteger faceRightCount;//
@property(nonatomic,assign)BOOL hasFinger;//有卡
@property(nonatomic,assign)BOOL hasCard;//有指纹
@property(nonatomic,strong,nullable)NSMutableArray *doorChannelIds;//
@property(nonatomic,assign)BOOL isLoadedDetail;//
@property(nonatomic,assign)BOOL isLoadedpicImage;//
@property(nonatomic,assign)BOOL isHttpImage;//
@property(nonatomic,assign)CardType cardType;///** 人员类型，0-普通 1-黑名单 2-访客 3-巡逻 4-VIP */
@property (nonatomic,strong,nullable) NSArray<DSSDoorHistoryInfo*> *historyInfos;
@end
