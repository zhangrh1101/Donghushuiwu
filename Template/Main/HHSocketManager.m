//
//  HHWebSockettt.m
//  Template
//
//  Created by Zzzzzzzzz on 2025/1/8.
//

#import "HHSocketManager.h"
#import "SRWebSocket.h"
#import "AFNetworkReachabilityManager.h"

static int const kHeartbeatDuration = 3*60;
static NSString *kDefaultWebSocketUrl = @"ws://";

@interface HHSocketManager() <SRWebSocketDelegate>

@property (strong, nonatomic) NSTimer *heatBeat;
@property (assign, nonatomic) NSTimeInterval reConnectTime;

@property (nonatomic,assign) BOOL autoReconnect;

@end
 
@implementation HHSocketManager {
    SRWebSocket *_webSocket;
}
 
+ (instancetype)sharedInstance {
    static HHSocketManager *_sharedInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[self alloc] init];
        [_sharedInstance addNoti];
    });
    return _sharedInstance;
}


#pragma mark - NOTI  -
- (void)addNoti {
    // 监听网络变化
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(handleNetWorkStatusChanged) name:@"XTNOTICE_NETWORK_STATUS_CHANGED" object:nil];
}

- (void)dealloc {
    NSLog(@"HHSocketManager: dealloc: %@", self);
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

// 网络变化
- (void)handleNetWorkStatusChanged {
    // 断网时，关闭websocket
    if(![AFNetworkReachabilityManager sharedManager].reachable){
        [self disconnect];
    }else{
        // 网络连上时，重新连接websocket
        if ((_webSocket.readyState == SR_OPEN || _webSocket.readyState == SR_CONNECTING) && _webSocket) {
            return;
        }
        [self reConnect];
    }
}

#pragma mark - Heart Timer -
//保活机制 探测包
- (void)startHeartbeat {
    self.heatBeat = [NSTimer scheduledTimerWithTimeInterval:kHeartbeatDuration target:self selector:@selector(heartbeatAction) userInfo:nil repeats:YES];
    [self.heatBeat setFireDate:[NSDate distantPast]];
    [[NSRunLoop currentRunLoop] addTimer:_heatBeat forMode:NSRunLoopCommonModes];
}


//断开连接时销毁心跳
- (void)destoryHeartbeat{
    [self.heatBeat invalidate];
    self.heatBeat = nil;
}

// 发送心跳
- (void)heartbeatAction {
//    if (_webSocket.readyState == SR_OPEN) {
//        [_webSocket sendString:@"heart" error:nil];
//        NSLog(@"HHWebSocket heartbeatAction");
//    }
}


//重连机制
- (void)reConnect{
    if (!self.autoReconnect) {
        return;
    }
    
    //每隔一段时间重连一次
    // 重连间隔时间 可以根据业务调整
    if (_reConnectTime > 60) {
        _reConnectTime = 60;
    }
    
    __block SRWebSocket *webSocket = _webSocket;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(_reConnectTime * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        webSocket = nil;
        [self initWebSocket];
    });
    
    if (_reConnectTime == 0) {
        _reConnectTime = 2;
    }else{
        _reConnectTime *= 2;
    }
}

- (void)resetConnectTime {
    self.reConnectTime = 0;
}
 
#pragma mark - 初始化
- (void)initWebSocket {
    
    if (_webSocket) {
        _webSocket.delegate = nil;
        [_webSocket close];
        _webSocket = nil;
    }
    
    //请求
    NSMutableURLRequest *request = [[NSMutableURLRequest alloc]initWithURL:self.serverIp cachePolicy:NSURLRequestUseProtocolCachePolicy timeoutInterval:10];
    //初始化请求`    
    _webSocket = [[SRWebSocket alloc] initWithURLRequest:request];
    _webSocket.delegate = self;
    [_webSocket open];
}

#pragma mark - Public -
- (void)connect {
    self.autoReconnect = YES;
    [self initWebSocket];
}

- (void)disconnect {
    self.autoReconnect = NO;
    if (_webSocket.readyState == SR_OPEN || _webSocket.readyState == SR_CONNECTING) {
        [_webSocket close];
    }
    
    [self destoryHeartbeat];
    [_webSocket close];
    _webSocket = nil;
    [self resetConnectTime];
}

- (void)sendMessage:(NSString *)message {
    if (_webSocket && _webSocket.readyState == SR_OPEN) {
        // 只有在socket状态为SR_OPEN 时，才可以发送消息
        // 在socket状态不为SR_OPEN，可以将消息放进队列里，在websocket连上时，再发送
//        [_webSocket sendString:message error:nil];
        [_webSocket send:message];
    }
}


#pragma mark - SRWebSocketDelegate methods
//收到服务器消息是回调
- (void)webSocket:(SRWebSocket *)webSocket didReceiveMessage:(id)message{
    NSLog(@"HHWebSocket didReceiveMessage：%@",message);
    if ([message isKindOfClass:[NSString class]]) {
        NSString *msg = (NSString *)message;
        if ([self.delegate respondsToSelector:@selector(hhWebSocketDidReceiveMessage:)]) {
            [self.delegate hhWebSocketDidReceiveMessage:msg];
        }
    }
}

//连接成功
- (void)webSocketDidOpen:(SRWebSocket *)webSocket{
    NSLog(@"HHWebSocket DidOpen");
    [self resetConnectTime];
    [self startHeartbeat];
    
    // 下面逻辑，根据业务情况处理
    if (_webSocket != nil) {
        
        // 只有 SR_OPEN 开启状态才能调 send 方法啊，不然要崩
        if (_webSocket.readyState == SR_OPEN) {
            
//            NSString *jsonString = @"{\"sid\": \"13b313a3-fea9-4e28-9e56-352458f7007f\"}";
//            [_webSocket sendString:jsonString error:nil];  //发送数据包

        } else if (_webSocket.readyState == SR_CONNECTING) {
            NSLog(@"正在连接中，重连后其他方法会去自动同步数据");
            // 每隔2秒检测一次 socket.readyState 状态，检测 10 次左右
            // 只要有一次状态是 SR_OPEN 的就调用 [ws.socket send:data] 发送数据
            // 如果 10 次都还是没连上的，那这个发送请求就丢失了，这种情况是服务器的问题了，小概率的
            // 代码有点长，我就写个逻辑在这里好了
            
        } else if (_webSocket.readyState == SR_CLOSING || _webSocket.readyState == SR_CLOSED) {
            // websocket 断开了，调用 reConnect 方法重连
            [self connect];
        }
    }
}


//连接失败的回调
- (void)webSocket:(SRWebSocket *)webSocket didFailWithError:(NSError *)error{
    NSLog(@"HHWebSocket didFailWithError %@",error);
    if (error.code == 50 || ![AFNetworkReachabilityManager sharedManager].reachable) {
        // 网络异常不重连
        return;
    }
    [self reConnect];
}

//连接断开的回调
- (void)webSocket:(SRWebSocket *)webSocket didCloseWithCode:(NSInteger)code reason:(NSString *)reason wasClean:(BOOL)wasClean{
    NSLog(@"HHWebSocket Close code %ld reason %@",(long)code,reason);
    if (![AFNetworkReachabilityManager sharedManager].reachable) {
        return;
    }
    [self reConnect];
}

- (void)webSocket:(SRWebSocket *)webSocket didReceivePong:(NSData *)pongPayload {
    NSLog(@"HHWebSocket Pong");
}

@end
