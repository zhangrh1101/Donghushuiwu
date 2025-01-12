/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetLatestAlarmMessage_H_
#define _LC_OPENAPI_CLIENT_GetLatestAlarmMessage_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
按设备通道、配件获取最近一条消息
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetLatestAlarmMessageRequest : public LCOpenApiRequest
	{
	public:
		class GetLatestAlarmMessageRequestData
		{
		public:
			GetLatestAlarmMessageRequestData();
			~GetLatestAlarmMessageRequestData();
			
		public:
			/** 授权token */
			string token;
		public:
			/** define a list with struct of GetLatestAlarmMessageRequestData_DeviceListElement */
			class GetLatestAlarmMessageRequestData_DeviceListElement : public LCOpenApiBase
			{
			public:
				GetLatestAlarmMessageRequestData_DeviceListElement();
				~GetLatestAlarmMessageRequestData_DeviceListElement();
			public:
				/** 配件设备序列号1 */
				LCOpenApiVector<string> apIds;
			public:
				/** 设备通道号1 */
				LCOpenApiVector<string> channelIds;
			public:
				/** 设备序列号 */
				string deviceId;
			};
		public:
			LCOpenApiVector<GetLatestAlarmMessageRequestData_DeviceListElement> deviceList;

		};
	public:
		GetLatestAlarmMessageRequest();
		~GetLatestAlarmMessageRequest();
	public:
		virtual int build();
	public:
		GetLatestAlarmMessageRequestData data;
		MetaInfo* _metainfo_GetLatestAlarmMessageRequestData;
	};

	
	typedef typename GetLatestAlarmMessageRequest::GetLatestAlarmMessageRequestData GetLatestAlarmMessageRequestData;
	typedef typename GetLatestAlarmMessageRequest::GetLatestAlarmMessageRequestData::GetLatestAlarmMessageRequestData_DeviceListElement GetLatestAlarmMessageRequestData_DeviceListElement;


	class GetLatestAlarmMessageResponse : public LCOpenApiResponse
	{
	public:
		class GetLatestAlarmMessageResponseData
		{
		public:
			GetLatestAlarmMessageResponseData();
			~GetLatestAlarmMessageResponseData();
			
		public:
			/** define a list with struct of GetLatestAlarmMessageResponseData_AlarmListElement */
			class GetLatestAlarmMessageResponseData_AlarmListElement : public LCOpenApiBase
			{
			public:
				GetLatestAlarmMessageResponseData_AlarmListElement();
				~GetLatestAlarmMessageResponseData_AlarmListElement();
			public:
				/** define a list with struct of GetLatestAlarmMessageResponseData_AlarmListElement_ChannelAlarmsElement */
				class GetLatestAlarmMessageResponseData_AlarmListElement_ChannelAlarmsElement : public LCOpenApiBase
				{
				public:
					GetLatestAlarmMessageResponseData_AlarmListElement_ChannelAlarmsElement();
					~GetLatestAlarmMessageResponseData_AlarmListElement_ChannelAlarmsElement();
				public:
					/** 报警类型 */
					string type;
				public:
					/** 报警图片url */
					LCOpenApiVector<string> picUrl;
				public:
					/** 设备通道或者报警消息的缩略图URL */
					string thumbUrl;
				public:
					/** [O]默认本地录像播放时长 */
					string lrecordStopTime;
				public:
					/** [O]备注字段。如果是低电量，填写电量百分比0-100，如果涉及门锁钥匙，填写钥匙名称。 */
					string remark;
				public:
					/** [long]告警消息ID */
					int64 alarmId;
				public:
					/** [O]消息唯一标识，用于查询云录像 */
					string token;
				public:
					/** [int]未读消息数量 */
					int unread;
				public:
					/** 通道号 */
					string channelId;
				public:
					/** 通道名称 */
					string name;
				public:
					/** 设备本地报警时间,格式yyyyMMddTHHmmss */
					string time;
				};
			public:
				LCOpenApiVector<GetLatestAlarmMessageResponseData_AlarmListElement_ChannelAlarmsElement> channelAlarms;
			public:
				/** define a list with struct of GetLatestAlarmMessageResponseData_AlarmListElement_ApAlarmsElement */
				class GetLatestAlarmMessageResponseData_AlarmListElement_ApAlarmsElement : public LCOpenApiBase
				{
				public:
					GetLatestAlarmMessageResponseData_AlarmListElement_ApAlarmsElement();
					~GetLatestAlarmMessageResponseData_AlarmListElement_ApAlarmsElement();
				public:
					/** [long]告警消息ID */
					int64 alarmId;
				public:
					/** 配件ID */
					string apId;
				public:
					/** 设备本地报警时间,格式yyyyMMddTHHmmss */
					string time;
				public:
					/** 配件类型 */
					string apType;
				public:
					/** [bool]是否存在联动消息 */
					bool hasLinkage;
				public:
					/** [int]未读消息数量 */
					int unread;
				public:
					/** 报警类型 */
					string type;
				public:
					/** 配件名称 */
					string name;
				};
			public:
				LCOpenApiVector<GetLatestAlarmMessageResponseData_AlarmListElement_ApAlarmsElement> apAlarms;
			public:
				/** 设备序列号 */
				string deviceId;
			};
		public:
			LCOpenApiVector<GetLatestAlarmMessageResponseData_AlarmListElement> alarmList;

		};
	public:
		GetLatestAlarmMessageResponse();
		~GetLatestAlarmMessageResponse();
	public:
		virtual int parse();
	public:
		GetLatestAlarmMessageResponseData data;
		MetaInfo* _metainfo_GetLatestAlarmMessageResponseData;
	};

	
	typedef typename GetLatestAlarmMessageResponse::GetLatestAlarmMessageResponseData GetLatestAlarmMessageResponseData;
	typedef typename GetLatestAlarmMessageResponse::GetLatestAlarmMessageResponseData::GetLatestAlarmMessageResponseData_AlarmListElement GetLatestAlarmMessageResponseData_AlarmListElement;
	typedef typename GetLatestAlarmMessageResponse::GetLatestAlarmMessageResponseData::GetLatestAlarmMessageResponseData_AlarmListElement::GetLatestAlarmMessageResponseData_AlarmListElement_ChannelAlarmsElement GetLatestAlarmMessageResponseData_AlarmListElement_ChannelAlarmsElement;
	typedef typename GetLatestAlarmMessageResponse::GetLatestAlarmMessageResponseData::GetLatestAlarmMessageResponseData_AlarmListElement::GetLatestAlarmMessageResponseData_AlarmListElement_ApAlarmsElement GetLatestAlarmMessageResponseData_AlarmListElement_ApAlarmsElement;

}
}

#endif
