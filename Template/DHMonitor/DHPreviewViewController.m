//
//  DHPreviewViewController.m
//  Template
//
//  Created by Zzzzzzzzz on 2025/1/13.
//

#import "DHPreviewViewController.h"
#import <DHMediaPlay/DHMediaPlay-Swift.h>
#import "DHManagerHeader.h"
#import "DHPreviewHeader.h"
#include <sys/mount.h>

typedef enum : int {
    DSSMainStreamType = 1,
    DSSSubStreamType,
    DSSThirdStreamType,
}DSSStreamType;

@interface DHPreviewViewController () <UITableViewDelegate,UITableViewDataSource,DSSPtzToolbarDelegate,DSSMainToolBarDelegate,DSSPlayWndToolBarDelegate,DSSRealStreamViewDelegate,PtzControlViewDelegate,DHWindowListenerProtocol,DHPlayListenerProtocol,DHPTZListenerProtocol,DHTalkListenerProtocol,UIGestureRecognizerDelegate>

//当前播放的通道id
//@property (nonatomic, copy)   NSString                  * selectChannelId;
//预置点数组
@property (strong, nonatomic) NSArray *presetArr;

//播放窗口
@property (nonatomic, strong) DHMediaPlayView           * playWindow;
//播放窗口工具栏
@property (nonatomic, strong) DSSPlayWndToolBar         * playWndToolView;
//抓图、录像、对讲、云台
@property (nonatomic, strong) DSSMainToolBar            * mainBarView;

//云台工具栏
@property (nonatomic, strong) DSSPtzToolBar             * ptzToolBarView;
//云台操作页面
@property (nonatomic, strong) DSSRealPtzControlView     * ptzControlView;

//码流选择页
@property (nonatomic, strong) DHStreamSelectView        * streamSelectView;
//码流选择背景页
@property (nonatomic, strong) UIView                    * streamSelectBGView;
//码流选择取消按钮
@property (nonatomic, strong) UIButton                  * cancelButton;

//预置点背景图
@property (nonatomic, strong) UIView                    * lsPresetBGView;

@property (nonatomic, strong) dispatch_queue_t ptzQueue;

@end

@implementation DHPreviewViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.navigationItem.title = @"实时预览";
    [self initPlayView];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [_playWindow addWindowListener: self];
    [_playWindow addPlayListener:self];
    [_playWindow addPTZListener: self];
    [_playWindow addTalkListener:self];
    //开始播放
    [self startToplay:self.selectChannelId winIndex:0 streamType:0];
}

- (void)viewWillDisappear:(BOOL)animated {
    [super viewWillDisappear:animated];
    [_playWindow removePlayListener:self];
    [_playWindow removeWindowListener:self];
    [_playWindow removeTalkListener:self];
    [_playWindow removePTZListener:self];
    //停止播放
    [self.playWindow stop:0];
    [self updateBtnStatus:0];
}


- (void)initPlayView {
    
    WeakSelf
    _playWindow = [[DHMediaPlayView alloc] init];
    [self.view addSubview:_playWindow];
    [_playWindow mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.mas_equalTo(0);
        make.left.right.mas_equalTo(0);
        make.height.mas_equalTo(SCREEN_WIDTH/4*3);
    }];
    
    //工具菜单View
    _playWndToolView = [[DSSPlayWndToolBar alloc] init];
    [self.view addSubview:_playWndToolView];
    [_playWndToolView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(_playWindow.mas_bottom);
        make.left.right.mas_equalTo(0);
        make.height.mas_equalTo(50);
    }];
    
    //主菜单View
    _mainBarView = [[DSSMainToolBar alloc] init];
    [self.view addSubview:_mainBarView];
    [_mainBarView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(_playWndToolView.mas_bottom);
        make.left.right.mas_equalTo(0);
        make.height.mas_equalTo(85);
    }];
    
    //码流选择框
    _streamSelectBGView = [[UIView alloc] init];
    [self.view addSubview:_streamSelectBGView];
    [_streamSelectBGView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.edges.mas_equalTo(0);
    }];
    
    _cancelButton = [ControlTools buttonWithImage:nil title:@"取消" titleColor:DarkSubTextColor font:KFONT(14) upInsideAction:^(id  _Nonnull sender) {
        [weakSelf cancelButtonClicked];
    }];
    [_streamSelectBGView addSubview:_cancelButton];
    [_cancelButton mas_makeConstraints:^(MASConstraintMaker *make) {
        make.bottom.left.right.mas_equalTo(0);
        make.height.mas_equalTo(50);
    }];
    
    _streamSelectView = [[DHStreamSelectView alloc] init];
    [_streamSelectBGView addSubview:_streamSelectView];
    [_streamSelectView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.bottom.mas_equalTo(-50);
        make.left.right.mas_equalTo(0);
        make.height.mas_equalTo(230);
    }];
    
    _lsPresetBGView = [[UIView alloc] init];
    _lsPresetBGView.backgroundColor = [UIColor greenColor];
    [self.view addSubview:_lsPresetBGView];
    [_lsPresetBGView mas_makeConstraints:^(MASConstraintMaker *make) {
//        make.edges.mas_equalTo(0);
    }];
    
    //云台View
    _ptzToolBarView = [[DSSPtzToolBar alloc] init];
    [self.view addSubview:_ptzToolBarView];
    [_ptzToolBarView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(_mainBarView.mas_bottom);
        make.left.right.mas_equalTo(0);
        make.height.mas_equalTo(80);
    }];
    
    //控制View
    _ptzControlView = [[DSSRealPtzControlView alloc] init];
    [self.view addSubview:_ptzControlView];
    [_ptzControlView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(_ptzToolBarView.mas_bottom).offset(30);
        make.centerX.mas_equalTo(0);
        make.width.mas_equalTo(155);
        make.height.mas_equalTo(50);
    }];
    
    
    self.ptzQueue = dispatch_queue_create("PTZ_QUEUE", DISPATCH_QUEUE_SERIAL);
    self.playWndToolView.delegate = self;
    
    self.mainBarView.hidden = YES;
    self.mainBarView.delegate = self;
    self.streamSelectView.delegate = self;
    self.streamSelectBGView.hidden = YES;

    self.ptzToolBarView.hidden = YES;
    self.ptzControlView.hidden = YES;
    self.ptzToolBarView.delegate = self;
    self.ptzControlView.delegate = self;

