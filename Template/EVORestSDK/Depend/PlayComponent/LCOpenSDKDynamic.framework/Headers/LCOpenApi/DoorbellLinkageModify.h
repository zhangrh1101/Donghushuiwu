/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DoorbellLinkageModify_H_
#define _LC_OPENAPI_CLIENT_DoorbellLinkageModify_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
解除门铃和铃铛的关联关系
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DoorbellLinkageModifyRequest : public LCOpenApiRequest
	{
	public:
		class DoorbellLinkageModifyRequestData
		{
		public:
			DoorbellLinkageModifyRequestData();
			~DoorbellLinkageModifyRequestData();
			
		public:
			/** 旧的铃铛ID */
			string oldBellId;
		public:
			/** 新的铃铛ID */
			string newBellId;
		public:
			/** 门铃的ID */
			string doorId;
		public:
			/** 授权的token */
			string token;

		};
	public:
		DoorbellLinkageModifyRequest();
		~DoorbellLinkageModifyRequest();
	public:
		virtual int build();
	public:
		DoorbellLinkageModifyRequestData data;
		MetaInfo* _metainfo_DoorbellLinkageModifyRequestData;
	};

	
	typedef typename DoorbellLinkageModifyRequest::DoorbellLinkageModifyRequestData DoorbellLinkageModifyRequestData;


	class DoorbellLinkageModifyResponse : public LCOpenApiResponse
	{
	public:
		class DoorbellLinkageModifyResponseData
		{
		public:
			DoorbellLinkageModifyResponseData();
			~DoorbellLinkageModifyResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		DoorbellLinkageModifyResponse();
		~DoorbellLinkageModifyResponse();
	public:
		virtual int parse();
	public:
		DoorbellLinkageModifyResponseData data;
		MetaInfo* _metainfo_DoorbellLinkageModifyResponseData;
	};

	
	typedef typename DoorbellLinkageModifyResponse::DoorbellLinkageModifyResponseData DoorbellLinkageModifyResponseData;

}
}

#endif
