/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_BatchModifyLivePlan_H_
#define _LC_OPENAPI_CLIENT_BatchModifyLivePlan_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
批量修改直播计划时间
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class BatchModifyLivePlanRequest : public LCOpenApiRequest
	{
	public:
		class BatchModifyLivePlanRequestData
		{
		public:
			BatchModifyLivePlanRequestData();
			~BatchModifyLivePlanRequestData();
			
		public:
			/**  */
			string liveToken;
		public:
			/** 授权的token(userToken或accessToken) */
			string token;
		public:
			/** define a list with struct of BatchModifyLivePlanRequestData_RulesElement */
			class BatchModifyLivePlanRequestData_RulesElement : public LCOpenApiBase
			{
			public:
				BatchModifyLivePlanRequestData_RulesElement();
				~BatchModifyLivePlanRequestData_RulesElement();
			public:
				/** 结束时间 */
				string endTime;
			public:
				/** 开始时间 */
				string beginTime;
			public:
				/** 重复周期monday,tuesday,wednesday,thursday,friday,saturday,sunday */
				string period;
			};
		public:
			LCOpenApiVector<BatchModifyLivePlanRequestData_RulesElement> rules;

		};
	public:
		BatchModifyLivePlanRequest();
		~BatchModifyLivePlanRequest();
	public:
		virtual int build();
	public:
		BatchModifyLivePlanRequestData data;
		MetaInfo* _metainfo_BatchModifyLivePlanRequestData;
	};

	
	typedef typename BatchModifyLivePlanRequest::BatchModifyLivePlanRequestData BatchModifyLivePlanRequestData;
	typedef typename BatchModifyLivePlanRequest::BatchModifyLivePlanRequestData::BatchModifyLivePlanRequestData_RulesElement BatchModifyLivePlanRequestData_RulesElement;


	class BatchModifyLivePlanResponse : public LCOpenApiResponse
	{
	public:
		class BatchModifyLivePlanResponseData
		{
		public:
			BatchModifyLivePlanResponseData();
			~BatchModifyLivePlanResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		BatchModifyLivePlanResponse();
		~BatchModifyLivePlanResponse();
	public:
		virtual int parse();
	public:
		BatchModifyLivePlanResponseData data;
		MetaInfo* _metainfo_BatchModifyLivePlanResponseData;
	};

	
	typedef typename BatchModifyLivePlanResponse::BatchModifyLivePlanResponseData BatchModifyLivePlanResponseData;

}
}

#endif
