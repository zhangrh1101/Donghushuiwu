/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeviceAbilityEnableQuery_H_
#define _LC_OPENAPI_CLIENT_DeviceAbilityEnableQuery_H_

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
	class DeviceAbilityEnableQueryRequest : public LCOpenApiRequest
	{
	public:
		class DeviceAbilityEnableQueryRequestData
		{
		public:
			DeviceAbilityEnableQueryRequestData();
			~DeviceAbilityEnableQueryRequestData();
			
		public:
			/** define a list with struct of DeviceAbilityEnableQueryRequestData_DeviceElement */
			class DeviceAbilityEnableQueryRequestData_DeviceElement : public LCOpenApiBase
			{
			public:
				DeviceAbilityEnableQueryRequestData_DeviceElement();
				~DeviceAbilityEnableQueryRequestData_DeviceElement();
			public:
				/** 设备级别能力类型 */
				string type;
			};
		public:
			LCOpenApiVector<DeviceAbilityEnableQueryRequestData_DeviceElement> device;
		public:
			/** define a list with struct of DeviceAbilityEnableQueryRequestData_ChannelsElement */
			class DeviceAbilityEnableQueryRequestData_ChannelsElement : public LCOpenApiBase
			{
			public:
				DeviceAbilityEnableQueryRequestData_ChannelsElement();
				~DeviceAbilityEnableQueryRequestData_ChannelsElement();
			public:
				/** 设备级别能力类型 */
				LCOpenApiVector<string> type;
			public:
				/** [int]通道号 */
				int channelId;
			};
		public:
			LCOpenApiVector<DeviceAbilityEnableQueryRequestData_ChannelsElement> channels;
		public:
			/** 授权的token */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		DeviceAbilityEnableQueryRequest();
		~DeviceAbilityEnableQueryRequest();
	public:
		virtual int build();
	public:
		DeviceAbilityEnableQueryRequestData data;
		MetaInfo* _metainfo_DeviceAbilityEnableQueryRequestData;
	};

	
	typedef typename DeviceAbilityEnableQueryRequest::DeviceAbilityEnableQueryRequestData DeviceAbilityEnableQueryRequestData;
	typedef typename DeviceAbilityEnableQueryRequest::DeviceAbilityEnableQueryRequestData::DeviceAbilityEnableQueryRequestData_DeviceElement DeviceAbilityEnableQueryRequestData_DeviceElement;
	typedef typename DeviceAbilityEnableQueryRequest::DeviceAbilityEnableQueryRequestData::DeviceAbilityEnableQueryRequestData_ChannelsElement DeviceAbilityEnableQueryRequestData_ChannelsElement;


	class DeviceAbilityEnableQueryResponse : public LCOpenApiResponse
	{
	public:
		class DeviceAbilityEnableQueryResponseData
		{
		public:
			DeviceAbilityEnableQueryResponseData();
			~DeviceAbilityEnableQueryResponseData();
			
		public:
			/** define a list with struct of DeviceAbilityEnableQueryResponseData_DeviceElement */
			class DeviceAbilityEnableQueryResponseData_DeviceElement : public LCOpenApiBase
			{
			public:
				DeviceAbilityEnableQueryResponseData_DeviceElement();
				~DeviceAbilityEnableQueryResponseData_DeviceElement();
			public:
				/** on-开启 off-关闭 */
				string enable;
			public:
				/** [O]设备级能力类型 */
				string type;
			};
		public:
			LCOpenApiVector<DeviceAbilityEnableQueryResponseData_DeviceElement> device;
		public:
			/** define a list with struct of DeviceAbilityEnableQueryResponseData_ChannelsElement */
			class DeviceAbilityEnableQueryResponseData_ChannelsElement : public LCOpenApiBase
			{
			public:
				DeviceAbilityEnableQueryResponseData_ChannelsElement();
				~DeviceAbilityEnableQueryResponseData_ChannelsElement();
			public:
				/** define a list with struct of DeviceAbilityEnableQueryResponseData_ChannelsElement_DetailElement */
				class DeviceAbilityEnableQueryResponseData_ChannelsElement_DetailElement : public LCOpenApiBase
				{
				public:
					DeviceAbilityEnableQueryResponseData_ChannelsElement_DetailElement();
					~DeviceAbilityEnableQueryResponseData_ChannelsElement_DetailElement();
				public:
					/** on-开启 off-关闭 */
					string enable;
				public:
					/** [O]通道级能力类型 */
					string type;
				};
			public:
				LCOpenApiVector<DeviceAbilityEnableQueryResponseData_ChannelsElement_DetailElement> detail;
			public:
				/** [int]通道号 */
				int channelId;
			};
		public:
			LCOpenApiVector<DeviceAbilityEnableQueryResponseData_ChannelsElement> channels;

		};
	public:
		DeviceAbilityEnableQueryResponse();
		~DeviceAbilityEnableQueryResponse();
	public:
		virtual int parse();
	public:
		DeviceAbilityEnableQueryResponseData data;
		MetaInfo* _metainfo_DeviceAbilityEnableQueryResponseData;
	};

	
	typedef typename DeviceAbilityEnableQueryResponse::DeviceAbilityEnableQueryResponseData DeviceAbilityEnableQueryResponseData;
	typedef typename DeviceAbilityEnableQueryResponse::DeviceAbilityEnableQueryResponseData::DeviceAbilityEnableQueryResponseData_DeviceElement DeviceAbilityEnableQueryResponseData_DeviceElement;
	typedef typename DeviceAbilityEnableQueryResponse::DeviceAbilityEnableQueryResponseData::DeviceAbilityEnableQueryResponseData_ChannelsElement DeviceAbilityEnableQueryResponseData_ChannelsElement;
	typedef typename DeviceAbilityEnableQueryResponse::DeviceAbilityEnableQueryResponseData::DeviceAbilityEnableQueryResponseData_ChannelsElement::DeviceAbilityEnableQueryResponseData_ChannelsElement_DetailElement DeviceAbilityEnableQueryResponseData_ChannelsElement_DetailElement;

}
}

#endif
