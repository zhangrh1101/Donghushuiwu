/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DevicePTZInfo_H_
#define _LC_OPENAPI_CLIENT_DevicePTZInfo_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取设备通道当前PTZ信息

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DevicePTZInfoRequest : public LCOpenApiRequest
	{
	public:
		class DevicePTZInfoRequestData
		{
		public:
			DevicePTZInfoRequestData();
			~DevicePTZInfoRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 通道号 */
			string channelId;
		public:
			/** [cstr]devicePTZInfo */
			#define _STATIC_DevicePTZInfoRequestData_method "devicePTZInfo"
			string method;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		DevicePTZInfoRequest();
		~DevicePTZInfoRequest();
	public:
		virtual int build();
	public:
		DevicePTZInfoRequestData data;
		MetaInfo* _metainfo_DevicePTZInfoRequestData;
	};

	
	typedef typename DevicePTZInfoRequest::DevicePTZInfoRequestData DevicePTZInfoRequestData;


	class DevicePTZInfoResponse : public LCOpenApiResponse
	{
	public:
		class DevicePTZInfoResponseData
		{
		public:
			DevicePTZInfoResponseData();
			~DevicePTZInfoResponseData();
			
		public:
			/** 水平位置 */
			string h;
		public:
			/** 变倍倍数 */
			string z;
		public:
			/** 垂直位置 */
			string v;

		};
	public:
		DevicePTZInfoResponse();
		~DevicePTZInfoResponse();
	public:
		virtual int parse();
	public:
		DevicePTZInfoResponseData data;
		MetaInfo* _metainfo_DevicePTZInfoResponseData;
	};

	
	typedef typename DevicePTZInfoResponse::DevicePTZInfoResponseData DevicePTZInfoResponseData;

}
}

#endif
