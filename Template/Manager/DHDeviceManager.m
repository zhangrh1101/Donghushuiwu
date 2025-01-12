//
//  DHDeviceManager.m
//  DataAdapterExample_Example
//
//  Created by 32943 on 2018/1/31.
//  Copyright © 2018年 ly. All rights reserved.
//

#import "DHDeviceManager.h"
#import <ICCDataAdapterDevice/DPRestProSDKDataAdapterDevice.h>
#import "DHLoginManager.h"
#import "DHDataCenter.h"

@implementation TreeNode
@end

@interface DHDeviceManager()
@property (nonatomic, strong) DPRestProSDKDataAdapterDevice *deviceAdapter;
@property (nonatomic, assign) BOOL islogicalTree;
@property (nonatomic, strong) NSMutableDictionary<NSString *, DSSGroupInfo *> *groupMap; //组织
@property (nonatomic, strong) NSMutableDictionary<NSString *, DSSDeviceInfo *> *deviceMap; //设备
@property (nonatomic, strong) NSMutableDictionary<NSString *, DSSChannelInfo *> *channelMap; //通道
@property (nonatomic, strong) NSMutableDictionary<NSString *, NSNumber *> *statusMap; //设备通道状态
@property (nonatomic, strong) NSMutableDictionary<NSString *, NSString *> *callNumMap; //设备号码
@end

static DHDeviceManager* g_deviceManager = nil;

@implementation DHDeviceManager
+ (DHDeviceManager *)sharedInstance
{
    if (!g_deviceManager) {
        g_deviceManager = [[self alloc] init];
    }
    return g_deviceManager;
}

+ (void)unSharedInstance {
    if (g_deviceManager) {
         g_deviceManager = nil;
    }
}

- (instancetype)init {
    self = [super init];
    if (self)
    {
        __weak typeof(self) weakSelf = self;
        //初始化设备模块
        _deviceAdapter = [[DPRestProSDKDataAdapterDevice alloc] init];
        //添加设备通知处理
        _deviceAdapter.remoteNotifyBlock = ^(ADAPTER_NOTIFY_ACTION action, id content) {
            //TODO
            switch (action) {
                case ADAPTER_NOTIFY_ACTION_ADD_DEVICE_MQ:
                   //add device
                    // content:  @{@"groupId":  NSString , @"devices": NSArray}
                    break;
                case ADAPTER_NOTIFY_ACTION_MODIFY_DEVICE_MQ:
                    //modify device
                    //content: dictionary
                    break;
                case ADAPTER_NOTIFY_ACTION_MOVE_DEVICE:
                   //move device
                   //content: @{@"oldParentId":  NSString ,@"newParentId":  NSString , @"deviceId": NSString}
                    break;
                case ADAPTER_NOTIFY_ACTION_DELETE_DEVICE:
                    //delete device
                    // content: deviceid NSString
                    break;
                case ADAPTER_NOTIFY_ACTION_ADD_ORG:
                    //add group
                    //content: groupInfo
                    break;
                case ADAPTER_NOTIFY_ACTION_MODIFY_ORG:
                    //modify group
                     //content: groupInfo
                    break;
                case ADAPTER_NOTIFY_ACTION_DELETE_ORG:
                    //delete group
                    //content: groupid NSString
                    break;
                case ADAPTER_NOTIFY_ACTION_DEVICE_STATUS:
                    //设备状态变更
                {
                    NSString *deviceid = [(NSDictionary *)content objectForKey:@"deviceId"];
                    BOOL isOnline = [[(NSDictionary *)content objectForKey:@"status"] boolValue];
                    [weakSelf dealDeviceStatus:deviceid status:isOnline];
                }
                    break;
                case ADAPTER_NOTIFY_ACTION_CHANNEL_STATUS:
                    //通道状态变更
                {
                    NSString *channelid = [(NSDictionary *)content objectForKey:@"channelId"];
                    BOOL isOnline = [[(NSDictionary *)content objectForKey:@"status"] boolValue];
                    DSSChannelInfo *channelInfo = [weakSelf getChannelInfo:channelid];
                    if (channelInfo && channelInfo.isOnline != isOnline) {
                        channelInfo.isOnline = isOnline;
                        [[NSNotificationCenter defaultCenter] postNotificationName:@"DEVICE_ACTION_CHANNEL_STATUS" object:channelInfo userInfo:nil];
                    }
                     [weakSelf.statusMap setObject:@(isOnline) forKey:channelid];
                }
                    break;
                case ADAPTER_NOTIFY_ACTION_LOGIC_ORG_CHANGED:
                    break;
                case ADAPTER_NOTIFY_ACTION_ROLE_ORG_CHANGED:
                    break;
                case ADAPTER_NOTIFY_ACTION_USER_ROLE_CHANGED:
                    break;
                default:
                    break;
            }
        };
        _treeNodeDic = [[NSMutableDictionary alloc] init];
        _groupMap = [[NSMutableDictionary alloc] init];
        _deviceMap = [[NSMutableDictionary alloc] init];
        _channelMap = [[NSMutableDictionary alloc] init];
        _callNumMap = [[NSMutableDictionary alloc] init];
        _isShowDevice = YES;
    }
    
    return self;
}

