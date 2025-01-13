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

@interface DHPreviewViewController () <UITableViewDelegate,UITableViewDataSource,DSSPtzToolbarDelegate,DSSMainToolBarDelegate,DSSPlayWndToolBarDelegate,DSSRealStreamViewDelegate,PtzControlViewDelegate,DHWindowListenerProtocol,DHPlayListenerProtocol,DHPTZListenerProtocol,DHTalkListenerProtocol,UIGestureRecognizerDelegate>

//当前播放的通道id
@property (nonatomic, copy)   NSString                  * selectChannelId;
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
    
    _playWindow = [[DHMediaPlayView alloc] init];
    [self.view addSubview:_playWindow];
    [_playWindow mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.mas_equalTo(0);
        make.left.right.mas_equalTo(0);
        make.height.mas_equalTo(SCREEN_WIDTH/4*3);
    }];
    
    
    //初始化播放窗口
    DSSUserInfo* userinfo = [DHLoginManager sharedInstance].userInfo;
    NSString *host = [[DHDataCenter sharedInstance] getHost];
    [_playWindow setHost:host userName:userinfo.userName];
    [_playWindow setDefultSplitNumber:1];
    [_playWindow setNeedAutoAppendPage:NO];
    [DHPlayConfig shareInstance].maxWindowCount = 1;
    self.selectChannelId = ((DSSChannelInfo *)[DHDataCenter sharedInstance].selectNode.content).channelid;
   
    
    //更新码流按钮title
//    [self setMainToolBarStreamBtnTitle];
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
    camera.cameraID = channelInfo.channelid;
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
   
//    if(camera.streamType == 1){
//        [self.playWndToolView.streamBtn setTitle:@"主码流" forState:UIControlStateNormal];
//    } else if (camera.streamType == 2) {
//        [self.playWndToolView.streamBtn setTitle:@"辅码流" forState:UIControlStateNormal];
//    } else {
//        [self.playWndToolView.streamBtn setTitle:@"三码流" forState:UIControlStateNormal];
//    }
    
    [self.playWindow addCamera:camera at:winIndex recordType:RecordTypeMp4];
    //播放
    [self.playWindow play:winIndex];
   
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


- (int )getSelectStreamType{
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

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/


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

@end
