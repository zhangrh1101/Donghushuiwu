//
//  OrgXmlParse.h
//  Pods
//
//  Created by huang_yundi on 2017/7/18.
//
//

#import <Foundation/Foundation.h>
//#import "DSSGroupInfo.h"
#import <ICCDataAdapterProtocol/ICCDataAdapterProtocol-umbrella.h>

@interface OrgXmlParse : NSObject

@property (copy, nonatomic) BOOL(^finishParseGroup)(DSSGroupInfo* data);

@property (copy, nonatomic) void(^finishALL)();

- (DSSGroupInfo*)parseData:(NSString*)strData;

- (NSString*)parentID:(NSString*)groupId;

@end
