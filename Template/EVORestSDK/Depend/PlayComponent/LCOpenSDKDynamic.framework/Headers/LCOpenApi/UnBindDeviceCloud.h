/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_UnBindDeviceCloud_H_
#define _LC_OPENAPI_CLIENT_UnBindDeviceCloud_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
解绑设备云存储

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class UnBindDeviceCloudRequest : public LCOpenApiRequest
	{
	public:
		class UnBindDeviceCloudRequestData
		{
		public:
			UnBindDeviceCloudRequestData();
			~UnBindDeviceCloudRequestData();
			
		public:
			/** 云存储唯一Id */
			string deviceCloudId;
		public:
			/** [cstr]unBindDeviceCloud */
			#define _STATIC_UnBindDeviceCloudRequestData_method "unBindDeviceCloud"
			string method;
		public:
			/** 授权token(userToken或accessToken) */
			string token;

		};
	public:
		UnBindDeviceCloudRequest();
		~UnBindDeviceCloudRequest();
	public:
		virtual int build();
	public:
		UnBindDeviceCloudRequestData data;
		MetaInfo* _metainfo_UnBindDeviceCloudRequestData;
	};

	
	typedef typename UnBindDeviceCloudRequest::UnBindDeviceCloudRequestData UnBindDeviceCloudRequestData;


	class UnBindDeviceCloudResponse : public LCOpenApiResponse
	{
	public:
		class UnBindDeviceCloudResponseData
		{
		public:
			UnBindDeviceCloudResponseData();
			~UnBindDeviceCloudResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		UnBindDeviceCloudResponse();
		~UnBindDeviceCloudResponse();
	public:
		virtual int parse();
	public:
		UnBindDeviceCloudResponseData data;
		MetaInfo* _metainfo_UnBindDeviceCloudResponseData;
	};

	
	typedef typename UnBindDeviceCloudResponse::UnBindDeviceCloudResponseData UnBindDeviceCloudResponseData;

}
}

#endif
