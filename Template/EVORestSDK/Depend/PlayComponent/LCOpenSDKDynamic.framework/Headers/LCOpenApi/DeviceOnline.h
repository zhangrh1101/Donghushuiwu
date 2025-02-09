/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeviceOnline_H_
#define _LC_OPENAPI_CLIENT_DeviceOnline_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
检查设备在线状态

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeviceOnlineRequest : public LCOpenApiRequest
	{
	public:
		class DeviceOnlineRequestData
		{
		public:
			DeviceOnlineRequestData();
			~DeviceOnlineRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** [cstr]deviceOnline */
			#define _STATIC_DeviceOnlineRequestData_method "deviceOnline"
			string method;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		DeviceOnlineRequest();
		~DeviceOnlineRequest();
	public:
		virtual int build();
	public:
		DeviceOnlineRequestData data;
		MetaInfo* _metainfo_DeviceOnlineRequestData;
	};

	
	typedef typename DeviceOnlineRequest::DeviceOnlineRequestData DeviceOnlineRequestData;


	class DeviceOnlineResponse : public LCOpenApiResponse
	{
	public:
		class DeviceOnlineResponseData
		{
		public:
			DeviceOnlineResponseData();
			~DeviceOnlineResponseData();
			
		public:
			/** define a list with struct of DeviceOnlineResponseData_ChannelsElement */
			class DeviceOnlineResponseData_ChannelsElement : public LCOpenApiBase
			{
			public:
				DeviceOnlineResponseData_ChannelsElement();
				~DeviceOnlineResponseData_ChannelsElement();
			public:
				/** 0-表示不在线1-表示在线 */
				string onLine;
			public:
				/** [int]通道号 */
				int channelId;
			};
		public:
			LCOpenApiVector<DeviceOnlineResponseData_ChannelsElement> channels;
		public:
			/** 0-表示不在线1-表示在线 */
			string onLine;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		DeviceOnlineResponse();
		~DeviceOnlineResponse();
	public:
		virtual int parse();
	public:
		DeviceOnlineResponseData data;
		MetaInfo* _metainfo_DeviceOnlineResponseData;
	};

	
	typedef typename DeviceOnlineResponse::DeviceOnlineResponseData DeviceOnlineResponseData;
	typedef typename DeviceOnlineResponse::DeviceOnlineResponseData::DeviceOnlineResponseData_ChannelsElement DeviceOnlineResponseData_ChannelsElement;

}
}

#endif
