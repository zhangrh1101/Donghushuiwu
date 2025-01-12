/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeviceSdcardStatus_H_
#define _LC_OPENAPI_CLIENT_DeviceSdcardStatus_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取设备存储介质容量信息
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeviceSdcardStatusRequest : public LCOpenApiRequest
	{
	public:
		class DeviceSdcardStatusRequestData
		{
		public:
			DeviceSdcardStatusRequestData();
			~DeviceSdcardStatusRequestData();
			
		public:
			/** 需要格式化存储介质编号（不填该参数默认设备是单sd卡） */
			string index;
		public:
			/** [cstr]deviceSdcardStatus */
			#define _STATIC_DeviceSdcardStatusRequestData_method "deviceSdcardStatus"
			string method;
		public:
			/** 授权Token */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		DeviceSdcardStatusRequest();
		~DeviceSdcardStatusRequest();
	public:
		virtual int build();
	public:
		DeviceSdcardStatusRequestData data;
		MetaInfo* _metainfo_DeviceSdcardStatusRequestData;
	};

	
	typedef typename DeviceSdcardStatusRequest::DeviceSdcardStatusRequestData DeviceSdcardStatusRequestData;


	class DeviceSdcardStatusResponse : public LCOpenApiResponse
	{
	public:
		class DeviceSdcardStatusResponseData
		{
		public:
			DeviceSdcardStatusResponseData();
			~DeviceSdcardStatusResponseData();
			
		public:
			/** [String] empty-无SD卡，normal-正常，abnormal-异常，recovering-格式化中 */
			string status;

		};
	public:
		DeviceSdcardStatusResponse();
		~DeviceSdcardStatusResponse();
	public:
		virtual int parse();
	public:
		DeviceSdcardStatusResponseData data;
		MetaInfo* _metainfo_DeviceSdcardStatusResponseData;
	};

	
	typedef typename DeviceSdcardStatusResponse::DeviceSdcardStatusResponseData DeviceSdcardStatusResponseData;

}
}

#endif