//    self.lsPresetTableView.delegate = self;
//    self.lsPresetTableView.dataSource = self;
    self.lsPresetBGView.hidden = YES;
    
    UITapGestureRecognizer *tapGesture = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(hiddenPresetView)];
    tapGesture.delegate = self;
    [self.lsPresetBGView addGestureRecognizer:tapGesture];
    
    //初始化播放窗口
    DSSUserInfo* userinfo = [DHLoginManager sharedInstance].userInfo;
    NSString *host = [[DHDataCenter sharedInstance] getHost];
    [_playWindow setHost:host userName:userinfo.userName];
    [_playWindow setDefultSplitNumber:1];
    [_playWindow setNeedAutoAppendPage:NO];
    [DHPlayConfig shareInstance].maxWindowCount = 1;
    
    //更新码流按钮selectChannelId
//    self.selectChannelId = ((DSSChannelInfo *)[DHDataCenter sharedInstance].selectNode.content).channelid;
   
    //更新码流按钮title
    [self setMainToolBarStreamBtnTitle];
}

- (void)setMainToolBarStreamBtnTitle{
    int streamType = [self getSelectStreamType];
    if(streamType == 3){
        [self.playWndToolView.streamBtn setTitle:@"三码流" forState:UIControlStateNormal];
    } else if (streamType == 2) {
        [self.playWndToolView.streamBtn setTitle:@"辅码流" forState:UIControlStateNormal];
    } else {
        [self.playWndToolView.streamBtn setTitle:@"主码流" forState:UIControlStateNormal];
    }
}

# pragma mark - 播放
- (void)startToplay:(NSString *)local_channelId winIndex:(int)winIndex streamType:(int)streamType{
    //初始化camera
    DSSUserInfo* userinfo = [DHLoginManager sharedInstance].userInfo;
    DSSChannelInfo* channelInfo = (DSSChannelInfo *)[DHDataCenter sharedInstance].selectNode.content;
    DSSDeviceInfo *deviceInfo = [[DHDeviceManager sharedInstance] getDeviceInfo:[channelInfo deviceId]];
    DSSRTCamera* camera = [[DSSRTCamera alloc] init];
    camera.server_ip =  [[DHDataCenter sharedInstance] getHost];
    camera.server_port = [[DHDataCenter sharedInstance] getPort];
    camera.cameraID = channelInfo.channelid ? channelInfo.channelid : self.selectChannelId;
    camera.deviceID = channelInfo.deviceId;
    camera.isCheckPermission = YES;
    camera.mediaType = 1;
    camera.audioChannelId = 2;
    camera.bCloudBase = NO;
    camera.bEVOBase = YES;
    camera.authorization = [NSString stringWithFormat:@"%@ %@", [[DHDataCenter sharedInstance] getTokenType], [[DHDataCenter sharedInstance] getLoginToken]];
    NSString* handleRestToken = [[DHDataCenter sharedInstance] getLoginToken];
    camera.dpRestToken = handleRestToken;
    camera.isUseHttps = YES;
    
    NSError *error = nil;
    DSSMediaVKInfo *vkInfo = [[DHDeviceManager sharedInstance] queryCurrentMediaVKByDeviceId:channelInfo.deviceId error:&error];
    if(vkInfo.videoKey){
        camera.psk = vkInfo.vkIdAndVk;
        camera.isEncrypt = YES;
    }
    if ([self isThirdStreamSupported:local_channelId]) {
        camera.streamType = 2;
    } else {
        if ([self isSubStreamSupported:local_channelId]) {
            camera.streamType = 2;
        } else {
            camera.streamType = 1;
        }
    }
   
    if(camera.streamType == 1){
        [self.playWndToolView.streamBtn setTitle:@"主码流" forState:UIControlStateNormal];
    } else if (camera.streamType == 2) {
        [self.playWndToolView.streamBtn setTitle:@"辅码流" forState:UIControlStateNormal];
    } else {
        [self.playWndToolView.streamBtn setTitle:@"三码流" forState:UIControlStateNormal];
    }
    
    [self.playWindow addCamera:camera at:winIndex recordType:RecordTypeMp4];
    //播放
    [self.playWindow play:winIndex];
   
}

