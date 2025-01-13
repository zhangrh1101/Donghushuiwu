//
//  DSSPlayWndToolBar.h
//  Pods
//
//  Created by Li_JinLin on 17/2/20.
//
//

#import <UIKit/UIKit.h>

@protocol DSSPlayWndToolBarDelegate <NSObject>
//DSSPlayWndToolBar
-(void)DSSPlayWndToolbarViewDidClickPlay:(BOOL)isOn;
-(void)DSSPlayWndToolbarViewDidClickVoice:(BOOL)isOn;
-(void)DSSPlayWndToolbarViewDidClickStream:(BOOL)isOn;
-(void)DSSPlayWndToolbarViewDidClickFav:(BOOL)isOn;
-(void)DSSPlayWndToolbarViewDidClickFull:(BOOL)isOn;
@end

@interface DSSPlayWndToolBar : UIView

@property (weak, nonatomic) IBOutlet UIButton *streamBtn;  //stream
@property (weak, nonatomic) IBOutlet UIButton *voiceBtn;   //voice
@property (weak, nonatomic) IBOutlet UIButton *playBtn;    //play、pause
@property (nonatomic, weak)   id<DSSPlayWndToolBarDelegate> delegate;

-(void)setButtonIndex:(int)ind Selected:(BOOL)isSelected;
-(void)isBarBtnEnable:(BOOL)isEnable;
@end
