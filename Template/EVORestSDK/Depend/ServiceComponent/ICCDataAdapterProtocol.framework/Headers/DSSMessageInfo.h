//
//  MessageInfo.h
//  Pods
//
//  Created by zyx on 17/3/6.
//
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CLLocation.h>
#import "DSSBaseInfo.h"
#import "AlarmMessageType.h"
//#import "DSSEMapUIDataModel.h"
#import "DSSAlarmCapabilityInfo.h"

#define MAX_CACHE_ALARM_COUNT   200

@interface DSSMessageInfo : DSSBaseInfo

@property (nonatomic, copy)   NSString* _Nullable messageId;///<消息ID
@property (nonatomic, copy)   NSString* _Nullable title;///<消息ID
@property (nonatomic, copy)   NSString* _Nullable content;///<消息内容//TODO
@property (nonatomic, assign) NSInteger time;///<消息时间单位ms
@property (atomic, strong)   NSMutableArray<NSString*>* _Nullable  picUrlArray;        //报警图片

@end

typedef NS_ENUM(NSInteger,AlarmCategory)
{
    AlarmCategory_Video  = 0, //视频报警类别
    AlarmCategory_Traffic  = 1, //交通报警类别
    AlarmCategory_Door  = 2, //门禁报警类别
    AlarmCategory_End
};

//报警处理状态
typedef NS_ENUM(NSInteger, MBL_ALARM_DEAL_STATUS) {
    MBL_ALARM_STATUS_NONE                       = -1,                //未知
    MBL_ALARM_STATUS_PENDING                    = 1,                //处理中
    MBL_ALARM_STATUS_RESOLVE                    = 2,                //已解决
    MBL_ALARM_STATUS_SUGGESTTED                    = 4,                //误报
    MBL_ALARM_STATUS_IGNORED                    = 8,                //忽略
    MBL_ALARM_STATUS_UNPROCESSED                = 16,                //未解决
    MBL_ALARM_STATUS_
};
//公民公共处理状态
typedef NS_ENUM(NSInteger,MBL_GM_ALARM_DEAL_STATUS){
    MBL_GM_ALARM_STATUS_UNJUDGE  = 0,   //代研判
    MBL_GM_ALARM_STATUS_UNSIGN   = 1,   //代签收
    MBL_GM_ALARM_STATUS_UNDEAL   = 2,   //代处置
    MBL_GM_ALARM_STATUS_NOTALARM = 4,   //非告警
    MBL_GM_ALARM_STATUS_HADDEAL  = 5,   //已处置
    MBL_GM_ALARM_STATUS_FINISHED = 6,   //已完成 //已完成包含非告警和已处置

};
//报警发生的状态
typedef NS_ENUM(NSInteger,MBL_ALARM_EVENT){
    MBL_ALARM_EVENT_OCCUR     = 1,
    MBL_ALARM_EVENT_DISAPPERA = 2,
    MBL_ALARM_EVENT_PULSE     = 3,
};

//报警订阅状态
typedef NS_ENUM(NSInteger, AlarmSubscribeStatus) {
    AlarmSubscribeStatus_None               = 0,    // 未订阅
    AlarmSubscribeStatus_All                = 1,    // 全部订阅
    AlarmSubscribeStatus_Part               = 2,    // 部分订阅
};

//消息类型
typedef NS_ENUM(NSUInteger, OfflineMessageType) {
    OfflineMessageType_Alarm               = 1,     //报警消息
    OfflineMessageType_Call                = 2,     //离线呼叫
};
// 消息已读类型
typedef NS_ENUM(NSInteger, MBL_MESSAGE_READ_STATUS) {
    MBL_MESSAGE_READ_STATUS_NOT_READ         = 0,    // 未读消息
    MBL_MESSAGE_READ_STATUS_READ            = 1,    // 已读消息
    MBL_MESSAGE_READ_STATUS_ALL             = 2,      // 所有消息

};

@interface DSSAlarmLinkVideoChannelInfo : DSSBaseInfo

