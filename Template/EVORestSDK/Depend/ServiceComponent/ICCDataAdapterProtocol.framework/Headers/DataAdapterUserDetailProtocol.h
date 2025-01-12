//
//  DataAdapterUserDetailProtocol.h
//  DataAdapterProtocol
//
//  Created by yaochi on 2021/11/2.
//

#import <Foundation/Foundation.h>
#import "DSSUserInfo.h"
#import "DataAdapterRemoteNotifyProtocol.h"
#import "DataAdapterCoreProtocol.h"
#import "UserAdapterUserProtocol.h"
#import "DSSMajorMenuInfo.h"
#import "DSSModuleInfo.h"
#import "DSSAppConfigInfo.h"

typedef void (^remoteNotifyBlock)(ADAPTER_NOTIFY_ACTION, id _Nullable);

@protocol DataAdapterUserDetailProtocol <NSObject>
- (NSString *_Nullable)requestIotMqttAddress:(NSError * _Nullable *_Nullable)error;

//-(DSSUserInfo*_Nullable)requestUserDetail:(NSError * _Nullable *_Nullable)error;

- (BOOL)uploadLocationWtihLongitude:(double)longitude latitude:(double)latitude error:(NSError * _Nullable *_Nullable)error;
-(NSArray<DSSCardInfo *> *_Nullable)requestCardList:(int)persionId error:(NSError * _Nullable *_Nullable)error;

- (NSArray <DSSMajorMenuInfo *>* _Nullable)requestMenuList:(BOOL)isUseCache userAdapter:(id<UserAdapterUserProtocol> _Nonnull)userAdapter error:(NSError * _Nullable *_Nullable)error;

-(BOOL)updateUserSelectedModuleArray:(NSArray<DSSModuleInfo*>* _Nonnull)moduleArray error:(NSError *_Nullable *_Nullable)error;

-(NSArray<DSSModuleInfo*>* _Nullable)getUserSelectedModuleArray:(NSError *_Nullable *_Nullable)error;


-(BOOL)updateAppConfigMenuListWithMenus:(NSArray <DSSAppConfigMenuInfo *>*_Nonnull)menus error:(NSError * _Nullable *_Nullable)error;

-(BOOL)updateAppConfigCardListWithCards:(NSArray <DSSAppConfigCardInfo *>*_Nonnull)cards error:(NSError * _Nullable *_Nullable)error;

-(NSArray <DSSAppConfigMenuInfo *>*_Nullable)getAppConfigMenuList:(NSError * _Nullable *_Nullable)error;

-(NSArray <DSSAppConfigCardInfo *>*_Nullable)getAppConfigCardList:(NSError * _Nullable *_Nullable)error;
-(NSDictionary<NSString*,NSArray<NSString *>*> *_Nullable)getGrantedDevicesAndChannels:(NSError * _Nullable *_Nullable)error;
@end

