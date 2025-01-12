//
//  DSSDeviceInfo.h
//  Pods
//
//  Created by zyx on 17/2/21.
//
//

#import <Foundation/Foundation.h>
#import "DSSBaseInfo.h"
#import "DSSUnitInfo.h"
#import "DHThreadSafeMultableArray.h"

typedef enum:NSInteger {
    MBL_DEV_TYPE_NONE               = -1,
    MBL_DEV_TYPE_ENC_BEGIN          = 0,        ///< 编码设备
    MBL_DEV_TYPE_DVR                = MBL_DEV_TYPE_ENC_BEGIN + 1,            ///< DVR
    MBL_DEV_TYPE_IPC                = MBL_DEV_TYPE_ENC_BEGIN + 2,            ///< IPC
    MBL_DEV_TYPE_NVS                = MBL_DEV_TYPE_ENC_BEGIN + 3,            ///< NVS
    MBL_DEV_TYPE_MCD                = MBL_DEV_TYPE_ENC_BEGIN + 4,            ///< MCD
    MBL_DEV_TYPE_MDVR               = MBL_DEV_TYPE_ENC_BEGIN + 5,            ///< MDVR
    MBL_DEV_TYPE_NVR                = MBL_DEV_TYPE_ENC_BEGIN + 6,            ///< NVR
    MBL_DEV_TYPE_SVR                = MBL_DEV_TYPE_ENC_BEGIN + 7,            ///< SVR
    MBL_DEV_TYPE_PCNVR              = MBL_DEV_TYPE_ENC_BEGIN + 8,            ///< PCNVR，PSS自带的一个小型服务
    MBL_DEV_TYPE_PVR                = MBL_DEV_TYPE_ENC_BEGIN + 9,            ///< PVR
    MBL_DEV_TYPE_EVS                = MBL_DEV_TYPE_ENC_BEGIN + 10,           ///< EVS
    MBL_DEV_TYPE_MPGS               = MBL_DEV_TYPE_ENC_BEGIN + 11,           ///< MPGS
    MBL_DEV_TYPE_SMART_IPC          = MBL_DEV_TYPE_ENC_BEGIN + 12,           ///< SMART_IPC
    MBL_DEV_TYPE_SMART_TINGSHEN     = MBL_DEV_TYPE_ENC_BEGIN + 13,           ///< 庭审主机
    MBL_DEV_TYPE_SMART_NVR          = MBL_DEV_TYPE_ENC_BEGIN + 14,           ///< SMART_NVR
    MBL_DEV_TYPE_PRC                = MBL_DEV_TYPE_ENC_BEGIN + 15,           ///< 防护舱
    MBL_DEV_TYPE_JT808              = MBL_DEV_TYPE_ENC_BEGIN + 18,           ///< 部标JT808
    MBL_DEV_TYPE_FISH_EYE           = MBL_DEV_TYPE_ENC_BEGIN + 19,           ///< 鱼眼设备
    MBL_DEV_TYPE_VTT                = MBL_DEV_TYPE_ENC_BEGIN + 21,            ///< VTT
    MBL_DEV_TYPE_HCVR               = MBL_DEV_TYPE_ENC_BEGIN + 22,            ///< 海康CVR类型
    MBL_DEV_TYPE_IF                 = MBL_DEV_TYPE_ENC_BEGIN + 23,            ///< 智能ATM
    MBL_DEV_TYPE_VTO                = MBL_DEV_TYPE_ENC_BEGIN + 24,            ///< 金融VTO，当做编码器小类接入
    MBL_DEV_TYPE_ALARM_STUB_VTA     = MBL_DEV_TYPE_ENC_BEGIN + 25,            ///< VTA
    MBL_DEV_TYPE_THC                = MBL_DEV_TYPE_ENC_BEGIN + 26,            ///< 热成像设备
    MBL_DEV_TYPE_DSJ                = MBL_DEV_TYPE_ENC_BEGIN + 27,            ///< DSJ
    MBL_DEV_TYPE_PTZ                = MBL_DEV_TYPE_ENC_BEGIN + 34,            ///< 全景云台
    MBL_DEV_TYPE_MCS                = MBL_DEV_TYPE_ENC_BEGIN + 35,            ///<MCS设备
     MBL_DEV_TYPE_WATCHER           = MBL_DEV_TYPE_ENC_BEGIN + 39,            ///<守望者设备
    MBL_DEV_TYPE_SD                 = MBL_DEV_TYPE_ENC_BEGIN + 42,            ///<SD设备
    MBL_DEV_TYPE_IVSS               = MBL_DEV_TYPE_ENC_BEGIN + 43,            ///<IVSS设备
    MBL_DEV_TYPE_MNVR               = MBL_DEV_TYPE_ENC_BEGIN + 44,            ///<车载NVR
    MBL_DEV_TYPE_SOLDIER            = MBL_DEV_TYPE_ENC_BEGIN + 45,            ///<单兵设备
    MBL_DEV_TYPE_ZHSLUAV            = MBL_DEV_TYPE_ENC_BEGIN + 47,            ///<智慧水利定义的无人机
    MBL_DEV_TYPE_UAV                = MBL_DEV_TYPE_ENC_BEGIN + 48,            ///<UAV无人机
    MBL_DEV_TYPE_ENC_END,
    
    MBL_DEV_TYPE_TVWALL_BEGIN        = 100,
    MBL_DEV_TYPE_BIGSCREEN            = MBL_DEV_TYPE_TVWALL_BEGIN + 1,        ///< 大屏
    MBL_DEV_TYPE_TVWALL_END,
    
    MBL_DEV_TYPE_DEC_BEGIN            = 200,        ///< 解码设备
    MBL_DEV_TYPE_NVD                = MBL_DEV_TYPE_DEC_BEGIN + 1,            ///< NVD
    MBL_DEV_TYPE_SNVD                = MBL_DEV_TYPE_DEC_BEGIN + 2,            ///< SNVD
    MBL_DEV_TYPE_UDS                = MBL_DEV_TYPE_DEC_BEGIN + 5,            ///< UDS
    MBL_DEV_TYPE_DEC_END,
    
    MBL_DEV_TYPE_MATRIX_BEGIN        = 300,        ///< 矩阵设备
    MBL_DEV_TYPE_MATRIX_M60                = MBL_DEV_TYPE_MATRIX_BEGIN    + 1,        ///< M60
    MBL_DEV_TYPE_MATRIX_NVR6000            = MBL_DEV_TYPE_MATRIX_BEGIN + 2,        ///< NVR6000
    MBL_DEV_TYPE_MATRIX_END,
    
    MBL_DEV_TYPE_IVS_BEGIN            = 400,        ///< 智能设备
    MBL_DEV_TYPE_ISD                = MBL_DEV_TYPE_IVS_BEGIN + 1,            ///< ISD 智能球
    MBL_DEV_TYPE_IVS_B                = MBL_DEV_TYPE_IVS_BEGIN + 2,            ///< IVS-B 行为分析服务
    MBL_DEV_TYPE_IVS_V                = MBL_DEV_TYPE_IVS_BEGIN + 3,            ///< IVS-V 视频质量诊断服务
    MBL_DEV_TYPE_IVS_FR                = MBL_DEV_TYPE_IVS_BEGIN + 4,            ///< IVS-FR face识别服务
    MBL_DEV_TYPE_IVS_PC                = MBL_DEV_TYPE_IVS_BEGIN + 5,            ///< IVS-PC 人流量统计服务
    MBL_DEV_TYPE_IVS_M                = MBL_DEV_TYPE_IVS_BEGIN + 6,            ///< IVS_M 主从跟踪智能盒
    MBL_DEV_TYPE_IVS_PC_BOX            = MBL_DEV_TYPE_IVS_BEGIN + 7,            ///< IVS-PC 智能盒
    MBL_DEV_TYPE_IVS_B_BOX            = MBL_DEV_TYPE_IVS_BEGIN + 8,            ///< IVS-B 智能盒
    MBL_DEV_TYPE_IVS_M_BOX            = MBL_DEV_TYPE_IVS_BEGIN + 9,            ///< IVS-M 盒子
    MBL_DEV_TYPE_IVS_PRC            = MBL_DEV_TYPE_IVS_BEGIN + 10,            ///< 防护舱
    MBL_DEV_TYPE_IVS_IF                = MBL_DEV_TYPE_IVS_BEGIN + 11,            ///< IVS_IF
    MBL_DEV_TYPE_IVS_IPC            = MBL_DEV_TYPE_IVS_BEGIN + 12,            ///< IVS_IPC
    MBL_DEV_TYPE_IVS_SmartIPC        = MBL_DEV_TYPE_IVS_BEGIN + 13,            ///< IVS_SmartIPC
    MBL_DEV_TYPE_IVS_END,
    
    MBL_DEV_TYPE_BAYONET_BEGIN        = 500,        ///< -C相关设备
    MBL_DEV_TYPE_CAPTURE            = MBL_DEV_TYPE_BAYONET_BEGIN + 1,        ///< 卡口设备
    MBL_DEV_TYPE_SPEED                = MBL_DEV_TYPE_BAYONET_BEGIN + 2,        ///< 测速设备
    MBL_DEV_TYPE_TRAFFIC_LIGHT        = MBL_DEV_TYPE_BAYONET_BEGIN + 3,        ///< 闯红灯设备
    MBL_DEV_TYPE_INCORPORATE        = MBL_DEV_TYPE_BAYONET_BEGIN + 4,        ///< 一体化设备
    MBL_DEV_TYPE_PLATEDISTINGUISH    = MBL_DEV_TYPE_BAYONET_BEGIN + 5,        ///< 车牌识别设备
    MBL_DEV_TYPE_VIOLATESNAPPIC        = MBL_DEV_TYPE_BAYONET_BEGIN + 6,        ///< 违停检测设备
    MBL_DEV_TYPE_PARKINGSTATUSDEV    = MBL_DEV_TYPE_BAYONET_BEGIN + 7,        ///< 车位检测设备
    MBL_DEV_TYPE_ENTRANCE            = MBL_DEV_TYPE_BAYONET_BEGIN + 8,        ///< 出入口设备
    MBL_DEV_TYPE_VIOLATESNAPBALL    = MBL_DEV_TYPE_BAYONET_BEGIN + 9,        ///< 违停抓拍球机
    MBL_DEV_TYPE_THIRDBAYONET        = MBL_DEV_TYPE_BAYONET_BEGIN + 10,        ///< 第三方卡口设备
    MBL_DEV_TYPE_ULTRASONIC            = MBL_DEV_TYPE_BAYONET_BEGIN + 11,        ///< 超声波车位检测器
    MBL_DEV_TYPE_FACE_CAPTURE        = MBL_DEV_TYPE_BAYONET_BEGIN + 12,        ///< 人脸抓拍设备
    MBL_DEV_TYPE_ITC_SMART_NVR        = MBL_DEV_TYPE_BAYONET_BEGIN + 13,        ///< 卡口智能NVR设备
    MBL_DEV_TYPE_BAYONET_END,
    
    MBL_DEV_TYPE_ALARM_BEGIN        = 600,        ///< 报警设备
    MBL_DEV_TYPE_ALARMHOST            = MBL_DEV_TYPE_ALARM_BEGIN + 1,            ///< 网络报警主机
    MBL_DEV_TYPE_ALARM_END,
    
    MBL_DEV_TYPE_DOORCTRL_BEGIN        = 700,
    MBL_DEV_TYPE_DOORCTRL_DOOR         = MBL_DEV_TYPE_DOORCTRL_BEGIN + 1,        // 门禁
    MBL_DEV_TYPE_DOORCTRL_CENTERCTRL     = MBL_DEV_TYPE_DOORCTRL_BEGIN + 2,        // 门禁集中控制器
    MBL_DEV_TYPE_DOORCTRL_FACEGATE     = MBL_DEV_TYPE_DOORCTRL_BEGIN + 3,        // FACEGATE
    MBL_DEV_TYPE_DOORCTRL_ATTENDANCE   = MBL_DEV_TYPE_DOORCTRL_BEGIN + 5,        // 考勤机
    MBL_DEV_TYPE_DOORCTRL_END          = MBL_DEV_TYPE_DOORCTRL_BEGIN + 10,

    
    MBL_DEV_TYPE_PE_BEGIN            = 800,
    MBL_DEV_TYPE_PE_PE                = MBL_DEV_TYPE_PE_BEGIN + 1,            ///< 动环
    MBL_DEV_TYPE_PE_AE6016            = MBL_DEV_TYPE_PE_BEGIN + 2,            ///< AE6016设备
    MBL_DEV_TYPE_PE_NVS                = MBL_DEV_TYPE_PE_BEGIN + 3,            ///< 带动环功能的NVS设备
    MBL_DEV_TYPE_PE_END,
    
    MBL_DEV_TYPE_VOICE_BEGIN        = 900,        ///< ip对讲
    MBL_DEV_TYPE_VOICE_MIKE            = MBL_DEV_TYPE_VOICE_BEGIN + 1,
    MBL_DEV_TYPE_VOICE_NET            = MBL_DEV_TYPE_VOICE_BEGIN + 2,
    MBL_DEV_TYPE_VOICE_END,
    
    MBL_DEV_TYPE_IP_BEGIN            = 1000,        ///< IP设备（通过网络接入的设备）
    MBL_DEV_TYPE_IP_SCNNER            = MBL_DEV_TYPE_IP_BEGIN + 1,            ///< 扫描枪
    MBL_DEV_TYPE_IP_SWEEP            = MBL_DEV_TYPE_IP_BEGIN + 2,            ///< 地磅
    MBL_DEV_TYPE_IP_POWERCONTROL    = MBL_DEV_TYPE_IP_BEGIN + 3,            ///< 电源控制器
    MBL_DEV_TYPE_IP_END,
    
    MBL_DEV_TYPE_MULTIFUNALARM_BEGIN= 1100,        ///< 多功能报警主机
    MBL_DEV_TYPE_VEDIO_ALARMHOST    = MBL_DEV_TYPE_MULTIFUNALARM_BEGIN + 1,    ///< 视频报警主机
    MBL_DEV_TYPE_MULTIFUNALARM_END,
    
    MBL_DEV_TYPE_SLUICE_BEGIN        = 1200,
    MBL_DEV_TYPE_SLUICE_DEV            = MBL_DEV_TYPE_SLUICE_BEGIN + 1,        ///< 出入口道闸设备
    MBL_DEV_TYPE_SLUICE_PARKING        = MBL_DEV_TYPE_SLUICE_BEGIN + 2,        ///< 停车场道闸设备
    MBL_DEV_TYPE_SLUICE_STOPBUFFER    = MBL_DEV_TYPE_SLUICE_BEGIN + 3,        ///< 视频档车器
    MBL_DEV_TYPE_SLUICE_END,
    
    MBL_DEV_TYPE_ELECTRIC_BEGIN        = 1300,
    MBL_DEV_TYPE_ELECTRIC_DEV        = MBL_DEV_TYPE_ELECTRIC_BEGIN + 1,        ///< 电网设备
    MBL_DEV_TYPE_ELECTRIC_END,
    
    MBL_DEV_TYPE_LED_BEGIN            = 1400,
    MBL_DEV_TYPE_LED_DEV            = MBL_DEV_TYPE_LED_BEGIN + 1,            ///< LED屏设备
    MBL_DEV_TYPE_LED_END,
    
    MBL_DEV_TYPE_VIBRATIONFIBER_BEGIN    = 1500,
    MBL_DEV_TYPE_VIBRATIONFIBER_DEV    = MBL_DEV_TYPE_VIBRATIONFIBER_BEGIN + 1,///< 震动光纤设备
    MBL_DEV_TYPE_VIBRATIONFIBER_END,
    
    MBL_DEV_TYPE_PATROL_BEGIN        = 1600,
    MBL_DEV_TYPE_PATROL_DEV            = MBL_DEV_TYPE_PATROL_BEGIN + 1,        ///< 巡更棒设备
    MBL_DEV_TYPE_PATROL_SPOT        = MBL_DEV_TYPE_PATROL_BEGIN + 2,        ///< 巡更点设备
    MBL_DEV_TYPE_PATROL_END,
    
    MBL_DEV_TYPE_SENTRY_BOX_BEGIN    = 1700,
    MBL_DEV_TYPE_SENTRY_BOX_DEV        = MBL_DEV_TYPE_SENTRY_BOX_BEGIN + 1,    ///< 哨位箱设备
    MBL_DEV_TYPE_SENTRY_BOX_END,
    
    MBL_DEV_TYPE_COURT_BEGIN        = 1800,
    MBL_DEV_TYPE_COURT_DEV            = MBL_DEV_TYPE_COURT_BEGIN + 1,            ///< 庭审设备
    MBL_DEV_TYPE_COURT_END,
    
    MBL_DEV_TYPE_VIDEO_TALK_BEGIN    = 1900,
    MBL_DEV_TYPE_VIDEO_TALK_VTNC    = MBL_DEV_TYPE_VIDEO_TALK_BEGIN + 1,
    MBL_DEV_TYPE_VIDEO_TALK_VTO        = MBL_DEV_TYPE_VIDEO_TALK_BEGIN + 2,
    MBL_DEV_TYPE_VIDEO_TALK_VTH        = MBL_DEV_TYPE_VIDEO_TALK_BEGIN + 3,
    MBL_DEV_TYPE_VIDEO_TALK_ANALOG_VTH        = MBL_DEV_TYPE_VIDEO_TALK_BEGIN + 4,
    MBL_DEV_TYPE_VIDEO_TALK_FENCE_VTO        = MBL_DEV_TYPE_VIDEO_TALK_BEGIN + 5,
    MBL_DEV_TYPE_VIDEO_TALK_DOORLOCK_VTH   =  MBL_DEV_TYPE_VIDEO_TALK_BEGIN + 6,
    MBL_DEV_TYPE_VIDEO_TALK_ANALOG_VTO        = MBL_DEV_TYPE_VIDEO_TALK_BEGIN + 7,    ///< 半数字门口机
    MBL_DEV_TYPE_VIDEO_TALK_VTS                = MBL_DEV_TYPE_VIDEO_TALK_BEGIN + 8,    ///< VTS管理机
    MBL_DEV_TYPE_VIDEO_TALK_SIP_PHONE        = MBL_DEV_TYPE_VIDEO_TALK_BEGIN + 10,    ///< 第三方厂家Sip话机
    MBL_DEV_TYPE_VIDEO_TALK_VTO_BAIGUANG  = MBL_DEV_TYPE_VIDEO_TALK_BEGIN + 11,
    MBL_DEV_TYPE_VIDEO_TALK_END,
    
    MBL_DEV_TYPE_BROADCAST_BEGIN    = 2000,
    MBL_DEV_TYPE_BROADCAST_ITC_T6700R = MBL_DEV_TYPE_BROADCAST_BEGIN + 1,    ///< ITC_T6700R广播设备
    MBL_DEV_TYPE_BROADCAST_END,
    
    MBL_DEV_TYPE_VIDEO_RECORD_SERVER_BEGIN = 2100,
    MBL_DEV_TYPE_VIDEO_RECORD_SERVER_BNVR    = MBL_DEV_TYPE_VIDEO_RECORD_SERVER_BEGIN + 1, ///< BNVR设备
    MBL_DEV_TYPE_VIDEO_RECORD_SERVER_OE    = MBL_DEV_TYPE_VIDEO_RECORD_SERVER_BEGIN + 2, ///< 手术设备(operation equipment)
    MBL_DEV_TYPE_VIDEO_RECORD_SERVER_END,
    
    MBL_DEV_TYPE_DISPATCHER_BEGIN    = 2200,
    MBL_DEV_TYPE_DISPATCHER            = MBL_DEV_TYPE_DISPATCHER_BEGIN + 1,    ///<指挥调度设备 dispatcher
    MBL_DEV_TYPE_DISPATCHER_END,
    
    MBL_DEV_TYPE_SIGNAL_BEGIN    = 2300,
    MBL_DEV_TYPE_SIGNAL            = MBL_DEV_TYPE_SIGNAL_BEGIN + 1,    ///<信号机
    MBL_DEV_TYPE_SIGNAL_END,
    
    MBL_DEV_TYPE_ALARM_STUB_BEGIN    = 2400,
    MBL_DEV_TYPE_ALARM_STUB            = MBL_DEV_TYPE_ALARM_STUB_BEGIN + 1,    ///< 报警柱
    MBL_DEV_TYPE_ALARM_STUB_END,
    
    MBL_DEV_TYPE_NTRANCE_BEGIN    = 2500,
    MBL_DEV_TYPE_NTRANCE_Snapshot      = MBL_DEV_TYPE_NTRANCE_BEGIN + 8,    ///< 进出入抓拍设备
    MBL_DEV_TYPE_NTRANCE_floodgate     = MBL_DEV_TYPE_NTRANCE_BEGIN + 16,   ///< 出入口LED道闸一体机
    MBL_DEV_TYPE_NTRANCE_END,
    
    MBL_DEV_TYPE_SPLICER_BEGIN    = 2600,
    MBL_DEV_TYPE_DEC_DEVICE      = MBL_DEV_TYPE_SPLICER_BEGIN + 2,    ///< 解码器设备
    MBL_DEV_TYPE_M60_DEVICE      = MBL_DEV_TYPE_SPLICER_BEGIN + 6,    ///< M60设备
    MBL_DEV_TYPE_SPLICER      = MBL_DEV_TYPE_SPLICER_BEGIN + 8,    ///< 拼接器设备
    MBL_DEV_TYPE_SPLICER_END,
    
    MBL_DEV_TYPE_ElECTRIC_BEGIN    = 2700,
    MBL_DEV_TYPE_ElECTRIC_DEVICE      = MBL_DEV_TYPE_ElECTRIC_BEGIN + 1,    ///< 智慧空开
    MBL_DEV_TYPE_ElECTRIC_END,
    
    MBL_DEV_TYPE_PHONE_BEGIN    = 2800,                           ///话机设备
    MBL_DEV_TYPE_PHONE_DEFAULT = MBL_DEV_TYPE_PHONE_BEGIN + 1,    ///普通话机
    MBL_DEV_TYPE_PHONE_VIDEO = MBL_DEV_TYPE_PHONE_BEGIN + 3,      ///可视话机
    MBL_DEV_TYPE_PHONE_INTER = MBL_DEV_TYPE_PHONE_BEGIN + 4,      ///特殊话机
    MBL_DEV_TYPE_PHONE_TANDEM = MBL_DEV_TYPE_PHONE_BEGIN + 5,     ///汇接话机
    MBL_DEV_TYPE_PHONE_EXT = MBL_DEV_TYPE_PHONE_BEGIN + 8,        ///视频会议
    MBL_DEV_TYPE_PHONE_APP = MBL_DEV_TYPE_PHONE_BEGIN + 9,        ///APP话机
    MBL_DEV_TYPE_PHONE_END,
    
    MBL_DEV_TYPE_UNKNOWN,
}MBL_DEVICE_TYPE;

