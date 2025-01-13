//
//  HHWebViewController.m
//  AnXinJie
//
//  Created by Zzzzzzzzz💤 on 2019/7/28.
//  Copyright © 2019 Zzzzzzzzz💤. All rights reserved.
//

#import "HHWebViewController.h"
#import <WebKit/WebKit.h>
#import <AMapLocationKit/AMapLocationKit.h>
#import "HHSocketManager.h"
#import "DHMainViewController.h"

//js调用原生
#define WebAction_ClearCache       @"clearCache"
#define WebAction_Action           @"WebAction"
#define WebAction_CallPhone        @"callPhone"


#define WebAction_GetLocation            @"getLocation"
#define WebAction_SendLocation           @"sendLocation"
#define WebAction_StopLocation           @"stopLocation"

#define WebAction_PushDaHua           @"dahuaMonitoring"


//WKWebView 内存不释放的问题解决
@interface WeakWebViewScriptMessageDelegate : NSObject<WKScriptMessageHandler>
//WKScriptMessageHandler 这个协议类专门用来处理JavaScript调用原生OC的方法
@property (nonatomic, weak) id<WKScriptMessageHandler> scriptDelegate;

- (instancetype)initWithDelegate:(id<WKScriptMessageHandler>)scriptDelegate;

@end
@implementation WeakWebViewScriptMessageDelegate

- (instancetype)initWithDelegate:(id<WKScriptMessageHandler>)scriptDelegate {
    self = [super init];
    if (self) {
        _scriptDelegate = scriptDelegate;
    }
    return self;
}

#pragma mark - WKScriptMessageHandler
//遵循WKScriptMessageHandler协议，必须实现如下方法，然后把方法向外传递
//通过接收JS传出消息的name进行捕捉的回调方法
- (void)userContentController:(WKUserContentController *)userContentController didReceiveScriptMessage:(WKScriptMessage *)message {
    
    if ([self.scriptDelegate respondsToSelector:@selector(userContentController:didReceiveScriptMessage:)]) {
        [self.scriptDelegate userContentController:userContentController didReceiveScriptMessage:message];
    }
}

@end

//WKViewView
@interface HHWebViewController () <UIScrollViewDelegate, WKScriptMessageHandler, WKNavigationDelegate, WKUIDelegate, AMapLocationManagerDelegate, HHSocketManagerDelegate>

@property (nonatomic, assign) BOOL                                    canGoBack;
@property (nonatomic, strong) WKWebView                             * webView;
@property (nonatomic, strong) WeakWebViewScriptMessageDelegate      * weakScriptMessageDelegate;
@property (nonatomic, assign) CGFloat                                 webViewHeight;

//进度条webViewHeight
@property (nonatomic, strong) UIProgressView                        * progressView;
@property (nonatomic, assign) CGFloat                                 progress;

@property (strong, nonatomic) AMapLocationManager                   * locationManager;

@end

@implementation HHWebViewController

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
}

- (void)viewDidDisappear:(BOOL)animated {
    [super viewDidDisappear:animated];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    // 添加KVO监听
    [self.webView addObserver:self forKeyPath:@"loading" options:NSKeyValueObservingOptionNew context:nil];
    [self.webView addObserver:self forKeyPath:@"title" options:NSKeyValueObservingOptionNew context:nil];
    [self.webView addObserver:self forKeyPath:@"estimatedProgress" options:NSKeyValueObservingOptionNew context:nil];
   
    // JS调用原生
    // 注入JS对象名称AppModel，当JS通过AppModel来调用时，
    // 我们可以在WKScriptMessageHandler代理中接收到
  
    [self.webView.configuration.userContentController addScriptMessageHandler:self.weakScriptMessageDelegate name:WebAction_GetLocation];
    [self.webView.configuration.userContentController addScriptMessageHandler:self.weakScriptMessageDelegate name:WebAction_SendLocation];
    [self.webView.configuration.userContentController addScriptMessageHandler:self.weakScriptMessageDelegate name:WebAction_StopLocation];
    [self.webView.configuration.userContentController addScriptMessageHandler:self.weakScriptMessageDelegate name:WebAction_PushDaHua];
}

