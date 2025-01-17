//
//  DSSPtzToolBar.h
//  Pods
//
//  Created by Li_JinLin on 17/2/22.
//
//

#import <UIKit/UIKit.h>

@protocol DSSPtzToolbarDelegate<NSObject>
//DSSPtzToolBar
- (void)DSSPtzToolbarViewDidClickZoom:(BOOL)isOn;
- (void)DSSPtzToolbarViewDidClickFocus:(BOOL)isOn;
- (void)DSSPtzToolbarViewDidClickRing:(BOOL)isOn;
- (void)DSSPtzToolbarViewDidClickPoint:(BOOL)isOn;
@end

@interface DSSPtzToolBar : UIView
@property (nonatomic, weak) id<DSSPtzToolbarDelegate> delegate;

@property (weak, nonatomic) IBOutlet UIButton *zoomBtn;   //zoom
@property (weak, nonatomic) IBOutlet UIButton *focusBtn;  //focus
@property (weak, nonatomic) IBOutlet UIButton *ringBtn;   //ring
@property (weak, nonatomic) IBOutlet UIButton *presetBtn; //prepoint

-(void)resetButtonStatue;
- (void)resetBtnSelectStatue:(NSInteger)index;

@end
