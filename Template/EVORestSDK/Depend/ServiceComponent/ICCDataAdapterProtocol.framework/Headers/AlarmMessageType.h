//
//  AlarmMessageType.h
//  Pods
//
//  Created by zyx on 17/3/6.
//
//

#import <Foundation/Foundation.h>

// 报警类型
typedef NS_ENUM(NSUInteger, MBL_ALARM_TYPE) {
    MBL_ALARM_TYPE_Unknown					= 0,					// 未知(查询报警时可用于查询所有报警，即不过滤报警类型)
    MBL_ALARM_TYPE_VIDEO_LOST				= 1,					// 视频丢失
    MBL_ALARM_TYPE_EXTERNAL_ALARM			= 2,					// 外部报警
    MBL_ALARM_TYPE_MOTION_DETECT			= 3,					// 移动侦测
    MBL_ALARM_TYPE_VIDEO_SHELTER			= 4,					// 视频遮挡
    MBL_ALARM_TYPE_DISK_FULL				= 5,					// 硬盘满
    MBL_ALARM_TYPE_DISK_FAULT				= 6,					// 硬盘故障
    MBL_ALARM_TYPE_FIBER					= 7,					// 光纤报警
    MBL_ALARM_TYPE_GPS						= 8,					// GPS信息
    MBL_ALARM_TYPE_3G						= 9,					// 3G
    
    //设备巡检
    MBL_ALARM_TYPE_STATUS_RECORD			= 10,					// 设备录像状态
    MBL_ALARM_TYPE_STATUS_DEVNAME			= 11,					// 设备名
    MBL_ALARM_TYPE_STATUS_DISKINFO			= 12,					// 硬盘信息
    
    MBL_ALARM_TYPE_IPC_OFF					= 13,					// 前端IPC断线
    
    MBL_ALARM_TYPE_DEV_DISCONNECT			= 16,					//设备断线报警
    
    //景德镇华润燃气项目
    MBL_ALARM_TYPE_POWER_INTERRUPT				= 17,					// 市电中断报警
    MBL_ALARM_TYPE_POWER_ENABLED					= 18,					// 市电启用报警
    MBL_ALARM_TYPE_INFRARED_DETECT				= 19,					// 红外探测报警
    MBL_ALARM_TYPE_GAS_OVER_SECTION				= 20,					// 燃气浓度超过上限
    MBL_ALARM_TYPE_FLOW_OVER_SECTION				= 21,					// 瞬时流量超过上限
    MBL_ALARM_TYPE_TEMPERATURE_OVER_SECTION		= 22,					// 温度超过上限
    MBL_ALARM_TYPE_TEMPERATURE_UNDER_SECTION		= 23,					// 温度低于下限
    MBL_ALARM_TYPE_PRESSURE_OVER_SECTION			= 24,					// 压力超过上限
    MBL_ALARM_TYPE_PRESSURE_UNDER_SECTION		= 25,					// 压力低于下限
    
    MBL_ALARM_TYPE_STATIC_DETECTION              = 26,					// 静态检测
    MBL_ALARM_TYPE_ALARM_BEGULAR                 = 27,                  //定时查岗
    MBL_ALARM_TYPE_REMOTE_EXTERNAL_ALARM			= 28,					// 远程外部报警
    MBL_ALARM_BUTTON_EXTERNAL_ALARM            = 29,                    // 报警按钮外部报警
    MBL_ALARM_POWER_INTERRUPT_EXTERNAL_ALARM  = 30,                    // 断电信号外部报警
    MBL_ALARM_RECORD_LOSS                     = 31,                    // 录像丢失事件，指硬盘完好的情况下，发生误删等原因引起
    MBL_ALARM_VIDEO_FRAME_LOSS                = 32,                    // 视频丢帧事件，比如网络不好或编码能力不足引起的丢帧
    ALARM_RECORD_VOLUME_FAILURE               = 33,                   // 由保存录像的磁盘卷发生异常，引起的录像异常
    
    
    //门禁
    MBL_ALARM_TYPE_DOOR_BEGIN					= 40,					// 门禁设备报警起始
    MBL_ALARM_TYPE_FORCE_CARD_OPENDOOR			= 41,					// 胁迫刷卡开门
    MBL_ALARM_TYPE_VALID_PASSWORD_OPENDOOR		= 42,					// 合法密码开门
    MBL_ALARM_TYPE_INVALID_PASSWORD_OPENDOOR		= 43,					// 非法密码开门
    MBL_ALARM_TYPE_FORCE_PASSWORD_OPENDOOR		= 44,					// 胁迫密码开门
    MBL_ALARM_TYPE_VALID_FINGERPRINT_OPENDOOR	= 45,					// 合法指纹开门
    MBL_ALARM_TYPE_INVALID_FINGERPRINT_OPENDOOR  = 46,					// 非法指纹开门
    MBL_ALARM_TYPE_FORCE_FINGERPRINT_OPENDOOR	= 47,					// 胁迫指纹开门
    MBL_ALARM_TYPE_REMOTE_METHOD_OPENDOOR		= 48,					// 远程开门:室内机开门/平台远程开门
    MBL_ALARM_TYPE_BUTTON_METHOD_OPENDOOR		= 49,					// 按钮开门
    MBL_ALARM_TYPE_LOCKKEY_METHOD_OPENDOOR		= 50,					// 钥匙开门
    MBL_ALARM_TYPE_VALID_CARD_READ			= 51,					// 合法刷卡/开门
    MBL_ALARM_TYPE_INVALID_CARD_READ		= 52,					// 非法刷卡/开门
    MBL_ALARM_TYPE_DOOR_MAGNETIC_ERROR		= 53,					// 门磁
    MBL_ALARM_TYPE_DOOR_BREAK				= 54,					// 异常开门
    MBL_ALARM_TYPE_DOOR_ABNORMAL_CLOSED		= 55,					// 异常关门
    MBL_ALARM_TYPE_DOOR_NORMAL_CLOSED		= 56,					// 正常关门
    MBL_ALARM_TYPE_DOOR_OPEN				= 57,					// 正常开门
    
    MBL_ALARM_TYPE_TALK_REQUEST				 	= 59,					//门禁对讲请求报警
    MBL_ALARM_DOOR_OPEN_TIME_OUT_BEG        = 60,
    MBL_ALARM_VALID_FACE_OPENDOOR            = 61,                    // 合法人脸开门
    MBL_ALARM_INVALID_FACE_OPENDOOR            = 62,                    // 非法人脸开门
    MBL_ALARM_DOOR_OPEN_TIME_OUT_THIRD      = 63,                   // 超时等级三
    MBL_ALARM_DOOR_OPEN_TIME_OUT_FOUR       = 64,                   // 超时等级四
    MBL_ALARM_DOOR_OPEN_TIME_OUT_FIVE       = 65,                   // 超时等级五
    MBL_ALARM_DOOR_OPEN_TIME_OUT_ONE        = 66,                   // 超时等级一
    MBL_ALARM_DOOR_OPEN_TIME_OUT_SECOND     = 67,                   // 超时等级二
    MBL_ALARM_TYPE_DOOR_OPEN_TIME_OUT_END		= 70,
    
    MBL_ALARM_DOOR_INVALID_SECOND_OPEN        = 71,                    // 文教卫河东幼儿园需求，同一孩子绑定的第二张卡刷卡报警
    //ALARM_DOOR_OPEN_FORCE                = 71,                    // 门强制打开
    MBL_ALARM_OPEN_DOOR_OVERTIME            = 72,                    // 开门超时
    MBL_ALARM_LEGAL_CARD_ILLEGAL_TIME        = 73,                    // 合法卡非法时间
    MBL_ALARM_LEGAL_CARD_ILLEGAL_AREA        = 74,                    // 合法卡非法区域
    MBL_ALARM_SWING_CARD_RULE_OPEN            = 75,                    // 刷卡规则开门 = 75
    MBL_ALARM_SWING_CARD_RULE_REQUEST_OPEN    = 76,                    // 刷卡规则请求开门 = 76
    MBL_ALARM_DOOR_ENTRY                    = 77,                    // 进门
    MBL_ALARM_DOOR_EXIT                        = 78,                    // 出门
    MBL_ALARM_AB_DOOR_DOUBLE_OPEN            = 79,                    // AB门双开
    
    //报警主机
    MBL_ALARM_TYPE_ALARMHOST_BEGIN			= 80,
    MBL_ALARM_TYPE_ALARM_CONTROL_ALERT		= 81,					// 报警主机报警
    MBL_ALARM_TYPE_FIRE_ALARM				= 82,					// 火警
    MBL_ALARM_TYPE_ZONE_DISABLED			= 83,					// 防区失效
    MBL_ALARM_TYPE_BATTERY_EMPTY			= 84,					// 电池没电-设备报警
    MBL_ALARM_TYPE_AC_OFF					= 85,					// 市电断开-设备报警
    //大力高速报警平台报警（上行和下行）
    MBL_ALARM_DALI_UP                       = 86,                    // 上行报警
    MBL_ALARM_TYPE_DALI_DOWN				= 87,					// 下行报警
    //新增“晨鹰”厂商哨位机报警
    MBL_ALARM_PRISONERS_ESCAPE                = 88,                    // 犯人逃跑
    MBL_ALARM_PRISONERS_RIOT                  = 89,                    // 犯人暴狱
    MBL_ALARM_TARGET_ATTACK                    = 90,                    // 目标遭袭
    MBL_ALARM_NATURAL_DISASTER                = 91,                    // 自然灾害
    MBL_ALARM_ONEKEY_ALARM                    = 92,                    // 一键报警
    MBL_ALARM_EMERGENCY_BUTTON                = 93,                   // 紧急按钮
    //end 100
    MBL_ALARM_BREAKIN_ALARM                   = 94,                    //两个防区同时入侵
    MBL_ALARM_HOST_CHANNEL_OFFLINE            = 95,                    // 报警主机通道离线报警
    MBL_ALARM_FLASH_LAMP_OFF                  = 96,                    // 闪光灯离线报警
    
    MBL_ALARM_DISABLE_ARM_ABNORMAL            = 97,                    // 撤防异常
    MBL_ALARM_BYPASS_ABNORMAL                 = 98,                    // 旁路异常
    MBL_ALARM_ALARMHOST_EXTERNAL_ALARM        = 99,                    // 报警主机外部报警
    
    MBL_ALARM_TYPE_ALARMHOST_END                  = 100,
    
    MBL_ALARM_TYPE_FILESYSTEM				    = 100,					// 文件系统
    MBL_ALARM_TYPE_RAID_FAULT					= 101,					// raid故障
    MBL_ALARM_TYPE_RECORDCHANNELFUNCTION_ABNORMAL= 102,					// 录像通道功能异常
    MBL_ALARM_TYPE_SVR_HARDDISK_STATUS					= 103,					// 硬盘状态
    MBL_ALARM_TYPE_RECORD_REPAIR                 = 104,					// 录像补全 -P3.0
    
    //begin电网报警类型
    MBL_ALARM_TYPE_ELECTRIC_WIRE_SHOCK					= 109,					// 电网触电
    MBL_ALARM_TYPE_ELECTRIC_WIRE_INTERRUPT				= 110,					// 电网断电
    MBL_ALARM_TYPE_ELECTRIC_WIRE_SHORT_CIRCUIT			= 111,					// 电网短路
    MBL_ALARM_TYPE_ELECTRIC_WIRE_BREAKDOWN				= 112,					// 电网故障
    MBL_ALARM_TYPE_ELECTRIC_WIRE_VOLTAGE_LOW			= 113,					// 电网电压低
    //end
    MBL_ALARM_TYPE_RECORD_WRITE_FAIL		= 114,					// 录像写入失败
    
    //电网报警类型新增begin add by hu_wenjuan
    MBL_ALARM_TYPE_BEGIN_EX             = 115,
    ELECTRIC_BREAK_CIRCUIT              = 115,                  // 电网开路
    ELECTRIC_SENSE_ALARM                = 116,                  // 电网传感报警
    MBL_ALARM_TYPE_END_EX               = 150,
    //电网报警类型新增end
    
    MBL_ALARM_TYPE_VTT_URGENCY                   = 160,                  // VTT设备紧急按钮报警
    MBL_ALARM_APPROVE_LEAVE                    = 165,                    // 请销假批准外出报警
    MBL_ALARM_DISAPPROVE_LEAVE                = 166,                     // 请销假未批准外出报警
    MBL_ALARM_NORMAL_BACK                    = 167,                    // 请销假正常归队报警
    MBL_ALARM_ABNORMAL_BACK                    = 168,                  // 请销假异常归队报
    
    //政企河南气象局定制项目报警类型begin
    MBL_ALARM_TYPE_LIGTHON_ALARM                 = 169,          		// 机房开灯
    MBL_ALARM_TYPE_HUMIDITY_ALARM                = 170,          		// 湿度异常
    MBL_ALARM_TYPE_COMMUNICATION_ALARM           = 171,          		// 通信状态告警
    MBL_ALARM_TYPE_DOOROPEN_ALARM                = 172,          		// 机房门开
    MBL_ALARM_TYPE_WATEROUT_ALARM                = 173,          		// 水浸告警
    MBL_ALARM_TYPE_THEFT_ALARM                   = 174,          		// 防盗告警
    MBL_ALARM_TYPE_THALPOSISWARNING_ALARM        = 175,          		// 温感告警
    MBL_ALARM_TYPE_THALPOSISFAULT_ALARM          = 176,          		// 温感故障
    MBL_ALARM_TYPE_SMOKEWARNING_ALARM            = 177,           		// 烟感告警
    MBL_ALARM_TYPE_SMOKEFAULT_ALARM              = 178,          		// 烟感故障
    MBL_ALARM_TYPE_BUZZERWARNING_ALARM           = 179,           		// 讯响器告警
    MBL_ALARM_TYPE_INFRARED_ALARM                = 180,           		// 红外告警
    MBL_ALARM_TYPE_HUMIDITYLOW_ALARM             = 181,           		// 湿度过低
    MBL_ALARM_TYPE_RUNNINGSTATUS_ALARM           = 182,          		// 运行状态提示
    MBL_ALARM_TYPE_TEMPERATURELOW_ALARM          = 183,          		// 温度过低
    MBL_ALARM_TYPE_TEMPERATUREHIGH_ALARM         = 184,           		// 温度过高
    MBL_ALARM_TYPE_FOG_ALARM                     = 185,           		// 烟雾告警
    MBL_ALARM_TYPE_FIREINHOUSE_ALARM             = 186,           		// 机房火警
    MBL_ALARM_TYPE_OUTDOORTHEFT_ALARM            = 187,           		// 室外机被盗告警
    MBL_ALARM_TYPE_BUZZERFAULT_ALARM             = 188,           		// 讯响器故障
    MBL_ALARM_TYPE_COMMUNICATEDSTATUS_ALARM      = 189,           		// 通讯状况
    MBL_ALARM_TYPE_BUTTONFAULT_ALARM             = 190,           		// 手动按钮故障
    MBL_ALARM_TYPE_BUTTONWARNING_ALARM           = 191,           		// 手动按钮告警
    MBL_ALARM_TYPE_FIREDAMPERFAULT_ALARM         = 192,           		// 防火阀故障
    MBL_ALARM_TYPE_FIREDAMPERWARNING_ALARM       = 193,           		// 防火阀告警
    MBL_ALARM_TYPE_SMOKEDAMPERFAULT_ALARM        = 194,           		// 排烟阀故障
    MBL_ALARM_TYPE_SMOKEDAMPERWARNING_ALARM      = 195,           		// 排烟阀告警
    //政企河南气象局定制项目报警类型end
    MBL_ALARM_VEHICLE_INVASION                = 196,                    //车辆入侵报警
    MBL_ALARM_CROSSLINE_DETECTION           = 198,                     //绊线入侵报警
    ALARM_CROSSREGION_DETECTION         = 199,                     //区域入侵报警
    
    
    //-M的相关报警在这里添加
    MBL_ALARM_TYPE_MOTOR_BEGIN					= 200,
    MBL_ALARM_TYPE_OVERSPEED_OCCURE				= 201, 					// 超速报警产生
    MBL_ALARM_TYPE_OVERSPEED_DISAPPEAR  			= 202,					// 超速报警消失
    MBL_ALARM_TYPE_DRIVEROUT_DRIVERALLOW			= 203,					// 驶出行区
    MBL_ALARM_TYPE_DRIVERIN_DRIVERALLOW			= 204,					// 驶入行区
    MBL_ALARM_TYPE_DRIVEROUT_FORBIDDRIVE			= 205,					// 驶出禁入区
    MBL_ALARM_TYPE_DRIVERIN_FORBIDDRIVE			= 206,					// 驶入禁入区
    MBL_ALARM_TYPE_DRIVEROUT_LOADGOODS			= 207,					// 驶出装货区
    MBL_ALARM_TYPE_DRIVERIN_LOADGOODS			= 208,					// 驶入装货区
    MBL_ALARM_TYPE_DRIVEROUT_UNLOADGOODS			= 209,					// 驶出卸货区
    MBL_ALARM_TYPE_DRIVERIN_UNLOADGOODS			= 210,					// 驶入卸货区
    MBL_ALARM_TYPE_CAR_OVER_LOAD					= 211,					// 超载
    MBL_ALARM_TYPE_SPEED_SOON_ZERO				= 212,					// 急刹车
    MBL_ALARM_TYPE_3GFLOW						= 213,					// 3G流量
    MBL_ALARM_TYPE_AAC_POWEROFF					= 214,					// ACC断电报警
    MBL_ALARM_TYPE_SPEEDLIMIT_LOWERSPEED			= 215,					// 限速报警 LowerSpeed
    MBL_ALARM_TYPE_SPEEDLIMIT_UPPERSPEED			= 216,					// 限速报警 UpperSpeed
    MBL_ALARM_TYPE_VEHICLEINFOUPLOAD_CHECKIN		= 217,					// 车载自定义信息上传 CheckIn
    MBL_ALARM_TYPE_VEHICLEINFOUPLOAD_CHECKOUT	= 218,					// 车载自定义信息上传 CheckOut
    MBL_ALARM_TYPE_CAR_OPEN_DOOR 				= 219,                	// 开门报警
    MBL_ALARM_TYPE_URGENCY						= 220,					// 紧急报警
    MBL_ALARM_TYPE_VEHICLE_LARGE_ANGLE 			= 224,    				// 车载摄像头大角度扭转事件
    MBL_ALARM_TYPE_BATTERYLOWPOWER 				= 225,            		// 电池电量低报警
    MBL_ALARM_TYPE_TEMPERATURE 					= 226,                  // 温度过高报警
    MBL_ALARM_TYPE_DEV_VOICE_EX     				= 229,    				// 设备语音请求报警
    MBL_ALARM_TYPE_POWER_OFF_EX     				= 230,    				// 断电报警
    MBL_ALARM_TYPE_ROUTE_OFFSET_EX  				= 231,    				// 线路偏移报警
    MBL_ALARM_TYPE_TYRE_PRESSURE_EX 				= 232,    				// 轮胎气压检测报警
    MBL_ALARM_TYPE_FATIGUE_DRIVING				= 233,					// 疲劳驾驶报警
    MBL_ALARM_TYPE_DRIVER_CHECKIN				= 234,					// 司机签入
    MBL_ALARM_TYPE_DRIVER_CHECHOUT				= 235,					// 司机签出
    MBL_ALARM_TYPE_GAS_LOWLEVEL					= 236,					// 油耗报警
    MBL_ALARM_TYPE_GAS_INFO						= 237,					// 油耗信息
    MBL_ALARM_TYPE_GETIN_STATION					= 238,					// 进站报警
    MBL_ALARM_TYPE_GETOUT_STATION				= 239,					// 出站报警
    MBL_ALARM_TYPE_STATION_BEGIN_IN				= 240,					// 始发站进站报警
    MBL_ALARM_TYPE_STATION_BEGIN_OUT				= 241,					// 始发站出站报警
    MBL_ALARM_TYPE_STATION_END_IN				= 242,					// 终点站进站报警
    MBL_ALARM_TYPE_STATION_END_OUT				= 243,					// 终点站出站报警 <进出站类报警放在一起了>
    MBL_ALARM_TYPE_STAY_STATION_OVERTIME			= 244,					// 停车超时报警
    MBL_ALARM_TYPE_RECOVER_RUNNING				= 245,					// 恢复营运报警
    MBL_ALARM_TYPE_MEAL							= 246,					// 吃饭报警
    MBL_ALARM_TYPE_BLOCK							= 247,					// 路堵报警
    MBL_ALARM_TYPE_CALL							= 248,					// 通话报警
    MBL_ALARM_TYPE_CAR_BREAKDOWN					= 249, 					// 车坏报警
    MBL_ALARM_TYPE_STOP_RUNNING					= 250,					// 停止营运报警
    MBL_ALARM_TYPE_ROBING						= 251, 					// 盗抢报警
    MBL_ALARM_TYPE_DISPUTE						= 252, 					// 纠纷报警
    MBL_ALARM_TYPE_ACCIDENT						= 253, 					// 事故报警
    MBL_ALARM_TYPE_OVER_SPEED					= 254, 					// 超速报警
    MBL_ALARM_TYPE_RENTAL						= 255, 					// 包车报警
    MBL_ALARM_TYPE_MAINTENANCE					= 256, 					// 车辆保养报警
    MBL_ALARM_TYPE_CLOSURE						= 257, 					// 脱保停运报警
    MBL_ALARM_TYPE_OPEN_OR_CLOSE_DOOR			= 258,					// 开关门报警
    MBL_ALARM_TYPE_ILLEGALIN_OVERSPEED			= 259,					// 非法进入限速区报警
    MBL_ALARM_TYPE_ILLEGALOUT_OVERSPEED			= 260,					// 非法驶出限速区报警
    MBL_ALARM_TYPE_ILLEGALIN_DRIVERALLOW			= 261,					// 非法进入行使区报警
    MBL_ALARM_TYPE_ILLEGALOUT_DRIVERALLOW		= 262,					// 非法驶出行使区报警
    MBL_ALARM_TYPE_ILLEGALIN_FORBIDDRIVE			= 263,					// 非法进入禁入区报警
    MBL_ALARM_TYPE_ILLEGALOUT_FORBIDDRIVE		= 264,					// 非法驶出禁入区报警
    MBL_ALARM_TYPE_ILLEGALIN_LOADGOODS			= 265,					// 非法进入装货区报警
    MBL_ALARM_TYPE_ILLEGALOUT_LOADGOODS			= 266,					// 非法驶出装货区报警
    MBL_ALARM_TYPE_ILLEGALIN_UNLOADGOODS			= 267,					// 非法进入卸货区报警
    MBL_ALARM_TYPE_ILLEGALOUT_UNLOADGOODS		= 268,					// 非法驶出卸货区报警
    MBL_ALARM_TYPE_ILLEGALIN_GETIN_STATION		= 269,					// 非法进站报警
    MBL_ALARM_TYPE_ILLEGALIN_GETOUT_STATION		= 270,					// 非法出站报警
    MBL_ALARM_TYPE_DETAINED                      = 272,                  // 车辆滞留报警
    MBL_ALARM_TYPE_DELAY                         = 273,                  // 托班报警，车辆班次拖延
    MBL_ALARM_SHAP_TURNING                     = 274,                    // 急转报警
    MBL_ALARM_SHAP_SPEEDUP                    = 275,                    // 急加速
    MBL_ALARM_SHAP_SLOWDOWN                    = 276,                    // 急减速
    MBL_ALARM_STOP_OVERTIME                    = 277,                    // 停车超时报警（辽宁油罐车项目）
    MBL_ALARM_RUN_NONWOKINGTIME                = 278,                    // 非工作时间驾驶报警（辽宁油罐车项目）
    MBL_ALARM_PASSENGER_CHECK_CARD           = 279,                    // 乘客刷卡事件上报（黑龙江校车项目）
    
    MBL_ALARM_BUS_STEAL_OIL                   = 280,                    // 偷油事件
    MBL_ALARM_BUS_LOW_OIL                   = 281,                    // 低油量报警事件
    MBL_ALARM_BUS_CUR_OIL                   = 282,                    // 当前油耗情况事件
    
    MBL_ALARM_SWIPE_OVERTIME                = 283,                  // 司机没有刷卡（泰国Usupply项目）
    MBL_ALARM_DRIVING_WITHOUTCARD           = 284,                  // 司机无卡驾驶（泰国Usupply项目）
    MBL_ALARM_NONPOWEROFF_CHECKOUT          = 285,                  // 司机签出没有关闭引擎（泰国Usupply项目)
    
    MBL_ALARM_VEHICLE_TAMPER_ALARM            = 286,                    // 车载防拆报警
    MBL_ALARM_AAC_POWERON                    = 287,                    // ACC通电报警
    MBL_ALARM_DRIVER_NOTCONFIRM                = 288,                    // 司机未确认报警
    MBL_ALARM_GPS_NOT_ALIGNED                = 289,                    // gps异常报警
    MBL_ALARM_POWER_SWITCHER                   = 290,                  //（过流）供电电源开关状态异常报警(上海奉贤)
    
    MBL_ALARM_TYPE_MOTOR_END						= 300,
    
    //智能报警
    MBL_ALARM_TYPE_IVS_ALARM_BEGIN				= 300,					// 智能设备报警类型在dhnetsdk.h基础上+300（DMS服务中添加）
    MBL_ALARM_TYPE_IVS_ALARM						= 0x00000001 + 300,		// 智能设备报警
    MBL_ALARM_TYPE_CROSSLINEDETECTION			= 0x00000002 + 300,		// 警戒线事件
    MBL_ALARM_TYPE_CROSSREGIONDETECTION			= 0x00000003 + 300,		// 警戒区事件
    MBL_ALARM_TYPE_PASTEDETECTION				= 0x00000004 + 300,		// 贴条事件
    MBL_ALARM_TYPE_LEFTDETECTION					= 0x00000005 + 300,		// 物品遗留事件
    MBL_ALARM_TYPE_STAYDETECTION					= 0x00000006 + 300,		// 停留事件
    MBL_ALARM_TYPE_WANDERDETECTION				= 0x00000007 + 300,		// 徘徊事件
    MBL_ALARM_TYPE_PRESERVATION					= 0x00000008 + 300,		// 物品保全事件
    MBL_ALARM_TYPE_MOVEDETECTION					= 0x00000009 + 300,		// 移动事件
    MBL_ALARM_TYPE_TAILDETECTION					= 0x0000000A + 300,		// 尾随事件
    MBL_ALARM_TYPE_RIOTERDETECTION				= 0x0000000B + 300,		// 聚众事件
    MBL_ALARM_TYPE_FIREDETECTION					= 0x0000000C + 300,		// 火警事件
    MBL_ALARM_TYPE_SMOKEDETECTION				= 0x0000000D + 300,		// 烟雾报警事件
    MBL_ALARM_TYPE_FIGHTDETECTION				= 0x0000000E + 300,		// 斗殴事件
    MBL_ALARM_TYPE_FLOWSTAT						= 0x0000000F + 300,		// 流量统计事件
    MBL_ALARM_TYPE_NUMBERSTAT					= 0x00000010 + 300,		// 数量统计事件
    MBL_ALARM_TYPE_CAMERACOVERDDETECTION			= 0x00000011 + 300,		// 摄像头覆盖事件
    MBL_ALARM_TYPE_CAMERAMOVEDDETECTION			= 0x00000012 + 300,		// 摄像头移动事件
    MBL_ALARM_TYPE_VIDEOABNORMALDETECTION		= 0x00000013 + 300,		// 视频异常事件
    MBL_ALARM_TYPE_VIDEOBADDETECTION				= 0x00000014 + 300,		// 视频损坏事件
    MBL_ALARM_TYPE_TRAFFICCONTROL				= 0x00000015 + 300,		//
    MBL_ALARM_TYPE_TRAFFICACCIDENT				= 0x00000016 + 300,		// 交通事故事件
    MBL_ALARM_TYPE_TRAFFICJUNCTION				= 0x00000017 + 300,		// 交通路口事件
    MBL_ALARM_TYPE_TRAFFICGATE					= 0x00000018 + 300,		// 交通卡口事件
    MBL_ALARM_TYPE_TRAFFICSNAPSHOT				= 0x00000019 + 300,		// 交通抓拍事件
    MBL_ALARM_TYPE_FACEDETECT					= 0x0000001A + 300,		// 人脸检测事件--正常人脸检测。mark:异常人脸检测（901）在下方定义，类型区分放在DMS,2013.12.10,18842)
    MBL_ALARM_TYPE_TRAFFICJAM					= 0x0000001B + 300,		// 交通拥堵事件
    
    MBL_ALARM_TYPE_TRAFFIC_RUNREDLIGHT			= 0x00000100 + 300,		// 交通违章-闯红灯事件
    MBL_ALARM_TYPE_TRAFFIC_OVERLINE				= 0x00000101 + 300,		// 交通违章-压车道线事件
    MBL_ALARM_TYPE_TRAFFIC_RETROGRADE			= 0x00000102 + 300,		// 交通违章-逆行事件
    MBL_ALARM_TYPE_TRAFFIC_TURNLEFT				= 0x00000103 + 300,		// 交通违章-违章左转
    MBL_ALARM_TYPE_TRAFFIC_TURNRIGHT			    = 0x00000104 + 300,		// 交通违章-违章右转
    MBL_ALARM_TYPE_TRAFFIC_UTURN					= 0x00000105 + 300,		// 交通违章-违章掉头
    MBL_ALARM_TYPE_TRAFFIC_OVERSPEED				= 0x00000106 + 300,		// 交通违章-超速
    MBL_ALARM_TYPE_TRAFFIC_UNDERSPEED			= 0x00000107 + 300,		// 交通违章-低速
    MBL_ALARM_TYPE_TRAFFIC_PARKING				= 0x00000108 + 300,		// 交通违章-违章停车
    MBL_ALARM_TYPE_TRAFFIC_WRONGROUTE			= 0x00000109 + 300,		// 交通违章-不按车道行驶
    MBL_ALARM_TYPE_TRAFFIC_CROSSLANE				= 0x0000010A + 300,		// 交通违章-违章变道
    MBL_ALARM_TYPE_TRAFFIC_OVERYELLOWLINE		= 0x0000010B + 300,		// 交通违章-压黄线
    MBL_ALARM_TYPE_TRAFFIC_DRIVINGONSHOULDER		= 0x0000010C + 300,		// 交通违章-路肩行驶事件
    MBL_ALARM_TYPE_TRAFFIC_YELLOWPLATEINLANE		= 0x0000010E + 300,		// 交通违章-黄牌车占道事件
    MBL_ALARM_TYPE_CROSSFENCEDETECTION			= 0x0000011F + 300,		// 翻越围栏事件
    MBL_ALARM_TYPE_ELECTROSPARKDETECTION			= 0X00000110 + 300,		// 电火花事件
    MBL_ALARM_TYPE_TRAFFIC_NOPASSING				= 0x00000111 + 300,		// 交通违章-禁止通行事件
    MBL_ALARM_TYPE_ABNORMALRUNDETECTION			= 0x00000112 + 300,		// 异常奔跑事件
    MBL_ALARM_TYPE_RETROGRADEDETECTION			= 0x00000113 + 300,		// 人员逆行事件
    MBL_ALARM_TYPE_INREGIONDETECTION				= 0x00000114 + 300,		// 区域内检测事件
    MBL_ALARM_TYPE_TAKENAWAYDETECTION			= 0x00000115 + 300,		// 物品搬移事件
    MBL_ALARM_TYPE_PARKINGDETECTION				= 0x00000116 + 300,		// 非法停车事件
    MBL_ALARM_TYPE_FACERECOGNITION				= 0x00000117 + 300,		// face识别事件
    MBL_ALARM_TYPE_TRAFFIC_MANUALSNAP			= 0x00000118 + 300,		// 交通手动抓拍事件
    MBL_ALARM_TYPE_TRAFFIC_FLOWSTATE				= 0x00000119 + 300,		// 交通流量统计事件
    MBL_ALARM_TYPE_TRAFFIC_STAY					= 0x0000011A + 300,		// 交通滞留事件
    MBL_ALARM_TYPE_TRAFFIC_VEHICLEINROUTE		= 0x0000011B + 300,		// 有车占道事件
    MBL_ALARM_TYPE_MOTIONDETECT					= 0x0000011C + 300,		// 视频移动侦测事件
    MBL_ALARM_TYPE_LOCALALARM					= 0x0000011D + 300,		// 外部报警事件
    MBL_ALARM_TYPE_PRISONERRISEDETECTION		= 0X0000011E + 300,		//
    MBL_ALARM_TYPE_IVS_B_ALARM_END,										// 以上报警都为IVS_B服务的报警类型，与SDK配合
    
    MBL_ALARM_TYPE_VIDEODIAGNOSIS				= 0X00000120 + 300,		// 视频诊断结果事件
    MBL_ALARM_TYPE_IVS_V_ALARM                  = MBL_ALARM_TYPE_VIDEODIAGNOSIS,
    MBL_ALARM_TYPE_IVS_DENSITYDETECTION         = 0X00000121 + 300,        // 人员密集度检测事件
    MBL_ALARM_IVS_QUEUEDETECTION                = 0x00000123 + 300,     // 排队检测报警事件
    MBL_ALARM_IVS_TRAFFIC_VEHICLEINBUSROUTE     = 0x00000124 + 300,     // 占用公交车道事件
    MBL_ALARM_IVS_TRAFFIC_BACKING               = 0x00000125 + 300,     // 违章倒车事
    MBL_ALARM_TYPE_AUDIO_ABNORMALDETECTION      = 0x00000126 + 300,        // 声音异常检测
    ALARM_IVS_TRAFFIC_RUNYELLOWLIGHT            = 0x00000127 + 300,     // 交通违章-闯黄灯事件

    MBL_ALARM_TYPE_CLIMB_UP						= 0x00000128 + 300,		// 攀高检测
    MBL_ALARM_TYPE_LEAVE_POST  					= 0x00000129 + 300,		// 离岗检测
    
    MBL_ALARM_IVS_TRAFFIC_PARKINGONYELLOWBOX        = 0x0000012A + 300,        // 黄网格线抓拍事件
    MBL_ALARM_IVS_TRAFFIC_PARKINGSPACEPARKING       = 0x0000012B + 300,        // 车位有车事件(对应 DEV_EVENT_TRAFFIC_PARKINGSPACEPARKING_INFO)
    MBL_ALARM_IVS_TRAFFIC_PARKINGSPACENOPARKING     = 0x0000012C + 300,        // 车位无车事件(对应 DEV_EVENT_TRAFFIC_PARKINGSPACENOPARKING_INFO)
    MBL_ALARM_IVS_TRAFFIC_PEDESTRAIN                = 0x0000012D + 300,        // 交通行人事件(对应 DEV_EVENT_TRAFFIC_PEDESTRAIN_INFO)
    MBL_ALARM_IVS_TRAFFIC_THROW                     = 0x0000012E + 300,        // 交通抛洒物品事件(对应 DEV_EVENT_TRAFFIC_THROW_INFO)
    MBL_ALARM_IVS_TRAFFIC_IDLE                      = 0x0000012F + 300,        // 交通空闲事件
    
    MBL_ALARM_TYPE_VEHICLEACC 					    = 0x00000130 + 300,		// 车载ACC断电报警事件
    MBL_ALARM_TYPE_VEHICLE_TURNOVER		 		    = 0x00000131 + 300,     // 车辆侧翻报警事件
    MBL_ALARM_TYPE_VEHICLE_COLLISION        		= 0x00000132 + 300,     // 车辆撞车报警事件
    
    MBL_ALARM_TYPE_FIGHT							= 0x00000133 + 300,		//打架斗殴
    MBL_ALARM_TYPE_VIDEO_ABNORMAL				    = 0x00000136 + 300,		//视频异常
    MBL_ALARM_IVS_TRAFFIC_OVERSTOPLINE              = 0X00000137 + 300,        // 压停止线事件(对应 DEV_EVENT_TRAFFIC_OVERSTOPLINE)
    MBL_ALARM_IVS_TRAFFIC_WITHOUT_SAFEBELT          = 0x00000138 + 300,        // 交通未系安全带事件(对应 DEV_EVENT_TRAFFIC_WITHOUT_SAFEBELT)
    MBL_ALARM_IVS_TRAFFIC_DRIVER_SMOKING            = 0x00000139 + 300,        // 驾驶员抽烟事件(对应 DEV_EVENT_TRAFFIC_DRIVER_SMOKING)
    MBL_ALARM_IVS_TRAFFIC_DRIVER_CALLING            = 0x0000013A + 300,        // 驾驶员打电话事件(对应 DEV_EVENT_TRAFFIC_DRIVER_CALLING)
    MBL_ALARM_IVS_TRAFFIC_PEDESTRAINRUNREDLIGHT     = 0x0000013B + 300,        // 行人闯红灯事件(对应 DEV_EVENT_TRAFFIC_PEDESTRAINRUNREDLIGHT_INFO)
    MBL_ALARM_IVS_TRAFFIC_PASSNOTINORDER            = 0x0000013C + 300,        // 未按规定依次通行(对应DEV_EVENT_TRAFFIC_PASSNOTINORDER_INFO)
    MBL_ALARM_IVS_OBJECT_DETECTION                  = 0x00000141 + 300,        // 物体特征检测事件
    
    MBL_ALARM_ALARM_ANALOGALARM                     = 0x00000150 + 300,        // 模拟量报警通道的报警事件(对应DEV_EVENT_ALARM_ANALOGALRM_INFO)
    MBL_ALARM_IVS_CROSSLINEDETECTION_EX             = 0x00000151 + 300,        // 警戒线扩展事件
    MBL_ALARM_ALARM_COMMON                          = 0x00000152 + 300,        // 普通录像
    MBL_ALARM_VIDEOBLIND                            = 0x00000153 + 300,        // 视频遮挡事件(对应 DEV_EVENT_ALARM_VIDEOBLIND)
    MBL_ALARM_ALARM_VIDEOLOSS                       = 0x00000154 + 300,        // 视频丢失事件
    MBL_ALARM_IVS_GETOUTBEDDETECTION                = 0x00000155 + 300,        //
    MBL_ALARM_IVS_PATROLDETECTION                   = 0x00000156 + 300,        // 巡逻检测事件(对应 DEV_EVENT_PATROL_INFO)
    MBL_ALARM_IVS_ONDUTYDETECTION                = 0x00000157 + 300,        // 站岗检测事件(对应 DEV_EVENT_ONDUTY_INFO)
    MBL_ALARM_IVS_NOANSWERCALL                   = 0x00000158 + 300,        // 门口机呼叫未响应事件
    MBL_ALARM_IVS_STORAGENOTEXIST                = 0x00000159 + 300,        // 存储组不存在事件
    MBL_ALARM_IVS_STORAGELOWSPACE                = 0x0000015A + 300,        // 硬盘空间低报警事件
    MBL_ALARM_IVS_STORAGEFAILURE                 = 0x0000015B + 300,        // 存储错误事件
    MBL_ALARM_IVS_PROFILEALARMTRANSMIT           = 0x0000015C + 300,       // 报警传输事件
    MBL_ALARM_IVS_VIDEOSTATIC                    = 0x0000015D + 300,        // 视频静态检测事件(对应 DEV_EVENT_ALARM_VIDEOSTATIC_INFO)
    MBL_ALARM_IVS_VIDEOTIMING                    = 0x0000015E + 300,        // 视频定时检测事件(对应 DEV_EVENT_ALARM_VIDEOTIMING_INFO)
    MBL_ALARM_IVS_HEATMAP                        = 0x0000015F + 300,        // 热度图(对应 CFG_IVS_HEATMAP_INFO)
    MBL_ALARM_IVS_CITIZENIDCARD                  = 0x00000160 + 300,        // 身份证信息读取事件(对应 DEV_EVENT_ALARM_CITIZENIDCARD_INFO)
    MBL_ALARM_IVS_PICINFO                        = 0x00000161 + 300,        // 图片信息事件(对应 DEV_EVENT_ALARM_PIC_INFO)
    MBL_ALARM_IVS_NETPLAYCHECK                     = 0x00000162 + 300,          // 上网登记事件(对应 DEV_EVENT_ALARM_NETPLAYCHECK_INFO)
    MBL_ALARM_IVS_TRAFFIC_JAM_FORBID_INTO         = 0x00000163 + 300,        // 车辆拥堵禁入事件(对应DEV_EVENT_ALARM_JAMFORBIDINTO_INFO)
    MBL_ALARM_IVS_SNAPBYTIME                     = 0x00000164 + 300,        // 定时抓图事件
    MBL_ALARM_IVS_PTZ_PRESET                     = 0x00000165 + 300,        // 云台转动到预置点事件
    MBL_ALARM_TYPE_IVS_RFID_INFO                 = 0x00000166 + 300,     // RFID红外线检测信息事件
    
    MBL_ALARM_IVS_STANDUPDETECTION                 = 0x00000167 + 300,        // 人起立检测事件
    MBL_ALARM_IVS_QSYTRAFFICCARWEIGHT             = 0x00000168 + 300,        // 交通卡口称重事件(对应 DEV_EVENT_QSYTRAFFICCARWEIGHT_INFO)
    
    MBL_ALARM_IVS_NEAR_DISTANCE_DETECTION         = 0x00000174 + 300,        // 近距离接触事件
    MBL_ALARM_IVS_OBJECTSTRUCTLIZE_PERSON         = 0x00000175 + 300,        //行人特征检测事件
    MBL_ALARM_IVS_OBJECTSTRUCTLIZE_NONMOTOR         = 0x00000176 + 300,        //非机动车特征检测事件
    MBL_ALARM_IVS_TUMBLE_DETECTION                 = 0x00000177 + 300,        // 倒地报警事件
    
    MBL_ALARM_IVS_ALIEN_INVASION                   = 0x00000179 + 300,        //外来人员入侵报警
    MBL_ALARM_IVS_BLOCKLIST                        = 0x0000017A + 300,        //
    
    // 新增违章报警类型
    MBL_ALARM_TYPE_VEHICLE_INBUSROUTE			= 700,					// 占用公交车道事件 41
    MBL_ALARM_TYPE_BACKING						= 701,					// 违章倒车事件     42
    MBL_ALARM_TYPE_RUN_YELLOWLIGHT				= 702,					// 闯黄灯事件       43
    MBL_ALARM_TYPE_PARKINGSPACE_PARKING			= 703,					// 车位有车事件     44
    MBL_ALARM_TYPE_PARKINGSPACE_NOPARKING		= 704,					// 车位无车事件     45
    MBL_ALARM_TYPE_COVERINGPLATE					= 705,
    MBL_ALARM_TYPE_PARKINGONYELLOWBOX			= 706,
    MBL_ALARM_TYPE_THROW							= 707,					// 交通抛洒物事件	71
    MBL_ALARM_TYPE_PEDESTRAIN					= 708,					// 交通行人事件		72
    ALARM_HIGH_BEAM_OPEN                = 709,                    // 远光灯开启违章      68
    ALARM_ILLEGAL_WHISTLE                = 710,                    // 违法鸣笛              69
    ALARM_TURN_LEFT_AFTER_STRAIGHT        = 718,                    // 左转未礼让直行      77
    ALARM_NONMOTOR_CROSS_REDLIGHT        = 719,                    // 非机动车闯红灯      78
    ALARM_ILLEGALLY_PARKED_NOTPOINTS    = 720,                    // 违章停车（不扣分） 79
    ALARM_BIG_END_SMALL_TURN            = 721,                    // 大弯小转              80
    ALARM_TURN_RIGHT_AFTER_STRAIGHT        = 722,                    // 右转不礼让直行      81
    ALARM_TURN_RIGHT_AFTER_PEOPLE        = 723,                    // 右转不礼让直行行人 82
    ALARM_TRAFFIC_QUEUE_JUMP            = 724,                    // 车辆加塞           83
    ALARM_COPILOT_UNSAFETY_BELT            = 725,                    // 副驾驶未系安全带      84
    
    
    //以下为_m3.0新增
    MBL_ALARM_TYPE_IVS_M_BEGIN                   = 800,					// _M3.0特殊的IVS报警开始
    MBL_ALARM_IVS_LINKSD                    = 0x00000201 + 300,        //813:  球机轮训报警
    MBL_ALARM_IVS_TRAFFIC_TIREDPHYSIOLOGICAL= 0x00000207 + 300,        // 生理疲劳驾驶事件
    MBL_ALARM_IVS_TRAFFIC_BUSSHARPTURN      = 0x00000208 + 300,        // 车辆急转报警事件
    MBL_ALARM_IVS_TRAFFIC_TIREDLOWERHEAD    = 0x0000020A + 300,        // 开车低头报警事件
    MBL_ALARM_IVS_TRAFFIC_DRIVERLOOKAROUND  = 0x0000020B + 300,        // 开车左顾右盼事件
    MBL_ALARM_IVS_TRAFFIC_DRIVERLEAVEPOST   = 0x0000020C + 300,        // 开车离岗事件
    MBL_ALARM_IVS_TRAFFIC_MAN_NUM_DETECTION = 0x0000020E + 300,        // 立体视觉区域内人数统计事件
    MBL_ALARM_IVS_TRAFFIC_DRIVERYAWN        = 0x00000210 + 300,        // 开车打哈欠事件
    MBL_ALARM_IVS_HUMANTRAIT                = 0x00000215 + 300,        // 人体特征事件
    MBL_ALARM_IVS_INSTALL_CARDREADER        = 0x00000220 + 300,        // 安装读卡器事件
    MBL_ALARM_IVS_XRAY_DETECTION            = 0x00000223 + 300,        // X光检测事件
    MBL_ALARM_IVS_CROWDDETECTION            = 0x0000022C + 300,        // 人群密度检测事件
    MBL_ALARM_IVS_TRAFFIC_WAITINGAREA        = 0x00000234 + 300,        //违章进入待行区事件
    
    MBL_ALARM_CROSSLINEDETECTION_HUMAN        = 0x00000235 + 300,        // 人穿越警戒线
    MBL_ALARM_CROSSLINEDETECTION_VEHICLE    = 0x00000236 + 300,        // 机动车穿越警戒线
    MBL_ALARM_IVS_STEREO_FIGHTDETECTION        = 0x00000237 + 300,        //ATM舱内打架事件
    MBL_ALARM_IVS_STEREO_TAILDETECTION        = 0x00000238 + 300,        //ATM舱内尾随事件
    MBL_ALARM_IVS_STEREO_STEREOFALLDETECTION= 0x00000239 + 300,        //ATM舱内跌倒事件
    MBL_ALARM_IVS_STEREO_STAYDETECTION        = 0x0000023A + 300,        //ATM舱内滞留事件
    MBL_ALARM_IVS_BANNER_DETECTION            = 0x0000023B + 300,        //拉横幅事件
    MBL_ALARM_IVS_ELEVATOR_ABNORMAL            = 0x0000023D + 300,        //电动扶梯运行异常事件
    MBL_ALARM_IVS_NONMOTORDETECT            = 0x0000023E + 300,        //非机动车检测
    MBL_ALARM_IVS_SHOPPRESENCE                = 0x00000246 + 300,        //商铺占道经营事件
    MBL_ALARM_IVS_WASTEDUMPED                = 0x00000247 + 300,        //垃圾违章倾倒事件
    MBL_ALARM_IVS_DISTANCE_DETECTION        =    0x0000024A + 300,        //距离异常事件
    MBL_ALARM_IVS_FLOWBUSINESS                =    0x0000024B + 300,        //游摊小贩
    //ALARM_ IVS_CITYPARKING                  =    0x0000024C + 300,        //城市违停  已扩展为机动车（893）和非机动车（894）违停，定义在后面，此处请勿增加
    
    MBL_ALARM_IVS_CITYPARKING_MOTOR            = 893,        //机动车违章停车
    MBL_ALARM_IVS_CITYPARKING_NOMOTOR        = 894,        //非机动车违章停车
    // 以上智能报警已经超过800了，定义值时请计算好之后在确定，请勿随意增加，车载平台请确认一下800是否有用
    MBL_ALARM_TYPE_IVS_ALARM_CAPTURPIC           = 897,					// 报警抓图
    MBL_ALARM_TYPE_IVS_TIMING_CAPTURPIC          = 898,					// 定时抓图
    MBL_ALARM_TYPE_IVS_CLIENT_CAPTURPIC          = 899,					// 客户端抓图
    MBL_ALARM_TYPE_IVS_M_END                     = 900,					// _M3.0特殊的IVS报警结束
    
    MBL_ALARM_TYPE_IVS_ABNORMAL_FACEDETECT       = 901,  				// 人脸检测事件--异常人脸检测
    MBL_ALARM_TYPE_IVS_SIMILAR_FACEDETECT		= 902,					// 人脸检测事件--相邻人脸检测
    
    MBL_ALARM_IVS_HIDENOSE_FACEDETECT        = 903,                    // 鼻子遮挡报警
    MBL_ALARM_IVS_HIDEMOUTH_FACEDETECT        = 904,                    // 嘴部遮挡报警
    MBL_ALARM_IVS_HIDEEYE_FACEDETECT        = 905,                    // 眼部遮挡报警
    
    MBL_ALARM_DETECTIONAREA_PASTEDETECTION    = 920,                    // 检测区贴条检测
    MBL_ALARM_KEYBOARDAREA_PASTEDETECTION    = 921,                    // 键盘区贴条检测
    MBL_ALARM_SPIGOTAREA_PASTEDETECTION        = 922,                    // 插卡区贴条检测
    MBL_ALARM_AUDIO_MUTATION_ALARM            = 923,                    // 声强突变报警
    
    MBL_ALARM_AUDIO_DETECT_ALARM            = 924,                    // 音频检测报警
    MBL_ALARM_AUDIO_ANOMALY_ALARM            = 925,                    // 音频异常报警
    MBL_ALARM_TRAFFICJUNCTION_NON_MOTOR        = 926,                    // 非机动车报警
    
    
    // ---ALARM_VIDEOABNORMALDETECTION 报警子类型起始
    MBL_ALARM_IVS_VIDEOABNORMAL_SUBBEGIN    = 950,
    MBL_ALARM_IVS_VIDEOABNORMAL_LOST        = MBL_ALARM_IVS_VIDEOABNORMAL_SUBBEGIN,            // 视频异常事件:视频丢失
    MBL_ALARM_IVS_VIDEOABNORMAL_FREEZE        = MBL_ALARM_IVS_VIDEOABNORMAL_SUBBEGIN + 1,        // 视频异常事件:视频冻结
    MBL_ALARM_IVS_VIDEOABNORMAL_SHELTER        = MBL_ALARM_IVS_VIDEOABNORMAL_SUBBEGIN + 2,        // 视频异常事件:摄像头遮挡
    MBL_ALARM_IVS_VIDEOABNORMAL_MOTION        = MBL_ALARM_IVS_VIDEOABNORMAL_SUBBEGIN + 3,        // 视频异常事件:摄像头移动
    MBL_ALARM_IVS_VIDEOABNORMAL_HIGHDARK    = MBL_ALARM_IVS_VIDEOABNORMAL_SUBBEGIN + 4,        // 视频异常事件:过暗
    MBL_ALARM_IVS_VIDEOABNORMAL_HIGHBRIGHT    = MBL_ALARM_IVS_VIDEOABNORMAL_SUBBEGIN + 5,        // 视频异常事件:过亮
    MBL_ALARM_IVS_VIDEOABNORMAL_COLORCAST    = MBL_ALARM_IVS_VIDEOABNORMAL_SUBBEGIN + 6,        // 视频异常事件:图像偏色
    MBL_ALARM_IVS_VIDEOABNORMAL_NOISE        = MBL_ALARM_IVS_VIDEOABNORMAL_SUBBEGIN + 7,        // 视频异常事件:噪声干扰
    MBL_ALARM_IVS_VIDEOABNORMAL_SCENE_CHANGE = MBL_ALARM_IVS_VIDEOABNORMAL_SUBBEGIN + 8,    // 视频异常事件:场景变更
    MBL_ALARM_IVS_VIDEOABNORMAL_SUBEND        = 960,
    // ---ALARM_VIDEOABNORMALDETECTION 报警子类型终止
    MBL_ALARM_IVS_ZhouShanDrive_SUBBEGIN           = 961,
    MBL_ALARM_IVS_ZhouShanDrive_TiredDriveCheck    = MBL_ALARM_IVS_ZhouShanDrive_SUBBEGIN,
    MBL_ALARM_IVS_ZhouShanDrive_CallingWhenDriving = MBL_ALARM_IVS_ZhouShanDrive_SUBBEGIN + 1,
    MBL_ALARM_IVS_ZhouShanDrive_SmokingAlarm       = MBL_ALARM_IVS_ZhouShanDrive_SUBBEGIN + 2,
    MBL_ALARM_IVS_ZhouShanDrive_SharpTurn          = MBL_ALARM_IVS_ZhouShanDrive_SUBBEGIN + 3,
    MBL_ALARM_IVS_ZhouShanDrive_LaneDeparture      = MBL_ALARM_IVS_ZhouShanDrive_SUBBEGIN + 4,
    MBL_ALARM_IVS_ZhouShanDrive_VehicleCollision   = MBL_ALARM_IVS_ZhouShanDrive_SUBBEGIN + 5,
    MBL_ALARM_IVS_ZhouShanDrive_VehicleTurnover    = MBL_ALARM_IVS_ZhouShanDrive_SUBBEGIN + 6,
    MBL_ALARM_IVS_ZhouShanDrive_LOOKAROUND         = MBL_ALARM_IVS_ZhouShanDrive_SUBBEGIN + 7,
    MBL_ALARM_IVS_ZhouShanDrive_LEAVEPOST          = MBL_ALARM_IVS_ZhouShanDrive_SUBBEGIN + 8,
    MBL_ALARM_IVS_ZhouShanDrive_SUBEND             = 970,
    
    MBL_ALARM_TYPE_IVS_ALARM_END					= 1000,					// 智能设备报警类型的范围为300-1000
    
    MBL_ALARM_TYPE_OSD,													// osd信息
    MBL_ALARM_TYPE_CROSS_INFO,											// 十字路口
    
    MBL_ALARM_TYPE_CLIENT_PLATFORM_BEGIN			= 1100,					// 客户端平台报警开始
    MBL_ALARM_TYPE_DERELICTION					= 1101,					// 遗留检测[交通事件-抛洒物]
    MBL_ALARM_TYPE_RETROGRADATION				= 1102,					// 逆行 [交通事件]
    MBL_ALARM_TYPE_OVERSPEED						= 1103,					// 超速  [交通事件]
    MBL_ALARM_TYPE_LACK_ALARM					= 1104,					// 欠速  [交通事件]
    MBL_ALARM_TYPE_FLUX_COUNT					= 1105,					// 流量统计[交通事件]
    MBL_ALARM_TYPE_PARKING						= 1106,					// 停车检测[交通事件]
    MBL_ALARM_TYPE_PASSERBY						= 1107,					// 行人检测[交通事件]
    MBL_ALARM_TYPE_JAM							= 1108,					// 拥堵检测[交通事件]
    MBL_ALARM_TYPE_AREA_INBREAK					= 1109,					// 特殊区域入侵
    
    MBL_ALARM_TYPE_OVERSPEED_MANUAL				= 1123,					// 卡口超速报警，PCS报给客户端，客户端触发手动报警给ADS
    
    //人脸检测事件细化事件（由于人脸检测的类型在DMS中进行区分，所以这两个定义值废弃，但仍保留）
    MBL_ALARM_TYPE_ALARM_FACEDETECT_NORMAL  = 1151,					// 人脸检测事件中－正常人脸
    MBL_ALARM_TYPE_ALARM_FACEDETECT_UNNORMAL= 1152,					// 人脸检测事件中－异常人脸
    
    MBL_ALARM_TYPE_CLIENT_PLATFORM_END			= 1200,					// 客户端平台报警结束
    
    MBL_ALARM_TYPE_SYSTEM_BEGIN					= 1200,					// 来自系统的报警
    MBL_ALARM_TYPE_HOST_TEMPRATURER				= 1201,					// 主机温度过高
    MBL_ALARM_TYPE_RAID_LOAD						= 1202,					// raid降级
    MBL_ALARM_TYPE_SERVER_AUTO_MIGRATE			= 1203,					// 服务器自动迁移
    MBL_ALARM_TYPE_SERVER_MANUAL_MIGRATE			= 1204,					// 服务器手动迁移
    MBL_ALARM_TYPE_SERVER_STATUS_CHANGE			= 1205,					// 服务器状态变更
    MBL_ALARM_TYPE_MAIN_TO_BACKUP				= 1206,					// 双机热备主机切备机
    MBL_ALARM_TYPE_BACKUP_TO_MAIN			= 1207,					// 双机热备备机切主机
    MBL_ALARM_TYPE_BACKUP_ABNORMAL				= 1208,					// 双机热备备机故障
    MBL_ALARM_TYPE_BACKUP_NORMAL					= 1209,					// 双机热备备机故障恢复
    MBL_ALARM_TYPE_SYSTEM_END					= 1300,
    
    
    //-F 门禁设备报警新增区间（40-70不够用了）
    MBL_ALARM_DOOR_NEW_BEGIN                = 1411,
    MBL_ALARM_DOOR_FORCE_LOCKED                = 1411,                    // 门禁强锁报警
    MBL_ALARM_DOOR_FORCE_OPEN                = 1412,                    // 门禁强开报警
    MBL_ALARM_DOOR_RFID_ACTIVE              = 1421,                 // 有源RFID门禁刷卡报警
    MBL_ALARM_DOOR_RFID_PASSIVE             = 1422,                 // 无源RFID门禁刷卡报警
    MBL_ALARM_DOOR_VALID_CARD_OPENDOOR_IN    = 1428,                    // 对接海康设备 进门刷卡成功
    MBL_ALARM_DOOR_VALID_CARD_OPENDOOR_OUT    = 1429,                    // 对接海康设备 出门刷卡成功
    MBL_ALARM_DOOR_BREAK_IN                    = 1430,                  // 门禁闯入事件
    MBL_ALARM_DOOR_ERR_NODOORRIGHT            = 1431,                    // 该门没有权限
    MBL_ALARM_DOOR_ERR_CARDRIGHT_PWDERR        = 1432,                    // 卡号正确但是密码错误
    MBL_ALARM_DOOR_BLACK_USER                = 1433,                    // 黑名单用户
    MBL_ALARM_VALID_VRCODE_OPENDOOR            = 1434,                    // 合法二维码开门
    MBL_ALARM_INVALID_VRCODE_OPENDOOR        = 1435,                    // 非法二维码开门
    MBL_ALARM_VALID_IDCARD                   = 1436,                    // 人证合法开门
    MBL_ALARM_INVALID_IDCARD                = 1437,                    // 人证非法开门
    MBL_ALARM_INVALID_IDCARD_AND_IC             = 1438,                    // 人证和身份证非法开门
    MBL_ALARM_VALID_IDCARD_AND_IC            = 1439,                    // 人证和身份证合法开门
    MBL_ALARM_PATROL_STATUS                  = 1440,                    // 巡更状态报警
    MBL_ALARM_VALID_BT_OPENDOOR                 = 1441,                    // 蓝牙合法开门
    MBL_ALARM_INVALID_BT_OPENDOOR            = 1442,                    // 蓝牙非法开门
    MBL_ALARM_DOOR_LOCAL_ALARM                = 1443,                    // 门禁外部报警
    MBL_ALARM_DOOR_CHANL_MODEL                = 1444,                    // 通道模式
    MBL_ALARM_DOOR_CHANL_AWAYS_STATUS        = 1445,                    // 通道常开，常关状态
    MBL_ALARM_DOOR_MALICIOUT                = 1446,                    // 二代门禁非法卡超次报警
    MBL_ALARM_DOOR_HEIGHTLIMIT              = 1447,                 // 门禁限高报警
    MBL_ALARM_DOOR_RFID                        = 1448,                    // RFID感应报警
    MBL_ALARM_DOOR_RFID_INVALID                = 1449,                    // RFID非法感应报警
    MBL_ALARM_DOOR_RFID_LOCAL                = 1450,                    // RFID外部报警(按键报警)
    MBL_ALARM_RFID_PEOPLE_UPPER_LIMIT        = 1451,                    // RFID人数上限报警
    MBL_ALARM_DOOR_NEW_END                    = 1499,
    // -E 视频质量诊断 新增12种报警类型
    MBL_ALARM_TYPE_VQDS_VIDEO_LOST				= 1500,					// 视频质量诊断-视频丢失
    MBL_ALARM_TYPE_VQDS_HIGHBRIGHT				= 1501,					// 高亮度警告
    MBL_ALARM_TYPE_VQDS_HIGHBRIGHT_RED			= 1502,					// 高亮度红色报警
    MBL_ALARM_TYPE_VQDS_LOWBRIGHT				= 1503,					// 低亮度警告
    MBL_ALARM_TYPE_VQDS_LOWBRIGHT_RED			= 1504,					// 低亮度红色报警
    MBL_ALARM_TYPE_VQDS_CONTRAST					= 1505,					// 对比度警告
    MBL_ALARM_TYPE_VQDS_CONTRAST_RED				= 1506,					// 对比度红色报警
    MBL_ALARM_TYPE_VQDS_CLARITY					= 1507,					// 清晰度警告
    MBL_ALARM_TYPE_VQDS_CLARITY_RED				= 1508,					// 清晰度红色报警
    MBL_ALARM_TYPE_VQDS_COLOR_OFFSET				= 1509,					// 色彩偏差警告
    MBL_ALARM_TYPE_VQDS_COLOR_OFFSET_RED			= 1510,					// 偏色红色报警
    MBL_ALARM_TYPE_VQDS_DIAGNOSE_FAIL			= 1511,					// 视频质量诊断失败
    
    MBL_ALARM_TYPE_ALARMHOST_MEDICAL				 = 1604,				 // 医疗报警
    MBL_ALARM_TYPE_ALARMHOST_URGENCY				 = 1605,				 // 报警主机紧急报警
    MBL_ALARM_TYPE_ALARMHOST_CATCH				 = 1606,				 // 挟持报警
    MBL_ALARM_TYPE_ALARMHOST_MENACE_SLIENCE       = 1607,				 // 无声威胁
    MBL_ALARM_TYPE_ALARMHOST_PERIMETER            = 1608,				 // 周界报警
    MBL_ALARM_TYPE_ALARMHOST_DEFENCEAREA_24H		 = 1609,				 // 24小时防区报警
    MBL_ALARM_TYPE_ALARMHOST_DEFENCEAREA_DELAY	 = 1610,				 // 延时防区报警
    MBL_ALARM_TYPE_ALARMHOST_DEFENCEAREA_INITIME  = 1611,				 // 及时防区报警
    MBL_ALARM_TYPE_ALARMHOST_BREAK				 = 1612,				 // 防拆
    MBL_ALARM_TYPE_ALARMHOST_AUX_OVERLOAD         = 1613,                 // AUX过流
    MBL_ALARM_TYPE_ALARMHOST_AC_POWDOWN			 = 1614,                 // 交流电掉电
    MBL_ALARM_TYPE_ALARMHOST_BAT_DOWN			 = 1615,                 // 电池欠压
    MBL_ALARM_TYPE_ALARMHOST_SYS_RESET			 = 1616,                 // 系统复位
    MBL_ALARM_TYPE_ALARMHOST_PROGRAM_CHG          = 1617,                 // 电池掉线
    MBL_ALARM_TYPE_ALARMHOST_BELL_CUT			 = 1618,                 // 警号被切断或短路
    MBL_ALARM_TYPE_ALARMHOST_PHONE_ILL			 = 1619,                 // 电话切断或失效
    MBL_ALARM_TYPE_ALARMHOST_MESS_FAIL			 = 1620,				 // 通讯失败
    MBL_ALARM_TYPE_ALARMHOST_WIRELESS_PWDOWN		 = 1621,				 // 无线探测器欠压
    MBL_ALARM_TYPE_ALARMHOST_SIGNIN_FAIL			 = 1622,				 // 登录失败
    MBL_ALARM_TYPE_ALARMHOST_ERR_CODE			 = 1623,				 // 错误密码登录
    MBL_ALARM_TYPE_ALARMHOST_MANAUL_TEST			 = 1624,				 // 手动测试
    MBL_ALARM_TYPE_ALARMHOST_CYCLE_TEST			 = 1625,				 // 定期测试
    MBL_ALARM_TYPE_ALARMHOST_SVR_REQ				 = 1626,				 // 服务请求
    MBL_ALARM_TYPE_ALARMHOST_BUF_RST				 = 1627,				 // 报警缓冲复位
    MBL_ALARM_TYPE_ALARMHOST_CLR_LOG				 = 1628,				 // 清除日志
    MBL_ALARM_TYPE_ALARMHOST_TIME_RST			 = 1629,				 // 日期时间复位
    MBL_ALARM_TYPE_ALARMHOST_NET_FAIL			 = 1630,				 // 网络错误
    MBL_ALARM_TYPE_ALARMHOST_IP_CONFLICT			 = 1631,				 // IP冲突
    MBL_ALARM_TYPE_ALARMHOST_KB_BREAK			 = 1632,				 // 键盘防拆
    MBL_ALARM_TYPE_ALARMHOST_KB_ILL               = 1633,				 // 键盘问题
    MBL_ALARM_TYPE_ALARMHOST_SENSOR_O			 = 1634,				 // 探测器开路
    MBL_ALARM_TYPE_ALARMHOST_SENSOR_C			 = 1635,				 // 探测器短路
    MBL_ALARM_TYPE_ALARMHOST_SENSOR_BREAK		 = 1636,				 // 探测器防拆
    MBL_ALARM_TYPE_ALARMHOST_FIRE_ALARM			 = 1637,				 // 报警主机火警
    MBL_ALARM_CALL_ALARM_HOST                    = 1652,                 // 电话报警主机设备报警
    MBL_ALARM_CALL_ALARM_HOST_CHN                = 1653,                 // 电话报警主机通道报警
    
    //动环(PE)报警-(SCS_ALARM_SWITCH_START 取名直接来自SCS动环文档)
    //系统工程动环增加报警类型ALARM_SCS_BEGIN
    //开关量，不可控
    MBL_ALARM_TYPE_SCS_SWITCH_START				= 1800,
    MBL_ALARM_TYPE_SCS_INFRARED,											// 红外对射告警
    MBL_ALARM_TYPE_SCS_SMOKE,											// 烟感告警
    MBL_ALARM_TYPE_SCS_WATER,                							// 水浸告警
    MBL_ALARM_TYPE_SCS_COMPRESSOR,           							// 压缩机故障告警
    MBL_ALARM_TYPE_SCS_OVERLOAD,             							// 过载告警
    MBL_ALARM_TYPE_SCS_BUS_ANOMALY,          							// 母线异常
    MBL_ALARM_TYPE_SCS_LIFE,                 							// 寿命告警
    MBL_ALARM_TYPE_SCS_SOUND,                							// 声音告警
    MBL_ALARM_TYPE_SCS_TIME,                 							// 时钟告警
    MBL_ALARM_TYPE_SCS_FLOW_LOSS,            							// 气流丢失告警
    MBL_ALARM_TYPE_SCS_FUSING,               							// 熔断告警
    MBL_ALARM_TYPE_SCS_BROWN_OUT,            							// 掉电告警
    MBL_ALARM_TYPE_SCS_LEAKING,              							// 漏水告警
    MBL_ALARM_TYPE_SCS_JAM_UP,               							// 堵塞告警
    MBL_ALARM_TYPE_SCS_TIME_OUT,             							// 超时告警
    MBL_ALARM_TYPE_SCS_REVERSE_ORDER,        							// 反序告警
    MBL_ALARM_TYPE_SCS_NETWROK_FAILURE,      							// 组网失败告警
    MBL_ALARM_TYPE_SCS_UNIT_CODE_LOSE,       							// 机组码丢失告警
    MBL_ALARM_TYPE_SCS_UNIT_CODE_DISMATCH,   							// 机组码不匹配告警
    MBL_ALARM_TYPE_SCS_FAULT,                							// 故障告警
    MBL_ALARM_TYPE_SCS_UNKNOWN,              							// 未知告警
    MBL_ALARM_TYPE_SCS_CUSTOM,               							// 自定义告警
    MBL_ALARM_TYPE_SCS_NOPERMISSION,         							// 无权限告警
    MBL_ALARM_TYPE_SCS_INFRARED_DOUBLE,      							// 红外双鉴告警
    MBL_ALARM_TYPE_SCS_ELECTRONIC_FENCE,     							// 电子围栏告警
    MBL_ALARM_TYPE_SCS_UPS_MAINS,            							// 市电正常市电异常
    MBL_ALARM_TYPE_SCS_UPS_BATTERY,          							// 电池正常电池异常
    MBL_ALARM_TYPE_SCS_UPS_POWER_SUPPLY,     							// UPS正常输出旁路供电
    MBL_ALARM_TYPE_SCS_UPS_RUN_STATE,        							// UPS正常UPS故障
    MBL_ALARM_TYPE_SCS_UPS_LINE_STYLE,       							// UPS类型为在线式UPS类  型为后备式
    MBL_ALARM_TYPE_SCS_XC,                   							// 小车
    MBL_ALARM_TYPE_SCS_DRQ,                  							// 断路器
    MBL_ALARM_TYPE_SCS_GLDZ,                 							// 隔离刀闸
    MBL_ALARM_TYPE_SCS_JDDZ,                								// 接地刀闸
    MBL_ALARM_TYPE_SCS_IN_END,											// 请注意这个值，不用把他作为判断值；只标记说“开关量，不可控”结束；
    //因为接下来的“开关量，可控”没有开始标记如ALARM_SCS_DOOR_START
    
    //开关量，可控，请注意接下来的ALARM_SCS_DOOR_SWITCH这个不能作为BEGIN用
    MBL_ALARM_TYPE_SCS_DOOR_SWITCH				= 1850,					// 门禁控制器开关告警
    MBL_ALARM_TYPE_SCS_UPS_SWITCH,										// UPS开关告警,
    MBL_ALARM_TYPE_SCS_DBCB_SWITCH,          							// 配电柜开关告警
    MBL_ALARM_TYPE_SCS_ACDT_SWITCH,          							// 空调开关告警
    MBL_ALARM_TYPE_SCS_DTPW_SWITCH,          							// 直流电源开关告警
    MBL_ALARM_TYPE_SCS_LIGHT_SWITCH,         							// 灯光控制器开关告警
    MBL_ALARM_TYPE_SCS_FAN_SWITCH,           							// 风扇控制器开关告警
    MBL_ALARM_TYPE_SCS_PUMP_SWITCH,          							// 水泵开关告警
    MBL_ALARM_TYPE_SCS_BREAKER_SWITCH,       							// 刀闸开关告警
    MBL_ALARM_TYPE_SCS_RELAY_SWITCH,         							// 继电器开关告警
    MBL_ALARM_TYPE_SCS_METER_SWITCH,        								// 电表开关告警
    MBL_ALARM_TYPE_SCS_TRANSFORMER_SWITCH,   							// 变压器开关告警
    MBL_ALARM_TYPE_SCS_SENSOR_SWITCH,        							// 传感器开关告警
    MBL_ALARM_TYPE_SCS_RECTIFIER_SWITCH,     							// 整流器告警
    MBL_ALARM_TYPE_SCS_INVERTER_SWITCH,      							// 逆变器告警
    MBL_ALARM_TYPE_SCS_PRESSURE_SWITCH,      							// 压力开关告警
    MBL_ALARM_TYPE_SCS_SHUTDOWN_SWITCH,      							// 关机告警
    MBL_ALARM_TYPE_SCS_WHISTLE_SWITCH,	   								// 警笛告警
    MBL_ALARM_TYPE_SCS_SWITCH_END,
    //模拟量
    MBL_ALARM_TYPE_SCS_ANALOG_START				= 1880,
    MBL_ALARM_TYPE_SCS_TEMPERATURE,										// 温度告警
    MBL_ALARM_TYPE_SCS_HUMIDITY,             							// 湿度告警
    MBL_ALARM_TYPE_SCS_CONCENTRATION,        							// 浓度告警
    MBL_ALARM_TYPE_SCS_WIND,                 							// 风速告警
    MBL_ALARM_TYPE_SCS_VOLUME,               							// 容量告警
    MBL_ALARM_TYPE_SCS_VOLTAGE,              							// 电压告警
    MBL_ALARM_TYPE_SCS_ELECTRICITY,          							// 电流告警
    MBL_ALARM_TYPE_SCS_CAPACITANCE,          							// 电容告警
    MBL_ALARM_TYPE_SCS_RESISTANCE,           							// 电阻告警
    MBL_ALARM_TYPE_SCS_CONDUCTANCE,          							// 电导告警
    MBL_ALARM_TYPE_SCS_INDUCTANCE,           							// 电感告警
    MBL_ALARM_TYPE_SCS_CHARGE,               							// 电荷量告警
    MBL_ALARM_TYPE_SCS_FREQUENCY,            							// 频率告警
    MBL_ALARM_TYPE_SCS_LIGHT_INTENSITY,      							// 发光强度告警(坎)
    MBL_ALARM_TYPE_SCS_PRESS,                							// 力告警（如牛顿，千克力）
    MBL_ALARM_TYPE_SCS_PRESSURE,             							// 压强告警（帕，大气压）
    MBL_ALARM_TYPE_SCS_HEAT_TRANSFER,        							// 导热告警（瓦每平米）
    MBL_ALARM_TYPE_SCS_THERMAL_CONDUCTIVITY, 							// 热导告警（kcal/(m*h*℃)）
    MBL_ALARM_TYPE_SCS_VOLUME_HEAT,          							// 比容热告（kcal/(kg*℃)）
    MBL_ALARM_TYPE_SCS_HOT_WORK,             							// 热功告警（焦耳）
    MBL_ALARM_TYPE_SCS_POWER,                							// 功率告警（瓦）
    MBL_ALARM_TYPE_SCS_PERMEABILITY,         							// 渗透率告警（达西）
    MBL_ALARM_TYPE_SCS_PROPERTION,										// 比例（包括电压电流变比，功率因素，负载单位为%）
    MBL_ALARM_TYPE_SCS_ENERGY,											// 电能（单位为J）
    MBL_ALARM_TYPE_SCS_ANALOG_END,
    MBL_ALARM_TYPE_SCS_END,
    
    MBL_ALARM_TYPE_IP_DEV_TALK					= 1907,					// IP设备对讲报警
    
    MBL_ALARM_TYPE_UNIFY_BEGIN				    = 1908,					// 报警类型统一管理，不需要在EnumCenterRecType增加
    MBL_ALARM_TYPE_VOICE_EXCEPTION				= 1909,					// 音频异常报警
    MBL_ALARM_TYPE_UNIFY_END,										// 报警类型统一管理，不需要在EnumCenterRecType增加
    
    MBL_ALARM_VOICE_LOSE                        = 1911,                    // 音频丢失报警
    MBL_ALARM_WIFITERM_FIND                     = 1912,                    //WIFI终端发现报警
    MBL_ALARM_WIFITERM_SURVEY                   = 1913,                    //WIFI终端布控报警
    MBL_ALARM_PTZ_DIAGNOSES                     = 1914,                    // 云台诊断信息
    MBL_ALARM_SNAP_ALARM                        = 1915,                    // 通用抓图报警
    
    //EVS新增报警类型
    MBL_ALARM_TYPE_NO_DISK                       = 1916,					// 无硬盘报警
    MBL_ALARM_TYPE_DOUBLE_DEV_VERSION_ABNORMAL   = 1917,					// 双控设备主板与备板之间版本信息不一致异常事件
    MBL_ALARM_TYPE_DCSSWITCH                     = 1918,					// 主备切换事件/集群切换报警
    MBL_ALARM_TYPE_DEV_RAID_FAILED               = 1919,					// 设备RAID错误报警
    MBL_ALARM_TYPE_DEV_RAID_DEGRADED             = 1920,					// 设备RAID降级报警
    MBL_ALARM_TYPE_BUF_DROP_FRAME                = 1921,					// 录像缓冲区丢帧报警
    MBL_ALARM_PATIENTDETECTION              = 1923,                 // 监控病人活动状态报警事件
    
    MBL_ALARM_WANDERDETECTION_EVENT            = 1994,                    // 徘徊报警
    MBL_ALARM_RIOTERDETECTION_EVENT            = 1995,                    // 人员聚集报警
    MBL_ALARM_SCENNE_CHANGE                    = 1996,                    // 场景变更报警
    MBL_ALARM_VIDEO_UNFOCUS                    = 1997,                    // 视频虚焦报警
    MBL_ALARM_DEV_AUDIO_MUTATION            = 1998,                    // 声强突变报警
    MBL_ALARM_HEATIMG_TEMPER                = 1999,                 // 热成像测温点温度异常报警事件
    MBL_ALARM_TYPE_BEGIN					    = 2000,
    MBL_ALARM_TYPE_RFID_BATTERY_EMPTY        = 2010,                    //射频设备低电量报警
    MBL_ALARM_TYPE_RFID_BUTTON                = 2011,                    //射频设备按键报警
    MBL_ALARM_TYPE_RFID_DATA_EXCEPTION        = 2012,                    //射频设备数据异常报警
    MBL_ALARM_TYPE_RFID_ENTER_RECEIVER        = 2013,                    //射频设备接收器感应到手环报警
    MBL_ALARM_RFID_ILLEGAL_ENTER            = 2014,                    //非法进入
    MBL_ALARM_RFID_ILLEGAL_LEAVE            = 2015,                    //非法离开
    MBL_ALARM_RFID_ILLEGAL_GATHER            = 2016,                    //非法聚集
    MBL_ALARM_RFID_WITHOUT_TUTELAGE            = 2017,                    //无监护报警
    MBL_ALARM_RFID_STAY                        = 2018,                    //滞留报警
    MBL_ALARM_RFID_EXCEPTION                = 2019,                    //异常报警
    MBL_ALARM_RFID_CUTOFF_LABEL                = 2021,                    //人员标签剪断
    MBL_ALARM_ALARM_RFID_GPS                    = 2022,                 //射频设备GPS上报
    MBL_ALARM_RFID_APPROACH                    = 2024,                    //接近边界管理器
    MBL_ALARM_RFID_LEAVEAWAY                = 2025,                    //远离边界管理器
    MBL_ALARM_RFID_OFFLINE                    = 2026,                    //离线超时报警
    MBL_ALARM_RFID_SingleInterrogation      = 2027,                 //单人审讯报警
    MBL_ALARM_RFID_WaitingRoomTimeOut       = 2028,                 //候问室超时报警
    MBL_ALARM_RFID_Unattended                = 2029,                 //无人看管
    MBL_ALARM_RFID_InterrogationTimeout     = 2030,                 //审讯超时
    MBL_ALARM_RFID_REVERSE                    = 2100,                    //逆向报警
    MBL_ALARM_RFID_InterrogationBegin       = 2101,                 //开始审讯
    MBL_ALARM_RFID_InterrogationEnd         = 2102,                 //结束审讯
    MBL_ALARM_TYPE_RFID_END,
    
    
    MBL_ALARM_TYPE_DOOR_MAGNETISM				= 2200,					// 门磁
    MBL_ALARM_TYPE_PASSIVE_INFRARED				= 2201,					// 被动红外
    MBL_ALARM_TYPE_GAS							= 2202,					// 气感
    MBL_ALARM_TYPE_INITIATIVE_INFRARED			= 2203,					// 主动红外
    MBL_ALARM_TYPE_GLASS_CRASH					= 2204,					// 玻璃破碎
    MBL_ALARM_TYPE_EXIGENCY_SWITCH				= 2205,					// 紧急开关
    MBL_ALARM_TYPE_SHAKE							= 2206,					// 震动
    MBL_ALARM_TYPE_BOTH_JUDGE					= 2207,					// 双鉴（红外+微波）
    MBL_ALARM_TYPE_THREE_TECHNIC					= 2208,					// 三技术
    MBL_ALARM_TYPE_CALL_BUTTON					= 2209,      			// 呼叫按钮
    MBL_ALARM_TYPE_SENSE_OTHER					= 2210,	    			// 其他
    MBL_ALARM_TYPE_END					= 2400,
    
    MBL_ALARM_ID_CARD_COMPARE_OK            = 2401,                    //人证对比成功结果上报
    MBL_ALARM_ID_CARD_COMPARE_FAILED        = 2402,                    //人证对比失败结果上报
    MBL_ALARM_IVSS_STRANGER_ALARM            = 2403,                    //IVSS陌生人报警事件（不同于陌生人脸报警）
    MBL_ALARM_VTO_QRCODE_CHECK                = 2404,                    //二维码上报事件
    MBL_ALARM_FACE_BLACK_LIST                = 2405,                    //人脸黑名单报警
    
    //begin震动光纤报警类型
    MBL_ALARM_TYPE_VIBRATIONFIBER_BEGIN     = 2601,					// 震动光纤1
    MBL_ALARM_TYPE_VIBRATIONFIBER_SNLALARM,                              // 开关量报警
    MBL_ALARM_TYPE_VIBRATIONFIBER_BOXALARM,                              // 开关盒报警
    MBL_ALARM_TYPE_VIBRATIONFIBER_INVALIDZONE,                           // 防区失效1106
    MBL_ALARM_TYPE_VIBRATIONFIBER_SIGNAL_OFF,                            // 光纤信号源停止
    MBL_ALARM_TYPE_VIBRATIONFIBER_FIBRE_BREAK,                           // 光纤断开
    MBL_ALARM_TYPE_VIBRATIONFIBER_END		= 2700,					// 震动光纤5
    //end
    //巡更报警
    MBL_ALARM_TYPE_PATROL_BEGIN					 = 2701,
    MBL_ALARM_TYPE_PATROL_EXCEPTION				 = 2702,				// 巡更异常报警
    MBL_ALARM_TYPE_PATROL_END					 = 2800,
    // -F预留报警类型，自定义报警
    MBL_ALARM_TYPE_USERDEFINE_BEGIN			 = 3101,
    MBL_ALARM_TYPE_USERDEFINE_END			 = 3130,
    
    // 报警运营平台，扩展自定义报警类型
    MBL_ALARM_TYPE_USERDEFINEEX_BEGIN		 = 3201,
    MBL_ALARM_TYPE_USERDEFINEEX_END			 = 4200,
    
    MBL_ALARM_TYPE_NODE_ACTIVE					= 4201,					// 主从切换报警
    MBL_ALARM_TYPE_ISCSI_STATUS					= 4202,					// ISCSI存储状态变更报警
    MBL_ALARM_TYPE_OUTDOOR_STATIC				= 4203,
    
    MBL_ALARM_TYPE_FALLING						= 4204,					// 跌落事件报警
    MBL_ALARM_TYPE_ITC_OUTSIDE_CARNUM			= 4205,					// 出入口外部车报警
    MBL_ALARM_TYPE_POS_TRANING_MODE				= 4206,					//POS机训练模式报警
    MBL_ALARM_TYPE_REFUND_OVER_QUOTA				= 4207,					//退货限额报警
    MBL_ALARM_TYPE_SWING_CARD_FREQUENTLY			= 4208,					//会员卡频繁出现报警
    MBL_ALARM_TYPE_SIGNLE_COST_OVER_QUOTA		= 4209,					//销售单笔超额报警
    MBL_ALARM_TYPE_ALARM_BREAK_ONDUTY           = 4216,                 //人员违章
    
    //DSS-H可视对讲设备室内机新增传感器报警类型
    MBL_ALARM_TYPE_SENSE_BEGIN					= 4299,
    MBL_ALARM_TYPE_SENSE_DOOR                    = 4300,                 //门磁
    MBL_ALARM_TYPE_SENSE_PASSIVEINFRA            = 4301,                 //被动红外
    MBL_ALARM_TYPE_SENSE_GAS                     = 4302,                 //气感
    MBL_ALARM_TYPE_SENSE_SMOKING                 = 4303,                 //气感
    MBL_ALARM_TYPE_SENSE_WATER                   = 4304,                 //水感
    MBL_ALARM_TYPE_SENSE_ACTIVEFRA               = 4305,                 //主动红外
    MBL_ALARM_TYPE_SENSE_GLASS                   = 4306,                 //玻璃破碎
    MBL_ALARM_TYPE_SENSE_EMERGENCYSWITCH         = 4307,                 //紧急开关
    MBL_ALARM_TYPE_SENSE_SHOCK                   = 4308,                 //震动
    MBL_ALARM_TYPE_SENSE_DOUBLEMETHOD            = 4309,                 //双鉴(红外+微波)
    MBL_ALARM_TYPE_SENSE_THREEMETHOD             = 4310,                 //三技术
    MBL_ALARM_TYPE_SENSE_TEMP                    = 4311,                 //温度
    MBL_ALARM_TYPE_SENSE_HUMIDITY                = 4312,                 //湿度
    MBL_ALARM_TYPE_SENSE_WIND                    = 4313,                 //风速
    MBL_ALARM_TYPE_SENSE_CALLBUTTON              = 4314,                 //呼叫按钮
    MBL_ALARM_TYPE_SENSE_GASPRESSURE             = 4315,                 //气体压力
    MBL_ALARM_TYPE_SENSE_GASCONCENTRATION        = 4316,                 //燃气浓度
    MBL_ALARM_TYPE_SENSE_GASFLOW                 = 4317,                 //气体流量
    MBL_ALARM_TYPE_SENSE_OIL                     = 4319,                 //油量检测，汽油、柴油等车辆用油检测
    MBL_ALARM_TYPE_SENSE_MILEAGE                 = 4320,                 //里程数检测
    MBL_ALARM_TYPE_SENSE_URGENCYBUTTON           = 4321,                 //紧急按钮
    MBL_ALARM_TYPE_SENSE_STEAL                   = 4322,                 //盗窃
    MBL_ALARM_TYPE_SENSE_PERIMETER               = 4323,                 //周界
    MBL_ALARM_TYPE_SENSE_PREVENTREMOVE           = 4324,                 //防拆
    MBL_ALARM_TYPE_SENSE_DOORBELL                = 4325,                 //门铃
    MBL_ALARM_TYPE_SENSE_LOCK_LOCKKEY            = 4326,                 //门锁钥匙报警
    MBL_ALARM_TYPE_SENSE_LOCK_LOWPOWER           = 4327,                 //门锁低电压报警
    MBL_ALARM_TYPE_SENSE_LOCK_PREVENTREMOVE      = 4328,                 //门锁防拆
    MBL_ALARM_TYPE_SENSE_LOCK_FORCE		        = 4329,                 //门锁胁迫报警
    MBL_ALARM_SENSE_LOCK_OFFLINE                = 4330,                    //门锁离线报警
    MBL_ALARM_SENSE_FIRE                        = 4331,                    //火警
    MBL_ALARM_TYPE_SENSE_END						= 4399,
    
    MBL_ALARM_TYPE_STORAGE_BEGIN					= 4400,
    MBL_ALARM_TYPE_IO_QUEUE_FULL					= 4401,					// 磁盘读写高负荷
    MBL_ALARM_TYPE_DISK_DESTROY					= 4402,					// 磁盘异常
    MBL_ALARM_TYPE_IPSAN_OFF_LINE				= 4403,					// IPSan掉线
    MBL_ALARM_TYPE_NO_DISK_STORAGE				= 4404,					// 没有磁盘
    MBL_ALARM_TYPE_GET_STREAM_ERROR				= 4405,					// 取码流错误
    MBL_ALARM_TYPE_STORAGE_END					= 4499,
    
    //DSSH出入口卡口黑名单报警类型新增
    MBL_ALARM_TYPE_TRAFFIC_SUSPICIOUSCAR         = 4501,
    
    //大华出入口控制机报警类型
    MBL_ALARM_TYPE_SLUICE_BEGIN								= 4502,
    MBL_ALARM_TYPE_SLUICE_IC_CARD_STATUS_LOWCARD				= 4503,					//卡箱少卡报警
    MBL_ALARM_TYPE_SLUICE_IC_CARD_STATUS_NOCARD				= 4504,					//卡箱无卡报警
    MBL_ALARM_TYPE_SLUICE_IC_CARD_STATUS_FULLCARDS			= 4505,					//卡箱卡满报警
    MBL_ALARM_TYPE_SLUICE_CAR_DETECTOR_STATE_OFFLINE			= 4506,					//车检器掉线报警
    MBL_ALARM_TYPE_SLUICE_CAR_DETECTOR_STATE_LOOPOFFLINE		= 4507,					//地感线圈掉线报警
    MBL_ALARM_TYPE_SLUICE_LED_DEV_STATE_OFFLINE				= 4508,					//LED掉线报警
    MBL_ALARM_TYPE_SLUICE_SWIPING_CARD_DEV_STATE_OFFLINE		= 4509,					//面板刷卡板掉线报警
    MBL_ALARM_TYPE_SLUICE_DELIVE_CARD_DEV_OFFLINE			= 4510,					//发卡刷卡板掉线报警
    MBL_ALARM_TYPE_SLUICE_SPEAK_DEV_STATUS					= 4511,					//对讲事件报警
    MBL_ALARM_TYPE_SLUICE_END								= 4550,
    
    //DSSH自助缴费机报警类型
    MBL_ALARM_TYPE_SELFPAY_BEGIN								= 4551,
    MBL_ALARM_TYPE_SELFPAY_NOPAPER							= 4552,//缺纸
    MBL_ALARM_TYPE_SELFPAY_NOCASH50							= 4553,
    MBL_ALARM_TYPE_SELFPAY_NOCASH20							= 4554,
    MBL_ALARM_TYPE_SELFPAY_NOCASH10							= 4555,
    MBL_ALARM_TYPE_SELFPAY_NOCASH1							= 4556,
    MBL_ALARM_TYPE_SELFPAY_NOCOIN							= 4557,
    MBL_ALARM_TYPE_SELFPAY_LOCKMONEY							= 4558,//卡币
    MBL_ALARM_TYPE_SELFPAY_DISMANTLE							= 4559,//防拆
    MBL_ALARM_TYPE_SELFPAY_UNPACK							= 4560,//开箱
    MBL_ALARM_TYPE_SELFPAY_UNKONWN							= 4561,//纸币不识别
    MBL_ALARM_TYPE_SELFPAY_END								= 4580,
    
    //客户端IP对讲报警
    MBL_ALARM_TYPE_IP_DEV_BEGIN = 4700,
    MBL_ALARM_TYPE_IP_DEV_CALLIN = 4701,									//分机呼叫
    MBL_ALARM_TYPE_IP_DEV_CALLOUT = 4702,								//拨打
    MBL_ALARM_IP_DEV_ANSWER       = 4703,        //接听
    MBL_ALARM_IP_DEV_EmergencyButton = 4704,        //紧急按钮报警
    MBL_ALARM_TYPE_IP_DEV_END = 4800,
    
    
    //手机APP报警类型
    MBL_ALARM_MOBILEAPP_BEGIN                            = 4900,
    MBL_ALARM_MOBILEAPP_GPS                                = 4901,        //手机APP上传GPS
    MBL_ALARM_MOBILEAPP_ONE_CLICK                        = 4902,        //手机APP一键报警
    MBL_ALARM_MOBILEAPP_MANUAL_ADD                        = 4903,        //手机APP手动添加报警
    MBL_ALARM_MOBILEAPP_END                                = 5000,
    
    //场景报警开始
    MBL_ALARM_SCENE_BEGIN                                = 5001,
    MBL_ALARM_PEOPLE_UPPER_LIMIT                        = 5002,        //人数上限
    MBL_ALARM_PEOPLE_LOWER_LIMIT                        = 5003,        //人数下限
    MBL_ALARM_INFLUX_UPPER_LIMIT                        = 5004,        //人流量超标（进）
    MBL_ALARM_OUTFLUX_UPPER_LIMIT                        = 5005,        //人流量超标（出）
    MBL_ALARM_DENSITY_UPPER_LIMIT                        = 5006,        //密度报警
    MBL_ALARM_SCENE_EXCEPTION                            = 5007,        //场景异常报警
    MBL_ALARM_EXCEPTION_STAY                            = 5008,        //异常滞留
    MBL_ALARM_SCENE_END                                    = 5100,
    //场景报警结束
    
    MBL_ALARM_THIRD_ACCESS                              = 5101,      //第三方接入设备报警
    MBL_ALARM_PC_REPORT                                    = 5102,         //智能设备上报人数统计报警
    MBL_ALARM_THREE_IN_ONE                                = 5103,         //三台合一报警
    MBL_ALARM_HUMAM_NUMBER_STATISTIC                    = 5104,         //人流量统计相机客流量超过阀值报警事件
    MBL_ALARM_PERSON_COUNT_REPORT                       = 5105,      //人流量统计（以报警方式上报人流量统计信息）
    MBL_ALARM_MAN_NUM_DETECTION                         = 5106,      //立体视觉区域内人数统计报警

    MBL_ALARM_TYPE_HEATIMG_TEMPER							= 5120,		//热成像测温点温度异常报警
    MBL_ALARM_TYPE_FIRE_WARNING								= 5121,		//
    MBL_ALARM_TYPE_FIRE                                     = 5122,     //
    MBL_ALARM_TYPE_HOT_POINT_ABNORMALITY                    = 5123,     //热成像热点异常报警
    MBL_ALARM_TYPE_COLD_POINT_ABNORMALITY                   = 5124,     //热成像冷点异常报警
    MBL_ALARM_TYPE_TEMPERATURE_DIFFERENCE                   = 5125,     //热成像测温规则温差报警
    MBL_ALARM_RADIOMETRY_SMOKE_DETECTION                 = 5126,          //热成像烟雾报警
    MBL_ALARM_RADIOMETRY_FACE_OVERHEATING               = 5127,          //热成像人体发烧预
    // 常州武进公安车载
    MBL_ALARM_SIM_CARD_FLUX_REPORT                        = 5140,            // 车载MDVR上月历史流量报警
    
    // 海南福山油田
    MBL_ALARM_OIL_4G_OVERFLOW                            = 5160,            // 4G流量超额报警
    
    
    // 长春地铁报警
    MBL_ALARM_SUB_WAY_DOOR_STATE                         = 5170,            // 地铁车厢门报警
    MBL_ALARM_SUB_WAY_PECE_SWITCH                        = 5171,            // 地铁PECE柜门报警
    MBL_ALARM_SUB_WAY_FIRE_ALARM                        = 5172,            // 地铁火警报警
    MBL_ALARM_SUB_WAY_EMER_HANDLE                        = 5173,            // 地铁乘客紧急手柄动作报警
    MBL_ALARM_SUB_WAY_CAB_COVER                            = 5174,            // 地铁司机室盖板报警
    MBL_ALARM_SUB_WAY_DERA_OBST                            = 5175,            // 地铁检测到障碍物或脱轨报警
    MBL_ALARM_SUB_WAY_PECU_CALL                            = 5176,            // 地铁客室报警器报警
    
    //客户端机顶盒设备定制报警
    MBL_ALARM_STB_BEGIN                                    = 5200,
    MBL_ALARM_STB_FIRE                                    = 5201,        //火警
    MBL_ALARM_STB_CRIME                                    = 5202,        //匪警
    MBL_ALARM_STB_EMERGENCY                                = 5203,        //急救中心
    MBL_ALARM_STB_OTHER                                    = 5204,        //其他报警
    MBL_ALARM_STB_END                                    = 5250,
    
    //-C/-P新增报警预留
    MBL_ALARM_DSSC_BEGIN                                        = 5300,
    MBL_ALARM_PATIENTDETECTION_TYPE_CROSS_REGION                = MBL_ALARM_DSSC_BEGIN + 1,    // 警戒区域报警，可能是病人离开或者有其他靠近病人
    MBL_ALARM_PATIENTDETECTION_TYPE_LIGHT_OFF                    = MBL_ALARM_DSSC_BEGIN + 2,    // 病房电灯被熄灭
    MBL_ALARM_PATIENTDETECTION_TYPE_STOP_DETECTION                = MBL_ALARM_DSSC_BEGIN + 3,    // 撤防，不再监控病人
    MBL_ALARM_PATIENTDETECTION_TYPE_START_DETECTION                = MBL_ALARM_DSSC_BEGIN + 4,    // 开始布防
    MBL_ALARM_PATIENTDETECTION_TYPE_ESCAPE                        = MBL_ALARM_DSSC_BEGIN + 5,    // 病人在押解过程中逃跑
    MBL_ALARM_PATIENTDETECTION_TYPE_SMOKE                        = MBL_ALARM_DSSC_BEGIN + 6,    // 烟感报警
    MBL_ALARM_DSSC_END                                            = 5400,
    
    MBL_ALARM_TYPE_U700_BEGIN								= 5401,
    MBL_ALARM_TYPE_VTA_INSPECTION							= MBL_ALARM_TYPE_U700_BEGIN + 1, // VTA报警柱巡检报警
    MBL_ALARM_TYPE_VTA_OVERSPEED								= MBL_ALARM_TYPE_U700_BEGIN + 2, // VTA报警柱超速报警
    MBL_ALARM_TYPE_VTA_INSPECTION_SWING_CARD					= MBL_ALARM_TYPE_U700_BEGIN + 3, //VTA巡检刷卡
    MBL_ALARM_TYPE_VTA_PATROL_SWING_CARD						= MBL_ALARM_TYPE_U700_BEGIN + 4, //VTA巡更刷卡
    MBL_ALARM_TYPE_U700_END = 5500,
    
    MBL_ALARM_TYPE_REMOTE_CAMERA_STATE						= 5501,		//卡口设备相机状态上报报警
    
    MBL_ALARM_TYPE_SHANGHAI_JIHENG							= 5502,		//上海迹恒上报报警
    MBL_ALARM_PATROL_REMIND                                 = 5503,                //巡更提醒报警
    MBL_ALARM_VTO_ACCESSIDENTIFY                            = 5504,                //门口机人脸认证
    MBL_ALARM_CAR_SURVEY                                    = 5505,                //卡口布控报警
    MBL_ALARM_TYPE_CHANNEL_TALK								= 5506,		//通道对讲报警
    MBL_ALARM_HEARTRATE_DETECT                              = 5507,                //心率侦测
    //人行道闸报警定义 5640- 5680
    MBL_ALARM_ROADGATE_BEGIN                                = 5640,
    
    MBL_ALARM_ROADGATE_VALID_PASSWORD_OPENDOOR              = 5642,
    MBL_ALARM_ROADGATE_INVALID_PASSWORD_OPENDOOR            = 5643,
    MBL_ALARM_ROADGATE_REMOTE_OPENDOOR                      = 5648,
    MBL_ALARM_ROADGATE_VALID_CARD_OPENDOOR                  = 5651,
    MBL_ALARM_ROADGATE_INVALID_CARD_OPENDOOR                = 5652,
    MBL_ALARM_ROADGATE_NORMAL_CLOSED                        = 5656,
    MBL_ALARM_ROADGATE_OPEN                                 = 5657,
    MBL_ALARM_ROADGATE_OPEN_TIME_OUT_BEG                    = 5660,
    MBL_ALARM_ROADGATE_OPEN_TIME_OUT_END                    = 5670,
    
    MBL_ALARM_ROADGATE_END                                  = 5680,
    
    //老动环报警扩展定义报警区间段
    MBL_ALARM_SCS_EXT_BEGIN                                 = 6000,
    MBL_ALARM_SCS_EXT_NOISE_INTENSITY                       = 6001,                        //噪声告警
    MBL_ALARM_SCS_EXT_END                                   = 6999,
    
    //雷达信息报警区间
    MBL_AlARM_RADAR_BEGIN                                   = 7000,
    MBL_AlARM_RADAR_TARGETINFO                              = 7001,        // 雷达上传目标信息
    MBL_AlARM_RADAR_ALARM                                   = 7002,        // 雷达报警上传
    MBL_AlARM_RADAR_END                                     = 7100,
    
    
    //新动环报警定义报警区间段
    MBL_ALARM_TYPE_NEW_SCS_BEGIN						    = 8000,
    MBL_ALARM_TYPE_NEW_SCS_END								= 9999,
    
    
    //平台业务报警区间段
    MBL_ALARM_BUSINESS_BEGIN                                = 10001,
    MBL_ALARM_BUSINESS_POLICE_PATROL                        = 10002,            //民警巡视业务报警
    MBL_ALARM_BUSINESS_WAITING_ROOM_UNATTENDED              = 10003,            //候问室无人看管
    MBL_ALARM_BUSINESS_WASHROOM_UNATTENDED                  = 10004,            //卫生间无人跟随
    MBL_ALARM_BUSINESS_MAN_NUM_DETECTION                    = 10005,            //审讯室人数报警
    MBL_ALARM_BUSINESS_END                                  = 10500,
    
    MBL_ALARM_VEHICLE_SURVEY_EW                             = 10501,            //车辆布控预警报警
    MBL_ALARM_FACE_EW                                       = 10502,            //人脸预警报警
    MBL_ALARM_VEHICLE_SCORE_EW                              = 10503,            //车辆积分预警报警
    
    //CMS平台报警
    MBL_ALARM_DISTRIBUTE_SWITCHOVER                         = 10600,            //N+M备份切换报警
    
    MBL_ALARM_HBSZZ_APP_BUTTON                              = 10601,            //河北省综治项目APP一键报警
    MBL_ALARM_WIDE_VIEW_REGION_ALARM                        = 10602,            // 全景区域报警，浙江二监定制
    MBL_ALARM_HIGH_DECIBEL                                  = 10603,            // 声音高分贝检测报警
    MBL_ALARM_SHAKE_DETECTION                               = 10604,            // 摇晃检测报警
    MBL_ALARM_BATTERY_LOW_POWER                             = 10605,            // 电池电量低报警
    
    //PTS新增报警
    MBL_ALARM_PTS_BEGIN                                     = 11000,
    //布控报警 begin
    MBL_ALARM_FORTIFY_OVERSPEED                             = 11001,    // 布控超速车辆
    MBL_ALARM_FORTIFY_STOLEN                                = 11002,    // 布控盗抢车辆
    MBL_ALARM_FORTIFY_ACCIDENT                              = 11003,    // 布控肇事车辆
    MBL_ALARM_FORTIFY_SUSPICE                               = 11004,    // 布控嫌疑车辆
    MBL_ALARM_FORTIFY_HEADOFF                               = 11005,    // 布控拦截车辆
    MBL_ALARM_FORTIFY_CHECKED                               = 11006,    // 布控检查盘查
    MBL_ALARM_FORTIFY_FOLLOWED                              = 11007,    // 布控观察跟踪
    MBL_ALARM_FORTIFY_DANGER                                = 11008,    // 布控高危车辆
    MBL_ALARM_FORTIFY_STRANDING                             = 11009,    // 布控滞留车辆
    MBL_ALARM_FORTIFY_SPECIALEXCEPTION                      = 11010,    // 特殊异常车辆
    MBL_ALARM_FORTIFY_EXHAUST                               = 11011,    // 布控黄标车
    MBL_ALARM_FORTIFY_ALLOWLIST                             = 11012,    //
    MBL_ALARM_FORTIFY_BLOCKLIST                             = 11013,    //
    MBL_ALARM_FORTIFY_LASTNUMBER                            = 11014,    // 布控尾号限行
    MBL_ALARM_FORTIFY_GRIDLINE                              = 11015,    // 网格布控（车辆经过网内任意两个卡点）
    MBL_ALARM_FORTIFY_TIMEOUT                               = 11016,    // 布控滞留超时车辆
    MBL_ALARM_FORTIFY_ILLEGALTIMEPASS                       = 11017,    // 布控在白名单内，非法时间段通过车辆(暂定上海浦东垃圾场定制)
    MBL_ALARM_FORTIFY_NOTINALLOWLIST                        = 11018,    //
    MBL_ALARM_FORTIFY_RECOGNISEFAIL                         = 11019,    // 布控车牌无法识别车辆(暂定上海浦东垃圾场定制)
    //布控报警 end
    
    MBL_ALARM_NO_DRIVERROAD                                 = 11101,    //非机动车道
    MBL_ALARM_OFFEND_INTERDICTORYSIGN                       = 11102,    //机动车违反禁令标志指示
    MBL_ALARM_COVERING_PLATE                                = 11103,    //遮挡号牌
    MBL_ALARM_ROUND_ITS                                     = 11104,    //绕行卡口
    MBL_ALARM_RESTRICT_DRIVING                              = 11105,    //限行
    MBL_ALARM_PEDESTRAIN_PRIORITY                           = 11106,    //斑马线行人优先
    MBL_ALARM_MNVR_PEC                                      = 11107,    //车辆黑名单事件
    MBL_ALARM_COMPARE_PLATE                                 = 11108,    //车牌前后对比
    MBL_ALARM_TRAFFIC_CARWEIGHT                             = 11109,    //超重
    MBL_ALARM_TRANSFINITE_PECCANCY                          = 11110,    //超限违章
    MBL_ALARM_CHASSIS_CHECK                                 = 11111,    //底盘检查
    MBL_ALARM_PREILLEGALLY_PARKED                           = 11112,    //预违停
    MBL_ALARM_CAR_DETECTOR_FAULT                            = 11113,    //线圈/车检器故障报警
    MBL_ALARM_REMOTE_HOST                                   = 11114,    //远程主机报警
    MBL_ALARM_TRAFFICLIGHTS_FAULT                           = 11115,    //灯绿灯
    MBL_ALARM_TRAFFIC_INTERRUPT                             = 11116,    //交通中断
    MBL_ALARM_DATABASE_FAULT                                = 11117,    //数据库错误
    MBL_ALARM_PTS_END                                       = 11500,
    
    
    MBL_ALARM_TYPE_GENERAL_CAPACITY_LOW                     = 11600, //常规容量不足
    MBL_ALARM_TYPE_DATANODE_OFFLINE                         = 11601, //存储节点下线
    MBL_ALARM_TYPE_DISK_OFFLINE                             = 11602, //磁盘下线
    MBL_ALARM_TYPE_DISK_SLOW                                = 11603, //磁盘变慢
    MBL_ALARM_TYPE_DISK_FAILURE                             = 11604, //磁盘损坏
    MBL_ALARM_TYPE_DISK_UNKNOW_ERROR                        = 11605, //磁盘未知错误
    MBL_ALARM_TYPE_METADATA_SERVER_ABNORMAL                 = 11606, //数据服务器异常
    MBL_ALARM_TYPE_CATALOG_SERVER_ABNORMAL                  = 11607, //目录服务器异常
    MBL_ALARM_MCS_GENERAL_CAPACITY_RESUME                   = 11608,// 微云常规容量恢复事件
    MBL_ALARM_MCS_DATA_NODE_ONLINE                          = 11609,// 微云存储节点上线事件
    MBL_ALARM_MCS_DISK_ONLINE                               = 11610,// 微云磁盘上线事件
    MBL_ALARM_MCS_METADATA_SUB_ONLINE                     = 11611,// 微云元数据备机上线事件
    MBL_ALARM_MCS_CATALOG_SERVER_ONLINE                     = 11612,// 微云目录服务器上线事
    MBL_ALARM_VITAL_SIGNS_ABNORMAL                          = 11700,// 生命体征异常报警
    
    
    MBL_ALARM_DRIVERIN_FLYAREA                              = 12000,// 驶入飞行区
    MBL_ALARM_DRIVEROUT_FLYAREA,                                        // 驶出飞行区
    MBL_ALARM_DRIVERIN_MANUALBANFLYAREA,                                // 驶入禁飞区（手动配置）
    MBL_ALARM_DRIVEROUT_MANUALBANFLYAREA,                               // 驶出禁飞区（手动配置）
    MBL_ALARM_DRIVERIN_FIXEDBANFLYAREA,                                 // 驶入禁飞区（不可配置）
    MBL_ALARM_DRIVEROUT_FIXEDBANFLYAREA,                                // 驶出禁飞区（不可配置）
    MBL_ALARM_DRIVERIN_FiXEDLIMITFLY,                                   // 驶入限制飞行（不可配置）
    MBL_ALARM_DRIVEROUT_FiXEDLIMITFLY,                                  // 驶出限制飞行（不可配置）
    
    MBL_ALARM_ILLEGALIN_FLYAREA,                                        // 非法进入飞行区报警
    MBL_ALARM_ILLEGALOUT_FLYAREA,                                        // 非法驶出飞行区报警
    MBL_ALARM_ILLEGALIN_MANUALBANFLYAREA,                                // 非法进入禁飞区（手动配置）
    MBL_ALARM_ILLEGALOUT_MANUALBANFLYAREA,                                // 非法驶出禁飞区（手动配置）
    MBL_ALARM_ILLEGALIN_FIXEDBANFLYAREA,                                // 非法进入禁飞区（不可配置）
    MBL_ALARM_ILLEGALOUT_FIXEDBANFLYAREA,                                // 非法驶出禁飞区（不可配置）
    MBL_ALARM_ILLEGALIN_FiXEDLIMITFLY,                                     // 非法进入限制飞行
    MBL_ALARM_ILLEGALOUT_FiXEDLIMITFLY                            = 12015,// 非法出驶出限制飞行
    
    //新增消防主机报警 占用范围：12300-12400
    MBL_ALARM_FIREENGINE_BEGIN                   = 12300,
    MBL_ALARM_FIREENGINE_FIRE,                                             //火警报警
    MBL_ALARM_FIREENGINE_EQUIPMENT_FAILURE,                                //设备故障报警
    MBL_ALARM_FIREENGINE_HOST_FAILURE,                                     //主电故障
    MBL_ALARM_FIREENGINE_BACKUP_FAILURE,                                  //备电故障
    MBL_ALARM_FIREENGINE_HOST_UNDERVOLTAGE,                                //主电欠压
    MBL_ALARM_FIREENGINE_BACKUP_UNDERVOLTAGE,                            //备电欠压
    MBL_ALARM_FIREENGINE_BUS_FAILURE,                                    //总线故障
    MBL_ALARM_FIREENGINE_HOST_OFFLINE,                                  //主机离线
    MBL_ALARM_FIREENGINE_MANUAL,                                          //手动报警
    MBL_ALARM_FIREENGINE_TEMPERATUAL,                                    //温度报警
    MBL_ALARM_FIREENGINE_LOW_WATERPRESSURE,                                //水压过低
    MBL_ALARM_FIREENGINE_HIGH_WATERPRESSURE,                            //水压过高
    MBL_ALARM_FIREENGINE_DETECTOR_FAULT,                                //探测器故障
    
    MBL_ALARM_FIREENGINE_END                   = 12400,
    
    //新增消控报警 占用范围：12401-12500
    MBL_ALARM_FIRECONTROL_BEGIN                                = 12401,
    MBL_ALARM_FIRECONTROL_NOBODY                            = 12402,             //无人报警
    MBL_ALARM_FIRECONTROL_UPPER_LIMIT                        = 12403,             //超过上限报警
    MBL_ALARM_FIRECONTROL_LOWER_LIMIT                        = 12404,             //少于下限报警
    MBL_ALARM_FIRECONTROL_NOT_MATCH                            = 12405,             //计划不符报警
    MBL_ALARM_FIRECONTROL_END                                = 12500,
    
    MBL_ALARM_TYRE_PRESSURE_ABNORMAL                        = 13000,                 //胎压异常
    MBL_ALARM_RETROGRADATION_DETECT                            = 13003,              //逆行检测
    MBL_ALARM_TARGET_REMOVE_DETECT                            = 13004,              //目标移除检测
    MBL_ALARM_GPS_MODULE_LOST                                   = 13005,                 //GPS异常
    MBL_ALARM_WIFI_MODULE_LOST                                   = 13006,                 //WIFI异常
    MBL_ALARM_3G4G_MODULE_LOST                                   = 13007,                 //3G/4G异常
    MBL_ALARM_POLICE_CHECK                                          = 13008,                 //单兵设备警员签到报警
    MBL_ALARM_WIFI_MODULE_OFFLINE                            = 13009,                 //WIFI模块离线
    MBL_ALARM_CHASSIS_INTRUSION                                = 13010,                 //报警柱防拆报警
    MBL_ALARM_WIFI_MODULE_ONLINE                            = 13011,                 //WIFI模块在线
    
    
    
    //海外门禁报警新增:13100-13500
    MBL_ALARM_DOOR_UNAUTHORIZE                                =13100,                //未授权(无效刷卡)
    MBL_ALARM_DOOR_LOST                                        =13101,               //卡挂失或注销(无效刷卡)
    MBL_ALARM_DOOR_NO_PERMISSION                            =13102,               //没有该门权限(无效刷卡)
    MBL_ALARM_DOOR_ERR_MODE                                   =13103,               //开门模式错误(无效刷卡)
    MBL_ALARM_DOOR_ERR_VALIDITY                                =13104,               //有效期错误(无效刷卡)
    MBL_ALARM_DOOR_ERR_REPEATENTERROUTE                        =13105,               //防反潜模式(无效刷卡)
    MBL_ALARM_DOOR_FORCE_NOTOPEN                            =13106,               //胁迫报警未打开(无效刷卡)
    MBL_ALARM_DOOR_ALWAYS_CLOSED                            =13107,               //门常闭状态(无效刷卡)
    MBL_ALARM_DOOR_AB_CLOKED                                   =13108,               //AB互锁状态(无效刷卡)
    MBL_ALARM_DOOR_PATROL_CARD                                =13109,               //巡逻卡(无效刷卡)
    MBL_ALARM_DOOR_IN_BROKEN                                   =13110,               //设备处于闯入报警状态(无效刷卡)
    MBL_ALARM_DOOR_ERR_TIMESECTION                            =13111,               //时间段错误(无效刷卡)
    MBL_ALARM_DOOR_ERR_HOLIDAYTIMESECTION                    =13112,               //假期内开门时间段错误(无效刷卡)
    MBL_ALARM_DOOR_NEED_FIRSTCARD_PERMISSION                =13113,               //需要先验证有首卡权限的卡片(无效刷卡)
    MBL_ALARM_DOOR_ERR_CARD_PASSWORD                        =13114,               //卡片正确,输入密码错误(无效刷卡)
    MBL_ALARM_DOOR_INPUTCARDPWD_TIMEOUT                        =13115,               //卡片正确,输入密码超时(无效刷卡)
    MBL_ALARM_DOOR_ERR_CARD_FINGERPRINT                        =13116,               //卡片正确,输入指纹错误(无效刷卡)
    MBL_ALARM_DOOR_INPUTCARDFINGERPRINT_TIMEOUT                =13117,            //卡片正确,输入指纹超时(无效刷卡)
    MBL_ALARM_DOOR_ERR_FINGERPRINT_PASSWORD                    =13118,              //指纹正确,输入密码错误(无效刷卡)
    MBL_ALARM_DOOR_INPUTFINGERPRINTPWD_TIMEOUT                =13119,              //指纹正确,输入密码超时(无效刷卡)
    MBL_ALARM_DOOR_ERR_GROUP                                   =13120,              //组合开门顺序错误(无效刷卡)
    MBL_ALARM_DOOR_GROUPN_NEED_VERIFY                        =13121,              //组合开门需要继续验证(无效刷卡)
    MBL_ALARM_DOOR_CONSOLE_UNAUTHORIZE                        =13122,              //验证通过,控制台未授权(无效刷卡)
    MBL_ALARM_DOOR_CARD_PWD_OPENDOOR                          =13123,                //卡加密码开门
    MBL_ALARM_DOOR_CARD_FINGERPRINT_OPENDOOR                =13124,                //卡加指纹开门
    MBL_ALARM_DOOR_REMOTE_CONFIRM                              =13125,                //远程验证
    MBL_ALARM_DOOR_GROUP_OPENDOOR_CONFIRM                    =13126,                //组合开门验证通过
    MBL_ALARM_ATTENDANCESTATE_SIGNIN                        =13130,
    MBL_ALARM_ATTENDANCESTATE_SIGNOUT                        =13131,
    MBL_ALARM_ATTENDANCESTATE_WORK_OVERTIME_SIGNIN            =13132,
    MBL_ALARM_ATTENDANCESTATE_WORK_OVERTIME_SIGNOUT            =13133,
    MBL_ALARM_ATTENDANCESTATE_GOOUT                            =13134,
    MBL_ALARM_ATTENDANCESTATE_GOOUT_AND_RETRUN                =13135,
    
    MBL_ALARM_WORK_CHECK_IN                                    =13200,
    MBL_ALARM_WORK_CHECK_OUT                                =13201,
    MBL_ALARM_OVERTIME_CHECK_IN                                =13202,
    MBL_ALARM_OVERTIME_CHECK_OUT                            =13203,
    MBL_ALARM_GO_OUT                                        =13204,
    MBL_ALARM_GO_BACK                                        =13205,
    MBL_ALARM_CUSTOM_PASSWORD_OPEN                            =13300,            // 个性化密码开门
    
    MBL_ALARM_RECORD_DOWNLOADORPLAYBACK_END                    = 13501,            // 录像文件下载、回放结束
    MBL_ALARM_TRAFFIC_JAM                                    = 13502,            // 交通拥堵事件
    
    MBL_ALARM_CUSTOMER_STATISTICIAN_OVERFLOW                = 13600,            // 客流统计报警 - 流量超限报警
    MBL_ALARM_CUSTOMER_STATISTICIAN_END                        = 13700,            // 客流统计报警 - 结束
    // 综合能源产品线 报警 开始
    
    // 综合能源产品线 报警 开始
    // 14000 - 15000
    // 综合能源产品线 报警 结束
    
    //新增的车载报警类型  预留30个报警 15001 - 15030  其它请勿占用
    MBL_ALARM_BUS_LANE_DEPARTURE_WARNNING                    = 15001,            // 车道偏离
    MBL_ALARM_BUS_FORWARD_COLLISION_WARNNING                = 15002,            // 前向碰撞预警
    MBL_ALARM_VEHICLE_STATE_START                            = 15003,            // 车辆状态上报 开始运动
    MBL_ALARM_VEHICLE_STATE_BEYOND_10                        = 15004,            // 车辆状态上报 车速大于10km/h
    MBL_ALARM_VEHICLE_STATE_STOP                             = 15005,            // 车辆状态上报 停止
    MBL_ALARM_SERVICE_DISTANCE_BELOW_2000                   = 15006,            // 车辆保养距离小于2000km报警
    
    //新开辟的IVS智能报警 预留1500个 范围15500 - 17000
    MBL_ALARM_IVS_ALARM_NEW_BEGIN                            = 15500,                // 智能设备报警类型在dhnetsdk.h基础上+15000（DMS服务中添加）,因为是从590+15000开始的
    MBL_ALARM_IVS_FLOW_BUSINESS                                = 0x0000024E + 15000,    // 流动摊贩事件
    MBL_ALARM_IVS_CITY_MOTORPARKING                            = 0X0000024F + 15000,   // 城市机动车违停事件
    MBL_ALARM_IVS_CITY_NONMOTORPARKING                        = 0x00000250 + 15000,    // 城市机非动车违停事件
    MBL_ALARM_IVS_LANEDEPARTURE_WARNNING                    = 0X00000251 + 15000,   // 车道偏移预警
    MBL_ALARM_IVS_FORWARDCOLLISION_WARNNING                    = 0X00000252 + 15000,   // 前向碰撞预警
    MBL_ALARM_IVS_MATERIALSSTAY                                = 0X00000253 + 15000,   // 物料堆放事件
    MBL_ALARM_STAYALONE_DETECTION                            = 0X00000254 + 15000,    // 单人独处检测
    MBL_ALARM_IVS_FLOATINGOBJECT_DETECTION                    = 0X00000257 + 15000,   // 漂浮物检测事件
    MBL_ALARM_IVS_PHONECALL_DETECT                            = 0x0000025A + 15000,    // 打电话报警
    MBL_ALARM_IVS_SMOKING_DETECT                            = 0x0000025B + 15000,    // 吸烟报警
    MBL_ALARM_IVS_QUEUESTAY_DETECTION                        = 0X00000262 + 15000,   // 排队滞留时间报警事件
    MBL_ALARM_IVS_QUEUENUM_DETECTION                        = 0X00000263 + 15000,   // 排队人数异常报警事件
    MBL_ALARM_IVS_VEHICLE_DISTANCE_NEAR                        = 0x0000026B + 15000,   // 安全驾驶车距过近报警事件
    MBL_ALARM_IVS_TRAFFIC_DRIVER_ABNORMAL                    = 0x0000026C + 15000,   // 驾驶员异常报警事件
    MBL_ALARM_IVS_TRAFFIC_DRIVER_CHANGE                        = 0x0000026D + 15000,   // 驾驶员变更报警事件
    MBL_ALARM_IVS_WORKCLOTHES_DETECT                        = 0x0000026E + 15000,   // 工装(安全帽/工作服等)检测事件
    MBL_ALARM_IVS_SECURITYGATE_PERSONALARM                    = 0x0000026F + 15000,   // 安检门人员报警
    MBL_ALARM_IVS_INFRAREDBLOCK                                = 0x00000275 + 15000,   // 红外阻断事件
    MBL_ALARM_IVS_PANORAMA_SHOT                                = 0x00000278 + 15000,   // 全景抓拍事件
    MBL_ALARM_IVS_LOW_WATER_LEVEL                            = 16994,                // 水位报警 低水位
    MBL_ALARM_IVS_HIGH_WATER_LEVEL                            = 16995,                // 水位报警 高水位
    MBL_ALARM_IVS_UNMANNED_INTERROGATE                        = 16996,                // 无人审讯
    MBL_ALARM_IVS_SIGNAL_INTERROGATE                        = 16997,                // 单人审讯
    MBL_ALARM_IVS_TYPE_CROWD_DENSITY                        = 16998,                // 区域人群密度报警   报警拆分, 为不影响原报警的 300+netSDK值,的代码结构, 所以报警从后面来
    MBL_ALARM_IVS_TYPE_NUMBER_EXCEED                        = 16999,                // 全域人群密度报警
    MBL_ALARM_IVS_ALARM_NEW_END                                = 17000,                // 智能设备报警类型在dhnetsdk.h基础上+15500（DMS服务中添加）
    
    //组合报警 预留100个 范围18000 - 18100
    MBL_ALARM_GROUP_ALARM_BEGIN                                = 18000,
    MBL_ALARM_GROUP_IPC_PEOPLENUM_ONE                        = 18001,            //组合报警-单人状态
    MBL_ALARM_GROUP_ARM_DISABLE                                = 18002,            //组合报警-撤防状态
    MBL_ALARM_GROUP_ALARM_END                                = 18100,
    
    MBL_ALARM_PERSON_STAY                                    = 18101,            //人员滞留
    MBL_ALARM_ZONE_STAY                                        = 18102,            //区域滞留
    MBL_ALARM_SINGLE_STAY                                    = 18103,            //单个人员滞留
    MBL_ALARM_VISITOR_STAY                                    = 18104,            //访客滞留
    MBL_ALARM_ABNORMAL_PERSON                                = 18105,            //异常人员
    MBL_ALARM_ILLEGAL_ENTER                                    = 18106,            //非法进入
    MBL_ALARM_FIREWARNING                                    = 18107,            //热成像着火点
    
    //报警主机异常布撤防 预留100个 范围18200 - 18300
    MBL_DEV_MSG_TYPE_DELAYED_ARM                            =18200,               //延时布防
    
    
    // 增加的一些普通报警的报警值 19000~20000
    MBL_ALARM_CROWD_DETECTION                                =19000,              //人群密度报警
    MBL_ALARM_VEHICLE_LOAD                                    =19001,              //车载NVR载重数据上传事件
    MBL_ALARM_VEHICLE_OILLEVEL                                =19002,                 //车载NVR油位数据上传事件
    MBL_ALARM_IMSI_CHECK                                    =19003,              //IMSI校验事件
    MBL_ALARM_BLIND_ALARM                                    =19004,              //进入盲区报警
    MBL_ALARM_DISK_CHECK                                    =19005,              //磁盘检测
    MBL_ALARM_NAS_SERVER_STATE                                =19006,                 //共享服务
    MBL_ALARM_VOLUME_GROUP_FAULT                             =19007,                 //存储池异常
    MBL_ALARM_ANALOGALARM_EVENT_HARMFUL_GAS                 =19008,              //有毒气体
    MBL_ALARM_BUS_EXPORT_SITE                               =19009,              //离站事件
    MBL_ALARM_SMARTMOTION_HUMAN                             =19010,              //智能人动检
    MBL_ALARM_SMARTMOTION_VEHICLE                           =19011,              //智能车动检
    MBL_ALARM_SMARTMOTION_HUMAN_AND_VEHICLE                 =19012,              //智能人&&车动检
    // 增加的一些普通报警的报警值 19000~20000
    
    //机器人报警  预留200个报警 20001 - 20200  其它请勿占用
    MBL_RC_ALARM_COLLISION                                    = 20001,            //碰撞事件
    MBL_RC_ALARM_ROADBLOCKED                                = 20002,             //遇障
    MBL_RC_ALARM_FAULT                                        = 20003,             //机器人本地错误
    MBL_RC_ALARM_BRAKE                                        = 20004,             //紧急刹车
    MBL_RC_ALARM_CHARGING_ERROR                                = 20005,             //充电错误
    MBL_RC_ALARM_DERAILMENT                                    = 20006,             //脱轨
    MBL_RC_ALARM_PREVENT_FALLING                            = 20007,             //防跌落
    
    //MCD 加报警  22000~23000
    MBL_ALARM_CALL_OUT                                      = 22000,             //呼叫按钮报警
    MBL_ALARM_CALL_THE_POLICE                               = 22001,             //报警按钮报警
    
    //格力事件订阅
    MBL_ALARM_ABNORMAL_RUN                                    = 23001,            //停线异常
    MBL_ALARM_ABNORMAL_STOP                                    = 23002,            //点停异常
    
    // 车载ADAS报警，特殊定制，新增报警类型加以区分
    MBL_ALARM_EM_ADAS_BEGIN            = 49700,      // begin
    MBL_ALARM_EM_ADAS_TIRED_DRIVE_DISTANCE_NEAR                = 49701,            // 车距过近
    MBL_ALARM_EM_ADAS_TIRED_DRIVE_FORWARD_COLLISION            = 49702,            // 碰撞报警
    MBL_ALARM_EM_ADAS_TIRED_DRIVE_LEFTLANE_DEPARTURE        = 49703,            // 左车道线报警
    MBL_ALARM_EM_ADAS_TIRED_DRIVE_RIGHTLANE_DEPARTURE        = 49704,            // 右车道线报警
    MBL_ALARM_EM_ADAS_TIRED_DRIVE_SUDDENLY_ACCELER            = 49705,            // 急加速
    MBL_ALARM_EM_ADAS_TIRED_DRIVE_TRAFFIC_ADAS_BRAKES        = 49706,            // 急刹车
    MBL_ALARM_EM_ADAS_TIRED_DRIVE_SHARP_TURN_LEFT            = 49707,            // 急左转弯
    MBL_ALARM_EM_ADAS_TIRED_DRIVE_SHARP_TURN_RIGHT            = 49708,            // 急右转弯
    MBL_ALARM_EM_ADAS_TIRED_DRIVE_TURN_OVER                    = 49709,            // 侧翻
    MBL_ALARM_EM_ADAS_TIRED_DRIVE_FRONT_SNAP                = 49710,            // 车前方抓拍
    MBL_ALARM_EM_ADAS_TIRED_DRIVE_DRIVER_SNAP                = 49711,            // 驾驶员抓拍
    MBL_ALARM_EM_ADAS_TIRED_DRIVE_DRIVER_LEAVE_POST            = 49712,            // 驾驶员离岗
    MBL_ALARM_EM_ADAS_TIRED_DRIVE_MILD_TIRED                = 49713,            // 疲劳一级报警
    MBL_ALARM_EM_ADAS_TIRED_DRIVE_TIRED                        = 49714,            // 疲劳二级报警
    MBL_ALARM_EM_ADAS_TIRED_DRIVE_VIDEO_BLIND                = 49715,            // 摄像头遮挡
    MBL_ALARM_EM_ADAS_TIRED_DRIVE_DRIVER_CALLING            = 49716,            // 打电话
    MBL_ALARM_EM_ADAS_TIRED_DRIVE_DRIVER_YAWN                = 49717,            // 打哈欠
    MBL_ALARM_EM_ADAS_TIRED_DRIVE_DRIVER_SMOKING            = 49718,            // 抽烟
    MBL_ALARM_EM_ADAS_TIRED_DRIVE_DRIVER_LOOKAROUND            = 49719,            // 左顾右盼
    MBL_ALARM_EM_ADAS_TIRED_DRIVE_OVER_SPEED                = 49720,            // 超速
    MBL_ALARM_EM_ADAS_TIRED_DRIVE_SUBSTITUTION                = 49721,            // 换人报警
    MBL_ALARM_EM_ADAS_TIRED_DRIVE_ABNORMAL                    = 49722,            // 驾驶员异常报警
    MBL_ALARM_EM_ADAS_END            = 49999,      // end
    // 车载ADAS报警end
    
    
    // 交通事件检测类型                                    //对应EnumCarRule中违章类型
    MBL_ALARM_TRAFFIC_ACTION_BENGIN                            = 50000,
    MBL_ALARM_TRAFFIC_ACTION_PARKING                        = 50001,            // 交通事件检测停车
    MBL_ALARM_TRAFFIC_ACTION_PEDESTRAIN                        = 50002,            // 交通事件检测行人
    MBL_ALARM_TRAFFIC_ACTION_CONVERSE_RUN                    = 50003,            // 交通事件检测逆行
    MBL_ALARM_TRAFFIC_ACTION_JAM                            = 50004,            // 交通事件检测拥堵
    MBL_ALARM_TRAFFIC_ACTION_OMISSION                        = 50005,            // 交通事件检测遗落物
    MBL_ALARM_TRAFFIC_ACTION_FOG                            = 50006,            // 交通事件检测烟雾
    MBL_ALARM_TRAFFIC_ACTION_BLAZE                             = 50007,            // 交通事件检测火焰
    MBL_ALARM_TRAFFIC_ACTION_SPEED                            = 50008,            // 交通事件检测超速
    MBL_ALARM_TRAFFIC_ACTION_LOWSPEED                        = 50009,            // 交通事件检测低速
    MBL_ALARM_TRAFFIC_ACTION_ONLINE                            = 50010,            // 交通事件检测压线
    MBL_ALARM_TRAFFIC_ACTION_SUDDEN_DECELE_RATION            = 50011,            // 交通事件检测突然减速
    MBL_ALARM_TRAFFIC_ACTION_PASSERBY                        = 50012,            // 交通事件检测行人穿越
    MBL_ALARM_TRAFFIC_ACTION_BACK                            = 50013,            // 交通事件检测倒车
    MBL_ALARM_TRAFFIC_ACTION_RUN_FORBIDDEN_AREA                = 50014,            // 交通事件检测禁行区行驶
    MBL_ALARM_TRAFFIC_ACTION_TRAIL_ANOMALY                    = 50015,            // 交通事件检测轨迹异常
    MBL_ALARM_TRAFFIC_ACTION_END                            = 59999,
    MBL_ALARM_VEHICLE_IMPORT_SITE                            = 600000,            // 车载进站报警
    MBL_ALARM_VEHICLE_EXPORT_SITE                            = 600001,            // 车载离站报警
    MBL_ALARM_VEHICLE_CIRCUIT_SHIFT                            = 600002,            // 车载路线偏移报警
    MBL_ALARM_VEHICLE_ROUTE_OVERTIME                        = 600003,            // 车载路线超时报警
    MBL_ALARM_BULLDOZE_FORCE                                = 600004,            // 强拆报警
    MBL_ALARM_VAILID_FACE_OPEN                                = 600005,            // 合法人脸开门报警
    MBL_ALARM_INVAILID_FACE_OPEN                            = 600006,            // 非法人脸开门报警
    MBL_ALARM_CARD_AND_FACE_TIMEOUT                            = 600011,            // 卡和人脸超时报警
    MBL_ALARM_CARD_AND_FACE_ERROR                            = 600012,            // 卡和人脸错误报警
    MBL_ALARM_CARD_AND_FACE_OPEN                            = 600013,            // 卡和人脸正确开门报警
    
    MBL_ALARM_DOOR_FINGERPRINT_AND_PWD_OPENDOOR                = 700000,            // 指纹+密码开锁
    MBL_ALARM_DOOR_FINGERPRINT_AND_FACE_OPENDOOR            = 700001,            // 指纹+人脸开锁
    MBL_ALARM_DOOR_FACE_AND_PWD_OPENDOOR                    = 700002,            // 人脸+密码开锁
    MBL_ALARM_DOOR_CARD_AND_FINGERPRINT_AND_PWD_OPENDOOR    = 700003,            // 刷卡+指纹+密码开锁
    MBL_ALARM_DOOR_CARD_AND_FINGERPRINT_AND_FACE_OPENDOOR    = 700004,            // 刷卡+指纹+人脸开锁
    MBL_ALARM_DOOR_FINGERPRINT_AND_FACE_AND_PWD_OPENDOOR    = 700005,            // 指纹+人脸+密码
    MBL_ALARM_DOOR_CARD_AND_FACE_AND_PWD_OPENDOOR            = 700006,            // 刷卡+人脸+密码开锁
    MBL_ALARM_DOOR_CARD_AND_FINGERPRINT_AND_FACE_AND_PWD_OPENDOOR            = 700007,            // 卡+指纹+人脸+密码开锁
    //---预留到701000

    MBL_ALARM_TYPE_FACE_RECOGNITION_BEGIN = 100000,
    MBL_ALARM_TYPE_FACE_RECOGNITION_END = 199999,
    
};
