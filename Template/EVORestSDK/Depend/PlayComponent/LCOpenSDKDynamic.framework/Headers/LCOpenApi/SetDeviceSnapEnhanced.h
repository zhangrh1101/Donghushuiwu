/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SetDeviceSnapEnhanced_H_
#define _LC_OPENAPI_CLIENT_SetDeviceSnapEnhanced_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设备抓图。建议开发者根据设备性能实测接口后，来确定使用哪个设备抓图接口：
若设备性能较好（每秒都可以处理并返回抓图图片），则建议开发者调用setDeviceSnapEnhanced接口；
若设备性能较差（主要针对2017年前上市的设备），则建议开发者调用setDeviceSnap接口进行设备抓图；
注：客户端请求时间间隔需大于等于1s，若客户端请求时间间隔小于1s，默认返回上一次抓图图片。返回结果中，抓图访问地址（url）7天内有效。
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class SetDeviceSnapEnhancedRequest : public LCOpenApiRequest
	{
	public:
		class SetDeviceSnapEnhancedRequestData
		{
		public:
			SetDeviceSnapEnhancedRequestData();
			~SetDeviceSnapEnhancedRequestData();
			
		public:
			/** [cstr]setDeviceSnapEnhanced */
			#define _STATIC_SetDeviceSnapEnhancedRequestData_method "setDeviceSnapEnhanced"
			string method;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		SetDeviceSnapEnhancedRequest();
		~SetDeviceSnapEnhancedRequest();
	public:
		virtual int build();
	public:
		SetDeviceSnapEnhancedRequestData data;
		MetaInfo* _metainfo_SetDeviceSnapEnhancedRequestData;
	};

	
	typedef typename SetDeviceSnapEnhancedRequest::SetDeviceSnapEnhancedRequestData SetDeviceSnapEnhancedRequestData;


	class SetDeviceSnapEnhancedResponse : public LCOpenApiResponse
	{
	public:
		class SetDeviceSnapEnhancedResponseData
		{
		public:
			SetDeviceSnapEnhancedResponseData();
			~SetDeviceSnapEnhancedResponseData();
			
		public:
			/** 抓图访问地址 */
			string url;

		};
	public:
		SetDeviceSnapEnhancedResponse();
		~SetDeviceSnapEnhancedResponse();
	public:
		virtual int parse();
	public:
		SetDeviceSnapEnhancedResponseData data;
		MetaInfo* _metainfo_SetDeviceSnapEnhancedResponseData;
	};

	
	typedef typename SetDeviceSnapEnhancedResponse::SetDeviceSnapEnhancedResponseData SetDeviceSnapEnhancedResponseData;

}
}

#endif
