/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_QueryBaseDeviceChannelInfo_H_
#define _LC_OPENAPI_CLIENT_QueryBaseDeviceChannelInfo_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
根据设备序列号集合获取开放平台添加设备的通道基本信息

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class QueryBaseDeviceChannelInfoRequest : public LCOpenApiRequest
	{
	public:
		class QueryBaseDeviceChannelInfoRequestData
		{
		public:
			QueryBaseDeviceChannelInfoRequestData();
			~QueryBaseDeviceChannelInfoRequestData();
			
		public:
			/** [cstr]queryOpenDeviceChannelInfo */
			#define _STATIC_QueryBaseDeviceChannelInfoRequestData_method "queryOpenDeviceChannelInfo"
			string method;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		QueryBaseDeviceChannelInfoRequest();
		~QueryBaseDeviceChannelInfoRequest();
	public:
		virtual int build();
	public:
		QueryBaseDeviceChannelInfoRequestData data;
		MetaInfo* _metainfo_QueryBaseDeviceChannelInfoRequestData;
	};

	
	typedef typename QueryBaseDeviceChannelInfoRequest::QueryBaseDeviceChannelInfoRequestData QueryBaseDeviceChannelInfoRequestData;


	class QueryBaseDeviceChannelInfoResponse : public LCOpenApiResponse
	{
	public:
		class QueryBaseDeviceChannelInfoResponseData
		{
		public:
			QueryBaseDeviceChannelInfoResponseData();
			~QueryBaseDeviceChannelInfoResponseData();
			
		public:
			/** define a list with struct of QueryBaseDeviceChannelInfoResponseData_DevicesElement */
			class QueryBaseDeviceChannelInfoResponseData_DevicesElement : public LCOpenApiBase
			{
			public:
				QueryBaseDeviceChannelInfoResponseData_DevicesElement();
				~QueryBaseDeviceChannelInfoResponseData_DevicesElement();
			public:
				/** 设备状态 online-在线 offline-离线 close-未配置 sleep-休眠 */
				string status;
			public:
				/** define a list with struct of QueryBaseDeviceChannelInfoResponseData_DevicesElement_ChannelsElement */
				class QueryBaseDeviceChannelInfoResponseData_DevicesElement_ChannelsElement : public LCOpenApiBase
				{
				public:
					QueryBaseDeviceChannelInfoResponseData_DevicesElement_ChannelsElement();
					~QueryBaseDeviceChannelInfoResponseData_DevicesElement_ChannelsElement();
				public:
					/** 远程通道状态 online-在线 offline-离线 close-未配置 sleep-休眠 */
					string status;
				public:
					/** 通道号 */
					string channelId;
				public:
					/** 通道名称 */
					string channelName;
				};
			public:
				LCOpenApiVector<QueryBaseDeviceChannelInfoResponseData_DevicesElement_ChannelsElement> channels;
			public:
				/** 设备序列号 */
				string deviceId;
			};
		public:
			LCOpenApiVector<QueryBaseDeviceChannelInfoResponseData_DevicesElement> devices;

		};
	public:
		QueryBaseDeviceChannelInfoResponse();
		~QueryBaseDeviceChannelInfoResponse();
	public:
		virtual int parse();
	public:
		QueryBaseDeviceChannelInfoResponseData data;
		MetaInfo* _metainfo_QueryBaseDeviceChannelInfoResponseData;
	};

	
	typedef typename QueryBaseDeviceChannelInfoResponse::QueryBaseDeviceChannelInfoResponseData QueryBaseDeviceChannelInfoResponseData;
	typedef typename QueryBaseDeviceChannelInfoResponse::QueryBaseDeviceChannelInfoResponseData::QueryBaseDeviceChannelInfoResponseData_DevicesElement QueryBaseDeviceChannelInfoResponseData_DevicesElement;
	typedef typename QueryBaseDeviceChannelInfoResponse::QueryBaseDeviceChannelInfoResponseData::QueryBaseDeviceChannelInfoResponseData_DevicesElement::QueryBaseDeviceChannelInfoResponseData_DevicesElement_ChannelsElement QueryBaseDeviceChannelInfoResponseData_DevicesElement_ChannelsElement;

}
}

#endif