//device Provide
typedef enum:NSUInteger
{
    MBL_DEVICE_PROVIDER_UNKONW = 0,   ///<厂商未知 unknow
    MBL_DEVICE_PROVIDER_DAHUA  = 1,   ///<厂商大华 dahua
    MBL_DEVICE_PROVIDER_HIK    = 2,   ///<厂商海康 hik
    
}MBL_DEVICE_PROVIDER;
@interface DSSBaseDeviceInfo : DSSBaseInfo

@property (nonatomic, copy, nullable) NSString* deviceid;  ///< 设备id deviceid
@property (nonatomic, copy, nullable) NSString* name;   ///< 名称 name
@property (nonatomic, strong ,nullable) DHThreadSafeMultableArray<NSString *>* parentid; ///<父节点 parentId
@property (nonatomic, copy ,nullable) NSString* basicParentid;  ///<basic parentId

@property (nonatomic, assign) MBL_DEVICE_TYPE devicetype; ///< 设备类型 device type
@property (nonatomic, assign) BOOL isOnline; ///<在线状态 isOnline
@property (nonatomic, assign) MBL_DEVICE_PROVIDER deviceProvide;  ///<设备厂商 device Provide
@property (nonatomic, assign) NSInteger nDevRight; ///<MBL_CHNL_RIGHT device right
@property (nonatomic, strong, nullable) NSMutableArray<NSString*> *units;///<单元子系统 child units
@property (nonatomic, strong, nullable) DHThreadSafeMultableArray<NSString*> *channels;  ///< 子节点 child
@property (nonatomic, copy, nullable) NSString *ip;       // IP
@property (nonatomic, assign) int port;         // port
@property (nonatomic, copy, nullable) NSString *devIp;    // 设备真实IP
@property (nonatomic, assign) int devPort;      // 设备真实port
@property (nonatomic, copy, nullable) NSString *userName; // 设备web登陆用户名
@property (nonatomic, copy, nullable) NSString *password; // 设备web登陆密码
@property (nonatomic, copy, nullable) NSString *domainId; // 域id
@property (nonatomic, assign) NSInteger treeSort; // 排序
@property (nonatomic, assign) BOOL hasSoundLightChannel; ///<包含了声光报警通道

