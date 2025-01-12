/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeviceRingtoneSet_H_
#define _LC_OPENAPI_CLIENT_DeviceRingtoneSet_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
新增铃声协议
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeviceRingtoneSetRequest : public LCOpenApiRequest
	{
	public:
		class DeviceRingtoneSetRequestData
		{
		public:
			DeviceRingtoneSetRequestData();
			~DeviceRingtoneSetRequestData();
			
		public:
			/** 铃声类型:wav,pcm,aac */
			string type;
		public:
			/** 授权的token */
			string token;
		public:
			/** [O]device:关联设备报警 accessory:关联配件报警 reply:关联自定义回复 */
			string relateType;
		public:
			/** 铃声音频文件对应的已授权URL地址,最大512字节 */
			string url;
		public:
			/** [O]通道,不存在默认为设备 */
			string channelId;
		public:
			/** 铃声名称,最大32字节,不要带上文件后缀名 */
			string name;
		public:
			/** 门铃设备序列号 */
			string deviceId ;

		};
	public:
		DeviceRingtoneSetRequest();
		~DeviceRingtoneSetRequest();
	public:
		virtual int build();
	public:
		DeviceRingtoneSetRequestData data;
		MetaInfo* _metainfo_DeviceRingtoneSetRequestData;
	};

	
	typedef typename DeviceRingtoneSetRequest::DeviceRingtoneSetRequestData DeviceRingtoneSetRequestData;


	class DeviceRingtoneSetResponse : public LCOpenApiResponse
	{
	public:
		class DeviceRingtoneSetResponseData
		{
		public:
			DeviceRingtoneSetResponseData();
			~DeviceRingtoneSetResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		DeviceRingtoneSetResponse();
		~DeviceRingtoneSetResponse();
	public:
		virtual int parse();
	public:
		DeviceRingtoneSetResponseData data;
		MetaInfo* _metainfo_DeviceRingtoneSetResponseData;
	};

	
	typedef typename DeviceRingtoneSetResponse::DeviceRingtoneSetResponseData DeviceRingtoneSetResponseData;

}
}

#endif
