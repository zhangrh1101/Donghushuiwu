/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetStorageStrategy_H_
#define _LC_OPENAPI_CLIENT_GetStorageStrategy_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取云存储套餐策略，如开通多个则获取最早开通且未到期的云存储

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetStorageStrategyRequest : public LCOpenApiRequest
	{
	public:
		class GetStorageStrategyRequestData
		{
		public:
			GetStorageStrategyRequestData();
			~GetStorageStrategyRequestData();
			
		public:
			/** [cstr]getStorageStrategy */
			#define _STATIC_GetStorageStrategyRequestData_method "getStorageStrategy"
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
		GetStorageStrategyRequest();
		~GetStorageStrategyRequest();
	public:
		virtual int build();
	public:
		GetStorageStrategyRequestData data;
		MetaInfo* _metainfo_GetStorageStrategyRequestData;
	};

	
	typedef typename GetStorageStrategyRequest::GetStorageStrategyRequestData GetStorageStrategyRequestData;


	class GetStorageStrategyResponse : public LCOpenApiResponse
	{
	public:
		class GetStorageStrategyResponseData
		{
		public:
			GetStorageStrategyResponseData();
			~GetStorageStrategyResponseData();
			
		public:
			/** [int]套餐状态 -1-未开通 0-过期 1-使用中 2-暂停 */
			int strategyStatus;
		public:
			/** [int]套餐ID */
			int strategyId;
		public:
			/** 套餐名称 */
			string name;
		public:
			/** [bool]是否有默认套餐 */
			bool hasDefault;

		};
	public:
		GetStorageStrategyResponse();
		~GetStorageStrategyResponse();
	public:
		virtual int parse();
	public:
		GetStorageStrategyResponseData data;
		MetaInfo* _metainfo_GetStorageStrategyResponseData;
	};

	
	typedef typename GetStorageStrategyResponse::GetStorageStrategyResponseData GetStorageStrategyResponseData;

}
}

#endif