@end

//alarmhost deviceInfo
@interface DSSAlarmHostDeviceInfo : DSSBaseInfo

@property (nonatomic, assign) MBL_ALARMHOST_STATUS_DEV alarmhostDevStatus;  ///< 报警主机状态类型 alarmhost status
// is alarmhost device
+ (BOOL)isAlarmHostDeviceType:(MBL_DEVICE_TYPE)devType;

@end

//videoTalk deviceInfo
@interface DSSVideoTalkDeviceInfo : DSSBaseInfo

@property (nonatomic, copy, nullable) NSString *callNum;  ///< 门口机号码 videoTalk callNum
// is videoTalk device
@property (nonatomic, copy, nullable) NSString *vthRelatedVtoNum; ///< 室内机关联的二次确认机号码
@property (nonatomic, copy, nullable) NSString *vthRelatedVtoDeviceId; ///< 室内机关联的二次确认机
+ (BOOL)isVideoTalkDeviceType:(MBL_DEVICE_TYPE)devType;

@end

@interface DSSTimeZone : NSObject
@property (nonatomic, assign) BOOL dstEnable; //夏令时
@property (nonatomic, strong, nullable) NSDateComponents *dstStartDateComponents; //夏令时开始时间
@property (nonatomic, strong, nullable) NSDateComponents *dstEndDateComponents; //夏令时结束时间
@property (nonatomic, strong) NSTimeZone * _Nullable deviceTimeZone;