@property (nonatomic, copy) NSString  * _Nullable channelID;       //通道id
@property (nonatomic, assign) int        nStreamType;     //码流类型 海外使用
@property (nonatomic, copy) NSString  * _Nullable videoDeviceName; //通道名称

@property (nonatomic, assign) int        nPrePoint;       //预置点   国内使用
@property (nonatomic, assign) int        iStayTime;       //停留时间  国内使用

@end

@interface DSSDoorMessageInfo : DSSBaseInfo

@property (nonatomic, copy) NSString  * _Nullable personId;       //人员Id
@property (nonatomic, copy) NSString  * _Nullable personName;       //人员名称
@property (nonatomic, copy) NSString  * _Nullable memo;         //描述
@property (nonatomic, copy) NSString  * _Nullable departmentId;       //部门Id
@property (nonatomic, copy) NSString  * _Nullable departmentName;       //部门名称
@property (nonatomic, assign) NSInteger  inOut;       //进出门状态

@end

@interface DSSReportInfo : DSSBaseInfo
@property (nonatomic, copy) NSString  * _Nullable alarmTitle;//标题
@property (nonatomic, copy) NSString  * _Nullable alarmDesc;//备注
@property (nonatomic, assign) CLLocationCoordinate2D coordinate;// 坐标
@property (nonatomic, copy) NSString  * _Nullable reportPerson; //上报人
@end

@interface DSSFaceMessageInfo : DSSBaseInfo
@property (nonatomic, copy) NSString  * _Nullable alarmCode;       //报警Id
@property (nonatomic, copy) NSString  * _Nullable personId;       //人员Id
@property (nonatomic, copy) NSString  * _Nullable personTypeName;       //人员类型名称
@property (nonatomic, copy) NSString  * _Nullable name;       //姓名
@property (nonatomic, copy) NSString  * _Nullable respositoryName;       //人脸库名称
@property (nonatomic, copy) NSString  * _Nullable birthday;       //生日
@property (nonatomic, copy) NSString  * _Nullable nationality;       //国籍
@property (nonatomic, copy) NSString  * _Nullable detectionImageUrl; //抓拍图
@property (nonatomic, copy) NSString  * _Nullable repositoryImageUrl; //人脸图
@property (nonatomic, assign) float similarity; //相似度
@property (nonatomic, copy) NSString  * _Nullable memo;         //描述
@property (nonatomic, assign) NSInteger  gender;       //性别 1，男，2，女

@end

@class DSSGMRecordVOInfo;
//报警消息全信息
@interface DSSAlarmMessageInfo : DSSMessageInfo

@property (nonatomic, assign) NSInteger alarmtype;
@property (nonatomic, copy) NSString * _Nullable alarmTypeName;
@property (nonatomic, assign) MBL_ALARM_DEAL_STATUS status;
@property (nonatomic, assign) int level;//1~5级；1级别最高  如果是0表示未知报警等级 报警查询统一为设置为0
@property (nonatomic, assign) MBL_ALARM_EVENT  event;
//todochenshuixin
//@property (nonatomic, copy) NSString *alarm_source_serverhostid;//服务器主机id，比如温度过高等
@property (nonatomic, copy) NSString * _Nullable alarm_source_deviceid;//设备id，如果channelId为空，则是设备报警
@property (nonatomic, copy) NSString * _Nullable alarm_source_channelid;//通道id

@property (nonatomic, copy) NSString * _Nullable alarm_source_deviceName; //设备名称
@property (nonatomic, copy) NSString * _Nullable alarm_source_channelName; //通道名称

@property (nonatomic, strong)NSMutableArray<DSSAlarmLinkVideoChannelInfo*>* _Nullable arrayAlarmLinkVideo; //报警联动信息
@property (nonatomic, strong)NSMutableArray<NSString *>* _Nullable arrayAlarmLinks; //报警联动id数组

