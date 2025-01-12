/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetAudioEncodeInfos_H_
#define _LC_OPENAPI_CLIENT_GetAudioEncodeInfos_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取设备音频编码能力集
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetAudioEncodeInfosRequest : public LCOpenApiRequest
	{
	public:
		class GetAudioEncodeInfosRequestData
		{
		public:
			GetAudioEncodeInfosRequestData();
			~GetAudioEncodeInfosRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		GetAudioEncodeInfosRequest();
		~GetAudioEncodeInfosRequest();
	public:
		virtual int build();
	public:
		GetAudioEncodeInfosRequestData data;
		MetaInfo* _metainfo_GetAudioEncodeInfosRequestData;
	};

	
	typedef typename GetAudioEncodeInfosRequest::GetAudioEncodeInfosRequestData GetAudioEncodeInfosRequestData;


	class GetAudioEncodeInfosResponse : public LCOpenApiResponse
	{
	public:
		class GetAudioEncodeInfosResponseData
		{
		public:
			GetAudioEncodeInfosResponseData();
			~GetAudioEncodeInfosResponseData();
			
		public:
			/** define a list with struct of GetAudioEncodeInfosResponseData_EncodeInfosElement */
			class GetAudioEncodeInfosResponseData_EncodeInfosElement : public LCOpenApiBase
			{
			public:
				GetAudioEncodeInfosResponseData_EncodeInfosElement();
				~GetAudioEncodeInfosResponseData_EncodeInfosElement();
			public:
				/** 编码格式，比如PCM，G711a，AMR，G711u，G726，AAC，OGG等 */
				string encodeType;
			public:
				/** [int] 采样位数：8或16 */
				int bits;
			public:
				/** [int] 采样率：8000或16000 */
				int sampleRate;
			};
		public:
			LCOpenApiVector<GetAudioEncodeInfosResponseData_EncodeInfosElement> encodeInfos;

		};
	public:
		GetAudioEncodeInfosResponse();
		~GetAudioEncodeInfosResponse();
	public:
		virtual int parse();
	public:
		GetAudioEncodeInfosResponseData data;
		MetaInfo* _metainfo_GetAudioEncodeInfosResponseData;
	};

	
	typedef typename GetAudioEncodeInfosResponse::GetAudioEncodeInfosResponseData GetAudioEncodeInfosResponseData;
	typedef typename GetAudioEncodeInfosResponse::GetAudioEncodeInfosResponseData::GetAudioEncodeInfosResponseData_EncodeInfosElement GetAudioEncodeInfosResponseData_EncodeInfosElement;

}
}

#endif
