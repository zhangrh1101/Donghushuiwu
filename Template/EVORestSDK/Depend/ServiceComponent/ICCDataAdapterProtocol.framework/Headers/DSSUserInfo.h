//
//  Userinfo.h
//  SDKWeikit
//
//  Created by ding_qili on 15/7/10.
//  Copyright (c) 2015年 ding_qili. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DSSBaseInfo.h"

/**
 *  @brief 特勤模块用户权限（奉化专用）
 */
typedef enum : NSUInteger {
    AccessControlRightNone = 0x00000000, ///<无权限
    AccessControlRightControlCenter = 0x00000001, ///<指挥中心权限
    AccessControlRightCreateGroup = 0x00000002,///<创建群聊权限
    AccessControlRightSendMessage = 0x00000004,///<发送消息权限
    AccessControlRightControlSignal = 0x00000008,///<控制信号机权限
} AccessControlRight;

/**
 *  @brief 推送状态 Push State
 */
typedef enum:NSInteger{
    pushState_on = 1,///<推送订阅开 on
    pushState_off = 0,///<推送订阅关 off
    pushState_none = -1///<推送订阅无 none
}DSSPushState;

/**
 *  @brief cloud type 是否支持云存储，支持何种云存储
 */
typedef enum:NSInteger{
    CloudType_local = 0,///<本地
    CloudType_dahua,///<=>大华云,
    CloudType_ali,///<=>阿里云
    CloudType_amazon,///<=>亚马逊
    CloudType_hdfs,///<<不知道 那个平台
    CloudType_hmyd, ///<<和目移动云
    CloudType_fastdfs,///<<fastdfs 也不知道是个啥玩意
}DSSCloudType;

/**
 *  @brief 用户角色类型 user role type
 */
typedef enum:NSInteger{
    UserRole_Normal = 0,///<一般用户 Normal
    UserRole_Enterprise,///<企业用户 Enterprise
    UserRole_Adminstrator,///<管理员 Adminstrator
}DSSUserRole;

/**
 * @brief 基线菜单权限模块值 Menu Module Right
 */
