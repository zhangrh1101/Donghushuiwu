/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DoorbellCallHangUp_H_
#define _LC_OPENAPI_CLIENT_DoorbellCallHangUp_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
挂断门铃呼叫
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DoorbellCallHangUpRequest : public LCOpenApiRequest
	{
	public:
		class DoorbellCallHangUpRequestData
		{
		public:
			DoorbellCallHangUpRequestData();
			~DoorbellCallHangUpRequestData();
			
		public:
			/** 授权的token */
			string token;
		public:
			/** 门铃设备序列号 */
			string deviceId ;

		};
	public:
		DoorbellCallHangUpRequest();
		~DoorbellCallHangUpRequest();
	public:
		virtual int build();
	public:
		DoorbellCallHangUpRequestData data;
		MetaInfo* _metainfo_DoorbellCallHangUpRequestData;
	};

	
	typedef typename DoorbellCallHangUpRequest::DoorbellCallHangUpRequestData DoorbellCallHangUpRequestData;


	class DoorbellCallHangUpResponse : public LCOpenApiResponse
	{
	public:
		class DoorbellCallHangUpResponseData
		{
		public:
			DoorbellCallHangUpResponseData();
			~DoorbellCallHangUpResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		DoorbellCallHangUpResponse();
		~DoorbellCallHangUpResponse();
	public:
		virtual int parse();
	public:
		DoorbellCallHangUpResponseData data;
		MetaInfo* _metainfo_DoorbellCallHangUpResponseData;
	};

	
	typedef typename DoorbellCallHangUpResponse::DoorbellCallHangUpResponseData DoorbellCallHangUpResponseData;

}
}

#endif
