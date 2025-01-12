/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_UnBindDeviceInfo_H_
#define _LC_OPENAPI_CLIENT_UnBindDeviceInfo_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取未绑定的设备信息
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class UnBindDeviceInfoRequest : public LCOpenApiRequest
	{
	public:
		class UnBindDeviceInfoRequestData
		{
		public:
			UnBindDeviceInfoRequestData();
			~UnBindDeviceInfoRequestData();
			
		public:
			/** [cstr]unBindDeviceInfo */
			#define _STATIC_UnBindDeviceInfoRequestData_method "unBindDeviceInfo"
			string method;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		UnBindDeviceInfoRequest();
		~UnBindDeviceInfoRequest();
	public:
		virtual int build();
	public:
		UnBindDeviceInfoRequestData data;
		MetaInfo* _metainfo_UnBindDeviceInfoRequestData;
	};

	
	typedef typename UnBindDeviceInfoRequest::UnBindDeviceInfoRequestData UnBindDeviceInfoRequestData;


	class UnBindDeviceInfoResponse : public LCOpenApiResponse
	{
	public:
		class UnBindDeviceInfoResponseData
		{
		public:
			UnBindDeviceInfoResponseData();
			~UnBindDeviceInfoResponseData();
			
		public:
			/** NVR */
			string catalog;
		public:
			/** 37777 */
			string port;
		public:
			/** exist */
			string deviceExist;
		public:
			/** online */
			string status;
		public:
			/** device */
			string type;
		public:
			/**  */
			string modelName;
		public:
			/** [O]设备能力项，逗号隔开，如AlarmMD,AudioTalk,AlarmPIR,WLAN,VVP2P，详见乐橙开放平台设备协议 */
			string ability;
		public:
			/** unbind */
			string bindStatus;
		public:
			/** 554 */
			string rtspPort;
		public:
			/** 0 */
			string privateMediaPort;
		public:
			/** xxx@qq.com */
			string owner;
		public:
			/** IP Camera */
			string deviceModel;
		public:
			/** 1 */
			string channelNum;
		public:
			/** 37778 */
			string tlsPrivatePort;
		public:
			/** PaaS */
			string accessType;
		public:
			/** IPC-WL46AP:01:02:13:89:41:00:01:10:01:01:04:3E8:00:00:00:00:00:01:00:00:200 */
			string hwId;
		public:
			/** 80 */
			string httpPort;

		};
	public:
		UnBindDeviceInfoResponse();
		~UnBindDeviceInfoResponse();
	public:
		virtual int parse();
	public:
		UnBindDeviceInfoResponseData data;
		MetaInfo* _metainfo_UnBindDeviceInfoResponseData;
	};

	
	typedef typename UnBindDeviceInfoResponse::UnBindDeviceInfoResponseData UnBindDeviceInfoResponseData;

}
}

#endif
