//
//  DateAdapterCallProtocol.h
//  MobileBaseLineSDK
//
//  Created by huang_yundi on 2017/11/1.
//
#import <Foundation/Foundation.h>
#import "DSSCallInfo.h"
#import "DSSCallVTInfo.h"
#import "DataAdapterRemoteNotifyProtocol.h"
#import "DataAdapterCoreProtocol.h"
#import "DSSUserInfo.h"

@class DSSChannelInfo;
@protocol DataAdapterCallProtocol <NSObject>

#pragma mark--register function to IDHModuleProtocol
- (void)setRemoteNotifyBlock:(void (^_Nonnull)(ADAPTER_NOTIFY_ACTION, id _Nullable ))remoteNotifyBlock;

#pragma mark--register function to IDHModuleProtocol
- (NSInteger)startCall:(NSString*_Nonnull)groupID callType:(CallType)callType callBack:(NSInteger)callBackState error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSInteger)stopCall:(NSString*_Nonnull)userID sessionID:(NSInteger)sessionID error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSInteger)ceaseCall:(NSString*_Nonnull)userID sessionID:(NSInteger)sessionID error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSInteger)demandCall:(NSString*_Nonnull)userID sessionID:(NSInteger)sessionID error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (DSSCallInfo*_Nullable)inviteCall:(DSSInviteParam*_Nonnull)param error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSInteger)byeCall:(NSString*_Nonnull)userID sessionID:(NSInteger)sessionID error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSInteger)modifyCallStatus:(NSString*_Nonnull)userID sessionID:(NSInteger)sessionID callStatus:(CallStatusType)callStatus error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSInteger)startVTCallWithParam:(DSSStartVtParam *_Nonnull)param error:(NSError *_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSInteger)startVTCall:(NSString*_Nonnull)callNum videoSessionID:(NSInteger)videoSeesionID callType:(CallType)callType callBack:(NSInteger)callBackState error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSInteger)stopVTCall:(DSSStopVtParam*_Nonnull)param error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSInteger)releaseVTCall:(NSString*_Nonnull)userID audioSessionID:(NSInteger)audioSessionID videoSessionID:(NSInteger)videoSessionID error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSInteger)demandVTCall:(NSString*_Nonnull)userID audioSessionID:(NSInteger)audioSessionID videoSessionID:(NSInteger)videoSessionID error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (DSSCallInfo*_Nullable)inviteVtCall:(DSSInviteVTParam*_Nonnull)param error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSInteger)byeVTCall:(NSString*_Nonnull)userID sessionID:(NSInteger)sessionID videoSessionID:(NSInteger)videoSessionID error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSInteger)sendVTCallMsg:(NSDictionary*_Nonnull)dicMsg error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSInteger)modifyVTCallStatus:(NSString*_Nonnull)userID sessionID:(NSInteger)sessionID videoSessionID:(NSInteger)videoSessionID callStatus:(CallStatusType)callStatus error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSInteger)rejectVtCall:(NSString*_Nonnull)userID callID:(NSInteger)callID dialogID:(NSInteger)dialogID tID:(NSInteger)tID error:(NSError*_Nullable*_Nullable)error;
#pragma mark--register function to IDHModuleProtocol
- (NSInteger)rejectNoAuthVtCall:(NSString*_Nonnull)userID callID:(NSInteger)callID dialogID:(NSInteger)dialogID tID:(NSInteger)tID error:(NSError*_Nullable*_Nullable)error;
#pragma mark--register function to IDHModuleProtocol
- (NSInteger)cancelVtCall:(DSSCancelVtParam*_Nonnull)param error:(NSError*_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSInteger)connectToSCS:(NSError*_Nullable*_Nullable)error;

/**
 设置"对端数据回调函数"地址
 @param callBack "对端数据回调函数"地址
 @return 小于0为失败，否则成功
 */
#pragma mark--register function to IDHModuleProtocol
- (NSInteger)setSipRecvAudioCallback:(long)callBack;

/**
 登录成功之后需要调用的函数
 invoke after login
 
 @param userInfo userInfo
 */
#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginInExcute:(DSSUserInfo *_Nullable)userInfo;

/**
 登出成功之后需要调用的函数
 invoke after logout
 
 @param userInfo userInfo
 */
#pragma mark--register function to IDHModuleProtocol
- (void)afterLoginOutExcute:(DSSUserInfo *_Nullable)userInfo;

#pragma mark--register function to IDHModuleProtocol
- (NSInteger)setCommunityCode:(NSString *_Nonnull)communityCode;

#pragma mark--register function to IDHModuleProtocol
- (DSSChannelInfo *_Nullable)queryChannelInfo:(NSString *_Nonnull)roomNumber error:(NSError *_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSString *_Nullable)queryCallUrlByChannelId:(NSString *_Nonnull)channelId deviceType:(NSNumber *_Nonnull)deviceType isP2P:(BOOL)isP2P error:(NSError *_Nullable*_Nullable)error;

#pragma mark--register function to IDHModuleProtocol
- (NSInteger)openDoor:(NSString *_Nonnull)channelId error:(NSError *_Nullable*_Nullable)error;
#pragma mark--register function to IDHModuleProtocol
- (void)registerSipComponent;
@end


