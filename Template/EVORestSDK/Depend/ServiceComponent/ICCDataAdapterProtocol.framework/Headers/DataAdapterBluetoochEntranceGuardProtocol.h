//
//  DataAdapterBluetoochEntranceGuardProtocol.h
//  ICCDataAdapterProtocol
//
//  Created by yaochi on 2022/6/10.
//

#import <Foundation/Foundation.h>
#import "DSSBluetoochBindInfo.h"
@protocol DataAdapterBluetoochEntranceGuardProtocol <NSObject>
#pragma mark--register function to IDHModuleProtocol
-(BOOL)saveBindBluetooch:(NSString * _Nullable)mac key:(NSString * _Nullable)key error:(NSError*_Nullable*_Nullable)error;
-(NSArray<DSSBluetoochBindInfo *>*_Nullable)searchBindBluetooch:(NSArray<NSString * >*_Nullable)macs error:(NSError*_Nullable*_Nullable)error;
-(BOOL)deleteBindBluetooch:(NSString * _Nullable)mac error:(NSError*_Nullable*_Nullable)error;

@end

