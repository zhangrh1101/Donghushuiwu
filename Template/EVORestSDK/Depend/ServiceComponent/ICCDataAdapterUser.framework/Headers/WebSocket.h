//
//  PocWebSocket.h
//  Alamofire
//
//  Created by ding_qili on 2018/6/23.
//

#import <SocketRocket/SocketRocket.h>

@interface SWebSocket : NSObject
@property (nonatomic, weak) id <SRWebSocketDelegate> delegate;
@property (nonatomic,strong,readonly) SRWebSocket *socket;


- (id)initWithURL:(NSURL *)url;

- (BOOL)sendMessage:(NSString *)info;

- (void)close;
- (void)open;
@end
