/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SetDoorbellMusic_H_
#define _LC_OPENAPI_CLIENT_SetDoorbellMusic_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置铃声到铃铛（配置在门铃，控制响的是铃铛）
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class SetDoorbellMusicRequest : public LCOpenApiRequest
	{
	public:
		class SetDoorbellMusicRequestData
		{
		public:
			SetDoorbellMusicRequestData();
			~SetDoorbellMusicRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** [String]生效类型:device:关联设备报警,accessory:关联配件报警,reply:关联自定义回复,local: 设备本地铃声，按下门铃后的响声 */
			string relateType;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** [int]歌曲索引 */
			int index;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		SetDoorbellMusicRequest();
		~SetDoorbellMusicRequest();
	public:
		virtual int build();
	public:
		SetDoorbellMusicRequestData data;
		MetaInfo* _metainfo_SetDoorbellMusicRequestData;
	};

	
	typedef typename SetDoorbellMusicRequest::SetDoorbellMusicRequestData SetDoorbellMusicRequestData;


	class SetDoorbellMusicResponse : public LCOpenApiResponse
	{
	public:
		class SetDoorbellMusicResponseData
		{
		public:
			SetDoorbellMusicResponseData();
			~SetDoorbellMusicResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		SetDoorbellMusicResponse();
		~SetDoorbellMusicResponse();
	public:
		virtual int parse();
	public:
		SetDoorbellMusicResponseData data;
		MetaInfo* _metainfo_SetDoorbellMusicResponseData;
	};

	
	typedef typename SetDoorbellMusicResponse::SetDoorbellMusicResponseData SetDoorbellMusicResponseData;

}
}

#endif
