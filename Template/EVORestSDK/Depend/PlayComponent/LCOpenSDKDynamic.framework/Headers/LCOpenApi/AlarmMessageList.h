/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_AlarmMessageList_H_
#define _LC_OPENAPI_CLIENT_AlarmMessageList_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
按设备通道分页查询报警消息
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class AlarmMessageListRequest : public LCOpenApiRequest
	{
	public:
		class AlarmMessageListRequestData
		{
		public:
			AlarmMessageListRequestData();
			~AlarmMessageListRequestData();
			
		public:
			/** 设备本地结束时间 */
			string endTime;
		public:
			/** [long]结束alarmId，-1表示不限制，以endTime时间为准 */
			int64 endAlarmId;
		public:
			/** 设备序列号 */
			string deviceId;
		public:
			/** [long]开始alarmId，-1表示不限制，以beginTime时间为准 */
			int64 beginAlarmId;
		public:
			/** 消息类型 */
			string alarmType;
		public:
			/** [int]分页查询的数量，最大128 */
			int count;
		public:
			/** 设备本地开始时间 */
			string beginTime;
		public:
			/** 授权token */
			string token;
		public:
			/** 设备通道号 */
			string channelId;

		};
	public:
		AlarmMessageListRequest();
		~AlarmMessageListRequest();
	public:
		virtual int build();
	public:
		AlarmMessageListRequestData data;
		MetaInfo* _metainfo_AlarmMessageListRequestData;
	};

	
	typedef typename AlarmMessageListRequest::AlarmMessageListRequestData AlarmMessageListRequestData;


	class AlarmMessageListResponse : public LCOpenApiResponse
	{
	public:
		class AlarmMessageListResponseData
		{
		public:
			AlarmMessageListResponseData();
			~AlarmMessageListResponseData();
			
		public:
			/** 通道名称 */
			string name;
		public:
			/** define a list with struct of AlarmMessageListResponseData_AlarmsElement */
			class AlarmMessageListResponseData_AlarmsElement : public LCOpenApiBase
			{
			public:
				AlarmMessageListResponseData_AlarmsElement();
				~AlarmMessageListResponseData_AlarmsElement();
			public:
				/** [bool][O]是否存在设备联动消息 */
				bool hasLinkage;
			public:
				/** 报警类型 */
				string type;
			public:
				/** 报警图片url */
				LCOpenApiVector<string> picUrl;
			public:
				/** 缩略图URL */
				string thumbUrl;
			public:
				/** [O]默认本地录像播放时长 */
				string lrecordStopTime;
			public:
				/** [O]备注字段。如果是低电量，填写电量百分比0-100，如果涉及门锁钥匙，填写钥匙名称 */
				string remark;
			public:
				/** [long]告警消息ID */
				int64 alarmId;
			public:
				/** [O]消息唯一标识，用于查询云录像 */
				string token;
			public:
				/** 设备本地时间，yyyyMMddTHHmmss格式 */
				string time;
			};
		public:
			LCOpenApiVector<AlarmMessageListResponseData_AlarmsElement> alarms;

		};
	public:
		AlarmMessageListResponse();
		~AlarmMessageListResponse();
	public:
		virtual int parse();
	public:
		AlarmMessageListResponseData data;
		MetaInfo* _metainfo_AlarmMessageListResponseData;
	};

	
	typedef typename AlarmMessageListResponse::AlarmMessageListResponseData AlarmMessageListResponseData;
	typedef typename AlarmMessageListResponse::AlarmMessageListResponseData::AlarmMessageListResponseData_AlarmsElement AlarmMessageListResponseData_AlarmsElement;

}
}

#endif
