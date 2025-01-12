/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetHeatMapEnable_H_
#define _LC_OPENAPI_CLIENT_GetHeatMapEnable_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置热度分析通道级使能开关

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetHeatMapEnableRequest : public LCOpenApiRequest
	{
	public:
		class GetHeatMapEnableRequestData
		{
		public:
			GetHeatMapEnableRequestData();
			~GetHeatMapEnableRequestData();
			
		public:
			/** [cstr]getHeatMapEnable */
			#define _STATIC_GetHeatMapEnableRequestData_method "getHeatMapEnable"
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
		GetHeatMapEnableRequest();
		~GetHeatMapEnableRequest();
	public:
		virtual int build();
	public:
		GetHeatMapEnableRequestData data;
		MetaInfo* _metainfo_GetHeatMapEnableRequestData;
	};

	
	typedef typename GetHeatMapEnableRequest::GetHeatMapEnableRequestData GetHeatMapEnableRequestData;


	class GetHeatMapEnableResponse : public LCOpenApiResponse
	{
	public:
		class GetHeatMapEnableResponseData
		{
		public:
			GetHeatMapEnableResponseData();
			~GetHeatMapEnableResponseData();
			
		public:
			/** on打开，off关闭 */
			string enable;

		};
	public:
		GetHeatMapEnableResponse();
		~GetHeatMapEnableResponse();
	public:
		virtual int parse();
	public:
		GetHeatMapEnableResponseData data;
		MetaInfo* _metainfo_GetHeatMapEnableResponseData;
	};

	
	typedef typename GetHeatMapEnableResponse::GetHeatMapEnableResponseData GetHeatMapEnableResponseData;

}
}

#endif
