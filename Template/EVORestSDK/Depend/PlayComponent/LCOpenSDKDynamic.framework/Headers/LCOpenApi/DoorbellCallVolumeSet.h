/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DoorbellCallVolumeSet_H_
#define _LC_OPENAPI_CLIENT_DoorbellCallVolumeSet_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置门铃的通话音量
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DoorbellCallVolumeSetRequest : public LCOpenApiRequest
	{
	public:
		class DoorbellCallVolumeSetRequestData
		{
		public:
			DoorbellCallVolumeSetRequestData();
			~DoorbellCallVolumeSetRequestData();
			
		public:
			/** [int]音量大小的百分比，有效值[0, 100] */
			int percent;
		public:
			/** 门铃设备序列号 */
			string deviceId ;
		public:
			/** 授权的token */
			string token;

		};
	public:
		DoorbellCallVolumeSetRequest();
		~DoorbellCallVolumeSetRequest();
	public:
		virtual int build();
	public:
		DoorbellCallVolumeSetRequestData data;
		MetaInfo* _metainfo_DoorbellCallVolumeSetRequestData;
	};

	
	typedef typename DoorbellCallVolumeSetRequest::DoorbellCallVolumeSetRequestData DoorbellCallVolumeSetRequestData;


	class DoorbellCallVolumeSetResponse : public LCOpenApiResponse
	{
	public:
		class DoorbellCallVolumeSetResponseData
		{
		public:
			DoorbellCallVolumeSetResponseData();
			~DoorbellCallVolumeSetResponseData();
			
		public:
			/** [int]音量大小的百分比，有效值[0, 100] */
			int percent;

		};
	public:
		DoorbellCallVolumeSetResponse();
		~DoorbellCallVolumeSetResponse();
	public:
		virtual int parse();
	public:
		DoorbellCallVolumeSetResponseData data;
		MetaInfo* _metainfo_DoorbellCallVolumeSetResponseData;
	};

	
	typedef typename DoorbellCallVolumeSetResponse::DoorbellCallVolumeSetResponseData DoorbellCallVolumeSetResponseData;

}
}

#endif
