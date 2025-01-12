/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeviceRingtoneList_H_
#define _LC_OPENAPI_CLIENT_DeviceRingtoneList_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取铃声配置及铃声列表
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeviceRingtoneListRequest : public LCOpenApiRequest
	{
	public:
		class DeviceRingtoneListRequestData
		{
		public:
			DeviceRingtoneListRequestData();
			~DeviceRingtoneListRequestData();
			
		public:
			/** device: 关联设备报,accessory: 关联配件报警,reply: 关联自定义回复,local: 设备本地铃声，按下门铃后的响声 */
			string relateType;
		public:
			/** 通道,不存在默认为设备 */
			string channelId;
		public:
			/** 授权的token(userToken或accessToken) */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		DeviceRingtoneListRequest();
		~DeviceRingtoneListRequest();
	public:
		virtual int build();
	public:
		DeviceRingtoneListRequestData data;
		MetaInfo* _metainfo_DeviceRingtoneListRequestData;
	};

	
	typedef typename DeviceRingtoneListRequest::DeviceRingtoneListRequestData DeviceRingtoneListRequestData;


	class DeviceRingtoneListResponse : public LCOpenApiResponse
	{
	public:
		class DeviceRingtoneListResponseData
		{
		public:
			DeviceRingtoneListResponseData();
			~DeviceRingtoneListResponseData();
			
		public:
			/** 用户配置的铃声索引。-1：表示未配置 */
			string index;
		public:
			/** define a list with struct of DeviceRingtoneListResponseData_ListElement */
			class DeviceRingtoneListResponseData_ListElement : public LCOpenApiBase
			{
			public:
				DeviceRingtoneListResponseData_ListElement();
				~DeviceRingtoneListResponseData_ListElement();
			public:
				/** 铃声状态, play：可播放, download：下载中，不可播放， 该字段不存在或为空，默认为play */
				string state;
			public:
				/** 铃声类型:wav,pcm,aac */
				string type;
			public:
				/** 歌曲索引，从0开始 */
				string index;
			public:
				/** 关联铃声生效类型，device:关联设备报警，accessory:关联配件报警,reply:关联自定义回复 */
				string relateType;
			public:
				/** 区分默认铃声/自定义铃声，default:默认铃声，custom:自定义 */
				string ringMode;
			public:
				/** 歌曲名称 */
				string name;
			};
		public:
			LCOpenApiVector<DeviceRingtoneListResponseData_ListElement> list;

		};
	public:
		DeviceRingtoneListResponse();
		~DeviceRingtoneListResponse();
	public:
		virtual int parse();
	public:
		DeviceRingtoneListResponseData data;
		MetaInfo* _metainfo_DeviceRingtoneListResponseData;
	};

	
	typedef typename DeviceRingtoneListResponse::DeviceRingtoneListResponseData DeviceRingtoneListResponseData;
	typedef typename DeviceRingtoneListResponse::DeviceRingtoneListResponseData::DeviceRingtoneListResponseData_ListElement DeviceRingtoneListResponseData_ListElement;

}
}

#endif
