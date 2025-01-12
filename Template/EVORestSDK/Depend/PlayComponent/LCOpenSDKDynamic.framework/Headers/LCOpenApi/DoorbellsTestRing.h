/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DoorbellsTestRing_H_
#define _LC_OPENAPI_CLIENT_DoorbellsTestRing_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
试听铃声
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DoorbellsTestRingRequest : public LCOpenApiRequest
	{
	public:
		class DoorbellsTestRingRequestData
		{
		public:
			DoorbellsTestRingRequestData();
			~DoorbellsTestRingRequestData();
			
		public:
			/** 试听的铃铛ID */
			LCOpenApiVector<string> bellIds;
		public:
			/** 授权的token */
			string token;
		public:
			/** 试听的铃声索引号 */
			string index;

		};
	public:
		DoorbellsTestRingRequest();
		~DoorbellsTestRingRequest();
	public:
		virtual int build();
	public:
		DoorbellsTestRingRequestData data;
		MetaInfo* _metainfo_DoorbellsTestRingRequestData;
	};

	
	typedef typename DoorbellsTestRingRequest::DoorbellsTestRingRequestData DoorbellsTestRingRequestData;


	class DoorbellsTestRingResponse : public LCOpenApiResponse
	{
	public:
		class DoorbellsTestRingResponseData
		{
		public:
			DoorbellsTestRingResponseData();
			~DoorbellsTestRingResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		DoorbellsTestRingResponse();
		~DoorbellsTestRingResponse();
	public:
		virtual int parse();
	public:
		DoorbellsTestRingResponseData data;
		MetaInfo* _metainfo_DoorbellsTestRingResponseData;
	};

	
	typedef typename DoorbellsTestRingResponse::DoorbellsTestRingResponseData DoorbellsTestRingResponseData;

}
}

#endif
