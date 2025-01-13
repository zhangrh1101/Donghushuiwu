//
//  DHHomeViewController.m
//  Template
//
//  Created by Zzzzzzzzz on 2025/1/13.
//

#import "DHHomeViewController.h"
#import "DHPreviewViewController.h"
#import "DHManagerHeader.h"

@interface DHHomeViewController () <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) UITableView            * tableView;
@property (nonatomic, strong) NSArray                * dataArray;

@property (strong, nonatomic) TreeNode               * pCurrentNode;          //current parent node
@property (strong, nonatomic) NSMutableArray         * showNodes;       //show nodes

@end

@implementation DHHomeViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.navigationItem.title = self.type == FunctionTypePreview ? @"实时预览" : @"回放";
    [self initUI];
}

/**
 更新地区信息
 */
- (void)updateMineUserInfo {

//    NSString *areaName = [NSString stringWithFormat:@"%@ %@", self.model.areaName, self.selectModel.areaName];
//    NSDictionary *params = @{@"areaName" : areaName};
//    WeakSelf
//    [MBProgressHUD showHUD];
//    [MineHandler requestUpdateUserInfoPath:UpdateUserInfoUrl params:params success:^(id responseObject) {
//        [MBProgressHUD showMessage:@"修改成功"];
//        HHLog(@"更新资料");
//        weakSelf.chooseAreaBlock(areaName);
//        if (self.navigationController.viewControllers.count >= 3) {
//            NSInteger index = weakSelf.navigationController.viewControllers.count - 3;
//            [weakSelf.navigationController popToViewController:weakSelf.navigationController.viewControllers[index] animated:YES];
//        }
//        [[NSNotificationCenter defaultCenter] postNotificationName:KNotificationRefreshUserInfo object:nil];
//    } failed:^(id error) {
//        [MBProgressHUD hideHUD];
//    }];
}

- (void)initUI {
    
    UITableView *tableView = [[UITableView alloc] initWithFrame:CGRectZero style:UITableViewStyleGrouped];
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
    
    _pCurrentNode = [DHDeviceManager sharedInstance].parentGroupNode;
    [self.tableView reloadData];
}

#pragma TableViewDelegate
//- (NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section
//{
//    NSString *title;
//    if (_pCurrentNode.nodeType == TREENODE_TYPE_GROUP) {
//        title = ((DSSGroupInfo *)_pCurrentNode.content).name;
//    } else if (_pCurrentNode.nodeType == TREENODE_TYPE_DEVICE) {
//        title = ((DSSDeviceInfo *)_pCurrentNode.content).name;
//    }
//
//    return title;
//}

- (UIView *)tableView:(UITableView *)tableView viewForHeaderInSection:(NSInteger)section {
   
    NSString *title;
    if (_pCurrentNode.nodeType == TREENODE_TYPE_GROUP) {
        title = ((DSSGroupInfo *)_pCurrentNode.content).name;
    } else if (_pCurrentNode.nodeType == TREENODE_TYPE_DEVICE) {
        title = ((DSSDeviceInfo *)_pCurrentNode.content).name;
    }
    
    UIView *header = [[UIView alloc] initWithFrame:CGRectMake(0, 0, SCREEN_WIDTH, 40)];
    header.backgroundColor = BackGroundColor;
//    header.layer.shadowColor = InvestBlackColor.CGColor;
//    header.layer.shadowOpacity = 0.2;//阴影透明度，默认为0，如果不设置的话看不到阴影，切记，这是个大坑
//    header.layer.shadowOffset = CGSizeMake(0, 0);
//    header.layer.shadowRadius = 2.0;
    
    UILabel *titlelabel = [[UILabel alloc] init];
    titlelabel.textAlignment = NSTextAlignmentLeft;
    titlelabel.font = [UIFont systemFontOfSize:15];
    titlelabel.textColor = [UIColor grayColor];
    titlelabel.text = title;
    [header addSubview:titlelabel];
    [titlelabel mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(KScale(18));
        make.right.top.bottom.mas_equalTo(0);
    }];
    
    return header;
}

