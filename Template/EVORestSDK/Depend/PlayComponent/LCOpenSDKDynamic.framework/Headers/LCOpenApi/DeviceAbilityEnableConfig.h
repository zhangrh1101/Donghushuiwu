/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeviceAbilityEnableConfig_H_
#define _LC_OPENAPI_CLIENT_DeviceAbilityEnableConfig_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取设备功能开关
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeviceAbilityEnableConfigRequest : public LCOpenApiRequest
	{
	public:
		class DeviceAbilityEnableConfigRequestData
		{
		public:
			DeviceAbilityEnableConfigRequestData();
			~DeviceAbilityEnableConfigRequestData();
			
		public:
			/** define a list with struct of DeviceAbilityEnableConfigRequestData_DeviceElement */
			class DeviceAbilityEnableConfigRequestData_DeviceElement : public LCOpenApiBase
			{
			public:
				DeviceAbilityEnableConfigRequestData_DeviceElement();
				~DeviceAbilityEnableConfigRequestData_DeviceElement();
			public:
				/** on-开启 off-关闭 */
				string enable;
			public:
				/** [O]通道级能力类型 */
				string type;
			};
		public:
			LCOpenApiVector<DeviceAbilityEnableConfigRequestData_DeviceElement> device;
		public:
			/** define a list with struct of DeviceAbilityEnableConfigRequestData_ChannelsElement */
			class DeviceAbilityEnableConfigRequestData_ChannelsElement : public LCOpenApiBase
			{
			public:
				DeviceAbilityEnableConfigRequestData_ChannelsElement();
				~DeviceAbilityEnableConfigRequestData_ChannelsElement();
			public:
				/** define a list with struct of DeviceAbilityEnableConfigRequestData_ChannelsElement_DetailElement */
				class DeviceAbilityEnableConfigRequestData_ChannelsElement_DetailElement : public LCOpenApiBase
				{
				public:
					DeviceAbilityEnableConfigRequestData_ChannelsElement_DetailElement();
					~DeviceAbilityEnableConfigRequestData_ChannelsElement_DetailElement();
				public:
					/** on-开启 off-关闭 */
					string enable;
				public:
					/** [O]通道级能力类型 */
					string type;
				};
			public:
				LCOpenApiVector<DeviceAbilityEnableConfigRequestData_ChannelsElement_DetailElement> detail;
			public:
				/** [int]通道号 */
				int channelId;
			};
		public:
			LCOpenApiVector<DeviceAbilityEnableConfigRequestData_ChannelsElement> channels;
		public:
			/** 授权的token */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		DeviceAbilityEnableConfigRequest();
		~DeviceAbilityEnableConfigRequest();
	public:
		virtual int build();
	public:
		DeviceAbilityEnableConfigRequestData data;
		MetaInfo* _metainfo_DeviceAbilityEnableConfigRequestData;
	};

	
	typedef typename DeviceAbilityEnableConfigRequest::DeviceAbilityEnableConfigRequestData DeviceAbilityEnableConfigRequestData;
	typedef typename DeviceAbilityEnableConfigRequest::DeviceAbilityEnableConfigRequestData::DeviceAbilityEnableConfigRequestData_DeviceElement DeviceAbilityEnableConfigRequestData_DeviceElement;
	typedef typename DeviceAbilityEnableConfigRequest::DeviceAbilityEnableConfigRequestData::DeviceAbilityEnableConfigRequestData_ChannelsElement DeviceAbilityEnableConfigRequestData_ChannelsElement;
	typedef typename DeviceAbilityEnableConfigRequest::DeviceAbilityEnableConfigRequestData::DeviceAbilityEnableConfigRequestData_ChannelsElement::DeviceAbilityEnableConfigRequestData_ChannelsElement_DetailElement DeviceAbilityEnableConfigRequestData_ChannelsElement_DetailElement;


	class DeviceAbilityEnableConfigResponse : public LCOpenApiResponse
	{
	public:
		class DeviceAbilityEnableConfigResponseData
		{
		public:
			DeviceAbilityEnableConfigResponseData();
			~DeviceAbilityEnableConfigResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		DeviceAbilityEnableConfigResponse();
		~DeviceAbilityEnableConfigResponse();
	public:
		virtual int parse();
	public:
		DeviceAbilityEnableConfigResponseData data;
		MetaInfo* _metainfo_DeviceAbilityEnableConfigResponseData;
	};

	
	typedef typename DeviceAbilityEnableConfigResponse::DeviceAbilityEnableConfigResponseData DeviceAbilityEnableConfigResponseData;

}
}

#endif