typedef enum:NSUInteger
{
    MenuModuleRight_Unknow = 0,       ///<未知的菜单权限 unknow
    MenuModuleRight_Real,       ///<实时 monitor
    MenuModuleRight_Playback,       ///<回放 playback
    MenuModuleRight_Emap,       ///<地图 emap
    MenuModuleRight_Message,       ///<报警 alarm
    MenuModuleRight_TVWall,       ///<电视墙 tvwall
    MenuModuleRight_LocalFile,       ///<本地文件 local file
    MenuModuleRight_AlarmScheme,     ///<报警预案 alarm scheme
    MenuModuleRight_RecordDownLoad,  ///<录像下载 record download
    MenuModuleRight_EntranceGuard,   ///<门禁管理 EntranceGuard
    MenuModuleRight_EntranceGuard_BlueTooch,   ///<蓝牙门禁管理 EntranceGuard

    MenuModuleRight_EntranceGuardSearch,   ///<门禁搜索 EntranceGuard
    MenuModuleRight_SignalLamp,   ///<信号灯 EntranceGuard
    MenuModuleRight_FaceRecognition, ///<face识别 FaceRecognition
    MenuModuleRight_FaceLibrary, ///<人脸库 FaceRecognition
    MenuModuleRight_ObjectDetection, ///目标检测 ObjectDetection
    MenuModuleRight_VideoShare, /// 视频分享
    MenuModuleRight_PassengerFlow, /// 客流分析人数统计
    MenuModuleRight_VideoIntercom, /// 可视对讲呼叫中心
    MenuModuleRight_VideoIntercomRecord, /// 呼叫记录
    MenuModuleRight_Message_Log,       ///<报警历史查询 alarm
    MenuModuleRight_VisitorManager, /// 访客管理
    MenuModuleRight_VisitorRecord, /// 访客记录
    MenuModuleRight_VisitorSetting, /// 访客设置
    MenuModuleRight_AlarmHost, /// 报警主机
    MenuModuleRight_FaceStatistics, ///<人脸统计
    MenuModuleRight_FireFight, /// 安消一体 消防
	MenuModuleRight_WorkSheet_630,	/// 报事报修2021年630需求版本，使用本地资源
	MenuModuleRight_WorkSheet, /// 报事报修
    MenuModuleRight_WorkSheet_Mine, /// 报事报修-我的工单
	MenuModuleRight_WorkSheet_All, /// 报事报修-全部工单
    MenuModuleRight_Patrol, /// 巡更
    MenuModuleRight_PatrolSetNFC, /// 巡更NFC设置权限
    MenuModuleRight_PatrolNFC, /// 巡更NFC打卡权限
    MenuModuleRight_PatrolMap, /// 巡更直播
    MenuModuleRight_PatrolRule, /// 巡更计划管理修改
    MenuModuleRight_REPORT, /// 上报模块
    MenuModuleRight_WisdomElec, ///智慧用电
    MenuModuleRight_Inspection, ///人工巡检
    MenuModuleRight_Fishing, ///钓鱼执法
    MenuModuleRight_PersonnelManagement, ///人员管理
    MenuModuleRight_Farm,///智慧养殖
    MenuModuleRight_Sheep,///羊只
    MenuModuleRight_FireFightFinance,   ///安消一体 消防-金融版
    MenuModuleRight_ISECURITY, /// 内保模块
	MenuModuleRight_DutyManage,				/// 金融-安保信息化-履职管理
	MenuModuleRight_DutyOperate,			/// 金融-安保信息化-安保履职
	MenuModuleRight_DailyManage,   			/// 金融-安保信息化-日常管理
	MenuModuleRight_ContractManage,   		/// 金融-安保信息化-合同管理
	MenuModuleRight_ContractStatistic, 		/// 金融-安保信息化-合同统计
	MenuModuleRight_DigitalLedger, 			/// 金融-安保信息化-电子台账
	MenuModuleRight_VideoAccess, 			/// 金融-安保信息化-视频调阅
	MenuModuleRight_EntranceAuthority, 		/// 金融-安保信息化-门禁授权
	MenuModuleRight_LabelRetrieval, 		/// 金融-安保信息化-标签检索
	MenuModuleRight_F_AlarmHost,			/// 金融-报警主机
	MenuModuleRight_F_AlarmCenter,			/// 金融-接警中心-报警复核
	MenuModuleRight_F_AlarmStatistic,		/// 金融-接警中心-报警统计
	MenuModuleRight_F_AlarmCenter_SC,		/// 金融-接警中心-四川农信定制
	MenuModuleRight_F_BusinessLib,			/// 金融-业务库
    MenuModuleRight_Edu,    /// 教育
    MenuModuleRight_FireFightFinanceCustomization,     ///安消一体 消防-金融版-定制版
    MenuModuleRight_HeatFightFinance,                  ///安消一体 消防 1.1版本
    MenuModuleRight_HeatFightCascade,                  ///安消一体 消防 1.1.1 级联
    MenuModuleRight_EduRisk,    /// 教育隐患管理
    MenuModuleRight_EduLog,    /// 教育代办
    MenuModuleRight_EduInspect,    /// 教育专项检查
    MenuModuleRight_EduRisk_Event,    /// 安全事件
    MenuModuleRight_EduDrill,    /// 应急演练
    MenuModuleRight_PassengerFlowAnalyse,  ///分析报表
    MenuModuleRight_PassengerFlowRank,   /// 排行报表
    MenuModuleRight_PassengerFlowReport,   ///报告报表
    MenuModuleRight_REPORT_WATER, /// 上报模块(水利)
    MenuModuleRight_Inspection_WATER, ///人工巡检(水利)
    MenuModuleRight_WisdomElec_Statistics, ///   用电统计
    MenuModuleRight_WisdomSite, /// 智慧工地
    MenuModuleRight_DrillEducation,    /// 消防-演练演练
    MenuModuleRight_GMInspect,    /// 公民-执法巡查
    MenuModuleRight_KaoQin,    /// 考勤大卡
    MenuModuleRight_Visitor,  ///访客
    MenuModuleRight_FireFightPatrol,    /// 消防-消防巡查
    MenuModuleRight_IOTDevice ,///物模型设备
    MenuModuleRight_MessageStatistics,       ///<报警统计
    MenuModuleRight_OperationCenter,  ///运维中心
    MenuModuleRight_History,/// 历史浏览
    MenuModuleRight_Favorite,///收藏夹
    MenuModuleRight_SafetyEducation, //安全教育
    MenuModuleRight_RiskAssessment, //风险评估
    MenuModuleRight_LaborPersonnel, //劳务人员
    MenuModuleRight_Farm_Manager, //智慧养殖销售管理
    MenuModuleRight_Operate_AirControl,// 空调控制
    MenuModuleRight_PATROLENGINE,// 巡检引擎
    
    MenuModuleRight_RHTX_PTT,//对讲
    MenuModuleRight_RHTX_Knowledge,// 知识库
    MenuModuleRight_RHTX_Classic,// 案例库
    MenuModuleRight_RHTX_Task,// 任务
    MenuModuleRight_RHTX_OneClickAlarm,// 一键报警
    
    MenuModuleRight_Bayonet,// 卡口
    MenuModuleRight_BayonetList,
    MenuModuleRight_BayonetRecord,
    MenuModuleRight_BayonetRcordOne,
    MenuModuleRight_BayonetRcordTwo,
    MenuModuleRight_BayonetRcordThr,
    
    MenuModuleRight_TouristPortrait,


}DSSMenuModuleRight;
/**
 * @brief 金融相关菜单权限模块值 Menu Module Right
 */