- (void)afterLoginOutExcute:(DSSUserInfo *)userInfo {
    [_deviceAdapter afterLoginOutExcute:userInfo];
}

- (void)afterLoginInExcute:(DSSUserInfo *)userInfo {
    [_deviceAdapter afterLoginInExcute:userInfo];
}

- (DSSGroupInfo *)getGroupInfo:(NSString *)groupId {
    return _groupMap[groupId];
}

- (DSSDeviceInfo *)getDeviceInfo:(NSString *)deviceId {
    return _deviceMap[deviceId];
}

- (DSSChannelInfo *)getChannelInfo:(NSString *)channelId {
    return _channelMap[channelId];
}

- (TreeNode *)loadDeviceTree:(NSError**)error {
    _islogicalTree = NO;
    DSSGroupInfo *rootGroup = nil;
    __weak typeof(self) weakSelf = self;
    //加载组织信息
    NSLog(@"-------->加载组织信息");
    rootGroup = [_deviceAdapter getRootGroupWithGroupBlock:^(DSSGroupInfo *groupInfo) {
        TreeNode *node = [[TreeNode alloc] init];
        node.nodeType = TREENODE_TYPE_GROUP;
        node.content = groupInfo;
        if (!weakSelf.groupMap[groupInfo.groupid]) {
            [weakSelf.treeNodeDic setValue:node forKey:[groupInfo.groupid copy]];
            [weakSelf.groupMap setValue:groupInfo forKey:[groupInfo.groupid copy]];
        }
        return YES;
    }];
    
    if(rootGroup) {
        _parentGroupNode = _treeNodeDic[rootGroup.groupid];
        _islogicalTree = [_deviceAdapter isLogicTree];
        //加载设备
        NSLog(@"-------->加载设备信息");
        if (_isShowDevice) {
            [self loadDevices:rootGroup];
        } else {
            [self loadChannels:rootGroup];
        }
//        //设备呼叫号码需要查询vims平台设备信息
//        NSArray <DSSDeviceInfo *>* vimsDevices = [self getVimsDeviceList:error];
//        for (DSSDeviceInfo *vimsDeviceInfo in vimsDevices) {
//            if (vimsDeviceInfo && vimsDeviceInfo.videoTalkDeviceInfo) {
//                [self.callNumMap setObject:vimsDeviceInfo.deviceid forKey:vimsDeviceInfo.videoTalkDeviceInfo.callNum];
//                NSLog(@"%@ %@", vimsDeviceInfo.deviceid, vimsDeviceInfo.videoTalkDeviceInfo.callNum);
//            }
//        }
        //隐藏空组织
        NSLog(@"-------->隐藏空组织");
        [self isGroupNeedHidden:_parentGroupNode];
    }
    
    return _parentGroupNode;
}

