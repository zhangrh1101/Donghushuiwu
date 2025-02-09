/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetStrategies_H_
#define _LC_OPENAPI_CLIENT_GetStrategies_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取所有云存储套餐

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetStrategiesRequest : public LCOpenApiRequest
	{
	public:
		class GetStrategiesRequestData
		{
		public:
			GetStrategiesRequestData();
			~GetStrategiesRequestData();
			
		public:
			/** [cstr]getStrategies */
			#define _STATIC_GetStrategiesRequestData_method "getStrategies"
			string method;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		GetStrategiesRequest();
		~GetStrategiesRequest();
	public:
		virtual int build();
	public:
		GetStrategiesRequestData data;
		MetaInfo* _metainfo_GetStrategiesRequestData;
	};

	
	typedef typename GetStrategiesRequest::GetStrategiesRequestData GetStrategiesRequestData;


	class GetStrategiesResponse : public LCOpenApiResponse
	{
	public:
		class GetStrategiesResponseData
		{
		public:
			GetStrategiesResponseData();
			~GetStrategiesResponseData();
			
		public:
			/** define a list with struct of GetStrategiesResponseData_StrategiesElement */
			class GetStrategiesResponseData_StrategiesElement : public LCOpenApiBase
			{
			public:
				GetStrategiesResponseData_StrategiesElement();
				~GetStrategiesResponseData_StrategiesElement();
			public:
				/** 云存储套餐存储时间 */
				string recordStorageTimeLimit;
			public:
				/** 云录像host */
				string description;
			public:
				/** [int]套餐ID */
				int strategyId;
			public:
				/** 套餐使用有效时长（天） */
				string timeLimit;
			public:
				/** 图片Url */
				string picUrl;
			public:
				/** 名称 */
				string name;
			public:
				/** 云录像port */
				string fee;
			};
		public:
			LCOpenApiVector<GetStrategiesResponseData_StrategiesElement> strategies;

		};
	public:
		GetStrategiesResponse();
		~GetStrategiesResponse();
	public:
		virtual int parse();
	public:
		GetStrategiesResponseData data;
		MetaInfo* _metainfo_GetStrategiesResponseData;
	};

	
	typedef typename GetStrategiesResponse::GetStrategiesResponseData GetStrategiesResponseData;
	typedef typename GetStrategiesResponse::GetStrategiesResponseData::GetStrategiesResponseData_StrategiesElement GetStrategiesResponseData_StrategiesElement;

}
}

#endif