- (void)cancelButtonClicked {
    [self.streamSelectView resetHDViewButtonStatue];
    self.streamSelectBGView.hidden = YES;
}

#pragma mark - DSSRealUIServiceProtocol - ptz
//手指按下
- (void)ptzBtnClickAdd:(PtzControlType )type touchDown:(BOOL)isDown{
    switch (type) {
        case 0:
        {
            //touch up inside need stop
            NSError *error = nil;
            [[DHDeviceManager sharedInstance] ptz:self.selectChannelId operation:MBL_PTZ_OPERATION_ADD_ZOOM step:2 stop:isDown error:&error];
        }
            break;
        case 1:
        {
            //touch up inside need stop
            NSError *error = nil;
            [[DHDeviceManager sharedInstance] ptz:self.selectChannelId operation:MBL_PTZ_OPERATION_ADD_FOCUS step:2 stop:isDown error:&error];
        }
            break;
        case 2:
        {
            //touch up inside need stop
            NSError *error = nil;
            [[DHDeviceManager sharedInstance] ptz:self.selectChannelId operation:MBL_PTZ_OPERATION_ADD_APERTURE step:2 stop:isDown error:&error];
        }
            break;
            
        default:
            break;
    }
}

- (void)ptzBtnClickReduce:(PtzControlType )type touchDown:(BOOL)isDown{
    switch (type) {
        case 0:
        {
            NSError *error = nil;
            [[DHDeviceManager sharedInstance] ptz:self.selectChannelId operation:MBL_PTZ_OPERATION_REDUCE_ZOOM step:2 stop:isDown error:&error];
        }
            break;
        case 1:
        {
            NSError *error = nil;
            [[DHDeviceManager sharedInstance] ptz:self.selectChannelId operation:MBL_PTZ_OPERATION_REDUCE_FOCUS step:2 stop:isDown error:&error];
        }
            break;
        case 2:
        {
            NSError *error = nil;
            [[DHDeviceManager sharedInstance] ptz:self.selectChannelId operation:MBL_PTZ_OPERATION_REDUCE_APERTURE step:2 stop:isDown error:&error];
        }
            break;
        default:
            break;
    }
}

#pragma mark - DSSRealUIServiceProtocol - play window tool
//播放、停止
-(void)DSSPlayWndToolbarViewDidClickPlay:(BOOL)isOn{
    NSInteger selectIndex = [self.playWindow selectedWinIndex];
    
    if (self.selectChannelId == nil || [self.selectChannelId isEqualToString:@""]) {
        NSLog(@"Before playing,add the channel first");
        return;
    }
    [self.playWndToolView.playBtn setEnabled:YES];
    if ([self isPlaying]) {
        [self.playWindow stop:selectIndex];
    } else {
        [self.playWindow play:selectIndex];
    }
}
//打开/关闭声音
-(void)DSSPlayWndToolbarViewDidClickVoice:(BOOL)isOn{
    NSInteger selectIndex = [self.playWindow selectedWinIndex];
    if ([self isPlaying]) {
        if ([self isAudioOpen]) {
            [self.playWindow closeAudio:selectIndex];
        } else {
            if ([self isTalking]) {
                [self stopTalk];
            }else{
                [self.playWindow stopTalk:selectIndex];
            }
            [self.playWindow openAudio:selectIndex];
        }
    } else {
        [self.playWndToolView.voiceBtn setSelected:NO];
    }
}

