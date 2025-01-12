//
//  WebService.h
//  Pods
//
//  Created by huang_yundi on 2017/7/25.
//
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, MapNetRequestFlag)
{
    MapNetRequestFlagSingleChannel = 3,
    MapNetRequestFlagAllChannel,
};

@interface WebService : NSObject

-(void)setIP:(NSString*)ip port:(NSInteger)port;

-(id)request:(NSString*)funStr withParam:(NSDictionary*)params andTag:(MapNetRequestFlag)tag withError:(NSError**)error;

@end
