//
//  DHDeviceManager.h
//  DataAdapterExample_Example
//
//  Created by 32943 on 2018/1/31.
//  Copyright © 2018年 ly. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ICCDataAdapterProtocol/ICCDataAdapterProtocol-umbrella.h>

typedef NS_ENUM(NSInteger, TREENODE_TYPE) {
    TREENODE_TYPE_GROUP,  //组织
    TREENODE_TYPE_DEVICE, //设备
    TREENODE_TYPE_CHANNEL //通道
};

@interface TreeNode : NSObject
@property (nonatomic, assign) TREENODE_TYPE nodeType; //节点类型
@property (nonatomic, assign) id content;             //data
@property (nonatomic, assign) BOOL needHidden;        //是否显示
@end

@interface DHDeviceManager : NSObject
@property (nonatomic, strong) TreeNode *parentGroupNode; //根组织
@property (nonatomic, strong) NSMutableDictionary<NSString *, TreeNode *> *treeNodeDic; //nodes map
@property (nonatomic, assign) BOOL isShowDevice; //yes-显示设备/no-显示通道

+ (DHDeviceManager *)sharedInstance;

+ (void)unSharedInstance;
/**
 invoke after login
 
 @param userInfo userInfo
 */

- (void)afterLoginInExcute:(DSSUserInfo *)userInfo;

/**
 invoke after logout
 
 @param userInfo userInfo
 */

- (void)afterLoginOutExcute:(DSSUserInfo *)userInfo;


/**
 加载设备树

 @param error error
 @return root node
 */
- (TreeNode *)loadDeviceTree:(NSError**)error;

/**
 获取组织信息

 @param groupId groupId
 @return groupinfo groupinfo
 */
- (DSSGroupInfo *)getGroupInfo:(NSString *)groupId;

/**
 获取设备信息

 @param deviceId deviceId
 @return deviceinfo deviceinfo
 */
- (DSSDeviceInfo *)getDeviceInfo:(NSString *)deviceId;

/**
 获取通道信息
 
 @param channelId channelId
 @return channelinfo channelinfo
 */
- (DSSChannelInfo *)getChannelInfo:(NSString *)channelId;

/**
 云台操作
 
 @param channelid channelid
 @param direction direction
 @param steplength step
 @param bTry2Stop stop
 @param error error
 @return
 */
- (BOOL)ptz:(NSString *)channelid direction:(MBL_PTZ_DIRECTION_GO)direction step:(int)steplength stop:(BOOL)bTry2Stop error:(NSError **)error;
/**
 ptz operation:zoom,foucus,aperture
 
 @param channelid channelid
 @param operation zoom,foucus,aperture
 @param steplength step
 @param bTry2Stop stop
 @param error error
 @return
 */
- (BOOL)ptz:(NSString *)channelid operation:(MBL_PTZ_OPERATION)operation step:(int)steplength stop:(BOOL)bTry2Stop error:(NSError **)error;
/**
 query prepoint
 
 @param channelid channelid
 @param error error
 @return PrePoint Info
 */
- (NSArray<DSSPtzPrePointInfo *> *)queryPtzPrePoint:(NSString *)channelid error:(NSError **)error;
/**
 location prepoint
 
 @param channelid channelid
 @param prepointcode prepointcode
 @param error error
 @return
 */
- (BOOL)ptz:(NSString *)channelid location:(int)prepointcode error:(NSError **)error;

/// 查询设备码流加密信息
/// @param deviceId 设备id
/// @param error error
- (DSSMediaVKInfo *)queryCurrentMediaVKByDeviceId:(NSString *)deviceId error:(NSError **)error;

/// 根据号码获取设备信息
/// @param callNum 呼叫号码
- (DSSDeviceInfo *)getDeviceInfoByCallNum:(NSString *)callNum;

/// 开门
/// - Parameters:
///   - deviceId: 设备id
///   - error: error
- (BOOL)openDoorWithDeviceId:(NSString *)deviceId error:(NSError **)error;

/// 是否可视对讲设备
/// @param deviceInfo deviceInfo
- (BOOL)isVideoTalkDevice:(DSSDeviceInfo *)deviceInfo;
@end
