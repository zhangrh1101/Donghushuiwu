//
//  DataAdapterICCMapProtocol.h
//  Pods
//
//  Created by iMac on 2021/1/27.
//


#import <Foundation/Foundation.h>
#import "DSSMapLayer.h"
#import "DataAdapterRemoteNotifyProtocol.h"

@protocol DataAdapterICCMapProtocol <NSObject>

- (NSArray<DSSMapLayer*> *_Nullable)getLayerList:(NSError*_Nullable*_Nullable)error;
- (NSInteger)getMainMapId;

- (NSArray *_Nullable)requestAllICCGisChannels:(NSString *_Nonnull)layerCode mapId:(NSInteger)mapId error:(NSError *_Nullable*_Nullable)error;
- (NSDictionary *_Nullable)searchGPS:(NSString *_Nonnull)channelCode deviceCode:(NSString *_Nonnull)deviceCode extend:(NSString *_Nonnull)extend alarmCode:(NSString *_Nonnull)alarmCode alarmType:(NSString *_Nonnull)alarmType error:(NSError *_Nullable*_Nullable)error;
- (NSArray <DSSGMResourceInfo *>*_Nullable)requestGMMarkerListByTypes:(NSArray<NSNumber *> *_Nonnull)resourceTypes error:(NSError *_Nullable*_Nullable)error;
- (DSSGMMarkerDetail *_Nullable)requestGMMarkerDetailBy:(NSString *_Nonnull)resourceId error:(NSError *_Nullable*_Nullable)error;

- (NSArray <DSSReportGpsInfo *>*_Nullable)requestGpsList:(NSString *_Nonnull)channelCode start:(NSTimeInterval)start end:(NSTimeInterval)end error:(NSError *_Nullable*_Nullable)error;

@end
/* DataAdapterICCMapProtocol_h */
