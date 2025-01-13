//
//  DSSMainToolBar.h
//  Pods
//
//  Created by Li_JinLin on 17/2/20.
//
//

#import <UIKit/UIKit.h>

@protocol DSSMainToolBarDelegate <NSObject>
- (void)mainToolbarViewDidClickSnapshot;
- (void)mainToolbarViewDidClickRecord:(BOOL)isOn;
- (void)mainToolbarViewDidClickTalk:(BOOL)isOn;
- (void)mainToolbarViewDidClickPTZ:(BOOL)isOn;
@end


@interface DSSMainToolBar : UIView

@property (weak, nonatomic) IBOutlet UIButton *snapShotBtn; //snapShot
@property (weak, nonatomic) IBOutlet UIButton *recordBtn;   //record
@property (weak, nonatomic) IBOutlet UIButton *talkBtn;     //talk
@property (weak, nonatomic) IBOutlet UIButton *ptzBtn;      //ptz
@property (nonatomic, weak)   id<DSSMainToolBarDelegate> delegate;

-(void)setButtonIndex:(int)ind Selected:(BOOL)isSelected;
-(void)setButtonIndex:(int)ind Enabled:(BOOL)isEnabled;
-(void)isBtnEnable:(BOOL)isEnable;
@end
