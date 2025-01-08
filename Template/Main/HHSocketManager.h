//
//  HHSocketManager.h
//  Template
//
//  Created by Zzzzzzzzz on 2025/1/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol HHSocketManagerDelegate <NSObject>
@optional
- (void)hhWebSocketDidReceiveMessage:(NSString *)message;
@end

@interface HHSocketManager : NSObject

@property (nonatomic,strong) NSURL * serverIp;

@property (nonatomic,weak) id <HHSocketManagerDelegate> delegate;

+ (instancetype)sharedInstance;
 
- (void)connect;
- (void)disconnect;

@end

NS_ASSUME_NONNULL_END
