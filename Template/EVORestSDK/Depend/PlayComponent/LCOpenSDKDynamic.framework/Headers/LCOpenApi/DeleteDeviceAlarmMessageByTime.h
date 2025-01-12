/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeleteDeviceAlarmMessageByTime_H_
#define _LC_OPENAPI_CLIENT_DeleteDeviceAlarmMessageByTime_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
根据时间段批量删除设备通道报警消息
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeleteDeviceAlarmMessageByTimeRequest : public LCOpenApiRequest
	{
	public:
		class DeleteDeviceAlarmMessageByTimeRequestData
		{
		public:
			DeleteDeviceAlarmMessageByTimeRequestData();
			~DeleteDeviceAlarmMessageByTimeRequestData();
			
		public:
			/** 授权token */
			string token;
		public:
			/** 设备本地结束时间 */
			string endTime;
		public:
			/** 通道序列号 */
			string channelId;
		public:
			/** 设备本地开始时间 */
			string beginTime;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		DeleteDeviceAlarmMessageByTimeRequest();
		~DeleteDeviceAlarmMessageByTimeRequest();
	public:
		virtual int build();
	public:
		DeleteDeviceAlarmMessageByTimeRequestData data;
		MetaInfo* _metainfo_DeleteDeviceAlarmMessageByTimeRequestData;
	};

	
	typedef typename DeleteDeviceAlarmMessageByTimeRequest::DeleteDeviceAlarmMessageByTimeRequestData DeleteDeviceAlarmMessageByTimeRequestData;


	class DeleteDeviceAlarmMessageByTimeResponse : public LCOpenApiResponse
	{
	public:
		class DeleteDeviceAlarmMessageByTimeResponseData
		{
		public:
			DeleteDeviceAlarmMessageByTimeResponseData();
			~DeleteDeviceAlarmMessageByTimeResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		DeleteDeviceAlarmMessageByTimeResponse();
		~DeleteDeviceAlarmMessageByTimeResponse();
	public:
		virtual int parse();
	public:
		DeleteDeviceAlarmMessageByTimeResponseData data;
		MetaInfo* _metainfo_DeleteDeviceAlarmMessageByTimeResponseData;
	};

	
	typedef typename DeleteDeviceAlarmMessageByTimeResponse::DeleteDeviceAlarmMessageByTimeResponseData DeleteDeviceAlarmMessageByTimeResponseData;

}
}

#endif