//选择码流
-(void)DSSPlayWndToolbarViewDidClickStream:(BOOL)isOn{
   
    return;
    
    NSInteger winIndex = [self.playWindow selectedWinIndex];
    Camera* camera = [self.playWindow getCamera:winIndex];
    if ([camera isKindOfClass:[DSSRTCamera class]]) {
        int streamType = [self getSelectStreamType];
        NSString *channelIdStr = self.selectChannelId;
        self.streamSelectBGView.hidden = NO;
        [self.streamSelectView resetHDBtnSelectedStatue:streamType];
        if ([self isThirdStreamSupported:channelIdStr]) {
            [self.streamSelectView.LCButton setEnabled:YES];
            [self.streamSelectView.SDButton setEnabled:YES];
            [self.streamSelectView.HDButton setEnabled:YES];
        } else {
            [self.streamSelectView.LCButton setEnabled:NO];
            [self.streamSelectView.HDButton setEnabled:YES];
            if ([self isSubStreamSupported:channelIdStr]) {
                [self.streamSelectView.SDButton setEnabled:YES];
            } else {
                [self.streamSelectView.SDButton setEnabled:NO];
            }
        }
    }
}

- (int)getSelectStreamType{
    NSInteger selectIndex = [self.playWindow selectedWinIndex];
    Camera* camera = [self.playWindow getCamera:selectIndex];
    int streamType = 1;
    if ([camera isKindOfClass:[DSSRTCamera class]]) {
        DSSRTCamera* dpsRTCamera = (DSSRTCamera*)camera;
        streamType = dpsRTCamera.streamType;
    }
    return streamType;
}

- (BOOL)isSubStreamSupported:(NSString *)channelIDStr{
    if (channelIDStr != nil || ![channelIDStr isEqualToString:@""]) {
        DSSChannelInfo* channelInfo = (DSSChannelInfo *)[DHDataCenter sharedInstance].selectNode.content;
        if(channelInfo.encChannelInfo.streamtypeSupported == 2){
            return YES;
        }
        return NO;
    }
    return NO;
}
- (BOOL)isThirdStreamSupported:(NSString *)channelIDStr{
    if (channelIDStr != nil || ![channelIDStr isEqualToString:@""]) {
        DSSChannelInfo* channelInfo = (DSSChannelInfo *)[DHDataCenter sharedInstance].selectNode.content;
        if(channelInfo.encChannelInfo.streamtypeSupported == 3){
            return YES;
        }
        return NO;
    }
    return NO;
}

#pragma mark - DSSRealUIServiceProtocol - Snapshot、Record 、Talk、Ptz
//抓图
-(void)mainToolbarViewDidClickSnapshot{
    NSInteger selectIndex = [self.playWindow selectedWinIndex];
    BOOL isPlaying = [self.playWindow isPlaying:selectIndex];
    if (isPlaying) {
        NSString *filePath = [self.playWindow snapshot:selectIndex filePath:nil];
    }
}
//录像
-(void)mainToolbarViewDidClickRecord:(BOOL)isOn{
    if ([self freeDiskSpaceInMBytes] < 10.0) {
        NSLog(@"空间不足");
        return;
    }
    NSInteger winIndex = [self.playWindow selectedWinIndex];
    if ([self isPlaying]) {
        if ([self isRecording]) {
            [self.mainBarView.recordBtn setSelected:NO];
            [self.playWindow stopRecord:winIndex];
        } else {
            [self.mainBarView.recordBtn setSelected:YES];
            NSString *filePath =  [self.playWindow startRecord:winIndex filePath:nil withAudio:YES];
        }
    } else {
        [self.mainBarView.recordBtn setSelected:NO];
    }
}
//free disk space
- (double)freeDiskSpaceInMBytes
{
    struct statfs buf;
    long long freespace = -1;
    if(statfs("/var", &buf) >= 0)
    {
        freespace = (long long)(buf.f_bsize * buf.f_bfree);
    }
    return freespace/(1024.0*1024.0);
}
//开启、关闭对讲
-(void)mainToolbarViewDidClickTalk:(BOOL)isOn{
    DSSChannelInfo* channelInfo = (DSSChannelInfo *)[DHDataCenter sharedInstance].selectNode.content;
    DSSDeviceInfo *deviceInfo = [[DHDeviceManager sharedInstance] getDeviceInfo:[channelInfo deviceId]];
    if ((deviceInfo.nDevRight & MBL_CHNL_RIGHT_VOICE_TALK) == 0) {
        return;
    }
    //获取当前窗口号
    NSInteger selectIndex = [self.playWindow selectedWinIndex];
    if ([self isPlaying]) {
        //如果正在对讲，关闭对讲
        if ([self isTalking]) {
            [self.playWindow stopTalk:selectIndex];
        } else {
            //关闭视频声音
            if ([self isAudioOpen]) {
                [self.playWindow closeAudio:selectIndex];
                [self.playWndToolView.voiceBtn setSelected:NO];
            }
            MBProgressHUD *hud = [MBProgressHUD showHUDAddedTo:self.view animated:YES];
            hud.label.text = @"Loading";
            BOOL nRet = NO;
            //开启对讲
            if ([self isNeedChannelTalk:channelInfo.channelid]) {
                nRet = [self.playWindow startChannelTalk:selectIndex];
            } else {
                nRet = [self.playWindow startTalk:selectIndex];
            }
            if (nRet) {
                NSLog(@"open talk success");
                MSG("", @"open talk success", "");
            } else {
                [self.mainBarView.talkBtn setSelected:NO];
                [MBProgressHUD hideHUDForView:self.view animated:YES];
                NSLog(@"Failed to open");
                MSG("", @"Failed to open", "");
            }
        }
    } else {
        [self.mainBarView.talkBtn setSelected:NO];
    }
}

