/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_ListDoorbellMusic_H_
#define _LC_OPENAPI_CLIENT_ListDoorbellMusic_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取铃声配置及铃声列表（配置在门铃声，控制响的是铃铛）
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class ListDoorbellMusicRequest : public LCOpenApiRequest
	{
	public:
		class ListDoorbellMusicRequestData
		{
		public:
			ListDoorbellMusicRequestData();
			~ListDoorbellMusicRequestData();
			
		public:
			/** 生效类型,device:关联设备报警,accessory:关联配件报警,reply:关联自定义回复,local: 设备本地铃声，按下门铃后的响声 */
			string relateType;
		public:
			/** 通道号 */
			string channelId;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		ListDoorbellMusicRequest();
		~ListDoorbellMusicRequest();
	public:
		virtual int build();
	public:
		ListDoorbellMusicRequestData data;
		MetaInfo* _metainfo_ListDoorbellMusicRequestData;
	};

	
	typedef typename ListDoorbellMusicRequest::ListDoorbellMusicRequestData ListDoorbellMusicRequestData;


	class ListDoorbellMusicResponse : public LCOpenApiResponse
	{
	public:
		class ListDoorbellMusicResponseData
		{
		public:
			ListDoorbellMusicResponseData();
			~ListDoorbellMusicResponseData();
			
		public:
			/** define a list with struct of ListDoorbellMusicResponseData_ListElement */
			class ListDoorbellMusicResponseData_ListElement : public LCOpenApiBase
			{
			public:
				ListDoorbellMusicResponseData_ListElement();
				~ListDoorbellMusicResponseData_ListElement();
			public:
				/** [String]可选字段：铃声状态, play：可播放, download：下载中，不可播放， 该字段不存在或为空，默认为play */
				string state;
			public:
				/** [String]铃声类型:wav,pcm,aac */
				string type;
			public:
				/** [int]歌曲索引，从0开始 */
				int index;
			public:
				/** [String]可选字段：关联铃声生效类型，device:关联设备报警，accessory:关联配件报警,reply:关联自定义回复 */
				string relateType;
			public:
				/** [String]区分默认铃声/自定义铃声，default:默认铃声，custom:自定义 */
				string ringMode;
			public:
				/** [String]歌曲名称 */
				string name;
			};
		public:
			LCOpenApiVector<ListDoorbellMusicResponseData_ListElement> list;
		public:
			/** [int]用户配置的铃声索引。-1：表示未配置 */
			int ringIndex;

		};
	public:
		ListDoorbellMusicResponse();
		~ListDoorbellMusicResponse();
	public:
		virtual int parse();
	public:
		ListDoorbellMusicResponseData data;
		MetaInfo* _metainfo_ListDoorbellMusicResponseData;
	};

	
	typedef typename ListDoorbellMusicResponse::ListDoorbellMusicResponseData ListDoorbellMusicResponseData;
	typedef typename ListDoorbellMusicResponse::ListDoorbellMusicResponseData::ListDoorbellMusicResponseData_ListElement ListDoorbellMusicResponseData_ListElement;

}
}

#endif