typedef enum: NSUInteger{
    MenuModuleRight_Finance_Unknow    = 0x00000000,       ///<未知的菜单权限 unknow
    MenuModuleRight_Finance_Real      = 0x00000001,       ///<实时 monitor
    MenuModuleRight_Finance_Playback  = 0x00000002,       ///<回放 playback
    /******************************* ↓金融相关模块↓ *******************************/
    MenuModuleRight_SecurityState = 0x00000400,             ///< 安防形势
    MenuModuleRight_AlarmCenter = 0x00000800,               ///< 报警复核
    MenuModuleRight_Defence = 0x00001000,                   ///< 布撤防
    MenuModuleRight_SecurityGuardOperator = 0x00002000,     ///< 安保履职
    MenuModuleRight_SecurityGuardAdmin = 0x00004000,        ///< 履职管理(管理员)
    MenuModuleRight_DeviceInspectionOperator = 0x00008000,  ///< 设备巡检(巡检人员)
    MenuModuleRight_DeviceInspectionAdmin = 0x00010000,     ///< 巡检管理(管理员)
    MenuModuleRight_DeviceRepairOperator = 0x00020000,      ///< 设备维修(维修人员)
    MenuModuleRight_DeviceRepairAdmin = 0x00040000,         ///< 维修管理(管理员)
    MenuModuleRight_VideoMetting = 0x00080000,              ///< 视频会议
    MenuModuleRight_FaceIdentify = 0x00100000,              ///< face识别
    
    // 履职管理子菜单↓
    MenuModuleRight_SecurityGuard_Record = 0x00200000,          ///< 履职记录
    MenuModuleRight_SecurityGuard_Statistical = 0x00400000,     ///< 履职统计
    MenuModuleRight_SecurityGuard_NFC = 0x00800000,             ///< NFC管理
    // 履职管理子菜单↑
    
    // 巡检管理子菜单↓
    MenuModuleRight_DeviceInspection_Statistical = 0x01000000,  ///< 巡检统计
    MenuModuleRight_DeviceInspection_Task = 0x02000000,         ///< 巡检任务
    // 巡检管理子菜单↑
    
    // 维修管理子菜单↓
    MenuModuleRight_DeviceRepair_Statistical = 0x04000000,      ///< 维修统计
    MenuModuleRight_DeviceRepair_Record = 0x08000000,           ///< 维修记录
    // 维修管理子菜单↑
    
    MenuModuleRight_SecurityStaff = 0x10000000,             ///< 安保人员
    MenuModuleRight_SecurityEvaluate = 0x20000000,          ///< 安保考核
    MenuModuleRight_ContractQuery = 0x40000000,             ///< 合同查询
    MenuModuleRight_SheetApply = 0x80000000,                ///< 单据申请
    /******************************* ↑金融相关模块↑ *******************************/
    
    
    
}DSSFinanceModuleRight;

/**
 * @brief 平台类型
 */
typedef enum:NSUInteger{
    DSSPlatform_Type_DSSCloud   = 1, //DSSCloud类型
    DSSPlatform_Type_DSSPro     = 2, //DSSPro类型
    DSSPlatform_Type_DSSExpress = 3, //DSSExpress类型
    DSSPlatform_Type_DPSDK      = 4, //对接7016 dpsdk版本
    DSSPlatform_Type_EVO        = 5, //对接EVO

}DSSPlatformType;

/**
 *  @brief P2P server
 */
@interface DSSP2PServer : NSObject
/**
 *  @brief ip
 */
@property (copy,nonatomic,nullable) NSString * ip;
/**
 *  @brief port
 */
@property (nonatomic, assign) int port;

@end

/**
 *  @brief LoginInfo
 */