- (void)stopTalk{
    NSInteger selectIndex = [self.playWindow selectedWinIndex];
    [self.playWindow stopTalk:selectIndex];
    [self.mainBarView.talkBtn setSelected:NO];
}

- (BOOL)isNeedChannelTalk:(NSString *)channelId {
    DSSChannelInfo *channelInfo = [[DHDeviceManager sharedInstance] getChannelInfo:channelId];
    DSSDeviceInfo *deviceInfo = [[DHDeviceManager sharedInstance] getDeviceInfo:channelInfo.deviceId];
    if (deviceInfo.devicetype == MBL_DEV_TYPE_NVR ||
        deviceInfo.devicetype == MBL_DEV_TYPE_SMART_NVR ||
        deviceInfo.devicetype == MBL_DEV_TYPE_MNVR ||
        deviceInfo.devicetype == MBL_DEV_TYPE_IVSS ||
        deviceInfo.devicetype == MBL_DEV_TYPE_EVS) {
        return YES;
    } else {
        return NO;
    }
}

//云台
-(void)mainToolbarViewDidClickPTZ:(BOOL)isOn{
    NSInteger selectIndex = [self.playWindow selectedWinIndex];
    if ([self isPlaying]) {
        if (!self.ptzToolBarView.hidden) {
            [self.playWindow setEnablePtz:selectIndex enable:NO];
            self.ptzToolBarView.hidden = YES;
            self.ptzControlView.hidden = YES;
            [self.ptzToolBarView resetButtonStatue];
            [self.mainBarView.ptzBtn setSelected:NO];
        } else {
            [self.playWindow setEnablePtz:selectIndex enable:YES];
            self.ptzToolBarView.hidden = NO;
            [self.mainBarView.ptzBtn setSelected:YES];
        }
    } else {
        [self.mainBarView.ptzBtn setSelected:NO];
    }
}
#pragma mark - Stream：HD、SD、LC
- (void)DSSStreamPanelDelegateSelectHD{
    int currentStreamType = [self getSelectStreamType];
    if (currentStreamType == DSSMainStreamType) {
        return;
    }
    [self changeStreamType:DSSMainStreamType];
}
- (void)DSSStreamPanelDelegateSelectSD{
    int currentStreamType = [self getSelectStreamType];
    if (currentStreamType == DSSSubStreamType) {
        return;
    }
    [self changeStreamType:DSSSubStreamType];
}
- (void)DSSStreamPanelDelegateSelectLC{
    int currentStreamType = [self getSelectStreamType];
    if (currentStreamType == DSSThirdStreamType) {
        return;
    }
    [self changeStreamType:DSSThirdStreamType];
}
//切换码流
- (void)changeStreamType:(DSSStreamType)type{
    [self.streamSelectView resetHDBtnSelectedStatue:type];
    //stop
    NSInteger selectIndex = [self.playWindow selectedWinIndex];
    [self.playWindow stopRecord:selectIndex];
    [self.playWindow stopTalk:selectIndex];
    [self.playWindow setEnablePtz:selectIndex enable:NO];
    [self.playWindow stop:selectIndex];
    [self resetButtonsWithSelectedWindowIndex:selectIndex];
    
    //when change stream type, stop play ,then reset camera to play
    DSSUserInfo* userinfo = [DHLoginManager sharedInstance].userInfo;
    DSSChannelInfo* channelInfo = (DSSChannelInfo *)[DHDataCenter sharedInstance].selectNode.content;
    DSSDeviceInfo *deviceInfo = [[DHDeviceManager sharedInstance] getDeviceInfo:[channelInfo deviceId]];
    DSSRTCamera* camera = [[DSSRTCamera alloc] init];
    camera.server_ip =  [[DHDataCenter sharedInstance] getHost];
    camera.server_port = [[DHDataCenter sharedInstance] getPort];
    camera.cameraID = channelInfo.channelid ? channelInfo.channelid : self.selectChannelId;
    camera.deviceID = channelInfo.deviceId;
    camera.isCheckPermission = YES;
    camera.mediaType = 1;
    camera.bCloudBase = NO;
    camera.bEVOBase = YES;
    camera.authorization = [NSString stringWithFormat:@"%@ %@", [[DHDataCenter sharedInstance] getTokenType], [[DHDataCenter sharedInstance] getLoginToken]];
    NSString* handleRestToken = [[DHDataCenter sharedInstance] getLoginToken];
    NSNumber* handleDPSDKEntity = (NSNumber*)[userinfo getInfoValueForKey:kUserInfoHandleDPSDKEntity];
    camera.dpHandle = [handleDPSDKEntity longValue];
    camera.dpRestToken = handleRestToken;
    camera.isUseHttps = YES;
    
    NSError *error = nil;
    DSSMediaVKInfo *vkInfo = [[DHDeviceManager sharedInstance] queryCurrentMediaVKByDeviceId:channelInfo.deviceId error:&error];
    if(vkInfo.videoKey){
        camera.psk = vkInfo.vkIdAndVk;
        camera.isEncrypt = YES;
    }
    int streamType = 1;
    if (type == DSSMainStreamType) {
        streamType = 1;
    } else if (type == DSSSubStreamType){
        streamType = 2;
    } else {
        streamType = 3;
    }
    camera.streamType = streamType;
    if(camera.streamType == 1){
        [self.playWndToolView.streamBtn setTitle:@"主码流" forState:UIControlStateNormal];
    } else if (camera.streamType == 2) {
        [self.playWndToolView.streamBtn setTitle:@"辅码流" forState:UIControlStateNormal];
    } else {
        [self.playWndToolView.streamBtn setTitle:@"三码流" forState:UIControlStateNormal];
    }
    [self.playWindow showWaitProgress:selectIndex];
    RunOnMainThread(
                    [self.playWindow addCamera:camera at:selectIndex recordType:deviceInfo.deviceProvide];
                    [self.playWindow play:selectIndex];
                    )
    
}

