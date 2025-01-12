/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeviceBaseList_H_
#define _LC_OPENAPI_CLIENT_DeviceBaseList_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
分页获取乐橙app添加或分享的设备通道基本信息

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeviceBaseListRequest : public LCOpenApiRequest
	{
	public:
		class DeviceBaseListRequestData
		{
		public:
			DeviceBaseListRequestData();
			~DeviceBaseListRequestData();
			
		public:
			/** 类型，bind:绑定, share:被别人分享或者授权, bindAndShare：同时获取绑定和被别人分享授权,bind、bindAndShare或share */
			string type;
		public:
			/** [cstr]deviceBaseList */
			#define _STATIC_DeviceBaseListRequestData_method "deviceBaseList"
			string method;
		public:
			/** [int]条数,最大128 */
			int limit;
		public:
			/** [long]上次查询最后一个设备Id */
			int64 bindId;
		public:
			/** 是否需要配件列表信息, false:表示不需要, true表示需要 */
			string needApInfo;
		public:
			/** 授权token(userToken或accessToken) */
			string token;

		};
	public:
		DeviceBaseListRequest();
		~DeviceBaseListRequest();
	public:
		virtual int build();
	public:
		DeviceBaseListRequestData data;
		MetaInfo* _metainfo_DeviceBaseListRequestData;
	};

	
	typedef typename DeviceBaseListRequest::DeviceBaseListRequestData DeviceBaseListRequestData;


	class DeviceBaseListResponse : public LCOpenApiResponse
	{
	public:
		class DeviceBaseListResponseData
		{
		public:
			DeviceBaseListResponseData();
			~DeviceBaseListResponseData();
			
		public:
			/** 设备数 */
			string count;
		public:
			/** define a list with struct of DeviceBaseListResponseData_DeviceListElement */
			class DeviceBaseListResponseData_DeviceListElement : public LCOpenApiBase
			{
			public:
				DeviceBaseListResponseData_DeviceListElement();
				~DeviceBaseListResponseData_DeviceListElement();
			public:
				/** define a list with struct of DeviceBaseListResponseData_DeviceListElement_AplistElement */
				class DeviceBaseListResponseData_DeviceListElement_AplistElement : public LCOpenApiBase
				{
				public:
					DeviceBaseListResponseData_DeviceListElement_AplistElement();
					~DeviceBaseListResponseData_DeviceListElement_AplistElement();
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
				LCOpenApiVector<DeviceBaseListResponseData_DeviceListElement_AplistElement> aplist;
			public:
				/** [long]绑定分享表自增id */
				int64 bindId;
			public:
				/** define a list with struct of DeviceBaseListResponseData_DeviceListElement_ChannelsElement */
				class DeviceBaseListResponseData_DeviceListElement_ChannelsElement : public LCOpenApiBase
				{
				public:
					DeviceBaseListResponseData_DeviceListElement_ChannelsElement();
					~DeviceBaseListResponseData_DeviceListElement_ChannelsElement();
				public:
					/** 通道号 */
					string channelId;
				public:
					/** 通道名称 */
					string channelName;
				};
			public:
				LCOpenApiVector<DeviceBaseListResponseData_DeviceListElement_ChannelsElement> channels;
			public:
				/** 设备序列号 */
				string deviceId;
			};
		public:
			LCOpenApiVector<DeviceBaseListResponseData_DeviceListElement> deviceList;

		};
	public:
		DeviceBaseListResponse();
		~DeviceBaseListResponse();
	public:
		virtual int parse();
	public:
		DeviceBaseListResponseData data;
		MetaInfo* _metainfo_DeviceBaseListResponseData;
	};

	
	typedef typename DeviceBaseListResponse::DeviceBaseListResponseData DeviceBaseListResponseData;
	typedef typename DeviceBaseListResponse::DeviceBaseListResponseData::DeviceBaseListResponseData_DeviceListElement DeviceBaseListResponseData_DeviceListElement;
	typedef typename DeviceBaseListResponse::DeviceBaseListResponseData::DeviceBaseListResponseData_DeviceListElement::DeviceBaseListResponseData_DeviceListElement_AplistElement DeviceBaseListResponseData_DeviceListElement_AplistElement;
	typedef typename DeviceBaseListResponse::DeviceBaseListResponseData::DeviceBaseListResponseData_DeviceListElement::DeviceBaseListResponseData_DeviceListElement_ChannelsElement DeviceBaseListResponseData_DeviceListElement_ChannelsElement;

}
}

#endif
