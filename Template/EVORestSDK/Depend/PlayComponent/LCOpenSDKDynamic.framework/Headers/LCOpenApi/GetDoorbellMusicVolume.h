/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetDoorbellMusicVolume_H_
#define _LC_OPENAPI_CLIENT_GetDoorbellMusicVolume_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取门铃的铃声音量
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetDoorbellMusicVolumeRequest : public LCOpenApiRequest
	{
	public:
		class GetDoorbellMusicVolumeRequestData
		{
		public:
			GetDoorbellMusicVolumeRequestData();
			~GetDoorbellMusicVolumeRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		GetDoorbellMusicVolumeRequest();
		~GetDoorbellMusicVolumeRequest();
	public:
		virtual int build();
	public:
		GetDoorbellMusicVolumeRequestData data;
		MetaInfo* _metainfo_GetDoorbellMusicVolumeRequestData;
	};

	
	typedef typename GetDoorbellMusicVolumeRequest::GetDoorbellMusicVolumeRequestData GetDoorbellMusicVolumeRequestData;


	class GetDoorbellMusicVolumeResponse : public LCOpenApiResponse
	{
	public:
		class GetDoorbellMusicVolumeResponseData
		{
		public:
			GetDoorbellMusicVolumeResponseData();
			~GetDoorbellMusicVolumeResponseData();
			
		public:
			/** [int]音量大小的百分比，有效值[0, 100] */
			int percent;

		};
	public:
		GetDoorbellMusicVolumeResponse();
		~GetDoorbellMusicVolumeResponse();
	public:
		virtual int parse();
	public:
		GetDoorbellMusicVolumeResponseData data;
		MetaInfo* _metainfo_GetDoorbellMusicVolumeResponseData;
	};

	
	typedef typename GetDoorbellMusicVolumeResponse::GetDoorbellMusicVolumeResponseData GetDoorbellMusicVolumeResponseData;

}
}

#endif
