/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_P2pDeviceAlarmConfigQuery_H_
#define _LC_OPENAPI_CLIENT_P2pDeviceAlarmConfigQuery_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取P2P设备告警订阅信息
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class P2pDeviceAlarmConfigQueryRequest : public LCOpenApiRequest
	{
	public:
		class P2pDeviceAlarmConfigQueryRequestData
		{
		public:
			P2pDeviceAlarmConfigQueryRequestData();
			~P2pDeviceAlarmConfigQueryRequestData();
			
		public:
			/** 授权的token(userToken或accessToken) */
			string token;
		public:
			/** 设备序列号 */
			LCOpenApiVector<string> deviceIds;

		};
	public:
		P2pDeviceAlarmConfigQueryRequest();
		~P2pDeviceAlarmConfigQueryRequest();
	public:
		virtual int build();
	public:
		P2pDeviceAlarmConfigQueryRequestData data;
		MetaInfo* _metainfo_P2pDeviceAlarmConfigQueryRequestData;
	};

	
	typedef typename P2pDeviceAlarmConfigQueryRequest::P2pDeviceAlarmConfigQueryRequestData P2pDeviceAlarmConfigQueryRequestData;


	class P2pDeviceAlarmConfigQueryResponse : public LCOpenApiResponse
	{
	public:
		class P2pDeviceAlarmConfigQueryResponseData
		{
		public:
			P2pDeviceAlarmConfigQueryResponseData();
			~P2pDeviceAlarmConfigQueryResponseData();
			
		public:
			/** define a list with struct of P2pDeviceAlarmConfigQueryResponseData_DeviceListElement */
			class P2pDeviceAlarmConfigQueryResponseData_DeviceListElement : public LCOpenApiBase
			{
			public:
				P2pDeviceAlarmConfigQueryResponseData_DeviceListElement();
				~P2pDeviceAlarmConfigQueryResponseData_DeviceListElement();
			public:
				/** define a list with struct of P2pDeviceAlarmConfigQueryResponseData_DeviceListElement_ConfigsElement */
				class P2pDeviceAlarmConfigQueryResponseData_DeviceListElement_ConfigsElement : public LCOpenApiBase
				{
				public:
					P2pDeviceAlarmConfigQueryResponseData_DeviceListElement_ConfigsElement();
					~P2pDeviceAlarmConfigQueryResponseData_DeviceListElement_ConfigsElement();
				public:
					/** [int]索引号 */
					LCOpenApiVector<int> Indexs;
				public:
					/** 告警类型，如Motion Detection */
					string code;
				};
			public:
				LCOpenApiVector<P2pDeviceAlarmConfigQueryResponseData_DeviceListElement_ConfigsElement> configs;
			public:
				/** 设备id */
				string deviceId;
			};
		public:
			LCOpenApiVector<P2pDeviceAlarmConfigQueryResponseData_DeviceListElement> deviceList;

		};
	public:
		P2pDeviceAlarmConfigQueryResponse();
		~P2pDeviceAlarmConfigQueryResponse();
	public:
		virtual int parse();
	public:
		P2pDeviceAlarmConfigQueryResponseData data;
		MetaInfo* _metainfo_P2pDeviceAlarmConfigQueryResponseData;
	};

	
	typedef typename P2pDeviceAlarmConfigQueryResponse::P2pDeviceAlarmConfigQueryResponseData P2pDeviceAlarmConfigQueryResponseData;
	typedef typename P2pDeviceAlarmConfigQueryResponse::P2pDeviceAlarmConfigQueryResponseData::P2pDeviceAlarmConfigQueryResponseData_DeviceListElement P2pDeviceAlarmConfigQueryResponseData_DeviceListElement;
	typedef typename P2pDeviceAlarmConfigQueryResponse::P2pDeviceAlarmConfigQueryResponseData::P2pDeviceAlarmConfigQueryResponseData_DeviceListElement::P2pDeviceAlarmConfigQueryResponseData_DeviceListElement_ConfigsElement P2pDeviceAlarmConfigQueryResponseData_DeviceListElement_ConfigsElement;

}
}

#endif