//夏令时考虑夏令时的初始化
//- (instancetype _Nonnull)initWithTimeZoneNum:(NSInteger)timeZone;
- (instancetype)initWithTimeZoneName:(NSString *)name;

- (NSDate *_Nullable)toDeviceDate:(NSDate *_Nullable)date;
//转换本地时间戳为对应的设备时间
- (NSInteger)toDeviceTimeSecondes:(NSInteger)time;
- (NSDate *_Nullable)toLocalDate:(NSDate *_Nullable)date;
//转换设备时间戳时间为对应的系统时间
- (NSInteger)toLocalTimeSecondes:(NSInteger)time;

- (BOOL)isDstEnable:(NSDate *_Nullable)deviceDate;
- (BOOL)isInDST:(NSTimeInterval)zeroStartTime;//设备时间为准
- (BOOL)isOutDST:(NSTimeInterval)zeroStartTime;//设备时间为准

- (NSInteger)getInDLSHour:(NSTimeInterval)zeroStartTime;
@end

// deviceInfo
@interface DSSDeviceInfo : DSSBaseDeviceInfo

@property (nonatomic, strong, nullable) DSSAlarmHostDeviceInfo* alarmhostDeviceInfo;  ///< 报警主机信息 alarmhost deviceinfo
@property (nonatomic, strong, nullable) DSSVideoTalkDeviceInfo* videoTalkDeviceInfo;  ///< 门口机信息 videotalk deviceinfo

@property (nonatomic, strong, nullable) DSSTimeZone *timeZoneInfo;

+ (BOOL)isGetChannelStatusByDevType:(MBL_DEVICE_TYPE)devType;

@end



