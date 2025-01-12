/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SetCruiseConfig_H_
#define _LC_OPENAPI_CLIENT_SetCruiseConfig_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置设备的定时巡航配置，只支持具有TimedCruise能力的单通道IPC设备

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class SetCruiseConfigRequest : public LCOpenApiRequest
	{
	public:
		class SetCruiseConfigRequestData
		{
		public:
			SetCruiseConfigRequestData();
			~SetCruiseConfigRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** define a list with struct of SetCruiseConfigRequestData_CruisePlan */
			class SetCruiseConfigRequestData_CruisePlan : public LCOpenApiBase
			{
			public:
				SetCruiseConfigRequestData_CruisePlan();
				~SetCruiseConfigRequestData_CruisePlan();
			public:
				/** [可选][String]巡航路径，当mode=collection时必填，可选值如下：default：默认路径，由设备端决定;custom：自定义路径，即collection中收藏点的顺序 */
				string cruisePath;
			public:
				/** define a list with struct of SetCruiseConfigRequestData_CruisePlan_CollectionElement */
				class SetCruiseConfigRequestData_CruisePlan_CollectionElement : public LCOpenApiBase
				{
				public:
					SetCruiseConfigRequestData_CruisePlan_CollectionElement();
					~SetCruiseConfigRequestData_CruisePlan_CollectionElement();
				public:
					/** [可选][String]收藏点名称，收藏点的唯一标示符，当mode为collection，cruisePath为custom时必填 */
					string name;
				public:
					/** [可选][int]收藏点参数，每个收藏点的停留时间，单位为秒，当mode为collection，cruisePath为custom时必填 */
					string stayTime;
				};
			public:
				LCOpenApiVector<SetCruiseConfigRequestData_CruisePlan_CollectionElement> collection;
			public:
				/** [必选][String] default：默认模式，即全景巡航; collection：定制模式，即收藏点巡航 */
				string mode;
			public:
				/** define a list with struct of SetCruiseConfigRequestData_CruisePlan_CruisesElement */
				class SetCruiseConfigRequestData_CruisePlan_CruisesElement : public LCOpenApiBase
				{
				public:
					SetCruiseConfigRequestData_CruisePlan_CruisesElement();
					~SetCruiseConfigRequestData_CruisePlan_CruisesElement();
				public:
					/** [必选][String]结束时间。时间格式为：THHMMSS */
					string endTime;
				public:
					/** [必选][String]开始时间。时间格式为：THHMMSS */
					string beginTime;
				public:
					/** [必选][String]巡航周期:Monday每周一;Tuesday每周二;Wednesday每周三;Thursday每周四;Friday每周五;Saturday每周六;Sunday每周日 */
					string period;
				};
			public:
				LCOpenApiVector<SetCruiseConfigRequestData_CruisePlan_CruisesElement> cruises;
			public:
				/** 巡航计划唯一标示符，可选 */
				string cruiseName;
			};
		public:
			SetCruiseConfigRequestData_CruisePlan* cruisePlan;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** [cstr]setCruiseConfig */
			#define _STATIC_SetCruiseConfigRequestData_method "setCruiseConfig"
			string method;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		SetCruiseConfigRequest();
		~SetCruiseConfigRequest();
	public:
		virtual int build();
	public:
		SetCruiseConfigRequestData data;
		MetaInfo* _metainfo_SetCruiseConfigRequestData;
	};

	
	typedef typename SetCruiseConfigRequest::SetCruiseConfigRequestData SetCruiseConfigRequestData;
	typedef typename SetCruiseConfigRequest::SetCruiseConfigRequestData::SetCruiseConfigRequestData_CruisePlan SetCruiseConfigRequestData_CruisePlan;
	typedef typename SetCruiseConfigRequest::SetCruiseConfigRequestData::SetCruiseConfigRequestData_CruisePlan::SetCruiseConfigRequestData_CruisePlan_CollectionElement SetCruiseConfigRequestData_CruisePlan_CollectionElement;
	typedef typename SetCruiseConfigRequest::SetCruiseConfigRequestData::SetCruiseConfigRequestData_CruisePlan::SetCruiseConfigRequestData_CruisePlan_CruisesElement SetCruiseConfigRequestData_CruisePlan_CruisesElement;


	class SetCruiseConfigResponse : public LCOpenApiResponse
	{
	public:
		class SetCruiseConfigResponseData
		{
		public:
			SetCruiseConfigResponseData();
			~SetCruiseConfigResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		SetCruiseConfigResponse();
		~SetCruiseConfigResponse();
	public:
		virtual int parse();
	public:
		SetCruiseConfigResponseData data;
		MetaInfo* _metainfo_SetCruiseConfigResponseData;
	};

	
	typedef typename SetCruiseConfigResponse::SetCruiseConfigResponseData SetCruiseConfigResponseData;

}
}

#endif
