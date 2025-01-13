//
//  DHHomeViewController.h
//  Template
//
//  Created by Zzzzzzzzz on 2025/1/13.
//

#import <UIKit/UIKit.h>

typedef enum {
    FunctionTypePreview,     //预览
    FunctionTypePlayback,    //回放
    
} FunctionType;

NS_ASSUME_NONNULL_BEGIN

@interface DHHomeViewController : BaseViewController

@property (nonatomic, assign) FunctionType type;

@end

NS_ASSUME_NONNULL_END
