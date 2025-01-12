/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SetDoorbellMusicVolume_H_
#define _LC_OPENAPI_CLIENT_SetDoorbellMusicVolume_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置门铃的铃声音量
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class SetDoorbellMusicVolumeRequest : public LCOpenApiRequest
	{
	public:
		class SetDoorbellMusicVolumeRequestData
		{
		public:
			SetDoorbellMusicVolumeRequestData();
			~SetDoorbellMusicVolumeRequestData();
			
		public:
			/** [int]音量大小的百分比，有效值[0, 100] */
			int percent;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		SetDoorbellMusicVolumeRequest();
		~SetDoorbellMusicVolumeRequest();
	public:
		virtual int build();
	public:
		SetDoorbellMusicVolumeRequestData data;
		MetaInfo* _metainfo_SetDoorbellMusicVolumeRequestData;
	};

	
	typedef typename SetDoorbellMusicVolumeRequest::SetDoorbellMusicVolumeRequestData SetDoorbellMusicVolumeRequestData;


	class SetDoorbellMusicVolumeResponse : public LCOpenApiResponse
	{
	public:
		class SetDoorbellMusicVolumeResponseData
		{
		public:
			SetDoorbellMusicVolumeResponseData();
			~SetDoorbellMusicVolumeResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		SetDoorbellMusicVolumeResponse();
		~SetDoorbellMusicVolumeResponse();
	public:
		virtual int parse();
	public:
		SetDoorbellMusicVolumeResponseData data;
		MetaInfo* _metainfo_SetDoorbellMusicVolumeResponseData;
	};

	
	typedef typename SetDoorbellMusicVolumeResponse::SetDoorbellMusicVolumeResponseData SetDoorbellMusicVolumeResponseData;

}
}

#endif
