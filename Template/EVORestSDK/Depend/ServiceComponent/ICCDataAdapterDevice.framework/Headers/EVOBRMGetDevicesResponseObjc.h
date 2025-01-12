//
//  EVOBRMGetDevicesResponseObjc.h
//  ICCDataAdapterDevice
//
//  Created by m1+226507 on 2023/2/2.
//

#import <Foundation/Foundation.h>

@class EVOBRMGetDevicesResponseDataDeviceObjc;
@class EVOBRMGetDevicesResponseDataDeviceDevextObjc;
@class EVOBRMGetDevicesResponseDataDeviceUnitObjc;
@class EVOBRMGetDevicesResponseDataDeviceUnitUnitextObjc;
@class EVOBRMGetDevicesResponseDataDeviceUnitChannelObjc;
@class EVOBRMGetDevicesResponseDataDeviceUnitChannelChextObjc;

@interface EVOBRMGetDevicesResponseObjc : NSObject

@property (nonatomic, nullable, strong) NSArray<EVOBRMGetDevicesResponseDataDeviceObjc *> *devices;

@end

@interface EVOBRMGetDevicesResponseDataDeviceObjc : NSObject

/// 设备编码
@property (nonatomic, nullable, copy) NSString *deviceCode;
/// 设备名称
@property (nonatomic, nullable, copy) NSString *deviceName;
/// 设备序列号
@property (nonatomic, nullable, copy) NSString *deviceSn;
/// 设备大类
@property (nonatomic, assign) NSInteger deviceCategory;
/// 设备类型，小类
@property (nonatomic, assign) NSInteger deviceType;
/// 厂商
@property (nonatomic, nullable, copy) NSString *deviceManufacturer;
/// 设备型号
@property (nonatomic, nullable, copy) NSString *deviceModel;
/// ['设备在其他子系统中所属设备大小类定义']
@property (nonatomic, nullable, strong) NSArray<NSString *> *otherType;
/// 设备IP
@property (nonatomic, nullable, copy) NSString *deviceIp;
/// 设备端口
@property (nonatomic, assign) NSInteger devicePort;
/// 组织编码
@property (nonatomic, nullable, copy) NSString *ownerCode;
/// 登录类型
@property (nonatomic, nullable, copy) NSString *loginType;
/// 用户名
@property (nonatomic, nullable, copy) NSString *loginName;
/// 密码
@property (nonatomic, nullable, copy) NSString *loginPassword;
/// 设备状态，0离线1在线
@property (nonatomic, assign) NSInteger isOnline;
/// 主动注册服务ID
@property (nonatomic, nullable, copy) NSString *registServiceId;
/// 主动注册代理端口
@property (nonatomic, assign) NSInteger registProxyPort;
/// 主动注册设备编码
@property (nonatomic, nullable, copy) NSString *registDeviceCode;
/// 设备添加描述
@property (nonatomic, nullable, copy) NSString *memo;
/// 光栅图
@property (nonatomic, assign) NSInteger mapId;
/// 经度
@property (nonatomic, nullable, copy) NSString *gpsX;
/// 纬度
@property (nonatomic, nullable, copy) NSString *gpsY;
/// 设备所属子系统
@property (nonatomic, nullable, copy) NSString *subSystem;
@property (nonatomic, assign) CGFloat treeSort;
@property (nonatomic, nullable, strong) EVOBRMGetDevicesResponseDataDeviceDevextObjc *devExt;
@property (nonatomic, nullable, strong) NSArray<EVOBRMGetDevicesResponseDataDeviceUnitObjc *> *units;

@end

@interface EVOBRMGetDevicesResponseDataDeviceDevextObjc : NSObject