- (void)loadDevices:(DSSGroupInfo *)groupInfo {
    __weak typeof(self) weakSelf = self;
    if (groupInfo.devices.count == 0) {
        for (NSString *groupId in groupInfo.childgroups) {
            DSSGroupInfo *childGroup = _groupMap[groupId];
            [self loadDevices:childGroup];
        }
        return;
    }
    [_deviceAdapter getDevices:groupInfo.devices withDeviceBlock:^BOOL(NSArray *deviceInfosArray) {
        for (DSSDeviceInfo *deviceInfo in deviceInfosArray) {
            deviceInfo.parentid = [groupInfo.groupid copy];
            NSLog(@"%@:%@:%@",deviceInfo.parentid,deviceInfo.deviceid,deviceInfo.name);
            if (weakSelf.statusMap[deviceInfo.deviceid]) {
                deviceInfo.isOnline = [weakSelf.statusMap[deviceInfo.deviceid] boolValue];
            }
            if (deviceInfo.isOnline && [DSSDeviceInfo isGetChannelStatusByDevType:deviceInfo.devicetype]) {
                [weakSelf.deviceAdapter queryChannelStates:deviceInfo];
            } else {
                for (NSString *channelid in [deviceInfo.channels copy]) {
                    DSSChannelInfo *channelInfo = [weakSelf getChannelInfo:channelid];
                    if(channelInfo && channelInfo.isOnline != deviceInfo.isOnline){
                        channelInfo.isOnline = deviceInfo.isOnline;
                    }
                }
            }
            [weakSelf.deviceMap setValue:deviceInfo forKey:[deviceInfo.deviceid copy]];
            TreeNode *node = [[TreeNode alloc] init];
            node.nodeType = TREENODE_TYPE_DEVICE;
            node.content = deviceInfo;
            [weakSelf.treeNodeDic setValue:node forKey:[deviceInfo.deviceid copy]];
        }
        return YES;
    } channelBlock:^BOOL(NSArray *channelInfosArray) {
        for (DSSChannelInfo *channelInfo in channelInfosArray) {
            channelInfo.parentid = [DHThreadSafeMultableArray arrayWithObjects:[channelInfo.basicParentid copy], nil];
            if (weakSelf.statusMap[channelInfo.channelid]) {
                channelInfo.isOnline = [weakSelf.statusMap[channelInfo.channelid] boolValue];
            }else if (weakSelf.statusMap[channelInfo.deviceId]){
                channelInfo.isOnline = [weakSelf.statusMap[[channelInfo deviceId]] boolValue];
            }
            [weakSelf.channelMap setValue:channelInfo forKey:[channelInfo.channelid copy]];
            TreeNode *node = [[TreeNode alloc] init];
            node.nodeType = TREENODE_TYPE_CHANNEL;
            node.content = channelInfo;
            [weakSelf.treeNodeDic setValue:node forKey:[channelInfo.channelid copy]];
        }
        return YES;
    }];
    for (NSString *groupId in groupInfo.childgroups) {
        DSSGroupInfo *childGroup = _groupMap[groupId];
        [self loadDevices:childGroup];
    }
}