- (void)viewWillDisappear:(BOOL)animated {
    [super viewWillDisappear:animated];
    
    // 移除KVO监听
    [self.webView removeObserver:self forKeyPath:@"loading"];
    [self.webView removeObserver:self forKeyPath:@"title"];
    [self.webView removeObserver:self forKeyPath:@"estimatedProgress"];
 
    [self.webView.configuration.userContentController removeScriptMessageHandlerForName:WebAction_GetLocation];
    [self.webView.configuration.userContentController removeScriptMessageHandlerForName:WebAction_SendLocation];
    [self.webView.configuration.userContentController removeScriptMessageHandlerForName:WebAction_StopLocation];
    [self.webView.configuration.userContentController removeScriptMessageHandlerForName:WebAction_PushDaHua];

}


//页面返回
- (void)navBackClick {
    
    //调用Web页面方法
    //    [self.webView evaluateJavaScript:[NSString stringWithFormat:@"goBack('%@')", @"abcabc"] completionHandler:^(id _Nullable result, NSError * _Nullable error) {
    //        NSLog(@"result");
    //    }];
    
    if ([self.htmlTitle isEqualToString:@"随手拍"] && self.progress > 0.8 && self.webView.canGoBack!=YES) {
        [self.webView evaluateJavaScript:@"goBack('abc')" completionHandler:^(id _Nullable result, NSError * _Nullable error) {
            //回调结果
            NSLog(@"result %@", result);
        }];
    }else{
        //判断是否能返回到H5上级页面
        if (self.webView.canGoBack==YES) {
            //返回上级页面
            [self.webView goBack];
        }else{
            //退出控制器
            [self.navigationController popViewControllerAnimated:YES];
        }
    }
}

//销毁
- (void)dealloc {
    
    NSLog(@"__dealloc__");
    [self clearCache];
}


- (void)viewDidLoad {
    [super viewDidLoad];
    
    //    self.automaticallyAdjustsScrollViewInsets = NO;
    self.view.backgroundColor = [UIColor whiteColor];
    
//    self.title = self.htmlTitle;
    self.fd_prefersNavigationBarHidden = YES;
    [self setNavigationBar];
    
    [self setLocationManager];
    [self initWebsocket];
    
    // 添加webView
    
    [self.view addSubview:self.webView];
    [self.webView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(@(0));
        make.left.right.equalTo(@(0));
        make.bottom.equalTo(@(0));
//        make.height.equalTo(@(kScreenHeight));
    }];
    
    // 添加进入条
    self.progressView = [[UIProgressView alloc] init];
    self.progressView.progressTintColor = [UIColor blueColor];
    self.progressView.trackTintColor = [UIColor whiteColor];
    [self.view addSubview:self.progressView];
    [self.progressView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(@(0));
        make.left.right.equalTo(@(0));
        make.height.equalTo(@1.5f);
    }];
    
    
    NSURLRequest *request = [NSURLRequest requestWithURL:[NSURL URLWithString:self.htmlUrl]];
    //    NSURLRequest *request = [NSURLRequest requestWithURL:[NSURL URLWithString:self.htmlUrl] cachePolicy:NSURLRequestReloadIgnoringLocalCacheData timeoutInterval:60];
    [self.webView loadRequest:request];
    
    
    //加载页面
    //    NSMutableURLRequest *request = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:self.htmlUrl]];
    //    [request addValue:[self readCurrentCookieWithDomain:self.htmlUrl] forHTTPHeaderField:@"Cookie"];
    //    [_webView loadRequest:request];
}

/**
 设置导航栏
 */
- (void)setNavigationBar {
    
    WeakSelf
    //    UIButton *leftItem = [ControlTools buttonWithImage:@"nav_back" title:@"" titleColor:nil font:0 upInsideAction:nil];
    //    [leftItem setImagePosition:ImagePositionLeft spacing:5];
    //    [self configLeftBar:leftItem upInsideAction:^(id sender) {
    //        if (weakSelf.webView.canGoBack==YES) {
    //            //返回上级页面
    //            [self.webView goBack];
    //        }
    //    }];
    
    //    UIButton *rightItem = [ControlTools buttonWithImage:@"web_refresh_black" title:@"" titleColor:nil font:0 upInsideAction:nil];
    //    [rightItem setImagePosition:ImagePositionRight spacing:5];
    //    [self configRightBar:rightItem upInsideAction:^(id  _Nonnull sender) {
    //        [weakSelf.webView reload];
    //    }];
    
}