@interface DSSLoginInfo : NSObject
@property (strong,nonatomic,nullable) NSDate * timestamp;      ///<登录时的UNIX时间戳秒 time stamp
@property (copy,nonatomic,nullable) NSString * ip;             ///<登录时的IP地址 ip
@property (copy,nonatomic,nullable) NSString * clientType;     ///<客户端类型 client type
@property (copy,nonatomic,nullable) NSString * clientName;     ///<客户端名称 client name
@property (copy,nonatomic,nullable) NSString * location;       ///<登录时参考地址 location

@end

/**
 *  @brief 平台用户信息 UserInfo
 */
@interface DSSUserInfo : DSSBaseInfo
/**
 *  @brief 用户名称 user name
 */
@property (copy,nonatomic,nullable) NSString * userName;
/**
 *  @brief 手机号码 phone number
 */
@property (copy,nonatomic,nullable) NSString * phoneNumber;
/**
 *  @brief 昵称 nickName
 */
@property (copy,nonatomic,nullable) NSString * nickName;
/**
 *  @brief 用户头像 user icon
 */
@property (copy,nonatomic,nullable) NSString * userIcon;

/**
 *  @brief 用户所在组ID 如果没有返回-1 groupId
 */
@property (strong,nonatomic,nullable) NSString *groupId;

/**
 *  @brief 0是普通用户，1是域用户
*/
@property (nonatomic, strong, nullable) NSNumber *userType;

/**
 *  @brief 推送状态 pushState
 */
@property (nonatomic, assign) DSSPushState pushState;


/**
 *  @brief 最近一次登录的信息 last login info
 */
@property (strong,nonatomic,nullable) DSSLoginInfo * lastLoginInfo;

//平台类型
@property (nonatomic, copy,nullable) NSString *platFormVersion;

/**
 userId
 */
@property (nonatomic, copy,nullable) NSString *userId;

///useruuid
@property (nonatomic, copy, nullable) NSString *useruuid;

///menu right
@property (nonatomic, copy, nullable) NSDictionary <NSNumber *, NSNumber *> *nMenuRight;

///isCloudBase
@property (nonatomic, assign) BOOL isCloudBase;
@property (nonatomic,assign) BOOL isInitialPassword;
@property (nonatomic, assign) NSInteger timeRemaining;
@property (nonatomic, assign) NSInteger dayRemaining;

/**
 呼叫号码
 */
@property (nonatomic, copy,nullable) NSString *sipNumber;

//
@property (nonatomic, assign) NSUInteger accessControlRight;

@property (nonatomic, copy) NSString * _Nullable server; //平台地址

@property (nonatomic, assign) int port; //平台端口

@property (nonatomic, assign) BOOL reused;

@property (nonatomic, copy,nullable) NSString *defaultOrgCode;
@property (nonatomic, copy,nullable) NSString *ownerCode;
@property (nonatomic, copy,nullable) NSString *validPeriod;
@property (nonatomic, assign) int periodFlag;
@property (nonatomic, assign) int personId;
@property (nonatomic, copy,nullable) NSArray *mccsModules;
@property (nonatomic, copy, nullable) NSArray <NSString *> *roleIdList;
@property (nonatomic, strong) NSArray * _Nullable mccsMenus;
@property (nonatomic, strong) NSArray * _Nullable menuStrArr;

@property (nonatomic, strong, nullable) NSArray <NSString *> *hiddenPageInfo;

@end

//Ftp Address Info
@interface DSSFtpAddressInfo : DSSBaseInfo

@property (nonatomic, copy,nullable) NSString *ipAddress; ///<真实用到的地址 从innerIpAddress 和 outerIpAddress 中选择一个 需要检查tcp连通性
@property (nonatomic, copy,nullable) NSString *innerIpAddress;
@property (nonatomic, copy,nullable) NSString *innerPort;
@property (nonatomic, copy,nullable) NSString *maxSize;
@property (nonatomic, copy,nullable) NSString *outerIpAddress;
@property (nonatomic, copy,nullable) NSString *outerPort;
@property (nonatomic, copy,nullable) NSString *password;
@property (nonatomic, copy,nullable) NSString *path;
@property (nonatomic, copy,nullable) NSString *userName;

@end



//Remote Update Info
@interface DSSRemoteUpdateInfo : DSSBaseInfo

@property (nonatomic, copy,nullable) NSString *version; //模块版本号
@property (nonatomic, assign) NSInteger minBuildVersion; //最小需要的版本号
@property (nonatomic, copy,nullable) NSString *updateMessage; //更新内容
@property (nonatomic, copy,nullable) NSString *zipUrl; //下载Url
@property (nonatomic, assign) BOOL downloaded;//是否有下载完成
@property (nonatomic, assign) NSInteger fileSize; //下载大小


