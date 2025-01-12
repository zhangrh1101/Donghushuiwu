//
//  RemoteNotifyDefine.h
//  MobileBaseLineProxy
//
//  Created by chenfeifei on 2018/2/6.
//
#import <Foundation/Foundation.h>

//app层Notifcation
extern NSString *const COMMON_ACTION_SERVER_DISCONNECT; //cms服务断线

extern NSString *const COMMON_ACTION_SERVER_TOKEN_CHANGED; //服务Token改变

extern NSString *const COMMON_ACTION_SERVER_CONNECTING; //cms服务正在重连

extern NSString *const COMMON_ACTION_SERVER_CONNECTED; //cms服务重连成功

extern NSString *const COMMON_ACTION_SWITCH_CENTER_DISCONNECT;

extern NSString *const COMMON_ACTION_SET_TABBAR_BADGE;

extern NSString *const USER_ACTION_CHANGE_PASSWORD; //用户密码被修改

extern NSString *const USER_ACTION_TOKEN_ERROR; //token无效

extern NSString *const ALARMCENTER_ALARM_TYPE_CHANGED; // 报警类型变更

extern NSString *const USER_ACTION_LOCKED; //用户被锁定

extern NSString *const USER_ACTION_DELETED; //用户被删除

extern NSString *const USER_ACTION_LOGIN_TIME_EXPIRE;  //用户登录时间过期

extern NSString *const USER_ACTION_USER_LINCENSE_EXPIRED;//用户授权过期

extern NSString *const USER_ACTION_USER_FORCE_OFFLINE; //用户授权过期

extern NSString *const USER_ACTION_USER_REUSE_CHANGED;

extern NSString *const USER_ACTION_REGISTER_REMOTE_NOTIFICATION;//用户注册推送通知


extern NSString *const MESSAGE_ACTION_PUSH_NEW_GPSREPORT;  //有一条GPS消息上报

extern NSString *const MESSAGE_ACTION_PUSH_NEW_ALARMMESSAGE;  //有一条新消息
extern NSString *const MESSAGE_ACTION_CLOSE_REPORTALARMAUDIO;  //关闭语音播报
extern NSString *const MESSAGE_ACTION_SET_TAB_SELECT;  //tab设置

extern NSString *const MESSAGE_ACTION_PUSH_NEW_ALARMMESSAGE_DISCONNECT; //有一条新的设备离线消息
extern NSString *const MESSAGE_ACTION_PUSH_NEW_TRAFFICMESSAGE; //有一条新的交通消息
extern NSString *const MESSAGE_ACTION_ALARM_CONFIRM;   //报警处理结果通知
extern NSString *const MESSAGE_ACTION_ALARM_ALL_READ;         //单个报警大组报警都读了
extern NSString *const MESSAGE_ACTION_ALARM_ALL_ALARM_GROUP_ALL_READ;  //所有的报警大组的所有报警都读了
extern NSString *const MESSAGE_ACTION_ALARM_REGISTER_CHANGE;  //报警订阅变化

extern NSString *const MESSAGE_ACTION_PUSH_NEW_DOORMESSAGE;  //有一条新的门禁消息

extern NSString *const MESSAGE_ACTION_ALARM_CONFIRM;  //报警处理结果通知 处理成功才通知
extern NSString *const MESSAGE_ACTION_ALARM_HANDLE_STATUS_FROM_OTHERUSER;  //接收其他用户处理报警的通知 更新报警状态
extern NSString *const MESSAGE_ACTION_ALARM_TRANSFER_FROM_OTHERUSR; //其他用户转发给自己的报警

extern NSString *const MESSAGE_ACTION_ALARM_CLAIM; //报警认领
extern NSString *const MESSAGE_ACTION_CACHE_ALARM_CLEAR; //报警缓存清除
extern NSString *const AlARMSCHEME_ACTION_ALARMSCHEMEADD;  //报警预案增加消息通知

extern NSString *const AlARMSCHEME_ACTION_ALARMSCHEMEDELETE;  //报警预案删除消息通知

extern NSString *const AlARMSCHEME_ACTION_ALARMSCHEMEUPDATE;  //报警预案更新消息通知

extern NSString *const HISTORY_ACTION_HISTORYUPDATE;  //历史信息更新

extern NSString *const MODULE_ACTION_SELECTMODULEUPDATE;//用户选择模块信息更新

extern NSString *const MODULE_ACTION_RECENTMODULEUPDATE;//用户最近使用模块信息更新

extern NSString *const MODULE_ACTION_SELECTMODULERELOAD; //用户选择模块信息更新 刷新页面

