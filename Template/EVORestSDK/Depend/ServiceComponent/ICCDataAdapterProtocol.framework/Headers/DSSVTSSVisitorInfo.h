//
//  DSSVTSSVisitorInfo.h
//  DataAdapterProtocol
//
//  Created by Li_JinLin on 2019/12/28.
//

#import <Foundation/Foundation.h>
#import "DSSVTSSVisitorAuthInfo.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, DSSVisitorStatus) {
    DSSVisitorStatus_Unknown = -1,
    DSSVisitorStatus_Appointment = 0, //预约
    DSSVisitorStatus_Come = 1, //在访
    DSSSVisitorStatus_Leave = 2, //离访
    DSSVisitorStatus_Disappointment = 3, //取消预约
};

typedef NS_ENUM(NSInteger, DSSVisitorIdType) {
    DSSVisitorIdType_Unknown = -1,
    DSSVisitorIdType_identity = 0, //身份证
    DSSVisitorIdType_officer = 1, //军官证
    DSSVisitorIdType_Student = 2, //学生证
    DSSVisitorIdType_Plate = 3, //驾驶证
    DSSVisitorIdType_Passport = 4, //护照
    DSSVisitorIdType_TFN = 5, //税号
    DSSVisitorIdType_Others = 6, //其他
};

@interface DSSVTSSVisitorInfo : NSObject

/** 访客姓名 */
@property(nonatomic, copy, nullable) NSString * visitorName;
/** 访客id */
@property(nonatomic, copy, nullable) NSString * visitorId;
/** 人员id */
@property(nonatomic, copy, nullable) NSString * personId;
/** 车牌号 */
@property(nonatomic, copy, nullable) NSString * plateNo;
/** 证件号码 */
@property(nonatomic, copy, nullable) NSString * idNum;
/** 访客状态，0=预约，1=在访，2=离访，3=取消预约 */
@property(nonatomic, assign) DSSVisitorStatus status;
/** 被访者姓名 */
@property(nonatomic, copy, nullable) NSString * visitedName;
/** 访客单位 */
@property(nonatomic, copy, nullable) NSString * visitorOrgName;
/** 出入口设备的设备 */
@property(nonatomic, strong, nullable) NSMutableArray<NSString *> *entranceDeviceCodes;
/** VTO设备的门禁通道 */
@property(nonatomic, strong, nullable) NSMutableArray<NSString *> *vtoChannelIds;
/** 门禁设备的门禁通道 */
@property(nonatomic, strong, nullable) NSMutableArray<NSString *> *acsChannelIds;
/** 联系电话 */
@property(nonatomic, copy, nullable) NSString * tel;
/** 邮箱地址 */
@property(nonatomic, copy, nullable) NSString * email;
/** 被访者单位 */
@property(nonatomic, copy, nullable) NSString * visitedOrgName;
/** 来访原因 */
@property(nonatomic, copy, nullable) NSString * reason;
/** 备注 */
@property(nonatomic, copy, nullable) NSString * remark;
/** 授权详情 */
@property (nonatomic, strong, nullable) DSSVTSSVisitorAuthInfo * authInfo;
/** 实际离访时间，时间戳，单位：秒 */
@property(nonatomic, assign) NSInteger leaveTime;
/** 实际来访时间，时间戳，单位：秒 */
@property(nonatomic, assign) NSInteger arrivalTime;
/** 证件类型，0=身份证，1=军官证，2=学生证，3=驾驶证，4=护照，5=税号，6=其他 */
@property(nonatomic, assign) DSSVisitorIdType idType;
/** 预约来访时间，时间戳，单位：秒 */
@property(nonatomic, assign) NSInteger expectArrivalTime;
/** 预约离访时间，时间戳，单位：秒 */
@property(nonatomic, assign) NSInteger expectLeaveTime;
/** 创建时间，时间戳，单位：秒 */
@property(nonatomic, assign) NSInteger createTime;


@end

NS_ASSUME_NONNULL_END
