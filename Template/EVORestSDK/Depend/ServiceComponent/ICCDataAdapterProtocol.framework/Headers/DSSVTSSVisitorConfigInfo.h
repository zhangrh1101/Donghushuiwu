//
//  DSSVTSSVisitorConfigInfo.h
//  DataAdapterProtocol
//
//  Created by 32943 on 2020/4/16.
//

#import <Foundation/Foundation.h>


@interface DSSVTSSVisitorConfigInfo : NSObject
/** 是否启用自动来访，1=是，0=否 */
@property (nonatomic, assign) BOOL  enableAutoVisit;
/** 自动来访登记方式，多种方式逗号连接，1=车牌，2=二维码 */
@property (nonatomic, strong, nullable) NSMutableArray<NSString *> * autoVisitMode;

/** 是否启用自动离访，1=是，0=否 */
@property (nonatomic, assign) BOOL  enableAutoLeave;
/** 自动离访登记方式，1=车牌 */
@property (nonatomic, copy, nullable) NSString * autoLeaveMode;
/** 是否启用定期签离已过期访客，1=是，0=否 */
@property (nonatomic, assign) BOOL  enableRegularClear;
/** 每日签离时间，0-23 */
@property (nonatomic, assign) NSInteger regularClearTime;

/** 是否启用访客默认权限，1=是，0=否 */
@property (nonatomic, assign) BOOL enableDefaultRight;
/** 门禁设备的门禁通道 */
@property (nonatomic, strong, nullable) NSMutableArray<NSString *> *acsChannelIds;
/** 出入口设备 */
@property (nonatomic, strong, nullable) NSMutableArray<NSString *> *entranceDeviceCodes;
/** VTO设备的门禁通道 */
@property (nonatomic, strong, nullable) NSMutableArray<NSString *> *vtoChannelIds;

@end

