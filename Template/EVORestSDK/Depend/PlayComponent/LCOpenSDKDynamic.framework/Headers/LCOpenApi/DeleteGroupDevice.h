/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeleteGroupDevice_H_
#define _LC_OPENAPI_CLIENT_DeleteGroupDevice_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
分组下删除设备

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeleteGroupDeviceRequest : public LCOpenApiRequest
	{
	public:
		class DeleteGroupDeviceRequestData
		{
		public:
			DeleteGroupDeviceRequestData();
			~DeleteGroupDeviceRequestData();
			
		public:
			/** [cstr]deleteGroupDevice */
			#define _STATIC_DeleteGroupDeviceRequestData_method "deleteGroupDevice"
			string method;
		public:
			/** [long]分组Id */
			int64 groupId;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		DeleteGroupDeviceRequest();
		~DeleteGroupDeviceRequest();
	public:
		virtual int build();
	public:
		DeleteGroupDeviceRequestData data;
		MetaInfo* _metainfo_DeleteGroupDeviceRequestData;
	};

	
	typedef typename DeleteGroupDeviceRequest::DeleteGroupDeviceRequestData DeleteGroupDeviceRequestData;


	class DeleteGroupDeviceResponse : public LCOpenApiResponse
	{
	public:
		class DeleteGroupDeviceResponseData
		{
		public:
			DeleteGroupDeviceResponseData();
			~DeleteGroupDeviceResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		DeleteGroupDeviceResponse();
		~DeleteGroupDeviceResponse();
	public:
		virtual int parse();
	public:
		DeleteGroupDeviceResponseData data;
		MetaInfo* _metainfo_DeleteGroupDeviceResponseData;
	};

	
	typedef typename DeleteGroupDeviceResponse::DeleteGroupDeviceResponseData DeleteGroupDeviceResponseData;

}
}

#endif
