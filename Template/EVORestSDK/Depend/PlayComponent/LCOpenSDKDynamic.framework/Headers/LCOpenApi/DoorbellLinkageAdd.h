/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DoorbellLinkageAdd_H_
#define _LC_OPENAPI_CLIENT_DoorbellLinkageAdd_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
门铃关联铃铛
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DoorbellLinkageAddRequest : public LCOpenApiRequest
	{
	public:
		class DoorbellLinkageAddRequestData
		{
		public:
			DoorbellLinkageAddRequestData();
			~DoorbellLinkageAddRequestData();
			
		public:
			/** 铃铛的ID */
			LCOpenApiVector<string> bellIds;
		public:
			/** 门铃的ID */
			string doorId;
		public:
			/** 授权的token */
			string token;

		};
	public:
		DoorbellLinkageAddRequest();
		~DoorbellLinkageAddRequest();
	public:
		virtual int build();
	public:
		DoorbellLinkageAddRequestData data;
		MetaInfo* _metainfo_DoorbellLinkageAddRequestData;
	};

	
	typedef typename DoorbellLinkageAddRequest::DoorbellLinkageAddRequestData DoorbellLinkageAddRequestData;


	class DoorbellLinkageAddResponse : public LCOpenApiResponse
	{
	public:
		class DoorbellLinkageAddResponseData
		{
		public:
			DoorbellLinkageAddResponseData();
			~DoorbellLinkageAddResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		DoorbellLinkageAddResponse();
		~DoorbellLinkageAddResponse();
	public:
		virtual int parse();
	public:
		DoorbellLinkageAddResponseData data;
		MetaInfo* _metainfo_DoorbellLinkageAddResponseData;
	};

	
	typedef typename DoorbellLinkageAddResponse::DoorbellLinkageAddResponseData DoorbellLinkageAddResponseData;

}
}

#endif
