//
//  DHMainViewController.m
//  Template
//
//  Created by Zzzzzzzzz on 2025/1/9.
//

#import "DHMainViewController.h"
#import <ICCDataAdapterProtocol/WeikitErrorCode.h>
#import "DHManagerHeader.h"
#import "DHHomeViewController.h"

@interface DHMainViewController () <UITableViewDelegate, UITableViewDataSource>

//完成按钮
@property (nonatomic, strong) UIButton               * rightNavItem;

@property (nonatomic, strong) UITableView            * tableView;
@property (nonatomic, strong) NSArray                * dataArray;

@end

@implementation DHMainViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.navigationItem.title = @"大华监控";
    self.dataArray = @[@"实时预览", @"回放"];
    [self initUI];
}


- (void)initDHSdk {
    
    [[DHHudPrecess sharedInstance] showWaiting:@"Login on..."
                                WhileExecuting:@selector(loginServer)
                                      onTarget:self
                                    withObject:NULL
                                      animated:YES
                                        atView:self.view];
}

- (void)loginServer {
    
    [[DHDataCenter sharedInstance] setHost:@"220.249.115.224" port:1443];
    
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
    
//    RunOnMainThread(
//                    DHHomeViewController *homeVC = [[DHHomeViewController alloc] init];
//                    [self.navigationController pushViewController:homeVC animated:YES];
//                    );
}


//HHButton *loginBtn = [HHButton buttonWithType:UIButtonTypeCustom];
//loginBtn.titleLabel.font = KFONT(20);
//[loginBtn setTitleColor:MainUnTextColor forState:UIControlStateNormal];
//[loginBtn setTitle:@"登录" forState:UIControlStateNormal];
//[loginBtn addTarget:self action:@selector(loginBtnClick:) forControlEvents:UIControlEventTouchUpInside];
//[self.view addSubview:loginBtn];
//
//[loginBtn mas_makeConstraints:^(MASConstraintMaker *make) {
//    make.top.equalTo(self.view.mas_top).offset(100);
//    make.center.mas_equalTo(0);
//    make.width.mas_equalTo(SCREEN_WIDTH/3);
//    make.height.mas_equalTo(50);
//}];


- (void)initUI {
    
    WeakSelf
    self.rightNavItem = [ControlTools buttonWithImage:nil title:@"登录" titleColor:ThemeColor font:KFONT(14) upInsideAction:nil];
    [self configRightBar:self.rightNavItem upInsideAction:^(id  _Nonnull sender) {
        
        HHLog(@"登录大华监控");
        [weakSelf  initDHSdk];
    }];
    
    
    UITableView *tableView = [[UITableView alloc] initWithFrame:CGRectZero style:UITableViewStylePlain];
    tableView.delegate = self;
    tableView.dataSource = self;
    tableView.estimatedRowHeight = UITableViewAutomaticDimension;
    tableView.separatorColor = SeparationlineColor;
    tableView.showsVerticalScrollIndicator = NO;
    tableView.rowHeight = 50;
    [self.view addSubview:tableView];
    self.tableView = tableView;
    
    [tableView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.edges.mas_equalTo(0);
    }];
}

#pragma TableViewDelegate
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return self.dataArray.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    
    static NSString *cellID = @"CellID";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:cellID];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:cellID];
        cell.selectionStyle = UITableViewCellSelectionStyleNone;
    }
    
    // Configure the cell...
    cell.textLabel.text = [self.dataArray objectAtIndex:indexPath.row];
    
    //    if (self.dataArray.count > 0) {
    //        AreaModel *model = self.dataArray[indexPath.row];
    //        cell.textLabel.text = model.areaName;
    //        cell.textLabel.textColor = MainTextColor;
    //        cell.textLabel.font = KFONT(14);
    //        cell.tintColor = ThemeColor;
    //
    //        if (model.check) {
    //            cell.accessoryType = UITableViewCellAccessoryCheckmark;
    //        }else{
    //            cell.accessoryType = UITableViewCellAccessoryNone;
    //        }
    //    }
    return cell;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    return KScale(50);
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    
    HHLog(@"--- 第%ld行", indexPath.row);
    
    DHHomeViewController *homeVC = [[DHHomeViewController alloc] init];
    homeVC.type = indexPath.row == 0 ? FunctionTypePreview : FunctionTypePlayback;
    [self.navigationController pushViewController:homeVC animated:YES];
    
    //    self.selectModel = self.dataArray[indexPath.row];
    //    if (self.selectModel.parentId) {
    //
    //        [self.dataArray enumerateObjectsWithOptions:NSEnumerationConcurrent usingBlock:^(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
    //            AreaModel *model = (AreaModel *)obj;
    //            model.check = idx == indexPath.row;
    //        }];
    //        [self.tableView reloadData];
    //
    //    }else{
    //
    //        ChooseAreaViewController *areaVC = [[ChooseAreaViewController alloc] init];
    //        areaVC.model = self.dataArray[indexPath.row];
    //        areaVC.chooseAreaBlock = self.chooseAreaBlock;
    //        [self.navigationController pushViewController:areaVC animated:YES];
    //
    //    }
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
