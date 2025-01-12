/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_ModifyLivePlan_H_
#define _LC_OPENAPI_CLIENT_ModifyLivePlan_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
修改直播计划时间
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class ModifyLivePlanRequest : public LCOpenApiRequest
	{
	public:
		class ModifyLivePlanRequestData
		{
		public:
			ModifyLivePlanRequestData();
			~ModifyLivePlanRequestData();
			
		public:
			/**  */
			string liveToken;
		public:
			/** 授权的token(userToken或accessToken) */
			string token;
		public:
			/** 结束时间 */
			string endTime;
		public:
			/** 开始时间 */
			string beginTime;
		public:
			/** 直播周期,always：永久,once：仅一次,everyday：每天 */
			string period;

		};
	public:
		ModifyLivePlanRequest();
		~ModifyLivePlanRequest();
	public:
		virtual int build();
	public:
		ModifyLivePlanRequestData data;
		MetaInfo* _metainfo_ModifyLivePlanRequestData;
	};

	
	typedef typename ModifyLivePlanRequest::ModifyLivePlanRequestData ModifyLivePlanRequestData;


	class ModifyLivePlanResponse : public LCOpenApiResponse
	{
	public:
		class ModifyLivePlanResponseData
		{
		public:
			ModifyLivePlanResponseData();
			~ModifyLivePlanResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		ModifyLivePlanResponse();
		~ModifyLivePlanResponse();
	public:
		virtual int parse();
	public:
		ModifyLivePlanResponseData data;
		MetaInfo* _metainfo_ModifyLivePlanResponseData;
	};

	
	typedef typename ModifyLivePlanResponse::ModifyLivePlanResponseData ModifyLivePlanResponseData;

}
}

#endif
