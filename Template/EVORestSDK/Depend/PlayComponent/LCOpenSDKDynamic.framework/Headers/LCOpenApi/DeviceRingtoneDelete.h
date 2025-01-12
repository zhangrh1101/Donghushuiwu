/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeviceRingtoneDelete_H_
#define _LC_OPENAPI_CLIENT_DeviceRingtoneDelete_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
删除铃声协议
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeviceRingtoneDeleteRequest : public LCOpenApiRequest
	{
	public:
		class DeviceRingtoneDeleteRequestData
		{
		public:
			DeviceRingtoneDeleteRequestData();
			~DeviceRingtoneDeleteRequestData();
			
		public:
			/** 授权的token(userToken或accessToken) */
			string token;
		public:
			/** device: 关联设备报,accessory: 关联配件报警,reply: 关联自定义回复,local: 设备本地铃声，按下门铃后的响声 */
			string relateType;
		public:
			/** 通道,不存在默认为设备 */
			string channelId;
		public:
			/** [int]歌曲索引 */
			int index;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		DeviceRingtoneDeleteRequest();
		~DeviceRingtoneDeleteRequest();
	public:
		virtual int build();
	public:
		DeviceRingtoneDeleteRequestData data;
		MetaInfo* _metainfo_DeviceRingtoneDeleteRequestData;
	};

	
	typedef typename DeviceRingtoneDeleteRequest::DeviceRingtoneDeleteRequestData DeviceRingtoneDeleteRequestData;


	class DeviceRingtoneDeleteResponse : public LCOpenApiResponse
	{
	public:
		class DeviceRingtoneDeleteResponseData
		{
		public:
			DeviceRingtoneDeleteResponseData();
			~DeviceRingtoneDeleteResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		DeviceRingtoneDeleteResponse();
		~DeviceRingtoneDeleteResponse();
	public:
		virtual int parse();
	public:
		DeviceRingtoneDeleteResponseData data;
		MetaInfo* _metainfo_DeviceRingtoneDeleteResponseData;
	};

	
	typedef typename DeviceRingtoneDeleteResponse::DeviceRingtoneDeleteResponseData DeviceRingtoneDeleteResponseData;

}
}

#endif