#pragma mark PtzToolbarProtocol
-(void)DSSPtzToolbarViewDidClickZoom:(BOOL)isOn{
    self.ptzControlView.ptzType = PtzControlTypeZoom;
    [self.ptzControlView.ptzTitleBtn setTitle:@"Zoom" forState:UIControlStateNormal];
    self.ptzControlView.hidden = YES;
    if (!isOn) {
        self.ptzControlView.hidden = NO;
    }
    [self.ptzToolBarView resetBtnSelectStatue:0];
}

- (void)DSSPtzToolbarViewDidClickFocus:(BOOL)isOn{
    self.ptzControlView.ptzType = PtzControlTypeFocus;
    [self.ptzControlView.ptzTitleBtn setTitle:@"Focus" forState:UIControlStateNormal];
    self.ptzControlView.hidden = YES;
    if (!isOn) {
        self.ptzControlView.hidden = NO;
    }
    [self.ptzToolBarView resetBtnSelectStatue:1];
}
- (void)DSSPtzToolbarViewDidClickRing:(BOOL)isOn{
    self.ptzControlView.ptzType = PtzControlTypeAperture;
    [self.ptzControlView.ptzTitleBtn setTitle:@"Aperture" forState:UIControlStateNormal];
    self.ptzControlView.hidden = YES;
    if (!isOn) {
        self.ptzControlView.hidden = NO;
    }
    [self.ptzToolBarView resetBtnSelectStatue:2];
}

- (void)DSSPtzToolbarViewDidClickPoint:(BOOL)isOn{
    NSLog(@"Click prepoint");
    DSSChannelInfo *channelInfo = (DSSChannelInfo *)[DHDataCenter sharedInstance].selectNode.content;
    [self getPresetList:channelInfo.channelid];
    self.lsPresetBGView.hidden = NO;
}

- (void)getPresetList:(NSString *)local_channelId{
    NSError *error;
    self.presetArr = [[DHDeviceManager sharedInstance] queryPtzPrePoint:local_channelId error:&error];
//    [self.lsPresetTableView reloadData];
}

