/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_Talk_H_
#define _LC_OPENAPI_CLIENT_Talk_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取语音对讲地址
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class TalkRequest : public LCOpenApiRequest
	{
	public:
		class TalkRequestData
		{
		public:
			TalkRequestData();
			~TalkRequestData();
			
		public:
			/** [int]资源有效期 */
			int duration;
		public:
			/** 设备ID */
			string deviceId;
		public:
			/** url类型，pull或者push，默认为pull */
			string urlType;
		public:
			/** [int]采样位数，8或16 */
			int bits;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** [bool]知否需要重定向 */
			bool locationEnable;
		public:
			/** 音频编码格式，比如PCM，G711a，AMR，G711u，G726，AAC，OGG等 */
			string encodeType;
		public:
			/** 通道编号，字符串类型，通道对讲必填 */
			string channelId;
		public:
			/** [int]采样率，8000或16000 */
			int sampleRate;
		public:
			/** 补充URI信息，deviceTalk为设备对讲，channelTalk为通道对讲 */
			string appendUrl;

		};
	public:
		TalkRequest();
		~TalkRequest();
	public:
		virtual int build();
	public:
		TalkRequestData data;
		MetaInfo* _metainfo_TalkRequestData;
	};

	
	typedef typename TalkRequest::TalkRequestData TalkRequestData;


	class TalkResponse : public LCOpenApiResponse
	{
	public:
		class TalkResponseData
		{
		public:
			TalkResponseData();
			~TalkResponseData();
			
		public:
			/** 返回的rtsp地址 */
			string url;

		};
	public:
		TalkResponse();
		~TalkResponse();
	public:
		virtual int parse();
	public:
		TalkResponseData data;
		MetaInfo* _metainfo_TalkResponseData;
	};

	
	typedef typename TalkResponse::TalkResponseData TalkResponseData;

}
}

#endif
