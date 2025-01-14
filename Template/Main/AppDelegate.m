//
//  AppDelegate.m
//  Template
//
//  Created by Zzzzzzzzz on 2025/1/7.
//

#import "AppDelegate.h"
#import "ViewController.h"
#import "HHWebViewController.h"
#import "DHMainViewController.h"

#import <MAMapKit/MAMapKit.h>
#import <AMapFoundationKit/AMapFoundationKit.h>
#import <AMapLocationKit/AMapLocationKit.h>


//地址入口

static NSString *const WebURL = @"http://192.168.2.14:8502/h5/";
//static NSString *const WebURL = @"https://server1.wh-nf.cn:8201/h5/#/login";

@interface AppDelegate () <AMapLocationManagerDelegate>

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    
    [self configAMap];
    [self saveDeviceID];
    [self setRootViewController];
    [self configKeyBoardManager];
        
    return YES;
}

#pragma mark - 初始化
- (void)setRootViewController {
    
    self.window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
    self.window.backgroundColor = [UIColor clearColor];
    //    self.window.backgroundColor = [UIColor whiteColor];
    
//    HHWebViewController *webVC = [[HHWebViewController alloc] init];
//    webVC.htmlUrl = WebURL;
//    BaseNavigationController *navVC = [[BaseNavigationController alloc] initWithRootViewController:webVC];
//    self.window.rootViewController = navVC;
//    [self.window makeKeyAndVisible];
    
    
    DHMainViewController *mainVC = [[DHMainViewController alloc] init];
    BaseNavigationController *navVC = [[BaseNavigationController alloc] initWithRootViewController:mainVC];
    self.window.rootViewController = navVC;
    [self.window makeKeyAndVisible];
}

#pragma mark - 获取设备UUID
- (NSString *)getDeviceUUID {
    // 读取设备号
    NSString *UUID = [SAMKeychain passwordForService:APP_IDENTIFIER account:@"DeviceId"];
    if (!UUID) {
        // 如果没有UUID 则保存设备号
        CFUUIDRef deviceId = CFUUIDCreate(NULL);
        assert(deviceId != NULL);
        CFStringRef deviceIdStr = CFUUIDCreateString(NULL, deviceId);
        [SAMKeychain setPassword:[NSString stringWithFormat:@"%@", deviceIdStr] forService:APP_IDENTIFIER account:@"DeviceId"];
        UUID = [NSString stringWithFormat:@"%@", deviceIdStr];
    }
    return UUID;
}

#pragma mark - 存储UUID
- (void)saveDeviceID {
    
    NSString *DeviceUUID = [HH_Utilities getDeviceUUID];
    NSString *uuid = [NSString stringWithFormat:@"11-%@-%@",[DeviceTools deviceType],DeviceUUID];
    [UserDefaultsTool setObject:uuid forKey:KDefaultsPhoneDeviceUUID];
}

#pragma mark - 键盘配置
- (void)configKeyBoardManager {
    
    IQKeyboardManager* manager = [IQKeyboardManager sharedManager];
    manager.enable = YES;
    manager.shouldResignOnTouchOutside=YES;
    manager.shouldToolbarUsesTextFieldTintColor=YES;
    manager.keyboardDistanceFromTextField = KScale(60);
    manager.toolbarManageBehavior = IQAutoToolbarByTag;
}

#pragma mark - 高德配置
- (void)configAMap {
    
    [MAMapView updatePrivacyShow:AMapPrivacyShowStatusDidShow privacyInfo:AMapPrivacyInfoStatusDidContain];
    [MAMapView updatePrivacyAgree:AMapPrivacyAgreeStatusDidAgree];
    [AMapServices sharedServices].apiKey = @"024e70bad787cb7d50436f9e5a356b20";
}

#pragma mark - 内存过高清除
- (void)applicationDidReceiveMemoryWarning:(UIApplication *)application {
    [[SDImageCache sharedImageCache] clearMemory];
    [[SDImageCache sharedImageCache] clearDiskOnCompletion:^{
        
    }];
}





@end