@property (nonatomic, assign) NSInteger handleDate;   //报警处理时间
@property (nonatomic,copy) NSString * _Nullable strHandleUser;   //报警处理用户
@property (nonatomic,copy) NSString * _Nullable strDealMessage;  //报警处理信息
@property (nonatomic,copy) NSMutableArray<NSString*>* _Nullable arrayMailReceivers; //邮件接收人地址

@property (nonatomic,strong) DSSDoorMessageInfo * _Nullable doorMessageInfo;  //门禁报警信息
@property (nonatomic,strong) DSSFaceMessageInfo * _Nullable faceMessageInfo;  //人像报警信息
@property (nonatomic,strong) DSSReportInfo * _Nullable reportInfo;  //人工上报信息

@property (nonatomic, assign) BOOL readed;            //是否已读
@property (nonatomic, assign) AlarmCategory category; //报警大类
@property (nonatomic, assign) NSInteger alarmGroupID;  //报警分组
@property (nonatomic,strong) NSString * _Nullable alarmGroupName;//报警分组名称
@property (nonatomic,strong) NSString * _Nullable memo;//报警分组名称


@property (nonatomic,strong) NSString * _Nullable businessMessageType;//业务消息类型
@property (nonatomic,strong) NSString * _Nullable businessMessageTitle;//业务消息名称
@property (nonatomic,strong) NSString * _Nullable businessMessageContent;//业务消息内容
@property (nonatomic,strong) NSString * _Nullable processId;//业务消息流程ID
@property (nonatomic,strong) NSString * _Nullable taskId;//业务消息任务ID
@property (nonatomic,strong) NSString * _Nullable businessMessageId;//消息ID
@property (nonatomic,strong) NSString * _Nullable businessMessageTime;//消息创建时间
@property (nonatomic,strong) NSString * _Nullable alarmAppUrl;   //报警处理URL
@property (nonatomic,strong) NSString * _Nullable taskAppUrl;   //报警处理意见URL
@property (nonatomic, assign) CLLocationCoordinate2D coordinate;// 坐标
@property (nonatomic, strong)NSString * _Nullable  extend;
//公民公共属性
@property (nonatomic, assign) NSInteger handleStat;
@property (nonatomic, strong) NSString * _Nullable  comment; //转发意见
@property (nonatomic, assign) BOOL permission;    //权限
@property (nonatomic,strong) NSString * _Nullable gmAlarmId;    //公民公共报警ID（处理流程使用）
@property (nonatomic, assign) BOOL supportForwarded;    //是否支持派发
@property (nonatomic, copy) NSString * _Nullable resourceName; //报警来源
@property (nonatomic, strong)NSString * _Nullable  taskType;

//上报附件
@property (nonatomic, strong) NSArray<NSString *> * _Nullable reportImages;
@property (nonatomic, strong) NSArray<NSString *> * _Nullable reportSounds;
@property (nonatomic, strong) NSArray<NSString *> * _Nullable reportVideos;
@property (nonatomic, strong) NSString * _Nullable  reportUserName; //转发意见

@property (nonatomic, assign) CLLocationCoordinate2D wgsCoor;

@property (nonatomic, strong) NSArray  <DSSGMRecordVOInfo *> * _Nullable recordVOList;

@property (nonatomic, assign) NSInteger overTimeFlag;

@end


@interface DSSAlarmTypeInfo : NSObject
/** 报警分组ID，1=设备报警，2=编码通道报警，3=报警输入通道报警，4=智能通道报警，5=门禁通道报警，6=系统报警，7=动环报警，8=报警主机报警，9=车载报警，10=可视对讲报警，11=热成像报警 */
@property (nonatomic, assign) NSInteger alarmGroupId;     ///< 报警分组ID
@property (nonatomic, copy) NSString * _Nullable alarmGroupName;   ///< 报警分组名称
@property (nonatomic, assign)NSInteger nAlarmType;      ///< 报警类型
@property (nonatomic, copy)  NSString * _Nullable alarmTypeName;    ///< 报警类型名称
@property (nonatomic,assign) NSInteger categoryType;    ///< 报警大类类型 如视频报警 交通报警 门禁消息等见AlarmCategory
@property (nonatomic,assign) BOOL  bDeviceAlarm;    ///<是否是设备报警类型
@property (nonatomic,copy) NSString * _Nullable icon;    ///<报警图标（软触发有）

