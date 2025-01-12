/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DoorbellCallAnswer_H_
#define _LC_OPENAPI_CLIENT_DoorbellCallAnswer_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
接听门铃呼叫
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DoorbellCallAnswerRequest : public LCOpenApiRequest
	{
	public:
		class DoorbellCallAnswerRequestData
		{
		public:
			DoorbellCallAnswerRequestData();
			~DoorbellCallAnswerRequestData();
			
		public:
			/** 授权的token */
			string token;
		public:
			/** 门铃设备序列号 */
			string deviceId ;

		};
	public:
		DoorbellCallAnswerRequest();
		~DoorbellCallAnswerRequest();
	public:
		virtual int build();
	public:
		DoorbellCallAnswerRequestData data;
		MetaInfo* _metainfo_DoorbellCallAnswerRequestData;
	};

	
	typedef typename DoorbellCallAnswerRequest::DoorbellCallAnswerRequestData DoorbellCallAnswerRequestData;


	class DoorbellCallAnswerResponse : public LCOpenApiResponse
	{
	public:
		class DoorbellCallAnswerResponseData
		{
		public:
			DoorbellCallAnswerResponseData();
			~DoorbellCallAnswerResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		DoorbellCallAnswerResponse();
		~DoorbellCallAnswerResponse();
	public:
		virtual int parse();
	public:
		DoorbellCallAnswerResponseData data;
		MetaInfo* _metainfo_DoorbellCallAnswerResponseData;
	};

	
	typedef typename DoorbellCallAnswerResponse::DoorbellCallAnswerResponseData DoorbellCallAnswerResponseData;

}
}

#endif
