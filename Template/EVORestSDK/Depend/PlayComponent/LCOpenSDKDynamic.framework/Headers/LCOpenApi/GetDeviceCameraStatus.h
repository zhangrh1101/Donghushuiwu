/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetDeviceCameraStatus_H_
#define _LC_OPENAPI_CLIENT_GetDeviceCameraStatus_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取设备使能开关状态。
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
	class GetDeviceCameraStatusRequest : public LCOpenApiRequest
	{
	public:
		class GetDeviceCameraStatusRequestData
		{
		public:
			GetDeviceCameraStatusRequestData();
			~GetDeviceCameraStatusRequestData();
			
		public:
			/** closeCamera：隐私遮罩；smartTrack：智能追踪；smartLocate：听声变位；aiFireControl：智能火灾控制 */
			string enableType;
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
		GetDeviceCameraStatusRequest();
		~GetDeviceCameraStatusRequest();
	public:
		virtual int build();
	public:
		GetDeviceCameraStatusRequestData data;
		MetaInfo* _metainfo_GetDeviceCameraStatusRequestData;
	};

	
	typedef typename GetDeviceCameraStatusRequest::GetDeviceCameraStatusRequestData GetDeviceCameraStatusRequestData;


	class GetDeviceCameraStatusResponse : public LCOpenApiResponse
	{
	public:
		class GetDeviceCameraStatusResponseData
		{
		public:
			GetDeviceCameraStatusResponseData();
			~GetDeviceCameraStatusResponseData();
			
		public:
			/** on:开,off:关 */
			string status;
		public:
			/** closeCamera：隐私遮罩；smartTrack：智能追踪；smartLocate：听声变位：aiFireControl：智能火灾控制 */
			string enableType;

		};
	public:
		GetDeviceCameraStatusResponse();
		~GetDeviceCameraStatusResponse();
	public:
		virtual int parse();
	public:
		GetDeviceCameraStatusResponseData data;
		MetaInfo* _metainfo_GetDeviceCameraStatusResponseData;
	};

	
	typedef typename GetDeviceCameraStatusResponse::GetDeviceCameraStatusResponseData GetDeviceCameraStatusResponseData;

}
}

#endif
