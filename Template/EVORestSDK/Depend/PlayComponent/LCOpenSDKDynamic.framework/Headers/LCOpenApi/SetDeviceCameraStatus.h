/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SetDeviceCameraStatus_H_
#define _LC_OPENAPI_CLIENT_SetDeviceCameraStatus_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置设备使能开关；
注：仅支持PaaS设备（platform：4）；

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class SetDeviceCameraStatusRequest : public LCOpenApiRequest
	{
	public:
		class SetDeviceCameraStatusRequestData
		{
		public:
			SetDeviceCameraStatusRequestData();
			~SetDeviceCameraStatusRequestData();
			
		public:
			/** closeCamera：隐私遮罩；smartTrack：智能追踪；smartLocate：听声变位；aiFireControl：智能火灾控制 */
			string enableType;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** [bool]遮蔽开关（true:开；false:关） */
			bool enable;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** [cstr]setDeviceCameraStatus */
			#define _STATIC_SetDeviceCameraStatusRequestData_method "setDeviceCameraStatus"
			string method;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		SetDeviceCameraStatusRequest();
		~SetDeviceCameraStatusRequest();
	public:
		virtual int build();
	public:
		SetDeviceCameraStatusRequestData data;
		MetaInfo* _metainfo_SetDeviceCameraStatusRequestData;
	};

	
	typedef typename SetDeviceCameraStatusRequest::SetDeviceCameraStatusRequestData SetDeviceCameraStatusRequestData;


	class SetDeviceCameraStatusResponse : public LCOpenApiResponse
	{
	public:
		class SetDeviceCameraStatusResponseData
		{
		public:
			SetDeviceCameraStatusResponseData();
			~SetDeviceCameraStatusResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		SetDeviceCameraStatusResponse();
		~SetDeviceCameraStatusResponse();
	public:
		virtual int parse();
	public:
		SetDeviceCameraStatusResponseData data;
		MetaInfo* _metainfo_SetDeviceCameraStatusResponseData;
	};

	
	typedef typename SetDeviceCameraStatusResponse::SetDeviceCameraStatusResponseData SetDeviceCameraStatusResponseData;

}
}

#endif
