//
//  DPRestProSDKDataAdapterCore.h
//  Pods
//
//  Created by zyx on 17/2/16.
//
//

#import <Foundation/Foundation.h>
//
#import <ICCDataAdapterProtocol/ICCDataAdapterProtocol-umbrella.h>
//
//#define REST_API_TIMEOUT 10
//
///**
// *  定义请求以后callback
// *
// */
//typedef  void(^requestCallBack)(void);
//
//#if __cplusplus
//extern "C" {
//#endif
//
///**
// *  定义请求
// *
// *  @param reqIn request
// *  @param respIn response
// *
// */
//void RequestWithClient(void* client,void* reqIn,void* respIn,NSInteger timeout,NSError** error,requestCallBack blockCallback);
//void Request(void* reqIn,void* respIn,NSError** error,requestCallBack blockCallback);
//void RequestFirstLogin(void* reqIn,void* respIn,NSError** error, NSString *host, NSInteger port, requestCallBack blockCallback);
//void RequestSecLogin(void* reqIn,void* respIn,NSError** error,NSString *host, NSInteger port, requestCallBack blockCallback);
///**
// *  定义压缩请求 response的body就是zip压缩的数据
// *
// *  @param reqIn request
// *  @param respIn response
// *
// */
//void RequestCompress(void* reqIn,void* respIn,NSError** error,requestCallBack blockCallback);
//void RequestCompressWithTimeout(void* reqIn,void* respIn,int timeOut,NSError** error,requestCallBack blockCallback);
////timeOut单位s
//void RequestWithTimeout(void* reqIn,void* respIn,int timeOut,NSError** error,requestCallBack blockCallback);
//void RequestWithCustom(void* reqIn,void* respIn,int timeOut, NSString *host, int port, BOOL enableHttps , const char * appendHeaders ,NSError** error,requestCallBack blockCallback);
//void RequestEVO(void* reqIn,void* respIn,NSError** error,requestCallBack blockCallback);
//void RequestEVOWithTimeout(void* reqIn,void* respIn,int timeOut,NSError** error,requestCallBack blockCallback);
//void setRestSDKServerInfo();
//void setHttpsMode(BOOL bHttpsEnable);
//PSDKHandle GetRestSdk();
//
//
//#if __cplusplus
//}
//#endif

#pragma mark--register model to IDHModuleProtocol
@interface DPRestProSDKDataAdapterCore : NSObject<DataAdapterCoreProtocol>



@end
