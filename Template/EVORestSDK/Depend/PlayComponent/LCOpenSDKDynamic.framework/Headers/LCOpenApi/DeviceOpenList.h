/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeviceOpenList_H_
#define _LC_OPENAPI_CLIENT_DeviceOpenList_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
分页获取开放平台添加设备的通道基本信息

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeviceOpenListRequest : public LCOpenApiRequest
	{
	public:
		class DeviceOpenListRequestData
		{
		public:
			DeviceOpenListRequestData();
			~DeviceOpenListRequestData();
			
		public:
			/** 类型，bind:绑定, share:被别人分享或者授权, bindAndShare：同时获取绑定和被别人分享授权,bind、bindAndShare或share */
			string type;
		public:
			/** 条数,最大128 */
			string limit;
		public:
			/** 上次查询最后一个设备id，为-1表示从最新绑定的设备开始获取（倒序查询） */
			string bindId;
		public:
			/** 是否需要配件列表信息, false:表示不需要, true表示需要 */
			string needApInfo;
		public:
			/** 授权token(userToken或accessToken) */
			string token;

		};
	public:
		DeviceOpenListRequest();
		~DeviceOpenListRequest();
	public:
		virtual int build();
	public:
		DeviceOpenListRequestData data;
		MetaInfo* _metainfo_DeviceOpenListRequestData;
	};

	
	typedef typename DeviceOpenListRequest::DeviceOpenListRequestData DeviceOpenListRequestData;


	class DeviceOpenListResponse : public LCOpenApiResponse
	{
	public:
		class DeviceOpenListResponseData
		{
		public:
			DeviceOpenListResponseData();
			~DeviceOpenListResponseData();
			
		public:
			/** [int]设备总数 */
			int count;
		public:
			/** define a list with struct of DeviceOpenListResponseData_DeviceListElement */
			class DeviceOpenListResponseData_DeviceListElement : public LCOpenApiBase
			{
			public:
				DeviceOpenListResponseData_DeviceListElement();
				~DeviceOpenListResponseData_DeviceListElement();
			public:
				/** define a list with struct of DeviceOpenListResponseData_DeviceListElement_AplistElement */
				class DeviceOpenListResponseData_DeviceListElement_AplistElement : public LCOpenApiBase
				{
				public:
					DeviceOpenListResponseData_DeviceListElement_AplistElement();
					~DeviceOpenListResponseData_DeviceListElement_AplistElement();
				public:
					/** 配件id */
					string apId;
				public:
					/** 配件类型 */
					string apType;
				public:
					/** 配件名称 */
					string apName;
				};
			public:
				LCOpenApiVector<DeviceOpenListResponseData_DeviceListElement_AplistElement> aplist;
			public:
				/** [long]绑定分享表自增id */
				int64 bindId;
			public:
				/** define a list with struct of DeviceOpenListResponseData_DeviceListElement_ChannelsElement */
				class DeviceOpenListResponseData_DeviceListElement_ChannelsElement : public LCOpenApiBase
				{
				public:
					DeviceOpenListResponseData_DeviceListElement_ChannelsElement();
					~DeviceOpenListResponseData_DeviceListElement_ChannelsElement();
				public:
					/** 通道名称 */
					string channelName;
				public:
					/** [int]通道号 */
					int channelId;
				};
			public:
				LCOpenApiVector<DeviceOpenListResponseData_DeviceListElement_ChannelsElement> channels;
			public:
				/** 设备序列号 */
				string deviceId;
			};
		public:
			LCOpenApiVector<DeviceOpenListResponseData_DeviceListElement> deviceList;

		};
	public:
		DeviceOpenListResponse();
		~DeviceOpenListResponse();
	public:
		virtual int parse();
	public:
		DeviceOpenListResponseData data;
		MetaInfo* _metainfo_DeviceOpenListResponseData;
	};

	
	typedef typename DeviceOpenListResponse::DeviceOpenListResponseData DeviceOpenListResponseData;
	typedef typename DeviceOpenListResponse::DeviceOpenListResponseData::DeviceOpenListResponseData_DeviceListElement DeviceOpenListResponseData_DeviceListElement;
	typedef typename DeviceOpenListResponse::DeviceOpenListResponseData::DeviceOpenListResponseData_DeviceListElement::DeviceOpenListResponseData_DeviceListElement_AplistElement DeviceOpenListResponseData_DeviceListElement_AplistElement;
	typedef typename DeviceOpenListResponse::DeviceOpenListResponseData::DeviceOpenListResponseData_DeviceListElement::DeviceOpenListResponseData_DeviceListElement_ChannelsElement DeviceOpenListResponseData_DeviceListElement_ChannelsElement;

}
}

#endif