/// 域ID
@property (nonatomic, nullable, copy) NSString *domainId;
/// 代理IP，主动注册时为ARS服务IP，海康、ONVIF、GB28181设备时为PCPS服务IP
@property (nonatomic, nullable, copy) NSString *proxyIp;
/// 代理端口
@property (nonatomic, nullable, copy) NSString *proxyPort;
/// 协议
@property (nonatomic, nullable, copy) NSString *theProtocol;
/// SIP号码
@property (nonatomic, nullable, copy) NSString *callNumber;
/// sip id
@property (nonatomic, nullable, copy) NSString *sipId;
/// SIP密码
@property (nonatomic, nullable, copy) NSString *sipPwd;
/// 室内机关联二次确认机SIPID
@property (nonatomic, nullable, strong) NSArray<NSString *> *vthRelatedConfirmVTOSipId;
/// 对讲设备单元使能
@property (nonatomic, nullable, copy) NSString *unitEnable;
/// 对讲设备幢使能
@property (nonatomic, nullable, copy) NSString *buildingEnable;
/// 对讲设备期使能
@property (nonatomic, nullable, copy) NSString *phaseEnable;
/// 软件版本
@property (nonatomic, nullable, copy) NSString *softwareVersion;
/// 硬件版本
@property (nonatomic, nullable, copy) NSString *hardwareVersion;

@end

@interface EVOBRMGetDevicesResponseDataDeviceUnitObjc : NSObject
/// 单元类型
@property (nonatomic, assign) NSInteger unitType;
/// 单元序号
@property (nonatomic, assign) NSInteger unitSeq;
/// 排序码
@property (nonatomic, assign) NSInteger sort;
/// 单元描述
@property (nonatomic, nullable, copy) NSString *memo;
/// 能力集
@property (nonatomic, nullable, copy) NSString *capability;
@property (nonatomic, nullable, strong) EVOBRMGetDevicesResponseDataDeviceUnitUnitextObjc *unitExt;
@property (nonatomic, nullable, strong) NSArray<EVOBRMGetDevicesResponseDataDeviceUnitChannelObjc *> *channels;

@end

@interface EVOBRMGetDevicesResponseDataDeviceUnitUnitextObjc : NSObject

/// 辅码流
@property (nonatomic, assign) NSInteger assistStream;
/// 零通道编码
@property (nonatomic, assign) NSInteger zeroChnEncode;
/// 存储服务ID
@property (nonatomic, nullable, copy) NSString *ssServiceId;
/// PTS服务ID
@property (nonatomic, nullable, copy) NSString *ptsServiceId;
/// 码流类型
@property (nonatomic, nullable, copy) NSString *streamType;
/// 解码模式
@property (nonatomic, nullable, copy) NSString *mode;
/// 流处理模式
@property (nonatomic, nullable, copy) NSString *streamMode;
/// 电视墙融合状态：false=不支持融合，true=支持融合
@property (nonatomic, assign) BOOL conbinable;
/// 第三方控制
@property (nonatomic, nullable, copy) NSString *thirdPartyControl;
/// 语音服务地址
@property (nonatomic, nullable, copy) NSString *voiceServerIp;
/// 语音服务端口
@property (nonatomic, nullable, copy) NSString *voiceServerPort;
/// 语音状态端口
@property (nonatomic, nullable, copy) NSString *voiceStatusPort;
/// 语音客户端地址
@property (nonatomic, nullable, copy) NSString *voiceClientIp;
/// 动环资源编码
@property (nonatomic, nullable, copy) NSString *dynCode;
/// 动环资源名称
@property (nonatomic, nullable, copy) NSString *dynName;
/// 动环资源类型
@property (nonatomic, nullable, copy) NSString *dynType;
/// 是否支持指纹鉴权:0-未知，兼容以前默认；1-不支持；2-支持
@property (nonatomic, nullable, copy) NSString *fingerPrintAuth;
/// 是否支持卡片鉴权:1-是0-否
@property (nonatomic, nullable, copy) NSString *cardAuth;
///
@property (nonatomic, nullable, copy) NSString *faceAuth;
/// 
@property (nonatomic, nullable, copy) NSString *userIsolate;
/// 设备支持的开锁模式组合，多个用逗号分隔,如0,1,2,3
@property (nonatomic, nullable, copy) NSString *unlockModes;