- (void)loadChannels:(DSSGroupInfo *)groupInfo {
    __weak typeof(self) weakSelf = self;
    NSMutableSet *set = [NSMutableSet set];
    for (int i = 0; i < groupInfo.channels.count; i++) {
        NSString *channelId = groupInfo.channels[i];
        NSString *deviceId = [_deviceAdapter getDeviceIdFromChannelId:channelId];
        [set addObject:deviceId];
    }
    NSArray *deviceArray = [set allObjects];
    [_deviceAdapter getDevices:deviceArray withDeviceBlock:^BOOL(NSArray *deviceInfosArray) {
        for (DSSDeviceInfo *deviceInfo in deviceInfosArray) {
            if (weakSelf.statusMap[deviceInfo.deviceid]) {
                deviceInfo.isOnline = [weakSelf.statusMap[deviceInfo.deviceid] boolValue];
            }
            if (deviceInfo.isOnline && [DSSDeviceInfo isGetChannelStatusByDevType:deviceInfo.devicetype]) {
                [weakSelf.deviceAdapter queryChannelStates:deviceInfo];
            } else {
                for (NSString *channelid in [deviceInfo.channels copy]) {
                    DSSChannelInfo *channelInfo = [weakSelf getChannelInfo:channelid];
                    if(channelInfo && channelInfo.isOnline != deviceInfo.isOnline){
                        channelInfo.isOnline = deviceInfo.isOnline;
                    }
                }
            }
            [weakSelf.deviceMap setValue:deviceInfo forKey:[deviceInfo.deviceid copy]];
            TreeNode *node = [[TreeNode alloc] init];
            node.nodeType = TREENODE_TYPE_DEVICE;
            node.content = deviceInfo;
            [weakSelf.treeNodeDic setValue:node forKey:[deviceInfo.deviceid copy]];
            
        }
        return YES;
    } channelBlock:^BOOL(NSArray *channelInfosArray) {
        for (DSSChannelInfo *channelInfo in channelInfosArray) {
           DSSChannelInfo *oldChannelInfo = [weakSelf getChannelInfo:channelInfo.channelid];
            if (oldChannelInfo && ![oldChannelInfo.parentid containsObject:groupInfo.groupid]) {
                [oldChannelInfo.parentid addObject:[groupInfo.groupid copy]];
            } else {
              channelInfo.parentid = [DHThreadSafeMultableArray arrayWithObjects:[groupInfo.groupid copy], nil];
                if (weakSelf.statusMap[channelInfo.channelid]) {
                    channelInfo.isOnline = [weakSelf.statusMap[channelInfo.channelid] boolValue];
                }else if (weakSelf.statusMap[channelInfo.deviceId]){
                    channelInfo.isOnline = [weakSelf.statusMap[channelInfo.deviceId] boolValue];
                }
              [weakSelf.channelMap setValue:channelInfo forKey:[channelInfo.channelid copy]];
                TreeNode *node = [[TreeNode alloc] init];
                node.nodeType = TREENODE_TYPE_CHANNEL;
                node.content = channelInfo;
                [weakSelf.treeNodeDic setValue:node forKey:[channelInfo.channelid copy]];
            }
        }
        return YES;
    }];
    for (NSString *groupId in groupInfo.childgroups) {
        DSSGroupInfo *childGroup = _groupMap[groupId];
        [self loadChannels:childGroup];
    }
}

- (void)dealDeviceStatus:(NSString *)deviceId status:(BOOL)isOnline {
    DSSDeviceInfo *deviceInfo = [self getDeviceInfo:deviceId];
    if(deviceInfo) {
        deviceInfo.isOnline = isOnline;
        if (deviceInfo.isOnline) {
            if ([DSSDeviceInfo isGetChannelStatusByDevType:deviceInfo.devicetype]) {
                [self.deviceAdapter queryChannelStates:deviceInfo];
            } else {
                for (NSString *channelId in deviceInfo.channels) {
                    DSSChannelInfo *channelInfo = [self getChannelInfo:channelId];
                    if (channelInfo && channelInfo.isOnline != isOnline) {
                        channelInfo.isOnline = isOnline;
                        [[NSNotificationCenter defaultCenter] postNotificationName:@"DEVICE_ACTION_CHANNEL_STATUS" object:channelInfo userInfo:nil];
                    }
                }
            }
        } else {
            for (NSString *channelId in deviceInfo.channels) {
                DSSChannelInfo *channelInfo = [self getChannelInfo:channelId];
                if (channelInfo && channelInfo.isOnline != isOnline) {
                    channelInfo.isOnline = isOnline;
                     [[NSNotificationCenter defaultCenter] postNotificationName:@"DEVICE_ACTION_CHANNEL_STATUS" object:channelInfo userInfo:nil];
                }
            }
        }
    }
    [[NSNotificationCenter defaultCenter] postNotificationName:@"DEVICE_ACTION_DEVICE_STATUS" object:deviceInfo userInfo:nil];
    [self.statusMap setObject:@(isOnline) forKey:deviceId];
}

- (BOOL)isGroupNeedHidden:(TreeNode *)groupNode {
    BOOL groupNeedHidden = YES;
    for (NSString *groupId in ((DSSGroupInfo *)groupNode.content).childgroups) {
        TreeNode *tmpGroupNode = _treeNodeDic[groupId];
        if (![self isGroupNeedHidden:tmpGroupNode]) {
            groupNeedHidden = NO;
        }
    }
    for (NSString *channelId in ((DSSGroupInfo *)groupNode.content).channels) {
         TreeNode *tmpChannelNode = _treeNodeDic[channelId];
        if (![self isChannelNeedHidden:tmpChannelNode]) {
            groupNeedHidden = NO;
        }
    }
    for (NSString *deviceId in ((DSSGroupInfo *)groupNode.content).devices) {
        TreeNode *tmpDeviceNode = _treeNodeDic[deviceId];
        if (![self isDeviceNeedHidden:tmpDeviceNode]) {
            groupNeedHidden = NO;
        }
    }
    groupNode.needHidden = groupNeedHidden;
    return groupNeedHidden;
}

