/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_CurrentDeviceWifi_H_
#define _LC_OPENAPI_CLIENT_CurrentDeviceWifi_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设备当前连接的热点信息

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class CurrentDeviceWifiRequest : public LCOpenApiRequest
	{
	public:
		class CurrentDeviceWifiRequestData
		{
		public:
			CurrentDeviceWifiRequestData();
			~CurrentDeviceWifiRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		CurrentDeviceWifiRequest();
		~CurrentDeviceWifiRequest();
	public:
		virtual int build();
	public:
		CurrentDeviceWifiRequestData data;
		MetaInfo* _metainfo_CurrentDeviceWifiRequestData;
	};

	
	typedef typename CurrentDeviceWifiRequest::CurrentDeviceWifiRequestData CurrentDeviceWifiRequestData;


	class CurrentDeviceWifiResponse : public LCOpenApiResponse
	{
	public:
		class CurrentDeviceWifiResponseData
		{
		public:
			CurrentDeviceWifiResponseData();
			~CurrentDeviceWifiResponseData();
			
		public:
			/** 若连接了热点，填热点的名称；若未连接，填空 */
			string ssid;
		public:
			/** 可选 ,通道，大于14认为是5G频段，小于等于14是2.4G频段 */
			string channel;
		public:
			/**  可选 强度，单位为dbm */
			string sigStrength;
		public:
			/** 强度，0最弱，5最强 */
			string intensity;
		public:
			/** [bool]是否连接了wifi */
			bool linkEnable;

		};
	public:
		CurrentDeviceWifiResponse();
		~CurrentDeviceWifiResponse();
	public:
		virtual int parse();
	public:
		CurrentDeviceWifiResponseData data;
		MetaInfo* _metainfo_CurrentDeviceWifiResponseData;
	};

	
	typedef typename CurrentDeviceWifiResponse::CurrentDeviceWifiResponseData CurrentDeviceWifiResponseData;

}
}

#endif
