//
//  DataAdapterFavouriteProtocol.h
//  Pods
//
//  Created by zyx on 17/3/7.
//
//

#import <Foundation/Foundation.h>
#import "DSSGroupInfo.h"
#import "DSSChannelInfo.h"


@protocol DataAdapterFavouriteProtocol <NSObject>

#pragma mark--register function to IDHModuleProtocol
-(BOOL)saveFavouriteGroup:(DSSGroupInfo*)group error:(NSError**)error;

#pragma mark--register function to IDHModuleProtocol
-(BOOL)deleteFavouriteGroup:(DSSGroupInfo*)group error:(NSError**)error;

#pragma mark--register function to IDHModuleProtocol
-(BOOL)addFavouriteChannel:(DSSChannelInfo*)channel error:(NSError**)error;

#pragma mark--register function to IDHModuleProtocol
-(BOOL)addFavouriteChannels:(NSArray*)channelArr error:(NSError**)error;

#pragma mark--register function to IDHModuleProtocol
-(BOOL)removeFavouriteChannel:(DSSChannelInfo*)channel error:(NSError**)error;

#pragma mark--register function to IDHModuleProtocol
-(BOOL)removeFavouriteChannels:(NSArray<DSSChannelInfo*>*)channels error:(NSError**)error;

#pragma mark--register function to IDHModuleProtocol
-(BOOL)deleteGroupsAndChannels:(NSArray<NSString*>*)deleteObjs error:(NSError**)error;

#pragma mark--register function to IDHModuleProtocol
-(NSString*)getNewGroupIDParentGroupInfo:(DSSGroupInfo*)groupInfo;

#pragma mark--register function to IDHModuleProtocol
-(DSSGroupInfo*)getRootFavouriteInfo:(NSError**)error;

#pragma mark--register function to IDHModuleProtocol
-(DSSGroupInfo*)getFavGroupInfo:(NSString *)groupid;

#pragma mark--register function to IDHModuleProtocol
-(DSSChannelInfo*)getFavChannelInfo:(NSString *)channelid;

#pragma mark--register function to IDHModuleProtocol
-(DSSChannelInfo*)getFavNoLoadChannelInfo:(NSString *)channelid;

#pragma mark--register function to IDHModuleProtocol
-(BOOL)isChannelFavourited:(NSString *)channelStr;

#pragma mark--register function to IDHModuleProtocol
- (BOOL)clearAllRecords;

@end
