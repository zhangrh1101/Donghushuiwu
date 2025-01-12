//
//  DSSVideoShareResultInfo.h
//  DataAdapterProtocol
//
//  Created by 32943 on 2019/4/30.
//

#import <Foundation/Foundation.h>

@interface DSSVideoShareResultInfo : NSObject
@property (nonatomic, copy, nullable) NSString *channelName;
@property (nonatomic, copy, nullable) NSString *name;
@property (nonatomic, assign) NSInteger type;
@property (nonatomic, assign) BOOL success;
@end