-(CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section {
    return 40;
}



- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    
    //Group *group = (Group*)[self.pGroup nodeAtIndex:section];
    //return [group.Nodelist count];
    _showNodes = nil;
    _showNodes = [[NSMutableArray alloc]init];
    if (_pCurrentNode.nodeType == TREENODE_TYPE_GROUP) {
        for (NSString *groupId in ((DSSGroupInfo *)_pCurrentNode.content).childgroups)
        {
            TreeNode *groupNode = [[DHDeviceManager sharedInstance].treeNodeDic objectForKey:groupId];
            if (groupNode && !groupNode.needHidden)
            {
               [_showNodes addObject:groupNode];
            }
        }
        if ([DHDeviceManager sharedInstance].isShowDevice) {
            for (NSString *deviceId in ((DSSGroupInfo *)_pCurrentNode.content).devices)
            {
                TreeNode *deviceNode = [[DHDeviceManager sharedInstance].treeNodeDic objectForKey:deviceId];
                if (deviceNode && !deviceNode.needHidden)
                {
                    [_showNodes addObject:deviceNode];
                }
            }
        } else {
            for (NSString *channelId in ((DSSGroupInfo *)_pCurrentNode.content).channels)
            {
                TreeNode *channelNode = [[DHDeviceManager sharedInstance].treeNodeDic objectForKey:channelId];
                if (channelNode && !channelNode.needHidden)
                {
                   [_showNodes addObject:channelNode];
                }
            }
        }
       
    } else if (_pCurrentNode.nodeType == TREENODE_TYPE_DEVICE) {
        for (NSString *channelId in ((DSSDeviceInfo *)_pCurrentNode.content).channels)
        {
            TreeNode *channelNode = [[DHDeviceManager sharedInstance].treeNodeDic objectForKey:channelId];
            if (channelNode && !channelNode.needHidden)
            {
                [_showNodes addObject:channelNode];
            }
        }
    }
   
    return _showNodes.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
  
    static NSString *cellID = @"CellID";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:cellID];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:cellID];
        cell.selectionStyle = UITableViewCellSelectionStyleNone;
    }
    
    // Configure the cell...
    TreeNode* node = _showNodes[indexPath.row];
    switch (node.nodeType) {
        case TREENODE_TYPE_GROUP:
            {
                cell.textLabel.text = ((DSSGroupInfo *)node.content).name;
                cell.textLabel.textColor = [UIColor blackColor];
            }
            break;
        case TREENODE_TYPE_DEVICE:
        {
            cell.textLabel.text = ((DSSDeviceInfo *)node.content).name;
            if (((DSSDeviceInfo *)node.content).isOnline) {
                cell.textLabel.textColor = [UIColor blackColor];
            } else {
                cell.textLabel.textColor = [UIColor lightGrayColor];
            }
        }
            break;
        case TREENODE_TYPE_CHANNEL:
        {
            cell.textLabel.text = ((DSSChannelInfo *)node.content).name;
            if (((DSSChannelInfo *)node.content).isOnline) {
                cell.textLabel.textColor = [UIColor blackColor];
            } else {
                cell.textLabel.textColor = [UIColor lightGrayColor];
            }
        }
            break;
        default:
            break;
    }
    cell.selectionStyle = UITableViewCellSelectionStyleGray;
    
    return cell;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    return KScale(50);
}

#pragma mark - TableView Delegate
- (BOOL)tableView:(UITableView *)tableView shouldHighlightRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView cellForRowAtIndexPath:indexPath];
    UIButton *btnCheck = (UIButton *)[cell viewWithTag:10002];
    [btnCheck setImage:[UIImage imageNamed:@"list_body_details_h"] forState:UIControlStateNormal];
    return YES;
}

- (void)tableView:(UITableView *)tableView didUnhighlightRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView cellForRowAtIndexPath:indexPath];
    UIButton *btnCheck = (UIButton *)[cell viewWithTag:10002];
    [btnCheck setImage:[UIImage imageNamed:@"list_body_details_n"] forState:UIControlStateNormal];
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {

    HHLog(@"--- 第%ld行", indexPath.row);
    TreeNode *pNode = (TreeNode *)_showNodes[indexPath.row];
    if (pNode.nodeType != TREENODE_TYPE_CHANNEL) {
        _pCurrentNode = (TreeNode *)pNode;
        [self.tableView reloadData];
        return;
    }
    [DHDataCenter sharedInstance].selectNode = pNode;
    
    if (self.type == FunctionTypePreview)
    {
        HHLog(@"--- 第%ld行 预览", indexPath.row);
        DHPreviewViewController *previewVC = [[DHPreviewViewController alloc] init];
        [self.navigationController pushViewController:previewVC animated:YES];
    }
    else if(self.type == FunctionTypePlayback)
    {
        HHLog(@"--- 第%ld行 回放", indexPath.row);
    }
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
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