#pragma mark - Lazy
- (WKWebView *)webView {
    if (!_webView) {
        //创建网页配置对象
        WKWebViewConfiguration *config = [[WKWebViewConfiguration alloc] init];
        // 创建设置对象
        WKPreferences *preference = [[WKPreferences alloc]init];
        //最小字体大小 当将javaScriptEnabled属性设置为NO时，可以看到明显的效果
        preference.minimumFontSize = 0;
        //设置是否支持javaScript 默认是支持的
        preference.javaScriptEnabled = YES;
        // 在iOS上默认为NO，表示是否允许不经过用户交互由javaScript自动打开窗口
        preference.javaScriptCanOpenWindowsAutomatically = YES;
        config.preferences = preference;
        // 是使用h5的视频播放器在线播放, 还是使用原生播放器全屏播放
        config.allowsInlineMediaPlayback = YES;
        //设置视频是否需要用户手动播放  设置为NO则会允许自动播放
        config.requiresUserActionForMediaPlayback = YES;
        //设置是否允许画中画技术 在特定设备上有效
        config.allowsPictureInPictureMediaPlayback = YES;
        //设置请求的User-Agent信息中应用程序名称 iOS9后可用
        //        config.applicationNameForUserAgent = @"ChinaDailyForiPad";
        
        //        //监听JS方法 自定义的WKScriptMessageHandler 是为了解决内存不释放的问题
        //        WeakWebViewScriptMessageDelegate *weakScriptMessageDelegate = [[WeakWebViewScriptMessageDelegate alloc] initWithDelegate:self];
        //        //这个类主要用来做native与JavaScript的交互管理
        //        WKUserContentController * wkUController = [[WKUserContentController alloc] init];
        //        //注册一个name为jsToOcNoPrams的js方法 设置处理接收JS方法的对象
        //        [wkUController addScriptMessageHandler:weakScriptMessageDelegate  name:@"jsToOcNoPrams"];
        //        [wkUController addScriptMessageHandler:weakScriptMessageDelegate  name:@"jsToOcWithPrams"];
        //        config.userContentController = wkUController;
        
        //以下代码适配文本大小
        //        NSString *jSString = @"var meta = document.createElement('meta'); meta.setAttribute('name', 'viewport'); meta.setAttribute('content', 'width=device-width'); document.getElementsByTagName('head')[0].appendChild(meta);";
        //        //用于进行JavaScript注入
        //        WKUserScript *wkUScript = [[WKUserScript alloc] initWithSource:jSString injectionTime:WKUserScriptInjectionTimeAtDocumentEnd forMainFrameOnly:YES];
        //        [config.userContentController addUserScript:wkUScript];
        
        // 初始化
        _webView = [[WKWebView alloc] initWithFrame:CGRectZero configuration:config];
        // UI代理
        _webView.UIDelegate = self;
        // 导航代理
        _webView.navigationDelegate = self;
        // 是否允许手势左滑返回上一级, 类似导航控制的左滑返回
        _webView.allowsBackForwardNavigationGestures = YES;
        
        // scrollView代理
        _webView.scrollView.delegate = self;

        //        _webView.scrollView.bounces = NO;
        
        //可返回的页面列表, 存储已打开过的网页
        //        WKBackForwardList * backForwardList = [_webView backForwardList];
        
        //加载页面
        //        NSMutableURLRequest *request = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:@"http://www.chinadaily.com.cn"]];
        //        [request addValue:[self readCurrentCookieWithDomain:@"http://www.chinadaily.com.cn"] forHTTPHeaderField:@"Cookie"];
        //        [_webView loadRequest:request];
        
        //        NSString *path = [[NSBundle mainBundle] pathForResource:@"JStoOC.html" ofType:nil];
        //        NSString *htmlString = [[NSString alloc]initWithContentsOfFile:path encoding:NSUTF8StringEncoding error:nil];
        //        [_webView loadHTMLString:htmlString baseURL:[NSURL fileURLWithPath:[[NSBundle mainBundle] bundlePath]]];
    }
    return _webView;
}

