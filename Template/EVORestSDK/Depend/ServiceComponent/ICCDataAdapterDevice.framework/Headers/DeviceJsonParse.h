//
//  DeviceJsonParse.h
//  Pods
//
//  Created by huang_yundi on 2017/7/19.
//
//

#import <Foundation/Foundation.h>
//#import "DSSDeviceInfo.h"
//#import "DSSChannelInfo.h"
//#import "EVO.BRM.EVOBRMGetDevices.h"
//

#import <ICCDataAdapterProtocol/ICCDataAdapterProtocol-umbrella.h>
@class EVOBRMGetDevicesResponseObjc;

typedef NS_ENUM(NSUInteger, Chnl_Type_e)
{
    CHNL_TYPE_ENC_BEGIN,											// 编码通道
    CHNL_TYPE_STREAM						= 1,					// 视频
    CHNL_TYPE_PIC,													// 图片
    CHNL_TYPE_MIX,													// 双码流
    CHNL_TYPE_REMOTE,												// 远程通道
    CHNL_TYPE_ENC_END						= 10,
    
    CHNL_TYPE_DEC_BEGIN,											// 解码通道
    CHNL_TYPE_DEC,
    CHNL_TYPE_DEC_END						= 20,
    
    CHNL_TYPE_ALARMIN_BEGIN,										// 报警输入通道
    CHNL_TYPE_ALARMIN,
    CHNL_TYPE_ALARMIN_END					= 30,
    
    CHNL_TYPE_ALARMOUT_BEGIN,										// 报警输出通道
    CHNL_TYPE_ALARMOUT,
    CHNL_TYPE_ALARMOUT_END					= 40,
    
    CHNL_TYPE_LED_BEGIN,											// LED通道
    CHNL_TYPE_LED,
    CHNL_TYPE_LED_END						= 50,
    
    CHNL_TYPE_POS_BEGIN,
    CHNL_TYPE_POS           = 59,
    CHNL_TYPE_POS_END		= 60,	         //POS通道
    
    //动环NVS
    CHNL_TYPE_PE_POWER_INTERRUPT			= 1700,					// 市电中断报警
    CHNL_TYPE_PE_POWER_ENABLED				= 1701,					// 市电启用报警
    CHNL_TYPE_PE_INFRARED_DETECT			= 1702,					// 红外探测报警
    CHNL_TYPE_PE_GAS_OVER_SECTION			= 1703,					// 燃气浓度
    CHNL_TYPE_PE_FLOW_OVER_SECTION			= 1704,					// 瞬时流量
    CHNL_TYPE_PE_TEMPERATURE_SECTION		= 1705,					// 管道温度超过阀值
    CHNL_TYPE_PE_PRESSURE_SECTION			= 1706,					// 管道压力超过阀值
    
    //动环通道//开关量，不可控
    CHNL_TYPE_PE_SWITCH_START				=1800,
    CHNL_TYPE_PE_INFRARED,											// 红外对射告警
    CHNL_TYPE_PE_SMOKE,												// 烟感告警
    CHNL_TYPE_PE_WATER,												// 水浸告警
    CHNL_TYPE_PE_COMPRESSOR,										// 压缩机故障告警
    CHNL_TYPE_PE_OVERLOAD,											// 过载告警
    CHNL_TYPE_PE_BUS_ANOMALY,										// 母线异常
    CHNL_TYPE_PE_LIFE,												// 寿命告警
    CHNL_TYPE_PE_SOUND,												// 声音告警
    CHNL_TYPE_PE_TIME,												// 时钟告警
    CHNL_TYPE_PE_FLOW_LOSS,											// 气流丢失告警
    CHNL_TYPE_PE_FUSING,											// 熔断告警
    CHNL_TYPE_PE_BROWN_OUT,											// 掉电告警
    CHNL_TYPE_PE_LEAKING,											// 漏水告警
    CHNL_TYPE_PE_JAM_UP,											// 堵塞告警
    CHNL_TYPE_PE_TIME_OUT,											// 超时告警
    CHNL_TYPE_PE_REVERSE_ORDER,										// 反序告警
    CHNL_TYPE_PE_NETWROK_FAILURE,									// 组网失败告警
    CHNL_TYPE_PE_UNIT_CODE_LOSE,									// 机组码丢失告警
    CHNL_TYPE_PE_UNIT_CODE_DISMATCH,								// 机组码不匹配告警
    CHNL_TYPE_PE_FAULT,												// 故障告警
    CHNL_TYPE_PE_UNKNOWN,											// 未知告警
    CHNL_TYPE_PE_CUSTOM,											// 自定义告警
    CHNL_TYPE_PE_NOPERMISSION,										// 无权限告警
    CHNL_TYPE_PE_INFRARED_DOUBLE,									// 红外双鉴告警
    CHNL_TYPE_PE_ELECTRONIC_FENCE,									// 电子围栏告警
    CHNL_TYPE_PE_UPS_MAINS,											// 市电正常市电异常
    CHNL_TYPE_PE_UPS_BATTERY,										// 电池正常电池异常
    CHNL_TYPE_PE_UPS_POWER_SUPPLY,									// UPS正常输出旁路供电
    CHNL_TYPE_PE_UPS_RUN_STATE,										// UPS正常UPS故障
    CHNL_TYPE_PE_UPS_LINE_STYLE,									// UPS类型为在线式UPS类型为后备式
    CHNL_TYPE_PE_XC,												// 小车
    CHNL_TYPE_PE_DRQ,												// 断路器
    CHNL_TYPE_PE_GLDZ,												// 隔离刀闸
    CHNL_TYPE_PE_JDDZ,												// 接地刀闸
    CHNL_TYPE_PE_IN_END,
    
    //动环通道//开关量，可控
    CHNL_TYPE_PE_DOOR_SWITCH				=1850,					// 门禁控制器开关告警
    CHNL_TYPE_PE_UPS_SWITCH,										// UPS开关告警,
    CHNL_TYPE_PE_DBCB_SWITCH,										// 配电柜开关告警
    CHNL_TYPE_PE_ACDT_SWITCH,										// 空调开关告警
    CHNL_TYPE_PE_DTPW_SWITCH,										// 直流电源开关告警
    CHNL_TYPE_PE_LIGHT_SWITCH,										// 灯光控制器开关告警
    CHNL_TYPE_PE_FAN_SWITCH,										// 风扇控制器开关告警
    CHNL_TYPE_PE_PUMP_SWITCH,										// 水泵开关告警
    CHNL_TYPE_PE_BREAKER_SWITCH,									// 刀闸开关告警
    CHNL_TYPE_PE_RELAY_SWITCH,										// 继电器开关告警
    CHNL_TYPE_PE_METER_SWITCH,										// 电表开关告警
    CHNL_TYPE_PE_TRANSFORMER_SWITCH,								// 变压器开关告警
    CHNL_TYPE_PE_SENSOR_SWITCH,										// 传感器开关告警
    CHNL_TYPE_PE_RECTIFIER_SWITCH,									// 整流器告警
    CHNL_TYPE_PE_INVERTER_SWITCH,									// 逆变器告警
    CHNL_TYPE_PE_PRESSURE_SWITCH,									// 压力开关告警
    CHNL_TYPE_PE_SHUTDOWN_SWITCH,									// 关机告警
    CHNL_TYPE_PE_WHISTLE_SWITCH,									// 警笛告警
    CHNL_TYPE_PE_SWITCH_END,
    
    //动环通道//模拟量
    CHNL_TYPE_PE_ANALOG_START				=1880,
    CHNL_TYPE_PE_TEMPERATURE,										// 温度告警
    CHNL_TYPE_PE_HUMIDITY,											// 湿度告警
    CHNL_TYPE_PE_CONCENTRATION,										// 浓度告警
    CHNL_TYPE_PE_WIND,												// 风速告警
    CHNL_TYPE_PE_VOLUME,											// 容量告警
    CHNL_TYPE_PE_VOLTAGE,											// 电压告警
    CHNL_TYPE_PE_ELECTRICITY,										// 电流告警
    CHNL_TYPE_PE_CAPACITANCE,										// 电容告警
    CHNL_TYPE_PE_RESISTANCE,										// 电阻告警
    CHNL_TYPE_PE_CONDUCTANCE,										// 电导告警
    CHNL_TYPE_PE_INDUCTANCE,										// 电感告警
    CHNL_TYPE_PE_CHARGE,											// 电荷量告警
    CHNL_TYPE_PE_FREQUENCY,											// 频率告警
    CHNL_TYPE_PE_LIGHT_INTENSITY,									// 发光强度告警(坎)
    CHNL_TYPE_PE_PRESS,												// 力告警（如牛顿，千克力）
    CHNL_TYPE_PE_PRESSURE,											// 压强告警（帕，大气压）
    CHNL_TYPE_PE_HEAT_TRANSFER,										// 导热告警（瓦每平米）
    CHNL_TYPE_PE_THERMAL_CONDUCTIVITY,								// 热导告警（kcal/(m*h*℃)）
    CHNL_TYPE_PE_VOLUME_HEAT,										// 比容热告（kcal/(kg*℃)）
    CHNL_TYPE_PE_HOT_WORK,											// 热功告警（焦耳）
    CHNL_TYPE_PE_POWER,												// 功率告警（瓦）
    CHNL_TYPE_PE_PERMEABILITY,										// 渗透率告警（达西）
    CHNL_TYPE_PE_PROPERTION,										// 比例（包括电压电流变比，功率因素，负载单位为%）
    CHNL_TYPE_PE_ENERGY,											// 电能（单位为J）
    CHNL_TYPE_PE_TIME_EX,											// 时间(文档中定义枚举时重名了，后缀加EX区分)
    CHNL_TYPE_PE_ANALOG_END,
    //动环通道=end
    
    CHNL_TYPE_AE_BEGIN						= 2000,
    CHNL_TYPE_AE_DOOR_MAGNETISM				= 2200,
    CHNL_TYPE_AE_PASSIVE_INFRARED			= 2201,					// 被动红外
    CHNL_TYPE_AE_GAS						= 2202,					// 气感
    CHNL_TYPE_AE_INITIATIVE_INFRARED		= 2203,					// 主动红外
    CHNL_TYPE_AE_GLASS_CRASH				= 2204,					// 玻璃破碎
    CHNL_TYPE_AE_EXIGENCY_SWITCH			= 2205,					// 紧急开关
    CHNL_TYPE_AE_SHAKE						= 2206,					// 震动
    CHNL_TYPE_AE_BOTH_JUDGE					= 2207,					// 双鉴（红外+微波）
    CHNL_TYPE_AE_THREE_TECHNIC				= 2208,					// 三技术
    CHNL_TYPE_AE_CALL_BUTTON				= 2209,					// 呼叫按钮
    CHNL_TYPE_AE_SENSE_OTHER				= 2210,					// 其他
    CHNL_TYPE_AE_END						= 2300,
    
    CHNL_TYPE_PE							= 2500,					// 动环通道类型
};

@interface DeviceJsonParse : NSObject

@property (copy, nonatomic) BOOL(^finishParseDevice)(NSArray<DSSDeviceInfo*>* arrayData);

@property (copy, nonatomic) BOOL(^finishParseChannel)(NSArray<DSSChannelInfo*>* arrayData);

//- (BOOL)parseData:(EVOBRMGetDevicesResponse *)pResponse;
- (BOOL)parseData:(EVOBRMGetDevicesResponseObjc *)pResponse;
- (BOOL)parseMQData:(NSDictionary*)dicInfo;

+ (MBL_DEVICE_TYPE)convertCateGory:(NSInteger)nCateGory devType:(NSInteger)nDevType;

@end

@interface ChnlCombination : NSObject

@property (copy,    nonatomic) NSString*    deviceID;
@property (assign,  nonatomic) NSInteger    unitType;
@property (assign,  nonatomic) NSInteger    unitIndex;
@property (assign,  nonatomic) NSInteger    channelIndex;

- (BOOL)parseChnlID:(NSString*)channelID;

@end
