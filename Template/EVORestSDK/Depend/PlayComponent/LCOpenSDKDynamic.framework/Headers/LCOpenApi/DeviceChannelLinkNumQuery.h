/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeviceChannelLinkNumQuery_H_
#define _LC_OPENAPI_CLIENT_DeviceChannelLinkNumQuery_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取设备通道关联的配件数量
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeviceChannelLinkNumQueryRequest : public LCOpenApiRequest
	{
	public:
		class DeviceChannelLinkNumQueryRequestData
		{
		public:
			DeviceChannelLinkNumQueryRequestData();
			~DeviceChannelLinkNumQueryRequestData();
			
		public:
			/** 授权的token */
			string token;

		};
	public:
		DeviceChannelLinkNumQueryRequest();
		~DeviceChannelLinkNumQueryRequest();
	public:
		virtual int build();
	public:
		DeviceChannelLinkNumQueryRequestData data;
		MetaInfo* _metainfo_DeviceChannelLinkNumQueryRequestData;
	};

	
	typedef typename DeviceChannelLinkNumQueryRequest::DeviceChannelLinkNumQueryRequestData DeviceChannelLinkNumQueryRequestData;


	class DeviceChannelLinkNumQueryResponse : public LCOpenApiResponse
	{
	public:
		class DeviceChannelLinkNumQueryResponseData
		{
		public:
			DeviceChannelLinkNumQueryResponseData();
			~DeviceChannelLinkNumQueryResponseData();
			
		public:
			/** define a list with struct of DeviceChannelLinkNumQueryResponseData_LinkagesElement */
			class DeviceChannelLinkNumQueryResponseData_LinkagesElement : public LCOpenApiBase
			{
			public:
				DeviceChannelLinkNumQueryResponseData_LinkagesElement();
				~DeviceChannelLinkNumQueryResponseData_LinkagesElement();
			public:
				/** [int]单个设备通道关联配件的最大限制数 */
				int maxNum;
			public:
				/** 关联的设备通道id */
				string channelId;
			public:
				/** [int]通道已经关联的配件数量 */
				int num;
			public:
				/** 关联的设备id */
				string deviceId;
			};
		public:
			LCOpenApiVector<DeviceChannelLinkNumQueryResponseData_LinkagesElement> linkages;

		};
	public:
		DeviceChannelLinkNumQueryResponse();
		~DeviceChannelLinkNumQueryResponse();
	public:
		virtual int parse();
	public:
		DeviceChannelLinkNumQueryResponseData data;
		MetaInfo* _metainfo_DeviceChannelLinkNumQueryResponseData;
	};

	
	typedef typename DeviceChannelLinkNumQueryResponse::DeviceChannelLinkNumQueryResponseData DeviceChannelLinkNumQueryResponseData;
	typedef typename DeviceChannelLinkNumQueryResponse::DeviceChannelLinkNumQueryResponseData::DeviceChannelLinkNumQueryResponseData_LinkagesElement DeviceChannelLinkNumQueryResponseData_LinkagesElement;

}
}

#endif