//解决内存不释放的问题
- (WeakWebViewScriptMessageDelegate *)weakScriptMessageDelegate {
    if (!_weakScriptMessageDelegate) {
        _weakScriptMessageDelegate = [[WeakWebViewScriptMessageDelegate alloc] initWithDelegate:self];
    }
    return _weakScriptMessageDelegate;
}


#pragma mark WKWebView --- Action
//解决第一次进入的cookie丢失问题
- (NSString *)readCurrentCookieWithDomain:(NSString *)domainStr{
    NSHTTPCookieStorage*cookieJar = [NSHTTPCookieStorage sharedHTTPCookieStorage];
    NSMutableString * cookieString = [[NSMutableString alloc]init];
    for (NSHTTPCookie*cookie in [cookieJar cookies]) {
        [cookieString appendFormat:@"%@=%@;",cookie.name,cookie.value];
    }
    
    //删除最后一个“;”
    if ([cookieString hasSuffix:@";"]) {
        [cookieString deleteCharactersInRange:NSMakeRange(cookieString.length - 1, 1)];
    }
    
    return cookieString;
}

//解决 页面内跳转（a标签等）还是取不到cookie的问题
- (void)getCookie {
    //取出cookie
    NSHTTPCookieStorage *cookieStorage = [NSHTTPCookieStorage sharedHTTPCookieStorage];
    //js函数
    NSString *JSFuncString =
    @"function setCookie(name,value,expires)\
    {\
    var oDate=new Date();\
    oDate.setDate(oDate.getDate()+expires);\
    document.cookie=name+'='+value+';expires='+oDate+';path=/'\
    }\
    function getCookie(name)\
    {\
    var arr = document.cookie.match(new RegExp('(^| )'+name+'=([^;]*)(;|$)'));\
    if(arr != null) return unescape(arr[2]); return null;\
    }\
    function delCookie(name)\
    {\
    var exp = new Date();\
    exp.setTime(exp.getTime() - 1);\
    var cval=getCookie(name);\
    if(cval!=null) document.cookie= name + '='+cval+';expires='+exp.toGMTString();\
    }";
    
    //拼凑js字符串
    NSMutableString *JSCookieString = JSFuncString.mutableCopy;
    for (NSHTTPCookie *cookie in cookieStorage.cookies) {
        NSString *excuteJSString = [NSString stringWithFormat:@"setCookie('%@', '%@', 1);", cookie.name, cookie.value];
        [JSCookieString appendString:excuteJSString];
    }
    //执行js
    [_webView evaluateJavaScript:JSCookieString completionHandler:nil];
}

//获取准确高度
- (void)getOffsetHeight:(WKWebView *)webView {
    [webView evaluateJavaScript:@"document.body.offsetHeight" completionHandler:^(id data, NSError * _Nullable error) {
        CGFloat height = [data floatValue];
        self.webViewHeight = height;
        [self.webView mas_updateConstraints:^(MASConstraintMaker *make) {
            make.height.mas_equalTo(self.webViewHeight+10);
            make.width.mas_equalTo(SCREEN_WIDTH);
        }];
        //        [MBProgressHUD hideHUD];
    }];
    
    //    修改字体大小 300%
    //    [ webView evaluateJavaScript:@"document.getElementsByTagName('body')[0].style.webkitTextSizeAdjust= '200%'"completionHandler:nil];
    //    修改字体颜色  #9098b8
    //    [ webView evaluateJavaScript:@"document.getElementsByTagName('body')[0].style.webkitTextFillColor= '#222222'"completionHandler:nil];
}

