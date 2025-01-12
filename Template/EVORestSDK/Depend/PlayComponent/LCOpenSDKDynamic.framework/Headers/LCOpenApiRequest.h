//
//  BaseRequest.hpp
//  LCOpenApiClient_C++
//
//  Created by mac318340418 on 17/1/5.
//  Copyright © 2017年 bzy. All rights reserved.
//

#ifndef _LCOpenApiRequest_H_
#define _LCOpenApiRequest_H_

#include <iostream>
#include <string>

using namespace std;
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi {

    class LCOpenApiRequest {
    public:
        virtual int build() = 0;
        LCOpenApiRequest():isUseKeepAlive(0){};
    public:
        string apiname;
        string fullname;
        string method;
        string uri;
        string content_type;
        string body;
        
        string params;
        string messageId;
        string time;
        string nonce;
        string signMd5;
		string signSaas4Dcloud;
		string signSaas4Cos;
        string contentMd5;
        int isUseKeepAlive;

		//for dolynk
		string dolynk_deviceID;
    };
}
}

#endif /* BaseRequest_cpp */