@property (nonatomic, strong) NSSet<DSSAlarmCapabilityInfo *> * _Nullable organFilterType;        ///< 组织节点过滤类型
@property (nonatomic, strong) NSSet<DSSAlarmCapabilityInfo *> * _Nullable deviceFilterType;       ///< 设备节点过滤类型
@property (nonatomic, strong) NSSet<DSSAlarmCapabilityInfo *> * _Nullable channelFilterType;      ///< 通道节点过滤类型
//公民公共所属子系统
@property (nonatomic, copy) NSString * _Nullable subsystemType;   ///< 子系统名称
@property (nonatomic, assign)NSInteger gmExtendTypeId;      ///< 补充报警类型
@property (nonatomic, copy)  NSString * _Nullable gmExtendTypeName;    ///< 补充报警类型名称

@end

@interface DSSAlarmHandleInfo:NSObject

@property (nonatomic,assign) NSInteger handleDate;   //报警处理时间
@property (nonatomic,copy) NSString * _Nullable strHandleUser;   //报警处理用户
@property (nonatomic,copy) NSString * _Nullable strDealMessage;  //报警处理信息
@property (nonatomic,assign) NSInteger handleStatus;  //报警处理状态
@property (nonatomic,copy) NSString * _Nullable strFowardUser;   //转发的用户信息

@end

@interface DSSDeviceRuleInfo : DSSBaseInfo
@property (nonatomic,strong) NSString * _Nullable deviceRuleCode;  //设备规则编码
@property (nonatomic,strong) NSString * _Nullable deviceRuleName; //设备规则名称
@end

@interface DSSChannelRuleInfo : DSSBaseInfo
@property (nonatomic,strong) NSString * _Nullable channelID;  //通道编码
@property (nonatomic,strong) NSString * _Nullable channelName; //通道名称
@property (nonatomic,assign) NSInteger nAbornal;  //是否异常
@property (nonatomic,strong) NSMutableArray<DSSDeviceRuleInfo *>* _Nullable arrayDeviceRules;

@end

@interface DSSGetStayRuleInfo : DSSBaseInfo
@property (nonatomic,strong) NSString * _Nullable ruleName;  //规则名称
@property (nonatomic,assign) NSInteger ruleId;    //规则ID
@property (nonatomic,assign) NSInteger ruleThreshold; //规则阀值
@property (nonatomic,strong) NSMutableArray<DSSChannelRuleInfo *> * _Nullable arrayChannelRules;

@end
//滞留人数报警信息
@interface DSSGetAlarmStayNumberInfo : DSSGetStayRuleInfo
@property (nonatomic,assign) NSInteger nStayNumber; //滞留人数
@property (nonatomic,strong) NSString * _Nullable alarmTime;   //报警时间
@end

///**
// 报警对应数据类型
// */
//@interface DSSEMapAlarmUIDataModel : DSSEMapUIDataModel 
//
//@property (nonatomic, strong,nullable) DSSAlarmMessageInfo *alarmMessage;
//
//@end


#pragma mark - 工单消息
// 工单消息类型
typedef NS_ENUM(NSUInteger, MBL_WORKSHEET_MESSAGE_TYPE) {
    MBL_WORKSHEET_MESSAGE_TYPE_All        = 0,    // 所有类型
    MBL_WORKSHEET_MESSAGE_TYPE_CREATE     = 1,    // 新增工单消息
    MBL_WORKSHEET_MESSAGE_TYPE_OVERDUE    = 2,    // 逾期工单消息
    MBL_WORKSHEET_MESSAGE_TYPE_URGE        = 3,    // 催办工单消息
};