//页面禁止缩放
- (void)noAllowScale:(WKWebView *)webView {
    
    NSString *injectionJSString = @"var script = document.createElement('meta');"
    "script.name = 'viewport';"
    "script.content=\"width=device-width, user-scalable=no\";"
    "document.getElementsByTagName('head')[0].appendChild(script);";
    [webView evaluateJavaScript:injectionJSString completionHandler:nil];
}

#pragma mark - UIScrollViewDelegate
- (void)scrollViewWillBeginZooming:(UIScrollView *)scrollView withView:(UIView *)view {
    //禁止缩放
    [scrollView setValue:@(NO) forKeyPath:@"pinchGestureRecognizer.enabled"];
}

#pragma mark - WKNavigationDelegate
/*
 WKNavigationDelegate主要处理一些跳转、加载处理操作，WKUIDelegate主要处理JS脚本，确认框，警告框等
 */
// 页面开始加载时调用
- (void)webView:(WKWebView *)webView didStartProvisionalNavigation:(null_unspecified WKNavigation *)navigation {
    HHLog(@"页面开始加载");
    if (self.isWait) {
        //        [MBProgressHUD showHUD];
    }
}

// 页面加载失败时调用
- (void)webView:(WKWebView *)webView didFailProvisionalNavigation:(null_unspecified WKNavigation *)navigation withError:(NSError *)error {
    HHLog(@"页面加载失败时 %@", error);
}

// 当内容开始返回时调用
- (void)webView:(WKWebView *)webView didCommitNavigation:(WKNavigation *)navigation {
    HHLog(@"内容开始返回");
}

// 页面加载完成之后调用
- (void)webView:(WKWebView *)webView didFinishNavigation:(null_unspecified WKNavigation *)navigation {
        
    //    [self getCookie];
    //禁止缩放
    //    [self noAllowScale:webView];
    //获取准确高度
    //    [self getOffsetHeight:webView];
    
    /*添加事件*/
    //    NSString *source = [NSString stringWithFormat:
    //    @"(function() {"
    //    "window.originalPostMessage = window.postMessage;"
    //    "window.postMessage = function(data) {"
    //    "window.webkit.messageHandlers.%@.postMessage(String(data));"
    //    "};"
    //    "})();",WebAction_SysBack ];
    //    [self evaluateJS: source thenCall: nil];
}

- (void)evaluateJS:(NSString *)js thenCall: (void (^)(NSString*)) callback {
    
    [self.webView evaluateJavaScript: js completionHandler: ^(id result, NSError *error) {
        if (error == nil && callback != nil) {
            callback([NSString stringWithFormat:@"%@", result]);
        }
    }];
}

//提交发生错误时调用
- (void)webView:(WKWebView *)webView didFailNavigation:(WKNavigation *)navigation withError:(NSError *)error {
    HHLog(@"发生错误时调用 %@", error);
}

// 接收到服务器跳转请求即服务重定向时之后调用
- (void)webView:(WKWebView *)webView didReceiveServerRedirectForProvisionalNavigation:(WKNavigation *)navigation {
    HHLog(@"接收到服务器跳转请求之后调用");
}

-(void)webViewWebContentProcessDidTerminate:(WKWebView *)webView {
    NSLog(@"webViewWebContentProcessDidTerminate");
}

//加载https不受信任的
- (void)webView:(WKWebView *)webView didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)challenge completionHandler:(void (^)(NSURLSessionAuthChallengeDisposition disposition, NSURLCredential * _Nullable credential))completionHandler{
    
    if ([challenge.protectionSpace.authenticationMethod isEqualToString:NSURLAuthenticationMethodServerTrust]) {
        NSURLCredential *card = [[NSURLCredential alloc] initWithTrust:challenge.protectionSpace.serverTrust];
        completionHandler(NSURLSessionAuthChallengeUseCredential, card);
    }
    //用户身份信息
    //    NSURLCredential * newCred = [[NSURLCredential alloc] initWithUser:@"user123" password:@"123" persistence:NSURLCredentialPersistenceNone];
    //    //为 challenge 的发送方提供 credential
    //    [challenge.sender useCredential:newCred forAuthenticationChallenge:challenge];
    //    completionHandler(NSURLSessionAuthChallengeUseCredential,newCred);
}

