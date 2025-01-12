//
//  DSSVTSSVisitorAuthInfo.h
//  DataAdapterProtocol
//
//  Created by Li_JinLin on 2019/12/30.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DSSVTSSVisitorAuthInfo : NSObject

/** 卡号 */
@property(nonatomic, copy, nullable) NSString * cardNo;
/** 人脸图片(BASE64) */
@property(nonatomic, copy, nullable) NSArray<NSString *> *facePicture;
/** 单元 */
@property(nonatomic, copy, nullable) NSString * unitId;
/** 二维码数据 */
@property(nonatomic, copy, nullable) NSString * qrcode;

@property(nonatomic, copy, nullable) NSString * passportCardNo;
/** 幢 */
@property(nonatomic, copy, nullable) NSString * buildingId;
/** 房间 */
@property(nonatomic, copy, nullable) NSString * roomId;
/** 期 */
@property(nonatomic, copy, nullable) NSString * stageId;

@end

NS_ASSUME_NONNULL_END
