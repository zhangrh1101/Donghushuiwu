/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DoorbellCallVolumeGet_H_
#define _LC_OPENAPI_CLIENT_DoorbellCallVolumeGet_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取门铃的通话音量
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DoorbellCallVolumeGetRequest : public LCOpenApiRequest
	{
	public:
		class DoorbellCallVolumeGetRequestData
		{
		public:
			DoorbellCallVolumeGetRequestData();
			~DoorbellCallVolumeGetRequestData();
			
		public:
			/** 授权的token */
			string token;
		public:
			/** 门铃设备序列号 */
			string deviceId ;

		};
	public:
		DoorbellCallVolumeGetRequest();
		~DoorbellCallVolumeGetRequest();
	public:
		virtual int build();
	public:
		DoorbellCallVolumeGetRequestData data;
		MetaInfo* _metainfo_DoorbellCallVolumeGetRequestData;
	};

	
	typedef typename DoorbellCallVolumeGetRequest::DoorbellCallVolumeGetRequestData DoorbellCallVolumeGetRequestData;


	class DoorbellCallVolumeGetResponse : public LCOpenApiResponse
	{
	public:
		class DoorbellCallVolumeGetResponseData
		{
		public:
			DoorbellCallVolumeGetResponseData();
			~DoorbellCallVolumeGetResponseData();
			
		public:
			/** [int]音量大小的百分比，有效值[0, 100] */
			int percent;

		};
	public:
		DoorbellCallVolumeGetResponse();
		~DoorbellCallVolumeGetResponse();
	public:
		virtual int parse();
	public:
		DoorbellCallVolumeGetResponseData data;
		MetaInfo* _metainfo_DoorbellCallVolumeGetResponseData;
	};

	
	typedef typename DoorbellCallVolumeGetResponse::DoorbellCallVolumeGetResponseData DoorbellCallVolumeGetResponseData;

}
}

#endif