/// 工单消息信息
@interface DSSWorkSheetMessageInfo : DSSMessageInfo
@property (nonatomic, copy) NSString *_Nullable processId;               // 流程id
@property (nonatomic, copy) NSString *_Nullable taskId;                   // 任务id
@property (nonatomic, assign) int userId;                                 // 用户id
@property (nonatomic, assign) MBL_WORKSHEET_MESSAGE_TYPE messageType;     // 消息类型
@property (nonatomic, assign) MBL_MESSAGE_READ_STATUS status;            // 消息状态
@property (nonatomic, assign) int unreadCount;                             // 未读消息数
@end
#pragma mark - 公民公共
@interface DSSGMPersonInfo : DSSBaseInfo
@property (nonatomic,strong) NSString * _Nullable userId; //人员ID
@property (nonatomic,strong) NSString * _Nullable name;   //人员名称
@end

@interface DSSGMPersonTree : DSSBaseInfo

@property (nonatomic,copy) NSString * _Nullable _id;
@property (nonatomic,copy) NSString * _Nullable pid;
@property (nonatomic,copy) NSString * _Nullable name;   //名称
@property (nonatomic,copy) NSString * _Nullable nodeType;   //类型
@property (nonatomic,copy) NSString * _Nullable path;
@property (nonatomic,copy) NSString * _Nullable userId; //人员ID
@property (nonatomic, assign) BOOL isParent;

@end

@interface DSSGMPersonNode: DSSBaseInfo

@property (nonatomic, copy) NSArray<DSSGMPersonNode *> * _Nullable children;
@property (nonatomic, copy) NSString * _Nullable _id;
@property (nonatomic, copy) NSString * _Nullable pid;
@property (nonatomic, copy) NSString * _Nullable name;    //名称
@property (nonatomic, copy) NSString * _Nullable detail;  //面包线
@property (nonatomic, copy) NSString * _Nullable type;    //类型
@property (nonatomic, assign) BOOL isCheck;
@property (nonatomic, assign) BOOL isSelected;
@property (nonatomic, assign) BOOL isParent;

@property (nonatomic, strong, nullable) DSSGMPersonInfo *person;

@end

@interface DSSGMEventGradeInfo : DSSBaseInfo
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, copy) NSString * _Nullable code;
@end
@interface DSSProcessRoleInfo : DSSBaseInfo
@property (nonatomic, copy) NSString * _Nullable userName;
@property (nonatomic, copy) NSString * _Nullable userId;
@end

@interface DSSGMAttachmentInfo : DSSBaseInfo
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, copy) NSString * _Nullable strDescription;
@property (nonatomic, copy) NSString * _Nullable type;
@property (nonatomic, copy) NSString * _Nullable url;
@end

@interface DSSGMRecordVOInfo : DSSBaseInfo
@property (nonatomic, copy) NSString * _Nullable mark;
@property (nonatomic, copy) NSString * _Nullable handleUser;
@property (nonatomic, copy) NSString * _Nullable handleStartTime;
@property (nonatomic, copy) NSString * _Nullable handleEndTime;
@property (nonatomic, assign) int type;
@property (nonatomic, strong) NSArray < DSSGMAttachmentInfo *>* _Nullable attachmentList;
@property (nonatomic,strong) NSArray *_Nullable fileExploreArray;
@end

@interface DSSReportGpsInfo : NSObject
@property (nonatomic, assign) int angle;
@property (nonatomic, assign) int antenna;
@property (nonatomic, assign) NSTimeInterval capTime;
@property (nonatomic, copy) NSString   * _Nullable deviceName;
@property (nonatomic, copy) NSString   * _Nullable deviceCode;
@property (nonatomic, copy) NSString   * _Nullable gcs;
@property (nonatomic, assign) int height;
@property (nonatomic, assign) NSTimeInterval infoDate;
@property (nonatomic, assign) int isHistory;
@property (nonatomic, assign) int orientation;
@property (nonatomic, assign) int speed;
@property (nonatomic, assign) int stars;
@property (nonatomic, assign) CLLocationCoordinate2D coordinate;// 坐标
@property (nonatomic, assign) CLLocationCoordinate2D wgsCoor;// 坐标
@end