- (BOOL)gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldReceiveTouch:(UITouch *)touch{
//    if ([touch.view isDescendantOfView:self.lsPresetTableView]) {
//        return NO;
//    }
    return YES;
}

- (void)hiddenPresetView {
    self.lsPresetBGView.hidden = YES;
}

#pragma mark - UITableViewDataSource prepoint
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return self.presetArr.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"cellId"];
    if (cell == nil) {
        cell = [[UITableViewCell alloc]initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"cellId"];
    }
    DSSPtzPrePointInfo *info = nil;
    if (self.presetArr.count > 0) {
        info = [self.presetArr objectAtIndex:indexPath.row];
        cell.textLabel.text = info.name;
    }
    cell.textLabel.font = [UIFont systemFontOfSize:17];
    cell.backgroundColor = [UIColor clearColor];
    [cell.textLabel setTextColor:[UIColor blackColor]];
    cell.selectionStyle = UITableViewCellSelectionStyleDefault;
    
    return cell;
}

#pragma mark - UITableViewDelegate
- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath{
    return 50;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    __block int code = 1;
    DSSPtzPrePointInfo *info = [[DSSPtzPrePointInfo alloc] init];
    if (self.presetArr.count > 0) {
        info = [self.presetArr objectAtIndex:indexPath.row];
        code = info.code;
    }
    NSError *error = nil;
    [[DHDeviceManager sharedInstance] ptz:self.selectChannelId location:code error:&error];
}

//update button status
- (void)updateBtnStatus:(int)winIndex{
    [self.playWndToolView.playBtn setSelected:NO];
    [self.mainBarView.recordBtn setSelected:NO];
    if ([self.playWindow isRecording:winIndex]) {
        [self.playWindow stopRecord:winIndex];
    }
    [self.playWndToolView.voiceBtn setSelected:NO];
    if ([self.playWindow isAudioOpened:winIndex]) {
        [self.playWindow closeAudio:winIndex];
    }
    [self.mainBarView.talkBtn setSelected:NO];
    if ([self.playWindow isTalking:winIndex]) {
        [self.playWindow stopTalk:winIndex];
    }
    
    self.ptzToolBarView.hidden = YES;
    self.ptzControlView.hidden = YES;
    [self hiddenPtzView];
    [self.mainBarView.ptzBtn setSelected:NO];
    [self.playWindow setEnablePtz:winIndex enable:NO];
}

- (void)resetButtonsWithSelectedWindowIndex:(NSInteger)selectedWindowIndex{
    if (![self.playWindow isRecording:selectedWindowIndex]) {
        [self.mainBarView.recordBtn setSelected:NO];
    }else{
        [self.mainBarView.recordBtn setSelected:YES];
    }
    if (![self.playWindow isAudioOpened:selectedWindowIndex]) {
        [self.playWndToolView.voiceBtn setSelected:NO];
    }else{
        [self.playWndToolView.voiceBtn setSelected:YES];
    }
    if (![self.playWindow isTalking:selectedWindowIndex]) {
        [self.mainBarView.talkBtn setSelected:NO];
    }else{
        [self.mainBarView.talkBtn setSelected:YES];
    }
    self.ptzToolBarView.hidden = YES;
    self.ptzControlView.hidden = YES;
    [self hiddenPtzView];
    [self.mainBarView.ptzBtn setSelected:NO];
}

// hide ptz view
- (void)hiddenPtzView{
    // reset button status
    [self.ptzToolBarView resetButtonStatue];
}

#pragma mark - play state
- (BOOL)isRecording{
    NSInteger selectIndex = [self.playWindow selectedWinIndex];
    BOOL isRecording = [self.playWindow isRecording:selectIndex];
    return isRecording;
}
- (BOOL)isPlaying{
    NSInteger selectIndex = [self.playWindow selectedWinIndex];
    BOOL isPlaying = [self.playWindow isPlaying:selectIndex];
    return isPlaying;
}
- (BOOL)isTalking{
    NSInteger selectIndex = [self.playWindow selectedWinIndex];
    BOOL isTalking = [self.playWindow isTalking:selectIndex];
    return isTalking;
}

- (BOOL)isAudioOpen{
    NSInteger selectIndex = [self.playWindow selectedWinIndex];
    BOOL isAudioOpen = [self.playWindow isAudioOpened:selectIndex];
    return isAudioOpen;
}

