//
//  DPRestProSDKDataAdapterDefine.h
//  Pods
//
//  Created by huang_yundi on 2017/7/18.
//
//
#import "DPRestProSDKDataAdapterCore.h"

// 初始化rest变量 RestRequestType=请求类型，pRequest=请求变量，RestResponseType=响应类型，pResponse=响应变量， retValue=返回值
#define INIT_REST_REQUEST_RESPONSE(RestRequestType, pRequest, RestResponseType, pResponse, retValue)\
do \
{\
pRequest = PSDKAPI_INIT(RestRequestType);\
if ( NULL == pRequest )\
{\
NSLog(@"%s", "memory allocte error, creat 'RestRequestType*' failed.\n");\
return retValue;\
}\
\
pResponse = PSDKAPI_INIT(RestResponseType);\
if ( NULL == pResponse )\
{\
NSLog(@"%s", "memory allocte error, creat 'RestResponseType*' failed.\n");\
PSDKAPI_DESTROY(pRequest);\
return retValue;\
}\
} while (0);

// 反初始化rest变量
#define UNINIT_REST_REQUEST_RESPONSE(pRequest, pResponse)\
do \
{\
PSDKAPI_DESTROY(pRequest);\
PSDKAPI_DESTROY(pResponse);\
} while (0);

#define GET_URL_WITHIN_TOKEN(ProtocolString,token, Option)\
do \
{\
    if (token)\
    {\
        NSString* strURL = [NSString stringWithFormat:@"%@%@", ProtocolString, token];\
        Option = CS([strURL UTF8String]);\
    }\
} while (0);


#define START_TIME_TEST    NSTimeInterval _countBefore__ = 0, _countAfter__ = 0;\
_countBefore__ = [[NSDate date] timeIntervalSince1970];\
NSLog(@"[ Start ] ");

#define END_TIME_TEST	    _countAfter__ = [[NSDate date] timeIntervalSince1970];\
NSLog(@"[ End ] ~~~~~~~~~~~~~~ %f s", _countAfter__ - _countBefore__);

//#define BH_NOTIFICATION_REGISTER_MQ     ((BHModuleEventType)(BHMDidCustomEvent + 1001))
//#define BH_NOTIFICATION_UNREGISTER_MQ   ((BHModuleEventType)(BHMDidCustomEvent + 1002))
#define BH_NOTIFICATION_ITEM_USERID     @"UserID"
