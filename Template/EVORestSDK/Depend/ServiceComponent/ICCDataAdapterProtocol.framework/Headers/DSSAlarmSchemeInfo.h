//
//  AlarmSchemeInfo.h
//  Pods
//
//  Created by zyx on 17/3/2.
//
//

#import <Foundation/Foundation.h>
#import "DSSBaseInfo.h"

#define ALARMSCHEME_DBID_KEY                  @"alarm_scheme_dbid_key"
#define ALARMSCHEME_ALARMTIME_DIVIDE_KEY      @"alarm_scheme_alarmtime_divide_key"
#define ALARMSCHEME_ALARM_DELFAULT_LEVEL_KEY  @"alarm_scheme_alarm_default_level_key"
#define ALARMSCHEME_TIME_TEMPLATE_ID_KEY      @"alarm_scheme_time_template_id_key"

//Alarm--AlarmLink--AlarmLinkVideoInfo
@interface DSSAlarmLinkVideoInfo : DSSBaseInfo

@property (nonatomic, assign) long       ruleID;
@property (nonatomic, copy) NSString  *channelID;       //通道id
@property (nonatomic, copy) NSString  *videoDeviceName; //通道名称
@property (nonatomic, assign) int        nPrePoint;       //预置点
@property (nonatomic, assign) int        iStayTime;       //停留时间

@end
//Alarm-AlarmLink--AlarmLinkActionInfo

@interface DSSAlarmLinkActionInfo : DSSBaseInfo


@end


//Alarm--AlarmEnable
@interface DSSAlarmSourceRuleInfo : DSSBaseInfo
@property (nonatomic, assign) long       ruleID;
@property (nonatomic, assign) int        alarm_type;
@property (nonatomic, copy) NSString     *alarm_type_name;
@property (nonatomic, copy) NSString     *alarm_source_deviceid;//设备id，如果channelId为空，则是设备报警
//@property (nonatomic, copy) NSString     *alarm_source_channelid;//通道id
@property(nonatomic,strong)NSMutableArray<NSNumber*>* arrayInput; //报警输入通道号
@property(nonatomic,strong)NSMutableArray<NSNumber*>* arrayChannel;
@property (nonatomic, strong)NSMutableArray<DSSAlarmLinkVideoInfo*>* arrayAlarmLinkVideo; //报警联动信息

@end

//Alarm--AlarmTimePeriod
@interface DSSAlarmTimePeriod : DSSBaseInfo

@property(nonatomic,assign) int iBeginHour;
@property(nonatomic,assign) int iBeginMin;
@property(nonatomic,assign) int iBeginSec;
@property(nonatomic,assign) int iEndHour;
@property(nonatomic,assign) int iEndMin;
@property(nonatomic,assign) int iEndSec;
@property(nonatomic,assign) int iLevel;

@end

@interface DSSAlarmSchemeInfo : DSSBaseInfo
@property (nonatomic, copy)   NSString   *name;
@property (nonatomic, assign) int         schemeid;//dss中schemeid只是xml中的一个字段而已；但是实际需要和cms交互需要dbid

@property (nonatomic, assign) BOOL        isStatusOn;
@property (nonatomic, copy)   NSString   *desc;

@property (nonatomic, strong) NSMutableArray<DSSAlarmTimePeriod*>* arrayTimePeriod;
@property (nonatomic, strong) NSMutableArray<DSSAlarmSourceRuleInfo*>* arrAlarmSourceRuleInfo;//报警预案报警源及对应规则

@end