// 根据客户端受到的服务器响应头以及response相关信息来决定是否可以跳转
- (void)webView:(WKWebView *)webView decidePolicyForNavigationResponse:(WKNavigationResponse *)navigationResponse decisionHandler:(void (^)(WKNavigationResponsePolicy))decisionHandler{
    NSString * urlStr = navigationResponse.response.URL.absoluteString;
    NSLog(@"当前跳转地址：%@",urlStr);
    //允许跳转
    decisionHandler(WKNavigationResponsePolicyAllow);
    //不允许跳转
    //decisionHandler(WKNavigationResponsePolicyCancel);
}

- (void)userContentController:(WKUserContentController *)userContentController didReceiveScriptMessage:(WKScriptMessage *)message {
    
    //JS调用OC方法
    //message.boby就是JS里传过来的参数
    NSLog(@"name:%@, body:%@",message.name, message.body);
    
    if ([message.name isEqualToString:WebAction_GetLocation]) {
        NSLog(@"WebAction_GetLocation - body为： %@", message);
        if (message.body) {
            NSDictionary *messageDict = [message.body jsonValueDecoded];
            NSLog(@"%@",messageDict);
            
        }
    }else if ([message.name isEqualToString:WebAction_SendLocation]) {
        
        NSLog(@"WebAction_SendLocation %@", message.body);
        
       
    }else if ([message.name isEqualToString:WebAction_StopLocation]) {
        
        NSLog(@"WebAction_StopLocation %@", message.body);
        
        
    }else if ([message.name isEqualToString:WebAction_PushDaHua]) {
        
        NSLog(@"WebAction_PushDaHua %@", message.body);
        
        DHMainViewController *mainVC = [[DHMainViewController alloc] init];
        [self.navigationController pushViewController:mainVC animated:YES];
    }
}


- (void)webView:(WKWebView *)webView decidePolicyForNavigationAction:(WKNavigationAction *)navigationAction decisionHandler:(void (^)(WKNavigationActionPolicy))decisionHandler {
    
    // 4. iOS 14.2 上可行，iOS 14.1 以及以下版本无效
    //    NSMutableURLRequest *request = (NSMutableURLRequest *)navigationAction.request;
    //    NSString *custumAgent = [request valueForHTTPHeaderField:@"token"];
    //    if (!custumAgent || !custumAgent.length) {
    //        [request setValue:[UserModel getInfo].accessToken forHTTPHeaderField:@"token"];
    //        [self.webView loadRequest:request];
    //        decisionHandler(WKNavigationActionPolicyCancel);
    //        return;
    //    }
    //允许跳转
    decisionHandler(WKNavigationActionPolicyAllow);
}


#pragma mark - WKUIDelegate
/**
 *  web界面中有弹出警告框时调用
 *
 *  @param webView           实现该代理的webview
 *  @param message           警告框中的内容
 *  @param completionHandler 警告框消失调用
 */
- (void)webView:(WKWebView *)webView runJavaScriptAlertPanelWithMessage:(NSString *)message initiatedByFrame:(WKFrameInfo *)frame completionHandler:(void (^)(void))completionHandler {
    UIAlertController *alertController = [UIAlertController alertControllerWithTitle:@"提示" message:message?:@"" preferredStyle:UIAlertControllerStyleAlert];
    [alertController addAction:([UIAlertAction actionWithTitle:@"确认" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
        completionHandler();
    }])];
    [self presentViewController:alertController animated:YES completion:nil];
}