extern NSString *const EMAP_ACTION_ADD_MAIN;//光栅图添加主图
extern NSString *const EMAP_ACTION_ADD_HOTZONE;//光栅图添加热区
extern NSString *const EMAP_ACTION_DELETE_MAIN;//光栅图删除主图
extern NSString *const EMAP_ACTION_DELETE_HOTZONE;//光栅图删除热区
extern NSString *const EMAP_ACTION_MAPTYPE_CHANGED;
extern NSString *const EMAP_ACTION_RASTER_CHANNEL_CHANGE; //光栅通道增删改
extern NSString *const EMAP_ACTION_RASTER_MODIFY;

extern NSString *const VT_CALL_ACTION_EVENT_REGISTER ;  ///< 注册CSC
extern NSString *const VT_CALL_ACTION_EVENT_STOP ;      ///< 停止可视对讲
extern NSString *const VT_CALL_ACTION_EVENT_INVITE;     ///< 请求可视对讲
extern NSString *const VT_CALL_ACTION_EVENT_CANCEL;     ///< 主叫方取消呼叫（未接通前取消或客户端超时未接听）
extern NSString *const VT_CALL_ACTION_EVENT_BYE;        ///< VTO挂断已接通的通话
extern NSString *const VT_CALL_ACTION_EVENT_RING;       ///< 对方响铃
extern NSString *const VT_CALL_ACTION_EVENT_BUSY;       ///< 对方忙线
extern NSString *const VT_CALL_ACTION_MESSAGE_START;    ///< 对方挂断
extern NSString *const VT_CALL_ACTION_MESSAGE_SCS_APP_NOTIFY;

extern NSString *const VT_CALL_ACTION_TRANSEFER;

extern NSString *const VT_CALL_ACTION_RECORD_REFRESH;    ///< 可视对讲模块接到记录消息推送刷新

extern NSString *const VTSS_ACTION_ACCESS_CONTROL_MESSAGE;  ///< 可视对讲开门消息通知
extern NSString *const VTSS_ACTION_ALARM_MESSAGE;           ///< 可视对讲报警消息通知
extern NSString *const VTSS_ACTION_USER_INFO_CHANGED;       ///< 可视对讲用户信息修改通知（关联设备被删除，用户被删除，用户被冻结，用户密码被重置）
extern NSString *const VTSS_ACTION_USER_DELETED;            ///< 用户被删除
extern NSString *const VTSS_ACTION_PASSWORD_RESET;          ///< 用户密码被重置
extern NSString *const VTSS_ACTION_USER_FREEZE;             ///< 用户被冻结
extern NSString *const VTSS_ACTION_LOGIN_ON_OTHER_CLIENT;   ///< 用户在其他终端上登录
extern NSString *const VTSS_ACTION_DEVICE_DELETED;          ///< 设备被删除
extern NSString *const VTSS_ACTION_DEVICE_OFFLINE;          ///< 设备离线
extern NSString *const VTSS_ACTION_DEVICE_ONLINE;           ///< 设备在线
extern NSString *const VTSS_ACTION_SIPNUM_CHANGE;           ///< SIP号码变更

extern NSString *const BUSINESS_ACTION_PUSH_BUSINESSNOTIFY;  //收到一条新业务通知 zgyh

extern NSString *const DEVICE_ACTION_DEVICE_STATUS;  // 设备状态变更

extern NSString *const DEVICE_ACTION_CHANNEL_STATUS;  // 通道状态变更

extern NSString *const DEVICE_ACTION_CHANNEL_DOOR_STATUS;  // 通道状态变更

extern NSString *const DEVICE_ACTION_ENTRANCEGUARD_GLOBAL_DOORSTATUS_CHANGED; //门禁模块全局常开常关状态变更

extern NSString *const DEVICE_ACTION_CHANNEL_STEAMTYPE;  // 通道码流修改

extern NSString *const DEVICE_ACTION_ADD_CHANNEL;  // 通道添加

extern NSString *const DEVICE_ACTION_MODIFY_CHANNEL;  // 通道修改

extern NSString *const DEVICE_ACTION_DEL_CHANNEL;  // 通道删除

extern NSString *const DEVICE_ACTION_DEL_ORG_DEVICE;  //逻辑设备删除

extern NSString *const DEVICE_ACTION_DEL_ORG_CHANNEL;  //逻辑通道删除

extern NSString *const DEVICE_ACTION_ADD_ORG_CHANNEL;  //逻辑通道添加

extern NSString *const DEVICE_ACTION_ADD_DEVICE;  // 设备添加

extern NSString *const DEVICE_ACTION_MODIFY_DEVICE;  // 设备修改

extern NSString *const DEVICE_ACTION_MOVE_DEVICE;  // 设备所属组织变更

extern NSString *const DEVICE_ACTION_DEL_DEVICE;  // 设备删除

