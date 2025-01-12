/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_ControlDeviceWifi_H_
#define _LC_OPENAPI_CLIENT_ControlDeviceWifi_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
控制设备连接热点

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class ControlDeviceWifiRequest : public LCOpenApiRequest
	{
	public:
		class ControlDeviceWifiRequestData
		{
		public:
			ControlDeviceWifiRequestData();
			~ControlDeviceWifiRequestData();
			
		public:
			/** wifi密码 */
			string password;
		public:
			/** 填需要连接的SSID */
			string ssid;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** BSSID */
			string bssid;
		public:
			/** [bool]连接或断开 */
			bool linkEnable;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		ControlDeviceWifiRequest();
		~ControlDeviceWifiRequest();
	public:
		virtual int build();
	public:
		ControlDeviceWifiRequestData data;
		MetaInfo* _metainfo_ControlDeviceWifiRequestData;
	};

	
	typedef typename ControlDeviceWifiRequest::ControlDeviceWifiRequestData ControlDeviceWifiRequestData;


	class ControlDeviceWifiResponse : public LCOpenApiResponse
	{
	public:
		class ControlDeviceWifiResponseData
		{
		public:
			ControlDeviceWifiResponseData();
			~ControlDeviceWifiResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		ControlDeviceWifiResponse();
		~ControlDeviceWifiResponse();
	public:
		virtual int parse();
	public:
		ControlDeviceWifiResponseData data;
		MetaInfo* _metainfo_ControlDeviceWifiResponseData;
	};

	
	typedef typename ControlDeviceWifiResponse::ControlDeviceWifiResponseData ControlDeviceWifiResponseData;

}
}

#endif
