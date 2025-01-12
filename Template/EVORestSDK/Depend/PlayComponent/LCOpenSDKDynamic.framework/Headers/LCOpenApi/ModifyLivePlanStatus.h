/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_ModifyLivePlanStatus_H_
#define _LC_OPENAPI_CLIENT_ModifyLivePlanStatus_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置直播计划开关
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class ModifyLivePlanStatusRequest : public LCOpenApiRequest
	{
	public:
		class ModifyLivePlanStatusRequestData
		{
		public:
			ModifyLivePlanStatusRequestData();
			~ModifyLivePlanStatusRequestData();
			
		public:
			/** 状态（on:开；off:关） */
			string status;
		public:
			/**  */
			string liveToken;
		public:
			/** 授权的管理员token(accessToken) */
			string token;

		};
	public:
		ModifyLivePlanStatusRequest();
		~ModifyLivePlanStatusRequest();
	public:
		virtual int build();
	public:
		ModifyLivePlanStatusRequestData data;
		MetaInfo* _metainfo_ModifyLivePlanStatusRequestData;
	};

	
	typedef typename ModifyLivePlanStatusRequest::ModifyLivePlanStatusRequestData ModifyLivePlanStatusRequestData;


	class ModifyLivePlanStatusResponse : public LCOpenApiResponse
	{
	public:
		class ModifyLivePlanStatusResponseData
		{
		public:
			ModifyLivePlanStatusResponseData();
			~ModifyLivePlanStatusResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		ModifyLivePlanStatusResponse();
		~ModifyLivePlanStatusResponse();
	public:
		virtual int parse();
	public:
		ModifyLivePlanStatusResponseData data;
		MetaInfo* _metainfo_ModifyLivePlanStatusResponseData;
	};

	
	typedef typename ModifyLivePlanStatusResponse::ModifyLivePlanStatusResponseData ModifyLivePlanStatusResponseData;

}
}

#endif
