//
//  DHPlaybackManager.h
//  DataAdapterExample_Example
//
//  Created by 32943 on 2018/2/9.
//  Copyright © 2018年 ly. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ICCDataAdapterProtocol/DSSRecordInfo.h>

@interface DHPlaybackManager : NSObject

+ (DHPlaybackManager *)sharedInstance;

+ (void)unSharedInstance;

/** query record bitmask in a month
 * @pararm channelid  channelid
 * @pararm month  month
 * @pararm source record source
 * @pararm error error
 * @return [1, 0, 1, 0, 0 ...]
 */
-(NSArray<NSNumber*>*) queryRecordBitmask:(NSString*)channelid month:(NSDate*)month source:(RecordSource)source error:(NSError**)error;

/** query recordinfo at a time
 * @pararm channelid  channelid
 * @pararm begin  begin time
 * @pararm end  end time
 * @pararm source record source
 * @pararm error error
 * @return recordinfo array
 */
-(NSArray<DSSRecordInfo*>*) queryRecord:(NSString*)channelid begin:(NSDate*)begin end:(NSDate*)end source:(RecordSource)source error:(NSError**)error;

@end
