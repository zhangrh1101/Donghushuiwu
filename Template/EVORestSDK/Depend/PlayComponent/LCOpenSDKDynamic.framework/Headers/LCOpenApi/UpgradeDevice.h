/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_UpgradeDevice_H_
#define _LC_OPENAPI_CLIENT_UpgradeDevice_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设备升级

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class UpgradeDeviceRequest : public LCOpenApiRequest
	{
	public:
		class UpgradeDeviceRequestData
		{
		public:
			UpgradeDeviceRequestData();
			~UpgradeDeviceRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		UpgradeDeviceRequest();
		~UpgradeDeviceRequest();
	public:
		virtual int build();
	public:
		UpgradeDeviceRequestData data;
		MetaInfo* _metainfo_UpgradeDeviceRequestData;
	};

	
	typedef typename UpgradeDeviceRequest::UpgradeDeviceRequestData UpgradeDeviceRequestData;


	class UpgradeDeviceResponse : public LCOpenApiResponse
	{
	public:
		class UpgradeDeviceResponseData
		{
		public:
			UpgradeDeviceResponseData();
			~UpgradeDeviceResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		UpgradeDeviceResponse();
		~UpgradeDeviceResponse();
	public:
		virtual int parse();
	public:
		UpgradeDeviceResponseData data;
		MetaInfo* _metainfo_UpgradeDeviceResponseData;
	};

	
	typedef typename UpgradeDeviceResponse::UpgradeDeviceResponseData UpgradeDeviceResponseData;

}
}

#endif
