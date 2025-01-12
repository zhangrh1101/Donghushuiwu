//
//  DSSVideoShareChannelInfo.h
//  DataAdapterProtocol
//
//  Created by 32943 on 2019/5/7.
//

#import <Foundation/Foundation.h>

@interface DSSVideoShareChannelInfo : NSObject
@property (nonatomic, copy, nullable) NSString *channelName;
@property (nonatomic, copy, nullable) NSString *channelCode;
@property (nonatomic, copy, nullable) NSString *startTime;
@property (nonatomic, copy, nullable) NSString *endTime;
@end
