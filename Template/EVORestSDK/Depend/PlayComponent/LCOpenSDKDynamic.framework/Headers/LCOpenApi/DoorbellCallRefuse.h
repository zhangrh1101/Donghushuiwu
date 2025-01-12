/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DoorbellCallRefuse_H_
#define _LC_OPENAPI_CLIENT_DoorbellCallRefuse_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
拒接门铃呼叫
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DoorbellCallRefuseRequest : public LCOpenApiRequest
	{
	public:
		class DoorbellCallRefuseRequestData
		{
		public:
			DoorbellCallRefuseRequestData();
			~DoorbellCallRefuseRequestData();
			
		public:
			/** 授权的token */
			string token;
		public:
			/** 门铃设备序列号 */
			string deviceId ;

		};
	public:
		DoorbellCallRefuseRequest();
		~DoorbellCallRefuseRequest();
	public:
		virtual int build();
	public:
		DoorbellCallRefuseRequestData data;
		MetaInfo* _metainfo_DoorbellCallRefuseRequestData;
	};

	
	typedef typename DoorbellCallRefuseRequest::DoorbellCallRefuseRequestData DoorbellCallRefuseRequestData;


	class DoorbellCallRefuseResponse : public LCOpenApiResponse
	{
	public:
		class DoorbellCallRefuseResponseData
		{
		public:
			DoorbellCallRefuseResponseData();
			~DoorbellCallRefuseResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		DoorbellCallRefuseResponse();
		~DoorbellCallRefuseResponse();
	public:
		virtual int parse();
	public:
		DoorbellCallRefuseResponseData data;
		MetaInfo* _metainfo_DoorbellCallRefuseResponseData;
	};

	
	typedef typename DoorbellCallRefuseResponse::DoorbellCallRefuseResponseData DoorbellCallRefuseResponseData;

}
}

#endif