#pragma mark - KVO
- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary<NSString *,id> *)change context:(void *)context {
    
    if ([keyPath isEqualToString:@"clearCache"]) {
        //清楚缓存
        [self clearCache];
    }
    else if ([keyPath isEqualToString:@"loading"]) {
        
        NSLog(@"loading");
    } else if ([keyPath isEqualToString:@"title"]) {
        
//        self.title = self.htmlTitle.length ? self.htmlTitle : self.webView.title;
        NSLog(@" self.webView.title %@",  self.webView.title);
    } else if ([keyPath isEqualToString:@"estimatedProgress"]) {
        //进度值
        //        CGFloat newprogress = [[change objectForKey:NSKeyValueChangeNewKey] doubleValue];
        CGFloat newprogress = self.webView.estimatedProgress;
        self.progress = newprogress;
        NSLog(@"progress: %f", self.progress);
        
        self.progressView.alpha = 1.0f;
        [self.progressView setProgress:newprogress animated:YES];
        if (newprogress >= 1.0f) {  // 加载完成
            [UIView animateWithDuration:0.3f
                                  delay:0.3f
                                options:UIViewAnimationOptionCurveEaseOut
                             animations:^{
                self.progressView.alpha = 0.0f;
            }
                             completion:^(BOOL finished) {
                [self.progressView setProgress:0 animated:NO];
            }];
        }
    }
}

//清楚缓存
- (void)clearCache{
    //        /*
    //         NSArray *type = @[WKWebsiteDataTypeDiskCache,       // 磁盘缓存
    //         WKWebsiteDataTypeMemoryCache,     // 内存缓存
    //         WKWebsiteDataTypeOfflineWebApplicationCache, // HTML 离线 Web 应用程序缓存。
    //         WKWebsiteDataTypeCookies,         // Cookies
    //         WKWebsiteDataTypeSessionStorage,  // HTML 会话存储
    //         WKWebsiteDataTypeLocalStorage,    // HTML 本地存储
    //         WKWebsiteDataTypeWebSQLDatabases, // WebSQL 数据库
    //         WKWebsiteDataTypeIndexedDBDatabases, // IndexedDB 数据库
    //         ];
    //         */
    
    if (@available(iOS 9.0, *)) {
        //        NSArray * types =@[WKWebsiteDataTypeMemoryCache, WKWebsiteDataTypeDiskCache, WKWebsiteDataTypeSessionStorage, WKWebsiteDataTypeLocalStorage]; // 9.0之后才有的
        //        NSSet *websiteDataTypes = [[NSSet setWithArray:types]];
        
        NSSet *websiteDataTypes = [WKWebsiteDataStore allWebsiteDataTypes];
        NSDate *dateFrom = [NSDate dateWithTimeIntervalSince1970:0];
        [[WKWebsiteDataStore defaultDataStore] removeDataOfTypes:websiteDataTypes modifiedSince:dateFrom completionHandler:^{
            NSLog(@"Cookies清理完成");
        }];
    } else {
        NSString *libraryPath = [NSSearchPathForDirectoriesInDomains(NSLibraryDirectory,NSUserDomainMask,YES) objectAtIndex:0];
        NSString *cookiesFolderPath = [libraryPath stringByAppendingString:@"/Cookies"];
        NSLog(@"%@", cookiesFolderPath);
        NSError *errors;
        [[NSFileManager defaultManager] removeItemAtPath:cookiesFolderPath error:&errors];
    }
}



#pragma mark - 初始化定位
- (void)setLocationManager {
    
    self.locationManager = [[AMapLocationManager alloc] init];
    [self.locationManager setLocatingWithReGeocode:YES];
    // 带逆地理信息的一次定位（返回坐标和地址信息）
    [self.locationManager setDesiredAccuracy:kCLLocationAccuracyHundredMeters];
    //   定位超时时间，最低2s，此处设置为2s
    self.locationManager.locationTimeout =2;
    //   逆地理请求超时时间，最低2s，此处设置为2s
    self.locationManager.reGeocodeTimeout = 2;
    
    self.locationManager.delegate = self;
    [self.locationManager startUpdatingLocation];
  
}

#pragma mark - 定位回调
- (void)amapLocationManager:(AMapLocationManager *)manager didUpdateLocation:(CLLocation *)location reGeocode:(AMapLocationReGeocode *)reGeocode {
    
    NSLog(@"111locSuccess amapLocationManager:{%f , %f};", location.coordinate.latitude, location.coordinate.longitude);

    NSLog(@"222locSuccess amapLocationManager:{%f , %f};", location.coordinate.latitude, fabs(location.coordinate.longitude));
    
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
    
    HHLog(@"1111--------- %@", message);
}

@end