#pragma mark - MediaPlayListenerProtocol
- (void)onPlayeStatusCallback:(NSUInteger)winIndex status:(enum PlayStatusType)status code:(NSInteger)code {
    dispatch_async(dispatch_get_main_queue(), ^{
        switch (status) {
            case PlayStatusTypeEPlayFirstFrame:{
                [self.playWndToolView setButtonIndex:0 Selected:[self isPlaying]];
                [self.playWndToolView setButtonIndex:1 Selected:[self isAudioOpen]];
            }
                break;
            case PlayStatusTypeENetworkaAbort:
            case PlayStatusTypeEPlayNoAuthority:
            case PlayStatusTypeEPlayFailed:
            {
                [self.playWindow stop:winIndex];
                self.mainBarView.talkBtn.selected = NO;
                self.playWndToolView.playBtn.selected = NO;
                self.mainBarView.recordBtn.selected = NO;
                self.playWndToolView.voiceBtn.selected = NO;
                self.ptzToolBarView.hidden = YES;
                self.ptzControlView.hidden = YES;
                [self hiddenPtzView];
                self.mainBarView.ptzBtn.selected = NO;
            }
                break;
            default:
                break;
        }
        [self.playWindow setEnableElectricZoom:winIndex enable:YES];
    });
}

- (void)onControlClick:(NSUInteger)winIndex type:(enum WinControlType)type {
    switch (type) {
        case WinControlTypeAdd:
            // add
            break;
        case WinControlTypeReplay:
            // replay
            break;
        default:
            break;
    }
}

#pragma mark - PTZListenerProtocol
- (void)onPTZControl:(NSUInteger)winIndex ptzType:(enum PtzOperation)ptzType stop:(BOOL)stop {
    Camera* camera = [self.playWindow getCamera:winIndex];
    NSString* chanelid = nil;
    if ([camera isKindOfClass:[DSSRTCamera class]]) {
        DSSRTCamera* dpsRTCamera = (DSSRTCamera*)camera;
        chanelid = dpsRTCamera.cameraID;
    }
    else {
        NSAssert(NO, @"");
        return;
    }
    MBL_PTZ_DIRECTION_GO direction = MBL_PTZ_DIRECTION_GO_UP;
    
    switch (ptzType) {
        case PtzOperationDirectionLeft:
            direction = MBL_PTZ_DIRECTION_GO_LEFT;
            break;
        case PtzOperationDirectionRight:
            direction = MBL_PTZ_DIRECTION_GO_RIGHT;
            break;
        case PtzOperationDirectionUp:
            direction = MBL_PTZ_DIRECTION_GO_UP;
            break;
        case PtzOperationDirectionDown:
            direction = MBL_PTZ_DIRECTION_GO_DOWN;
            break;
        case PtzOperationDirectionLeftUp:
            direction = MBL_PTZ_DIRECTION_GO_LEFTUP;
            break;
        case PtzOperationDirectionRightUp:
            direction = MBL_PTZ_DIRECTION_GO_RIGHTUP;
            break;
        case PtzOperationDirectionLeftDown:
            direction = MBL_PTZ_DIRECTION_GO_LEFTDOWN;
            break;
        case PtzOperationDirectionRightDown:
            direction = MBL_PTZ_DIRECTION_GO_RIGHTDOWN;
            break;
        case PtzOperationZoomIn: {
            NSError *error = nil;
            [[DHDeviceManager sharedInstance] ptz:self.selectChannelId operation:MBL_PTZ_OPERATION_REDUCE_ZOOM step:2 stop:stop error:&error];
            return;
        }
            break;
        case PtzOperationZoomOut: {
            NSError *error = nil;
            [[DHDeviceManager sharedInstance] ptz:self.selectChannelId operation:MBL_PTZ_OPERATION_ADD_ZOOM step:2 stop:stop error:&error];
            return;
        }
            break;
        default:
            return;
    }
    dispatch_async(self.ptzQueue, ^{
        NSError *error = nil;
        [[DHDeviceManager sharedInstance] ptz:self.selectChannelId direction:direction step:2 stop:stop error:&error];
    });
}

#pragma mark - TalkListenerProtocol
- (void)onTalkResult:(NSUInteger)winIndex result:(enum TalkResultType)result code:(NSInteger)code {
    if (result == TalkResultTypeETalkSuccess) {
        dispatch_async(dispatch_get_main_queue(), ^{
            [self.mainBarView.talkBtn setSelected:YES];
            [MBProgressHUD hideHUDForView:self.view animated:YES];
            NSLog(@"Open Successfully");
            MSG("", @"Open Successfully", "");
        });
    } else {
        NSInteger selectIndex = [self.playWindow selectedWinIndex];
        dispatch_async(dispatch_get_main_queue(), ^{
            [self.playWindow stopTalk:selectIndex];
            [self.mainBarView.talkBtn setSelected:NO];
            [MBProgressHUD hideHUDForView:self.view animated:YES];
            NSLog(@"Failed to open");
            MSG("", @"Failed to open", "");
        });
    }
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
