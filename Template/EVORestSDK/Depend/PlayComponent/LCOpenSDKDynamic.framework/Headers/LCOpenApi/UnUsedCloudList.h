/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_UnUsedCloudList_H_
#define _LC_OPENAPI_CLIENT_UnUsedCloudList_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取未启用的云存储服务列表

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class UnUsedCloudListRequest : public LCOpenApiRequest
	{
	public:
		class UnUsedCloudListRequestData
		{
		public:
			UnUsedCloudListRequestData();
			~UnUsedCloudListRequestData();
			
		public:
			/** 上次查询最后一个deviceCloudId */
			string nextDeviceCloudId;
		public:
			/** 条数 最大15 */
			string limit;
		public:
			/** 授权的token(userToken或accessToken) */
			string token;
		public:
			/** [cstr]unUsedCloudList */
			#define _STATIC_UnUsedCloudListRequestData_method "unUsedCloudList"
			string method;

		};
	public:
		UnUsedCloudListRequest();
		~UnUsedCloudListRequest();
	public:
		virtual int build();
	public:
		UnUsedCloudListRequestData data;
		MetaInfo* _metainfo_UnUsedCloudListRequestData;
	};

	
	typedef typename UnUsedCloudListRequest::UnUsedCloudListRequestData UnUsedCloudListRequestData;


	class UnUsedCloudListResponse : public LCOpenApiResponse
	{
	public:
		class UnUsedCloudListResponseData
		{
		public:
			UnUsedCloudListResponseData();
			~UnUsedCloudListResponseData();
			
		public:
			/**  */
			string nextDeviceCloudId;
		public:
			/** define a list with struct of UnUsedCloudListResponseData_CloudInfosElement */
			class UnUsedCloudListResponseData_CloudInfosElement : public LCOpenApiBase
			{
			public:
				UnUsedCloudListResponseData_CloudInfosElement();
				~UnUsedCloudListResponseData_CloudInfosElement();
			public:
				/** 套餐名称 */
				string name;
			public:
				/** 云存储策略id */
				string strategyId;
			public:
				/** [long]云存储套餐唯一id */
				int64 deviceCloudId;
			public:
				/** [int]云存储数量 */
				int cloudCount;
			public:
				/** [int]剩余有效天数，正数表示剩余天数，-1表示未使用过 */
				int validDays;
			};
		public:
			LCOpenApiVector<UnUsedCloudListResponseData_CloudInfosElement> cloudInfos;

		};
	public:
		UnUsedCloudListResponse();
		~UnUsedCloudListResponse();
	public:
		virtual int parse();
	public:
		UnUsedCloudListResponseData data;
		MetaInfo* _metainfo_UnUsedCloudListResponseData;
	};

	
	typedef typename UnUsedCloudListResponse::UnUsedCloudListResponseData UnUsedCloudListResponseData;
	typedef typename UnUsedCloudListResponse::UnUsedCloudListResponseData::UnUsedCloudListResponseData_CloudInfosElement UnUsedCloudListResponseData_CloudInfosElement;

}
}

#endif
