/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_QueryOpenDeviceChannelInfo_H_
#define _LC_OPENAPI_CLIENT_QueryOpenDeviceChannelInfo_H_

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
	class QueryOpenDeviceChannelInfoRequest : public LCOpenApiRequest
	{
	public:
		class QueryOpenDeviceChannelInfoRequestData
		{
		public:
			QueryOpenDeviceChannelInfoRequestData();
			~QueryOpenDeviceChannelInfoRequestData();
			
		public:
			/** [cstr]queryOpenDeviceChannelInfo */
			#define _STATIC_QueryOpenDeviceChannelInfoRequestData_method "queryOpenDeviceChannelInfo"
			string method;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceIds;

		};
	public:
		QueryOpenDeviceChannelInfoRequest();
		~QueryOpenDeviceChannelInfoRequest();
	public:
		virtual int build();
	public:
		QueryOpenDeviceChannelInfoRequestData data;
		MetaInfo* _metainfo_QueryOpenDeviceChannelInfoRequestData;
	};

	
	typedef typename QueryOpenDeviceChannelInfoRequest::QueryOpenDeviceChannelInfoRequestData QueryOpenDeviceChannelInfoRequestData;


	class QueryOpenDeviceChannelInfoResponse : public LCOpenApiResponse
	{
	public:
		class QueryOpenDeviceChannelInfoResponseData
		{
		public:
			QueryOpenDeviceChannelInfoResponseData();
			~QueryOpenDeviceChannelInfoResponseData();
			
		public:
			/** define a list with struct of QueryOpenDeviceChannelInfoResponseData_DevicesElement */
			class QueryOpenDeviceChannelInfoResponseData_DevicesElement : public LCOpenApiBase
			{
			public:
				QueryOpenDeviceChannelInfoResponseData_DevicesElement();
				~QueryOpenDeviceChannelInfoResponseData_DevicesElement();
			public:
				/** 设备状态 online-在线 offline-离线 close-未配置 sleep-休眠 */
				string status;
			public:
				/** define a list with struct of QueryOpenDeviceChannelInfoResponseData_DevicesElement_ChannelsElement */
				class QueryOpenDeviceChannelInfoResponseData_DevicesElement_ChannelsElement : public LCOpenApiBase
				{
				public:
					QueryOpenDeviceChannelInfoResponseData_DevicesElement_ChannelsElement();
					~QueryOpenDeviceChannelInfoResponseData_DevicesElement_ChannelsElement();
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
				LCOpenApiVector<QueryOpenDeviceChannelInfoResponseData_DevicesElement_ChannelsElement> channels;
			public:
				/** 设备序列号 */
				string deviceId;
			};
		public:
			LCOpenApiVector<QueryOpenDeviceChannelInfoResponseData_DevicesElement> devices;

		};
	public:
		QueryOpenDeviceChannelInfoResponse();
		~QueryOpenDeviceChannelInfoResponse();
	public:
		virtual int parse();
	public:
		QueryOpenDeviceChannelInfoResponseData data;
		MetaInfo* _metainfo_QueryOpenDeviceChannelInfoResponseData;
	};

	
	typedef typename QueryOpenDeviceChannelInfoResponse::QueryOpenDeviceChannelInfoResponseData QueryOpenDeviceChannelInfoResponseData;
	typedef typename QueryOpenDeviceChannelInfoResponse::QueryOpenDeviceChannelInfoResponseData::QueryOpenDeviceChannelInfoResponseData_DevicesElement QueryOpenDeviceChannelInfoResponseData_DevicesElement;
	typedef typename QueryOpenDeviceChannelInfoResponse::QueryOpenDeviceChannelInfoResponseData::QueryOpenDeviceChannelInfoResponseData_DevicesElement::QueryOpenDeviceChannelInfoResponseData_DevicesElement_ChannelsElement QueryOpenDeviceChannelInfoResponseData_DevicesElement_ChannelsElement;

}
}

#endif
