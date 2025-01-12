//
//  DMSPtzGetPresetPointsResponseObjc.h
//  ICCDataAdapterDevice
//
//  Created by m1+226507 on 2023/2/3.
//

#import <Foundation/Foundation.h>

@class PresetPointsElement;

@interface DMSPtzGetPresetPointsResponseObjc : NSObject

@property (nonatomic, nullable, strong) NSArray<PresetPointsElement *> *presetPoints;

/// 视频通道编码
@property (nonatomic, nullable, copy) NSString *channelId;

@end

@interface PresetPointsElement : NSObject

/// 预置点编码
@property (nonatomic, nullable, copy) NSString *presetPointCode;
/// 预置点名称
@property (nonatomic, nullable, copy) NSString *presetPointName;

@end