@end

@interface EVOBRMGetDevicesResponseDataDeviceUnitChannelObjc : NSObject

/// 通道编码
@property (nonatomic, nullable, copy) NSString *channelCode;
/// 通道序号，从0开始
@property (nonatomic, assign) NSInteger channelSeq;
/// 通道名称
@property (nonatomic, nullable, copy) NSString *channelName;
/// 通道SN
@property (nonatomic, nullable, copy) NSString *channelSn;
/// 通道类型
@property (nonatomic, nullable, copy) NSString *channelType;
/// 摄像头类型
@property (nonatomic, nullable, copy) NSString *cameraType;
/// 通道能力集
@property (nonatomic, nullable, copy) NSString *capability;
/// 通道状态，0离线1在线
@property (nonatomic, assign) NSInteger isOnline;
@property (nonatomic, nullable, copy) NSString *gpsX;
@property (nonatomic, nullable, copy) NSString *gpsY;
@property (nonatomic, nullable, copy) NSString *gpsZ;
/// 三维经度
@property (nonatomic, nullable, copy) NSString *gpsX3d;
/// 三维纬度
@property (nonatomic, nullable, copy) NSString *gpsY3d;
/// 三维Z轴
@property (nonatomic, nullable, copy) NSString *gpsZ3d;
/// 通道描述
@property (nonatomic, nullable, copy) NSString *memo;
/// 状态0不启用1启用
@property (nonatomic, assign) NSInteger stat;
/// 域ID
@property (nonatomic, nullable, copy) NSString *domainId;
/// 光栅图ID
@property (nonatomic, nullable, copy) NSString *mapId;

@property (nonatomic, assign) CGFloat treeSort;

@end

@interface EVOBRMGetDevicesResponseDataDeviceUnitChannelChextObjc : NSObject

/// 键盘码
@property (nonatomic, nullable, copy) NSString *keyCode;
/// 地标码
@property (nonatomic, nullable, copy) NSString *db33Code;
/// 远程类型
@property (nonatomic, nullable, copy) NSString *channelRemoteType;
/// 通道功能集
@property (nonatomic, nullable, copy) NSString *cameraFunctions;
/// 人脸功能集，0=不支持，1=抓拍，2=识别
@property (nonatomic, nullable, copy) NSString *faceFunctions;
/// 多播端口
@property (nonatomic, nullable, copy) NSString *multicastIp;
/// IPC(IP)
@property (nonatomic, nullable, copy) NSString *ipcIp;
/// 录像类型
@property (nonatomic, nullable, copy) NSString *recordType;
/// 是否用于客流统计
@property (nonatomic, nullable, copy) NSString *forPeopleCount;
/// 电视墙最大分割数
@property (nonatomic, nullable, copy) NSString *maxSplitNum;
/// 接口类型
@property (nonatomic, nullable, copy) NSString *interfaceType;
/// 报警类型
@property (nonatomic, nullable, copy) NSString *alarmType;
/// 报警等级
@property (nonatomic, nullable, copy) NSString *alarmLevel;
/// 信号类型
@property (nonatomic, nullable, copy) NSString *signalType;
/// 门禁类型
@property (nonatomic, nullable, copy) NSString *accessType;
/// 信号类型
@property (nonatomic, nullable, copy) NSString *posType;
/// 门禁类型
@property (nonatomic, nullable, copy) NSString *posModel;
/// 动环资源
@property (nonatomic, nullable, copy) NSString *dynCode;
/// 智能状态
@property (nonatomic, nullable, copy) NSString *intelliState;
/// 视频源，提供给虚拟通道使用
@property (nonatomic, nullable, copy) NSString *videoSource;
/// 是否支持目标检测，默认空，空和0不支持，1支持
@property (nonatomic, nullable, copy) NSString *targetDetection;

@end