extern NSString *const DEVICE_ACTION_DEVICE_PARSER;  // 设备分级加载

extern NSString *const DEVICE_ACTION_CHANNEL_PARSER;  // 逻辑组织通道分级加载

extern NSString *const DEVICE_ACTION_ADD_GROUP;  // 组织添加

extern NSString *const DEVICE_ACTION_MODIFY_GROUP;  // 组织修改
extern NSString *const DEVICE_ACTION_DEL_GROUP;  // 组织删除


extern NSString *const DEVICE_ACTION_CHANNEL_RIGHT_CHANGE;  // 通道权限变更


extern NSString *const DEVICE_ACTION_USER_ROLE_CHANGED;  //  用户角色变更

extern NSString *const DEVICE_ACTION_ROLE_ORG_CHANGED;

extern NSString *const DEVICE_ACTION_LOGIC_ORG_CHANGED;  //

extern NSString *const DEVICE_ACTION_MENURIGHT_CHANGED;

extern NSString *const DEVICE_ACTION_REFRESHING;  //刷新中。。

extern NSString *const DEVICE_ACTION_STOP_REFRESHING;  //停止刷新。。

extern NSString *const DEVICE_ACTION_ALARMHOST_DEVICE_STATUS;  //设备布撤防状态

extern NSString *const DEVICE_ACTION_ALARMHOST_UNIT_STATUS;  //单元/子防区状态-UnitInfo


extern NSString *const DEVICE_ACTION_ALARMHOST_CHANNEL_STATUS;  //单元/子防区状态-UnitInfo

extern NSString *const DEVICE_ACTION_DEVICE_MODIFY_MEDIAVK;

extern NSString *const DEVICE_ACTION_DEVICE_LOAD_FINISHED;

extern NSString *const DEVICE_ACTION_REGET;

extern NSString *const DEVICE_ACTION_COLLECTION_CHANGED;
extern NSString *const DEVICE_ACTION_FAV_CHANNEL_STATUS;
extern NSString *const ENTRANCEGUARD_ACTION_BATCHADD_PERSON;
extern NSString *const ENTRANCEGUARD_ACTION_ADD_PERSON; //门禁模块新增人员
extern NSString *const ENTRANCEGUARD_ACTION_DELETE_PERSON; //门禁模块删除人员

extern NSString *const ENTRANCEGUARD_ACTION_UPDATE_PERSON; //门禁模块人员信息更新

extern NSString *const ENTRANCEGUARD_ACTION_DOORSTATUS_CHANGE; //门禁模块开门状态更新

extern NSString *const TVWALL_ACTION_TVWALL_ADD; // 新增电视墙

extern NSString *const TVWALL_ACTION_TVWALL_MODIFY; // 修改电视墙，本修改通知消息权限字段无效，请勿使用

extern NSString *const TVWALL_ACTION_TVWALL_DELETE; // 删除电视墙

extern NSString *const TVWALL_ACTION_TVWALL_MODIFY_RIGHT; // 权限电视墙修改

extern NSString *const TVWALL_ACTION_TVWALL_MODIFY_CONFIG; // 电视墙生效修改

extern NSString *const TVWALL_ACTION_TVWALL_RUN_INFO; //TODO:-电视墙运行信息通知

extern NSString *const TVWALL_ACTION_TVWALL_NAME_MODIFY;   ///< 电视墙名字修改

extern NSString *const TVWALL_ACTION_TVWALL_LAYOUT_MODIFY; // 电视墙布局修改通知（非平台通知，由本地判断，如果修改则通知上层）
extern NSString *const SIGNAL_ACTION_SIGNAL_STATICDATA_CHANGED; // 信号灯静态信息刷新

extern NSString *const SIGNAL_ACTION_SIGNAL_DYNAMICDATA_CHANGED; // 信号灯动态信息刷新
extern NSString *const SIGNAL_ACTION_SIGNAL_LOCK_SUCCESS;   // 信号灯锁定成功
extern NSString *const SIGNAL_ACTION_SIGNAL_LOCK_FAILED;   // 信号灯锁定失败
extern NSString *const SIGNAL_ACTION_SIGNAL_UNLOCK_SUCCESS;   // 信号灯解锁成功
extern NSString *const SIGNAL_ACTION_SIGNAL_UNLOCK_FAILED;   // 信号灯解锁失败

extern NSString *const SIGNAL_ACTION_SIGNAL_LOCK_PHASE_SUCCESS;   // 信号灯锁定成功
extern NSString *const SIGNAL_ACTION_SIGNAL_LOCK_PHASE_FAILED;   // 信号灯锁定失败
extern NSString *const SIGNAL_ACTION_SIGNAL_UNLOCK_PHASE_SUCCESS;   // 信号灯解锁成功
extern NSString *const SIGNAL_ACTION_SIGNAL_UNLOCK_PHASE_FAILED;   // 信号灯解锁失败