@end

/**
 招行用户模块类型
 */
typedef enum:NSUInteger{
    DSSFinanceModuleType_Unknow     = 0,
    DSSFinanceModuleType_Security   = 1,    // 安保类型
    DSSFinanceModuleType_Basic      = 2,    // 基础类型
}DSSFinanceModuleType;

/**
 招行用户模块信息
 */
@interface DSSFinanceUserModuleInfo : DSSBaseInfo
@property (nonatomic, copy, nullable) NSString *moduleName;         ///< 模块名
@property (nonatomic, assign) DSSFinanceModuleRight moduleRight;    ///< 模块权限
@property (nonatomic, assign) DSSFinanceModuleType moduleType;      ///< 模块类型
@property (nonatomic, retain, nullable) NSArray<DSSFinanceUserModuleInfo *> *subModuleList;  ///< 子模块列表
@end


@interface DSSCloudUserMenuModuleInfo :NSObject
@property (nonatomic, copy, nullable) NSString *moduleName;         ///< 模块名
@property (nonatomic, assign) DSSMenuModuleRight moduleRight;    ///< 模块权限
@property (nonatomic, copy, nullable) NSString *moduleCode;         ///< 模块编码
@end

//extend property
extern NSString * _Nullable const kUserInfoHandleDPSDKEntity;///<dss平台dpsdk的handle句柄，扩展字段

extern NSString * _Nullable const kUserInfoWebServicePort; //DSS版本 webservice请求端口
extern NSString * _Nullable const kUserInfoWebServiceIP;  //DSS版本 webservice请求IP

extern NSString * _Nullable const kUserInfoToken;
extern NSString * _Nullable const kUserInfoWebServerHost; ///< web服务地址主机
extern NSString * _Nullable const kUserInfoWebServerPort; ///< web服务地址端口
extern NSString * _Nullable const kUserInfoSubscribeMQ;   ///< 表示是mq还是长轮巡接收报警 默认是NO
extern NSString * _Nullable const kUserInfoMQAddress;   ///< 表示是mq还是长轮巡接收报警 默认是NO
extern NSString * _Nullable const kUserInfoPlatformType; ///< 表示是Express的版本还是Pro的 或者DSSCloud版本
extern NSString * _Nullable const kUserInfoCodeName; ///< codeName 招行
extern NSString * _Nullable const kUserInfoMenuModuleDic;   ///< 招行 模块名字典  NSDictionary<@(moduleRight):moduleName>
extern NSString * _Nullable const kUserInfoMenuModuleList;  ///< 招行 模块信息列表 NSArray<DSSFinanceUserModuleInfo>
extern NSString * _Nullable const kFUserInfoVersionType; ///< 招行 版本类型，金融专用：1、尊享版，2、普通版
extern NSString * _Nullable const kUserInfoSipIP; ///< 连接SC地址  NSString类型
extern NSString * _Nullable const kUserInfoSipPort; ///< 连接SC地址  NSNumber类型
extern NSString * _Nullable const kUserInfoCommunityCode ; ///< 用户小区编号
extern NSString * _Nullable const kUserInfoImageAddress; ////< 图片地址 用于DSSCloud
extern NSString * _Nullable const kCloudUserInfoMenuModuleDic;   ///< 视频云 模块名字典  NSDictionary<@(moduleRight):DSSCloudUserMenuModuleInfo>


@interface DSSPushStatusInfo :NSObject
@property (nonatomic, copy, nullable) NSString *pushStatus;         ///< 推送开关状态

@end
@interface DSSCardInfo : DSSBaseInfo
@property (nonatomic, copy, nullable) NSString *Id;

@property (nonatomic, copy, nullable) NSString *cardNumber;         ///< 卡号
@property (nonatomic, copy, nullable) NSString *cardType;         ///< 卡类型
@property (nonatomic, assign) int personId;

@property (nonatomic,assign) NSInteger category;
@property (nonatomic,assign) NSInteger departmentId;
@property (nonatomic, copy) NSString *startDate;
@property (nonatomic, copy) NSString *endDate;
@property (nonatomic,assign) NSInteger isCoercion;
@property (nonatomic,assign) NSInteger isMainCard;

@end

@interface DSSMccsMenuInfo : DSSBaseInfo
@property (nonatomic, copy, nullable) NSString *menuCode;
@property (nonatomic, copy, nullable) NSString *menuName;
@property (nonatomic, copy, nullable) NSString *mccsModuleId;

@end
