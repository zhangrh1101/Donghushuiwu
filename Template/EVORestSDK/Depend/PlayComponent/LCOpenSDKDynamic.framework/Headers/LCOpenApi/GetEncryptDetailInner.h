/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetEncryptDetailInner_H_
#define _LC_OPENAPI_CLIENT_GetEncryptDetailInner_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取单个设备的信息

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetEncryptDetailInnerRequest : public LCOpenApiRequest
	{
	public:
		class GetEncryptDetailInnerRequestData
		{
		public:
			GetEncryptDetailInnerRequestData();
			~GetEncryptDetailInnerRequestData();
			
		public:
			/** 通道号 */
			string channelId;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		GetEncryptDetailInnerRequest();
		~GetEncryptDetailInnerRequest();
	public:
		virtual int build();
	public:
		GetEncryptDetailInnerRequestData data;
		MetaInfo* _metainfo_GetEncryptDetailInnerRequestData;
	};

	
	typedef typename GetEncryptDetailInnerRequest::GetEncryptDetailInnerRequestData GetEncryptDetailInnerRequestData;


	class GetEncryptDetailInnerResponse : public LCOpenApiResponse
	{
	public:
		class GetEncryptDetailInnerResponseData
		{
		public:
			GetEncryptDetailInnerResponseData();
			~GetEncryptDetailInnerResponseData();
			
		public:
			/** [int]套餐状态 -1：未开通， 0:过期 1:使用中 */
			int strategyStatus;
		public:
			/** 套餐结束时间 */
			string endTime;

		};
	public:
		GetEncryptDetailInnerResponse();
		~GetEncryptDetailInnerResponse();
	public:
		virtual int parse();
	public:
		GetEncryptDetailInnerResponseData data;
		MetaInfo* _metainfo_GetEncryptDetailInnerResponseData;
	};

	
	typedef typename GetEncryptDetailInnerResponse::GetEncryptDetailInnerResponseData GetEncryptDetailInnerResponseData;

}
}

#endif