extern NSString *const SIGNAL_ACTION_SIGNAL_CHANGEPLAN_SUCCESS;   // 信号灯解锁成功
extern NSString *const SIGNAL_ACTION_SIGNAL_CHANGEPLAN_FAILED;   // 信号灯解锁失败

extern NSString *const SIGNAL_ACTION_SIGNAL_SPECIAL_LIST_WUXI;

extern NSString *const FACELIBRARY_ACTION_ADD_PERSON;   //人脸库，人员添加
extern NSString *const FACELIBRARY_ACTION_MODIFY_PERSON;   //人脸库，人员添加

extern NSString *const ALARMCENTER_ACTION_NEW_ALARM;
extern NSString *const ALARMCENTER_ACTION_NEW_ALARM_UPDATE;
extern NSString *const ALARMCENTER_ACTION_NEW_TODO_ALARM;           // 新待办报警推送
extern NSString *const ALARMCENTER_ACTION_NEW_TODO_ALARM_UPDATE;    // 新待办报警更新完成
extern NSString *const ALARMCENTER_ACTION_NEW_COMMENT;
extern NSString *const ALARMCENTER_ACTION_NEW_ALARM_HANDLE;
extern NSString *const ALARMCENTER_ACTION_NEW_FOLLOW_ALARM_HANDLE;
extern NSString *const ALARMCENTER_ACTION_NEW_FACE_ALARM;

extern NSString *const ALARM_CENTER_NEW_PUSH_MESSAGE;
extern NSString *const ALARM_CENTER_NEW_PUSH_MESSAGE_UPDATE;

extern NSString *const FACEREPOSITORY_ACTION_ADD_REPOSITORY;
extern NSString *const FACEREPOSITORY_ACTION_DELETE_REPOSITORY;
extern NSString *const FACEREPOSITORY_ACTION_MODIFY_REPOSITORY;

extern NSString *const FACEREPOSITORY_ACTION_ADD_PERSONTYPE; //添加人员类型
extern NSString *const FACEREPOSITORY_ACTION_DELETE_PERSONTYPE; //删除人员类型
extern NSString *const FACEREPOSITORY_ACTION_MODIFY_PERSONTYPE; //修改人员类型

extern NSString *const VIDEOSHARE_ACTION_RECEIVE_NEW_MSG;

extern NSString *const PASSENGERFLOW_ACTION_RULE_REFRESH;    ///< 客流模块规则刷新

extern NSString *const ALARM_SUBSCRIBE_STATUS_UPDATE;   //报警订阅状态更新

extern NSString *const OFFLINECALL_SUBSCRIBE_STATUS_UPDATE;

extern NSString *const APP_HOST_MODULE_DID_APPEAR;     //App主模块已经加载

/// DSSAlarmMessageInfo的status状态变更的通知。第一次赋值的话，不做通知
extern NSString *const AlarmMessageInfoStatusChangedNotification;

extern NSString *const VISITOR_ACTION_VISITOR_CONFIG_UPDATE;
extern NSString *const PLAYBACK_ACTION_SHOW_OPEN_INSIDEBTN;     //显示打开画中画按钮

extern NSString *const ALARMHOST_ACTION_UPDATE;     //报警主机子系统状态更新
extern NSString *const DEFENCEAREA_ACTION_UPDATE;     //报警主机防区状态更新
extern NSString *const ALARMHOST_ACTION_REFRESH;      //报警主机刷新

extern NSString *const DEVICE_ACTION_USER_DATA_CHANGE; //用户视图变更

extern NSString *const MESSAGE_ACTION_PUSH_NEW_TASK;
extern NSString *const MESSAGE_ACTION_UPDATE_TASK;
extern NSString *const MESSAGE_ACTION_RECALL_TASK;
extern NSString *const MESSAGE_ACTION_PUSH_NEW_NOTIFICATION;
extern NSString *const MESSAGE_ACTION_UPDATE_NOTIFICATION;
extern NSString *const MESSAGE_ACTION_ALARM_GPS_UPDATE; 
extern NSString *const USER_ACTION_USER_CARD_UPDATE;
extern NSString *const MESSAGE_ACTION_REPORT_GPS_INFO;

extern NSString *const PLAYBACK_UPDATE_RECORDS;     //回放模块更新时间片段
extern NSString *const PLAYBACK_UPDATE_RECORDS_FORCHANNELS;     //回放模块更新时间片段(多路)
extern NSString *const MESSAGE_ACTION_ALARM_TYPE_UPDATE;
extern NSString *const MESSAGE_WEBSOCKET_RECEIVE;//webSocket收到消息