- (BOOL)isDeviceNeedHidden:(TreeNode *)deviceNode {
    BOOL deviceNeedHidden = YES;
    for (NSString *channelId in ((DSSDeviceInfo *)deviceNode.content).channels) {
        TreeNode *tmpChannelNode = _treeNodeDic[channelId];
        if (![self isChannelNeedHidden:tmpChannelNode]) {
            deviceNeedHidden = NO;
        }
    }
    deviceNode.needHidden = deviceNeedHidden;
    return deviceNeedHidden;
}

- (BOOL)isChannelNeedHidden:(TreeNode *)channelNode {
    DSSChannelInfo *channelInfo = channelNode.content;
    channelNode.needHidden = YES;
    if(channelInfo.chnlUnitType == MBL_UNIT_ENC){
        if (channelInfo.nChnlRight & (MBL_CHNL_RIGHT_MONITOR|MBL_CHNL_RIGHT_PLAYBACK)) {
            channelNode.needHidden = NO;
            return NO;
        }
    }
    return YES;
}

- (DSSDeviceInfo *)getDeviceInfoByCallNum:(NSString *)callNum {
    NSString *deviceId = self.callNumMap[callNum];
    if (deviceId) {
        DSSDeviceInfo *deviceInfo = self.deviceMap[deviceId];
        if (deviceInfo) {
            deviceInfo.videoTalkDeviceInfo = [[DSSVideoTalkDeviceInfo alloc] init];
            deviceInfo.videoTalkDeviceInfo.callNum = callNum;
            return deviceInfo;
        }
    }

    return nil;
}

- (BOOL)isVideoTalkDevice:(DSSDeviceInfo *)deviceInfo {
    if (deviceInfo.devicetype == 1902 || deviceInfo.devicetype == 1905 || deviceInfo.devicetype == 1907
        || deviceInfo.devicetype == 1908 || deviceInfo.devicetype == 1911 || deviceInfo.devicetype == 1912
        || deviceInfo.devicetype == 1914  || deviceInfo.devicetype == 1915  || deviceInfo.devicetype == 1926) {
        return YES;
    }
    return NO;
}

- (BOOL)ptz:(NSString *)channelid direction:(MBL_PTZ_DIRECTION_GO)direction step:(int)steplength stop:(BOOL)bTry2Stop error:(NSError **)error {
   return [_deviceAdapter ptz:channelid direction:direction step:steplength stop:bTry2Stop error:error];
}

- (BOOL)ptz:(NSString *)channelid operation:(MBL_PTZ_OPERATION)operation step:(int)steplength stop:(BOOL)bTry2Stop error:(NSError **)error {
     return [_deviceAdapter ptz:channelid operation:operation step:steplength stop:bTry2Stop error:error];
}

- (NSArray<DSSPtzPrePointInfo *> *)queryPtzPrePoint:(NSString *)channelid error:(NSError **)error {
     return [_deviceAdapter queryPtzPrePoint:channelid error:error];
}

- (BOOL)ptz:(NSString *)channelid location:(int)prepointcode error:(NSError **)error {
    return [_deviceAdapter ptz:channelid location:prepointcode error:error];
}

/// 查询设备码流加密信息
/// @param deviceId 设备id
/// @param error error
- (DSSMediaVKInfo *)queryCurrentMediaVKByDeviceId:(NSString *)deviceId error:(NSError **)error {
    return [_deviceAdapter queryCurrentMediaVKByDeviceId:deviceId error:error];
}
/// 开门
/// - Parameters:
///   - deviceId: 设备id
///   - error: error
- (BOOL)openDoorWithDeviceId:(NSString *)deviceId error:(NSError **)error {
    return [_deviceAdapter openDoorVims:deviceId error:error];
}
//查询vims平台设备信息
- (NSArray<DSSDeviceInfo *> *)getVimsDeviceList:(NSError **)error {
    return [_deviceAdapter getVimsDeviceListWithPageNo:1 pageSize:1000 containBrm:1000 error:error];
}
@end
