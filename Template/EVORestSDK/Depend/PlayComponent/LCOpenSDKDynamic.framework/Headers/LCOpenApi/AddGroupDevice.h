/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_AddGroupDevice_H_
#define _LC_OPENAPI_CLIENT_AddGroupDevice_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
分组下增加设备

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class AddGroupDeviceRequest : public LCOpenApiRequest
	{
	public:
		class AddGroupDeviceRequestData
		{
		public:
			AddGroupDeviceRequestData();
			~AddGroupDeviceRequestData();
			
		public:
			/** [cstr]addGroupDevice */
			#define _STATIC_AddGroupDeviceRequestData_method "addGroupDevice"
			string method;
		public:
			/** [long]分组Id */
			int64 groupId;
		public:
			/** 通道编号 */
			string channelId;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备编号 */
			string deviceId;

		};
	public:
		AddGroupDeviceRequest();
		~AddGroupDeviceRequest();
	public:
		virtual int build();
	public:
		AddGroupDeviceRequestData data;
		MetaInfo* _metainfo_AddGroupDeviceRequestData;
	};

	
	typedef typename AddGroupDeviceRequest::AddGroupDeviceRequestData AddGroupDeviceRequestData;


	class AddGroupDeviceResponse : public LCOpenApiResponse
	{
	public:
		class AddGroupDeviceResponseData
		{
		public:
			AddGroupDeviceResponseData();
			~AddGroupDeviceResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		AddGroupDeviceResponse();
		~AddGroupDeviceResponse();
	public:
		virtual int parse();
	public:
		AddGroupDeviceResponseData data;
		MetaInfo* _metainfo_AddGroupDeviceResponseData;
	};

	
	typedef typename AddGroupDeviceResponse::AddGroupDeviceResponseData AddGroupDeviceResponseData;

}
}

#endif
