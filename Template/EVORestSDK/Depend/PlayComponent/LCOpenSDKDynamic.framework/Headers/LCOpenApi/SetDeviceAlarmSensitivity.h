/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SetDeviceAlarmSensitivity_H_
#define _LC_OPENAPI_CLIENT_SetDeviceAlarmSensitivity_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置动检灵敏度
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class SetDeviceAlarmSensitivityRequest : public LCOpenApiRequest
	{
	public:
		class SetDeviceAlarmSensitivityRequestData
		{
		public:
			SetDeviceAlarmSensitivityRequestData();
			~SetDeviceAlarmSensitivityRequestData();
			
		public:
			/** [int][Not Null]面积阈值,取值范围0-100 */
			int threshold;
		public:
			/** 授权Token */
			string token;
		public:
			/** 通道号，为空表示设置设备名称 */
			string channelId;
		public:
			/** [int][Not Null]灵敏度,目前支持5个档位 1灵敏度最低 5灵敏度最高 */
			int sensitive;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		SetDeviceAlarmSensitivityRequest();
		~SetDeviceAlarmSensitivityRequest();
	public:
		virtual int build();
	public:
		SetDeviceAlarmSensitivityRequestData data;
		MetaInfo* _metainfo_SetDeviceAlarmSensitivityRequestData;
	};

	
	typedef typename SetDeviceAlarmSensitivityRequest::SetDeviceAlarmSensitivityRequestData SetDeviceAlarmSensitivityRequestData;


	class SetDeviceAlarmSensitivityResponse : public LCOpenApiResponse
	{
	public:
		class SetDeviceAlarmSensitivityResponseData
		{
		public:
			SetDeviceAlarmSensitivityResponseData();
			~SetDeviceAlarmSensitivityResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		SetDeviceAlarmSensitivityResponse();
		~SetDeviceAlarmSensitivityResponse();
	public:
		virtual int parse();
	public:
		SetDeviceAlarmSensitivityResponseData data;
		MetaInfo* _metainfo_SetDeviceAlarmSensitivityResponseData;
	};

	
	typedef typename SetDeviceAlarmSensitivityResponse::SetDeviceAlarmSensitivityResponseData SetDeviceAlarmSensitivityResponseData;

}
}

#endif
