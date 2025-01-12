/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SetHeatMapEnable_H_
#define _LC_OPENAPI_CLIENT_SetHeatMapEnable_H_

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
	class SetHeatMapEnableRequest : public LCOpenApiRequest
	{
	public:
		class SetHeatMapEnableRequestData
		{
		public:
			SetHeatMapEnableRequestData();
			~SetHeatMapEnableRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** on打开，off关闭 */
			string enable;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** [cstr]setHeatMapEnable */
			#define _STATIC_SetHeatMapEnableRequestData_method "setHeatMapEnable"
			string method;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		SetHeatMapEnableRequest();
		~SetHeatMapEnableRequest();
	public:
		virtual int build();
	public:
		SetHeatMapEnableRequestData data;
		MetaInfo* _metainfo_SetHeatMapEnableRequestData;
	};

	
	typedef typename SetHeatMapEnableRequest::SetHeatMapEnableRequestData SetHeatMapEnableRequestData;


	class SetHeatMapEnableResponse : public LCOpenApiResponse
	{
	public:
		class SetHeatMapEnableResponseData
		{
		public:
			SetHeatMapEnableResponseData();
			~SetHeatMapEnableResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		SetHeatMapEnableResponse();
		~SetHeatMapEnableResponse();
	public:
		virtual int parse();
	public:
		SetHeatMapEnableResponseData data;
		MetaInfo* _metainfo_SetHeatMapEnableResponseData;
	};

	
	typedef typename SetHeatMapEnableResponse::SetHeatMapEnableResponseData SetHeatMapEnableResponseData;

}
}

#endif
