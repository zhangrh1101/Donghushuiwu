/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_RestartDevice_H_
#define _LC_OPENAPI_CLIENT_RestartDevice_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
重启设备(只支持设备级重启)

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class RestartDeviceRequest : public LCOpenApiRequest
	{
	public:
		class RestartDeviceRequestData
		{
		public:
			RestartDeviceRequestData();
			~RestartDeviceRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		RestartDeviceRequest();
		~RestartDeviceRequest();
	public:
		virtual int build();
	public:
		RestartDeviceRequestData data;
		MetaInfo* _metainfo_RestartDeviceRequestData;
	};

	
	typedef typename RestartDeviceRequest::RestartDeviceRequestData RestartDeviceRequestData;


	class RestartDeviceResponse : public LCOpenApiResponse
	{
	public:
		class RestartDeviceResponseData
		{
		public:
			RestartDeviceResponseData();
			~RestartDeviceResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		RestartDeviceResponse();
		~RestartDeviceResponse();
	public:
		virtual int parse();
	public:
		RestartDeviceResponseData data;
		MetaInfo* _metainfo_RestartDeviceResponseData;
	};

	
	typedef typename RestartDeviceResponse::RestartDeviceResponseData RestartDeviceResponseData;

}
}

#endif
