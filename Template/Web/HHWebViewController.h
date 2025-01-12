//
//  HHWebViewController.h
//  AnXinJie
//
//  Created by Zzzzzzzzz💤 on 2019/7/28.
//  Copyright © 2019 Zzzzzzzzz💤. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HHWebViewController : UIViewController

@property (nonatomic, copy) NSString *htmlTitle;
@property (nonatomic, copy) NSString *htmlUrl;

@property (nonatomic , assign) BOOL   isWait;

@end

NS_ASSUME_NONNULL_END
