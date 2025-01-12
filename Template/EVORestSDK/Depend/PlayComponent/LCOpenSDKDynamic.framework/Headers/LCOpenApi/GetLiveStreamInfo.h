/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetLiveStreamInfo_H_
#define _LC_OPENAPI_CLIENT_GetLiveStreamInfo_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
根据序列号获取直播地址和直播状态
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetLiveStreamInfoRequest : public LCOpenApiRequest
	{
	public:
		class GetLiveStreamInfoRequestData
		{
		public:
			GetLiveStreamInfoRequestData();
			~GetLiveStreamInfoRequestData();
			
		public:
			/** 通道号 */
			string channelId;
		public:
			/** 授权的token(userToken或accessToken) */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		GetLiveStreamInfoRequest();
		~GetLiveStreamInfoRequest();
	public:
		virtual int build();
	public:
		GetLiveStreamInfoRequestData data;
		MetaInfo* _metainfo_GetLiveStreamInfoRequestData;
	};

	
	typedef typename GetLiveStreamInfoRequest::GetLiveStreamInfoRequestData GetLiveStreamInfoRequestData;


	class GetLiveStreamInfoResponse : public LCOpenApiResponse
	{
	public:
		class GetLiveStreamInfoResponseData
		{
		public:
			GetLiveStreamInfoResponseData();
			~GetLiveStreamInfoResponseData();
			
		public:
			/** define a list with struct of GetLiveStreamInfoResponseData_StreamsElement */
			class GetLiveStreamInfoResponseData_StreamsElement : public LCOpenApiBase
			{
			public:
				GetLiveStreamInfoResponseData_StreamsElement();
				~GetLiveStreamInfoResponseData_StreamsElement();
			public:
				/** [int]码流类型（0:主码流；1:辅码流） */
				int streamId;
			public:
				/** 直播的token */
				string liveToken;
			public:
				/** 状态 */
				string status;
			public:
				/** 直播流hls访问地址 */
				string hls;
			};
		public:
			LCOpenApiVector<GetLiveStreamInfoResponseData_StreamsElement> streams;

		};
	public:
		GetLiveStreamInfoResponse();
		~GetLiveStreamInfoResponse();
	public:
		virtual int parse();
	public:
		GetLiveStreamInfoResponseData data;
		MetaInfo* _metainfo_GetLiveStreamInfoResponseData;
	};

	
	typedef typename GetLiveStreamInfoResponse::GetLiveStreamInfoResponseData GetLiveStreamInfoResponseData;
	typedef typename GetLiveStreamInfoResponse::GetLiveStreamInfoResponseData::GetLiveStreamInfoResponseData_StreamsElement GetLiveStreamInfoResponseData_StreamsElement;

}
}

#endif
