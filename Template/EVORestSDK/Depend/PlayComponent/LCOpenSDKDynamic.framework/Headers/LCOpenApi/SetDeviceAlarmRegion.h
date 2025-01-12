/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SetDeviceAlarmRegion_H_
#define _LC_OPENAPI_CLIENT_SetDeviceAlarmRegion_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置动检区域
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class SetDeviceAlarmRegionRequest : public LCOpenApiRequest
	{
	public:
		class SetDeviceAlarmRegionRequestData
		{
		public:
			SetDeviceAlarmRegionRequestData();
			~SetDeviceAlarmRegionRequestData();
			
		public:
			/** 动检区域 */
			string region ;
		public:
			/** 通道号 */
			string channelId;
		public:
			/** 授权Token */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		SetDeviceAlarmRegionRequest();
		~SetDeviceAlarmRegionRequest();
	public:
		virtual int build();
	public:
		SetDeviceAlarmRegionRequestData data;
		MetaInfo* _metainfo_SetDeviceAlarmRegionRequestData;
	};

	
	typedef typename SetDeviceAlarmRegionRequest::SetDeviceAlarmRegionRequestData SetDeviceAlarmRegionRequestData;


	class SetDeviceAlarmRegionResponse : public LCOpenApiResponse
	{
	public:
		class SetDeviceAlarmRegionResponseData
		{
		public:
			SetDeviceAlarmRegionResponseData();
			~SetDeviceAlarmRegionResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		SetDeviceAlarmRegionResponse();
		~SetDeviceAlarmRegionResponse();
	public:
		virtual int parse();
	public:
		SetDeviceAlarmRegionResponseData data;
		MetaInfo* _metainfo_SetDeviceAlarmRegionResponseData;
	};

	
	typedef typename SetDeviceAlarmRegionResponse::SetDeviceAlarmRegionResponseData SetDeviceAlarmRegionResponseData;

}
}

#endif
