//
//  TestViewController.m
//  Template
//
//  Created by Zzzzzzzzz on 2025/1/8.
//

#import "TestViewController.h"

#import "HHSocketManager.h"

@interface TestViewController () <HHSocketManagerDelegate>


@end

@implementation TestViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
        
    [self initWebsocket];
}


#pragma mark - 初始化Websocket
- (void)initWebsocket {
    
    //正式环境Websocket
    //wss://tchm.xxzhtc.cn:8128/patrol/websocket/patrol_path_report
    //测试环境Websocket
    //wss://server1.wh-nf.cn:8201/patrol/websocket/patrol_path_report
    NSString *serverIp = @"wss://server1.wh-nf.cn:8201/patrol/websocket/patrol_path_report";
    
    HHSocketManager *webSocket = [HHSocketManager sharedInstance];
    webSocket.serverIp = [NSURL URLWithString:serverIp];
    webSocket.delegate = self;
    [webSocket connect];
}

- (void)hhWebSocketDidReceiveMessage:(NSString *)message {
    
    HHLog(@"--------- %@", message);
}

//初始化 WebSocket
//- (void)initWebSocket {
//
//    NSString *serverIp = @"wss://server1.wh-nf.cn:8201/patrol/websocket/patrol_path_report";
//    NSMutableURLRequest *request = [[NSMutableURLRequest alloc] initWithURL:[NSURL URLWithString:serverIp] cachePolicy:NSURLRequestUseProtocolCachePolicy timeoutInterval:20];
//
//    if (self.socket) {
//        self.socket.delegate = nil;
//        [self.socket close];
//        _socket = nil;
//    }
//    self.socket = [[SRWebSocket alloc] initWithURLRequest:request];
//    self.socket.delegate = self;
//    [self.socket open];
//}
//
//#pragma mark -- SRWebSocketDelegate
////收到服务器消息是回调
//- (void)webSocket:(SRWebSocket *)webSocket didReceiveMessage:(id)message{
//    NSLog(@"HHWebSocket didReceiveMessage：%@",message);
//
//}
//
////连接成功
//- (void)webSocketDidOpen:(SRWebSocket *)webSocket{
//    NSLog(@"HHWebSocket DidOpen");
//
//}
//
//
////连接失败的回调
//- (void)webSocket:(SRWebSocket *)webSocket didFailWithError:(NSError *)error{
//    NSLog(@"HHWebSocket didFailWithError %@",error);
//
//}
//
////连接断开的回调
//- (void)webSocket:(SRWebSocket *)webSocket didCloseWithCode:(NSInteger)code reason:(NSString *)reason wasClean:(BOOL)wasClean{
//    NSLog(@"HHWebSocket Close code %ld reason %@",(long)code,reason);
//
//}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
