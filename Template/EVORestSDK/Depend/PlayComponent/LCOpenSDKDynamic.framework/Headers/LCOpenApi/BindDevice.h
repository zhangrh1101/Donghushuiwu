/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_BindDevice_H_
#define _LC_OPENAPI_CLIENT_BindDevice_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设备绑定

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class BindDeviceRequest : public LCOpenApiRequest
	{
	public:
		class BindDeviceRequestData
		{
		public:
			BindDeviceRequestData();
			~BindDeviceRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 安全码或设备密码，若无则填空 */
			string code;
		public:
			/** 设备用户名 */
			string deviceUserName;
		public:
			/** [long] */
			int64 siteId;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		BindDeviceRequest();
		~BindDeviceRequest();
	public:
		virtual int build();
	public:
		BindDeviceRequestData data;
		MetaInfo* _metainfo_BindDeviceRequestData;
	};

	
	typedef typename BindDeviceRequest::BindDeviceRequestData BindDeviceRequestData;


	class BindDeviceResponse : public LCOpenApiResponse
	{
	public:
		class BindDeviceResponseData
		{
		public:
			BindDeviceResponseData();
			~BindDeviceResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		BindDeviceResponse();
		~BindDeviceResponse();
	public:
		virtual int parse();
	public:
		BindDeviceResponseData data;
		MetaInfo* _metainfo_BindDeviceResponseData;
	};

	
	typedef typename BindDeviceResponse::BindDeviceResponseData BindDeviceResponseData;

}
}

#endif
