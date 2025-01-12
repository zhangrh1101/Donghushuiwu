/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeleteDeviceAlarmMessage_H_
#define _LC_OPENAPI_CLIENT_DeleteDeviceAlarmMessage_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
根据报警消息ID批量删除报警消息
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeleteDeviceAlarmMessageRequest : public LCOpenApiRequest
	{
	public:
		class DeleteDeviceAlarmMessageRequestData
		{
		public:
			DeleteDeviceAlarmMessageRequestData();
			~DeleteDeviceAlarmMessageRequestData();
			
		public:
			/** [long]报警消息ID数组 */
			LCOpenApiVector<int64> alarmId;
		public:
			/** 通道序列号 */
			string channelId;
		public:
			/** 授权token */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		DeleteDeviceAlarmMessageRequest();
		~DeleteDeviceAlarmMessageRequest();
	public:
		virtual int build();
	public:
		DeleteDeviceAlarmMessageRequestData data;
		MetaInfo* _metainfo_DeleteDeviceAlarmMessageRequestData;
	};

	
	typedef typename DeleteDeviceAlarmMessageRequest::DeleteDeviceAlarmMessageRequestData DeleteDeviceAlarmMessageRequestData;


	class DeleteDeviceAlarmMessageResponse : public LCOpenApiResponse
	{
	public:
		class DeleteDeviceAlarmMessageResponseData
		{
		public:
			DeleteDeviceAlarmMessageResponseData();
			~DeleteDeviceAlarmMessageResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		DeleteDeviceAlarmMessageResponse();
		~DeleteDeviceAlarmMessageResponse();
	public:
		virtual int parse();
	public:
		DeleteDeviceAlarmMessageResponseData data;
		MetaInfo* _metainfo_DeleteDeviceAlarmMessageResponseData;
	};

	
	typedef typename DeleteDeviceAlarmMessageResponse::DeleteDeviceAlarmMessageResponseData DeleteDeviceAlarmMessageResponseData;

}
}

#endif
