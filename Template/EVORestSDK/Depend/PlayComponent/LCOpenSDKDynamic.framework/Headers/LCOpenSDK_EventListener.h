//
//  LCOpenSDK_EventListener.h
//
//  Created by baozhiyong on 16-10-20.
//  Copyright (c) 2016年 baozhiyong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, Direction) {
    Unkown,
    Left,        // 左
    Right,       // 右
    Up,          // 上
    Down,        // 下
    Left_up,     // 左上
    Right_up,    // 右上
    Left_down,   // 左下
    Right_down,  // 右下
    Unkown_Value,
};

typedef NS_ENUM(NSInteger, ZoomType) {
    Zoom_in,
    Zoom_out
};
@protocol LCOpenSDK_EventListener <NSObject>

@optional
#pragma mark - windowListener
/***************************************************************************
 ** windowListener
 ***************************************************************************/
/**
 *  单击回调
 *
 *  @param dx    [out]  窗口X坐标
 *  @param dy    [out]  窗口Y坐标
 *  @param index [out]  窗口索引值
 */
- (void)onControlClick:(CGFloat)dx dy:(CGFloat)dy Index:(NSInteger)index;
/**
 *  双击回调
 *
 *  @param dx    [out]  窗口X坐标
 *  @param dy    [out]  窗口Y坐标
 *  @param index [out]  窗口索引值
 */
- (void)onWindowDBClick:(CGFloat)dx dy:(CGFloat)dy Index:(NSInteger)index;
/**
 *  缩放开始回调
 *
 *  @param index [out]  窗口索引值
 */
- (void)onZoomBegin:(NSInteger)index;
/**
 *  缩放中回调
 *
 *  @param scale [out]  缩放比例
 *  @param index [out]  窗口索引值
 */
- (void)onZooming:(CGFloat)scale Index:(NSInteger)index;
/**
 *  缩放结束回调
 *
 *  @param zoom  [out]  缩放比例
 *  @param index [out]  窗口索引值
 */
- (void)onZoomEnd:(ZoomType)zoom Index:(NSInteger)index;
/**
 *  长按开始回调
 *
 *  @param dir   [out]  长按相对窗口中的方向
 *  @param dx    [out]  窗口X坐标值
 *  @param dy    [out]  窗口Y坐标值
 *  @param index [out]  窗口索引值
 */
- (void)onWindowLongPressBegin:(Direction)dir dx:(CGFloat)dx dy:(CGFloat)dy Index:(NSInteger)index;
/**
 *  长按结束回调
 *
 *  @param index [out]  窗口索引值
 */
- (void)onWindowLongPressEnd:(NSInteger)index;
/**
 *  滑动开始回调
 *
 *  @param dir   [out]  滑动方向
 *  @param dx    [out]  滑动开始,窗口X坐标值
 *  @param dy    [out]  滑动开始,窗口Y坐标值
 *  @param index [out]  窗口索引值
 */
- (void)onSlipBegin:(Direction)dir dx:(CGFloat)dx dy:(CGFloat)dy Index:(NSInteger)index;
/**
 *  滑动中回调
 *
 *  @param dir   [out]  滑动方向
 *  @param preX  [out]  滑动中前一个触摸点,窗口X坐标值
 *  @param preY  [out]  滑动中前一个触摸点,窗口Y坐标值
 *  @param dx    [out]  滑动中后一个触摸点,窗口X坐标值
 *  @param dy    [out]  滑动中后一个触摸点,窗口Y坐标值
 *  @param index [out]  窗口索引值
 */
- (void)onSlipping:(Direction)dir preX:(CGFloat)preX preY:(CGFloat)preY dx:(CGFloat)dx dy:(CGFloat)dy Index:(NSInteger)index;
/**
 *  滑动结束回调
 *
 *  @param dir   [out]  滑动方向
 *  @param dx    [out]  滑动结束,窗口X坐标值
 *  @param dy    [out]  滑动结束,窗口Y坐标值
 *  @param index [out]  窗口索引值
 */
- (void)onSlipEnd:(Direction)dir dx:(CGFloat)dx dy:(CGFloat)dy Index:(NSInteger)index;

#pragma mark - playListener
/**********************************************************************************
 ** playListener
 **********************************************************************************/
/**
 *  视频播放状态回调
 *
 *  @param code  错误码(根据type而定)
 *  @param type  0, RTSP
 *               1, HLS
 *              99, OPENAPI
 *  @param index 播放窗口索引值
 */
- (void)onPlayerResult:(NSString*)code Type:(NSInteger)type Index:(NSInteger)index;

/**
 *  (接口未使用)
 */
- (void)onResolutionChanged:(NSInteger)width Height:(NSInteger)height Index:(NSInteger)index;

/**
 *  视频播放数据回调
 *
 *  @param len   数据长度
 *  @param index 播放窗口索引值
 */
- (void)onReceiveData:(NSInteger)len Index:(NSInteger)index;

/**
 *  TS/PS标准流导出数据回调
 *
 *  @param data [out] 标准流导出数据
 */
- (void)onStreamCallback:(NSData*)data Index:(NSInteger)index;
/**
 *  视频播放开始回调
 *
 *  @param index 播放窗口索引值
 */
- (void)onPlayBegan:(NSInteger)index;

/**
 *  视频播放结束回调
 *
 *  @param index 播放窗口索引值
 */
- (void)onPlayFinished:(NSInteger)index;

/**
 *  (录像)视频播放时间回调
 *
 *  @param time  当前录像时间
 *  @param index 播放窗口索引值
 */
- (void)onPlayerTime:(long)time Index:(NSInteger)index;

- (void) onPlayerTimeAndStamp:(long)time stampTime:(long)stampTime Index:(NSInteger)index;
- (void) onAudioTimeAndStamp:(long)time stampTime:(long)stampTime Index:(NSInteger)index;
- (void) onIVSInfo:(NSString*)pBuf type:(long)lType len:(long)lLen realLen:(long)lReallen Index:(NSInteger)index;
- (void) onFileTime:(long)beginTime EndTime:(long)endTime Index:(NSInteger)index;

- (void) onProgressStatus:(NSString *)status Index:(NSInteger)index;
- (void) onStreamLogInfo:(NSString *)message Index:(NSInteger)index;

- (NSString*) onRequest:(NSString *)param Type:(int)type Index:(NSInteger)index;

@end
