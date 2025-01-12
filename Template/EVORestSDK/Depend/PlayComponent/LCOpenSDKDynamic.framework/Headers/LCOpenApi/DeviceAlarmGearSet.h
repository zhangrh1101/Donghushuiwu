/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeviceAlarmGearSet_H_
#define _LC_OPENAPI_CLIENT_DeviceAlarmGearSet_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置动检档位
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeviceAlarmGearSetRequest : public LCOpenApiRequest
	{
	public:
		class DeviceAlarmGearSetRequestData
		{
		public:
			DeviceAlarmGearSetRequestData();
			~DeviceAlarmGearSetRequestData();
			
		public:
			/** 表示档位，取值范围为[1, 6] */
			string gear;
		public:
			/** [O]通道号 */
			string channelId;
		public:
			/** xxx */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		DeviceAlarmGearSetRequest();
		~DeviceAlarmGearSetRequest();
	public:
		virtual int build();
	public:
		DeviceAlarmGearSetRequestData data;
		MetaInfo* _metainfo_DeviceAlarmGearSetRequestData;
	};

	
	typedef typename DeviceAlarmGearSetRequest::DeviceAlarmGearSetRequestData DeviceAlarmGearSetRequestData;


	class DeviceAlarmGearSetResponse : public LCOpenApiResponse
	{
	public:
		class DeviceAlarmGearSetResponseData
		{
		public:
			DeviceAlarmGearSetResponseData();
			~DeviceAlarmGearSetResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		DeviceAlarmGearSetResponse();
		~DeviceAlarmGearSetResponse();
	public:
		virtual int parse();
	public:
		DeviceAlarmGearSetResponseData data;
		MetaInfo* _metainfo_DeviceAlarmGearSetResponseData;
	};

	
	typedef typename DeviceAlarmGearSetResponse::DeviceAlarmGearSetResponseData DeviceAlarmGearSetResponseData;

}
}

#endif
