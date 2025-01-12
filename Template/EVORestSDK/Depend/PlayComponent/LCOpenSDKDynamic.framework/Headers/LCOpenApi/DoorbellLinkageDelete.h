/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DoorbellLinkageDelete_H_
#define _LC_OPENAPI_CLIENT_DoorbellLinkageDelete_H_

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
	class DoorbellLinkageDeleteRequest : public LCOpenApiRequest
	{
	public:
		class DoorbellLinkageDeleteRequestData
		{
		public:
			DoorbellLinkageDeleteRequestData();
			~DoorbellLinkageDeleteRequestData();
			
		public:
			/** 铃铛的ID */
			LCOpenApiVector<string> bellIds;
		public:
			/** 门铃的ID */
			string doorId;
		public:
			/**  授权的token */
			string token;

		};
	public:
		DoorbellLinkageDeleteRequest();
		~DoorbellLinkageDeleteRequest();
	public:
		virtual int build();
	public:
		DoorbellLinkageDeleteRequestData data;
		MetaInfo* _metainfo_DoorbellLinkageDeleteRequestData;
	};

	
	typedef typename DoorbellLinkageDeleteRequest::DoorbellLinkageDeleteRequestData DoorbellLinkageDeleteRequestData;


	class DoorbellLinkageDeleteResponse : public LCOpenApiResponse
	{
	public:
		class DoorbellLinkageDeleteResponseData
		{
		public:
			DoorbellLinkageDeleteResponseData();
			~DoorbellLinkageDeleteResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		DoorbellLinkageDeleteResponse();
		~DoorbellLinkageDeleteResponse();
	public:
		virtual int parse();
	public:
		DoorbellLinkageDeleteResponseData data;
		MetaInfo* _metainfo_DoorbellLinkageDeleteResponseData;
	};

	
	typedef typename DoorbellLinkageDeleteResponse::DoorbellLinkageDeleteResponseData DoorbellLinkageDeleteResponseData;

}
}

#endif
