//
//  LCOpenSDK_OSDInfo.h
//  LCOpenSDK
//
//  Created by jacky.xu on 2022/9/9.
//  Copyright © 2022 Dahua. All rights reserved.
//

#ifndef LCOpenSDK_OSDInfo_h
#define LCOpenSDK_OSDInfo_h
/**
 *  定义OSD接收的结构体
 */
@interface LCOpenSDK_OsdData : NSObject
@property (nonatomic, assign)       NSInteger       x;                // 旋转点像素x位置
@property (nonatomic, assign)       NSInteger       y;                // 旋转点像素y位置
@property (nonatomic, assign)       NSInteger       r;                // osd叠加颜色r，范围0-255
@property (nonatomic, assign)       NSInteger       g;                // osd叠加颜色g，范围0-255
@property (nonatomic, assign)       NSInteger       b;                // osd叠加颜色b，范围0-255
@property (nonatomic, assign)       NSInteger       alpha;            // osd叠加透明度，范围0-255
@property (nonatomic, copy) 		NSString        *szOsdData;       // osd数据，使用utf-8编码
@property (nonatomic, assign)       NSInteger       fontX;            // 字体宽度, 使用私有字体时无效
@property (nonatomic, assign)       NSInteger       fontY;            // 字体高度, 最大512
@property (nonatomic, assign)       NSInteger       rotateAngle;      // 旋转角度，范围0-359度
@property (nonatomic, copy) 		NSString        *reserved;        // 保留字段
@end

@interface LCOpenSDK_OsdInfo : NSObject
@property (nonatomic, assign)       NSInteger       bPrivateFont;     // 是否是私有字体
@property (nonatomic, copy) 		NSString        *fontPath;        // 字体文件位置
@property (nonatomic, assign)       NSInteger       osdCount;         // OSD叠加数量，最多32个
@property (nonatomic, strong)       NSMutableArray<LCOpenSDK_OsdData*> *osdList;// OSD列表
@property (nonatomic, copy) 		NSString        *reserved;        // 保留字段
@end



#endif /* LCOpenSDK_OSDInfo_h */
