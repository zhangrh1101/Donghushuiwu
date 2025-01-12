/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetCruiseConfig_H_
#define _LC_OPENAPI_CLIENT_GetCruiseConfig_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取设备的定时巡航配置，只支持具有TimedCruise能力的单通道IPC设备

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetCruiseConfigRequest : public LCOpenApiRequest
	{
	public:
		class GetCruiseConfigRequestData
		{
		public:
			GetCruiseConfigRequestData();
			~GetCruiseConfigRequestData();
			
		public:
			/** [cstr]getCruiseConfig */
			#define _STATIC_GetCruiseConfigRequestData_method "getCruiseConfig"
			string method;
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
		GetCruiseConfigRequest();
		~GetCruiseConfigRequest();
	public:
		virtual int build();
	public:
		GetCruiseConfigRequestData data;
		MetaInfo* _metainfo_GetCruiseConfigRequestData;
	};

	
	typedef typename GetCruiseConfigRequest::GetCruiseConfigRequestData GetCruiseConfigRequestData;


	class GetCruiseConfigResponse : public LCOpenApiResponse
	{
	public:
		class GetCruiseConfigResponseData
		{
		public:
			GetCruiseConfigResponseData();
			~GetCruiseConfigResponseData();
			
		public:
			/** 通道ID */
			string channelId;
		public:
			/** define a list with struct of GetCruiseConfigResponseData_CruisePlan */
			class GetCruiseConfigResponseData_CruisePlan : public LCOpenApiBase
			{
			public:
				GetCruiseConfigResponseData_CruisePlan();
				~GetCruiseConfigResponseData_CruisePlan();
			public:
				/** [可选][String]巡航路径，当mode=collection时必填，可选值如下：default：默认路径，由设备端决定;custom：自定义路径，即collection中收藏点的顺序 */
				string cruisePath;
			public:
				/** define a list with struct of GetCruiseConfigResponseData_CruisePlan_CollectionElement */
				class GetCruiseConfigResponseData_CruisePlan_CollectionElement : public LCOpenApiBase
				{
				public:
					GetCruiseConfigResponseData_CruisePlan_CollectionElement();
					~GetCruiseConfigResponseData_CruisePlan_CollectionElement();
				public:
					/** [String]收藏点名称，收藏点的唯一标示符，当mode为collection，cruisePath为custom时必填 */
					string name;
				public:
					/** [int]收藏点参数，每个收藏点的停留时间，单位为秒，当mode为collection，cruisePath为custom时必填 */
					int stayTime;
				};
			public:
				LCOpenApiVector<GetCruiseConfigResponseData_CruisePlan_CollectionElement> collection;
			public:
				/** [必选][String] default：默认模式，即全景巡航; collection：定制模式，即收藏点巡航 */
				string mode;
			public:
				/** define a list with struct of GetCruiseConfigResponseData_CruisePlan_CruisesElement */
				class GetCruiseConfigResponseData_CruisePlan_CruisesElement : public LCOpenApiBase
				{
				public:
					GetCruiseConfigResponseData_CruisePlan_CruisesElement();
					~GetCruiseConfigResponseData_CruisePlan_CruisesElement();
				public:
					/** [String]结束时间。时间格式为：THHMMSS */
					string endTime;
				public:
					/** [String]开始时间。时间格式为：THHMMSS */
					string beginTime;
				public:
					/** [String]巡航周期:Monday每周一;Tuesday每周二;Wednesday每周三;Thursday每周四;Friday每周五;Saturday每周六;Sunday每周日 */
					string period;
				};
			public:
				LCOpenApiVector<GetCruiseConfigResponseData_CruisePlan_CruisesElement> cruises;
			public:
				/** 巡航计划唯一标示符，可选 */
				string cruiseName;
			};
		public:
			GetCruiseConfigResponseData_CruisePlan* cruisePlan;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		GetCruiseConfigResponse();
		~GetCruiseConfigResponse();
	public:
		virtual int parse();
	public:
		GetCruiseConfigResponseData data;
		MetaInfo* _metainfo_GetCruiseConfigResponseData;
	};

	
	typedef typename GetCruiseConfigResponse::GetCruiseConfigResponseData GetCruiseConfigResponseData;
	typedef typename GetCruiseConfigResponse::GetCruiseConfigResponseData::GetCruiseConfigResponseData_CruisePlan GetCruiseConfigResponseData_CruisePlan;
	typedef typename GetCruiseConfigResponse::GetCruiseConfigResponseData::GetCruiseConfigResponseData_CruisePlan::GetCruiseConfigResponseData_CruisePlan_CollectionElement GetCruiseConfigResponseData_CruisePlan_CollectionElement;
	typedef typename GetCruiseConfigResponse::GetCruiseConfigResponseData::GetCruiseConfigResponseData_CruisePlan::GetCruiseConfigResponseData_CruisePlan_CruisesElement GetCruiseConfigResponseData_CruisePlan_CruisesElement;

}
}

#endif
