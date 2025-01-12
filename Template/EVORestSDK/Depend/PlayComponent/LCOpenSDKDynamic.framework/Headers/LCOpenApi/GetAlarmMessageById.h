/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetAlarmMessageById_H_
#define _LC_OPENAPI_CLIENT_GetAlarmMessageById_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
根据报警消息Id查询报警详情

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetAlarmMessageByIdRequest : public LCOpenApiRequest
	{
	public:
		class GetAlarmMessageByIdRequestData
		{
		public:
			GetAlarmMessageByIdRequestData();
			~GetAlarmMessageByIdRequestData();
			
		public:
			/** 告警消息ID */
			string alarmId;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** [cstr]getAlarmMessageById */
			#define _STATIC_GetAlarmMessageByIdRequestData_method "getAlarmMessageById"
			string method;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** 消息类型 */
			string msgType;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		GetAlarmMessageByIdRequest();
		~GetAlarmMessageByIdRequest();
	public:
		virtual int build();
	public:
		GetAlarmMessageByIdRequestData data;
		MetaInfo* _metainfo_GetAlarmMessageByIdRequestData;
	};

	
	typedef typename GetAlarmMessageByIdRequest::GetAlarmMessageByIdRequestData GetAlarmMessageByIdRequestData;


	class GetAlarmMessageByIdResponse : public LCOpenApiResponse
	{
	public:
		class GetAlarmMessageByIdResponseData
		{
		public:
			GetAlarmMessageByIdResponseData();
			~GetAlarmMessageByIdResponseData();
			
		public:
			/** [long]报警消息ID */
			int64 alarmId;
		public:
			/** [long]报警时间UNIX时间戳秒 */
			int64 time;
		public:
			/** 缩略图url */
			string thumbUrl;
		public:
			/** 报警图片url */
			LCOpenApiVector<string> picurlArray;
		public:
			/** 通道号 */
			string channelId;
		public:
			/** [String]消息类型,alarmPIR：人体红外；videoMotion：动态检测；wireLessDevLowPower：低电压告警 */
			string msgType;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		GetAlarmMessageByIdResponse();
		~GetAlarmMessageByIdResponse();
	public:
		virtual int parse();
	public:
		GetAlarmMessageByIdResponseData data;
		MetaInfo* _metainfo_GetAlarmMessageByIdResponseData;
	};

	
	typedef typename GetAlarmMessageByIdResponse::GetAlarmMessageByIdResponseData GetAlarmMessageByIdResponseData;

}
}

#endif
