//
//  DSSRealPtzControlView.h
//  Pods
//
//  Created by Li_JinLin on 17/3/2.
//
//

#import <UIKit/UIKit.h>

typedef enum {
    PtzControlTypeZoom,     //zoom
    PtzControlTypeFocus,    //focus
    PtzControlTypeAperture, //aperture
    
} PtzControlType;

@protocol PtzControlViewDelegate <NSObject>

- (void)ptzBtnClickAdd:(PtzControlType )type touchDown:(BOOL)isDown;
- (void)ptzBtnClickReduce:(PtzControlType )type touchDown:(BOOL)isDown;

@end
@interface DSSRealPtzControlView : UIView

@property (nonatomic, assign) PtzControlType ptzType;
@property (nonatomic, weak) id <PtzControlViewDelegate> delegate;
@property (weak, nonatomic) IBOutlet UIButton *ptzTitleBtn;

@end
