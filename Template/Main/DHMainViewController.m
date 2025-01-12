//
//  DHMainViewController.m
//  Template
//
//  Created by Zzzzzzzzz on 2025/1/9.
//

#import "DHMainViewController.h"
#import "DHDataCenter.h"
#import "DHLoginManager.h"
#import "DHHudPrecess.h"
#import <ICCDataAdapterProtocol/WeikitErrorCode.h>


@interface DHMainViewController ()

@end

@implementation DHMainViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.view.backgroundColor = [UIColor whiteColor];
    [self loginServer];
   
}

- (void)initDHSdk {
    
    [[DHDataCenter sharedInstance] setHost:@"220.249.115.224" port:1443];
    [[DHHudPrecess sharedInstance] showWaiting:@"Login on..."
                                WhileExecuting:@selector(loginServer)
                                      onTarget:self
                                    withObject:NULL
                                      animated:YES
                                        atView:self.view];
}

- (void)loginServer {
    NSError *error = nil;
    DSSUserInfo *userInfo = [[DHLoginManager sharedInstance] loginWithUserName:@"sfduijie" Password:@"sfduijie@123" error:&error];
    if (error) {
        switch (error.code) {
            case YYS_BEC_USER_PASSWORD_ERROR:
                NSLog(@"username or password error");
                MSG("", @"username or password error", "");
                break;
            case YYS_BEC_USER_SESSION_EXIST:
                NSLog(@"user logined");
                MSG("", @"user logined", "");
                break;
            case YYS_BEC_USER_NOT_EXSIT:
                NSLog(@"user not exsit");
                MSG("", @"user not exsit", "");
                break;
            case YYS_BEC_USER_LOGIN_TIMEOUT:
                NSLog(@"login timeout");
                MSG("", @"login timeout", "");
                break;
            case YYS_BEC_COMMON_NETWORK_ERROR:
                NSLog(@"network error");
                MSG("", @"network error", "");
                break;
            default:
                MSG("", @"Login failed", "");
                break;
        }
 
        return;
    }
    //call after login
    [[DHDeviceManager sharedInstance] afterLoginInExcute:userInfo];
    //加载设备树
    [[DHDeviceManager sharedInstance] loadDeviceTree:&error];
   
//    RunOnMainThread([self performSegueWithIdentifier:@"LoginToHome" sender:nil]);
}

- (void)touchesEnded:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [self initDHSdk];
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
