/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_ModifyDeviceAlarmPlan_H_
#define _LC_OPENAPI_CLIENT_ModifyDeviceAlarmPlan_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
修改设备报警计划

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class ModifyDeviceAlarmPlanRequest : public LCOpenApiRequest
	{
	public:
		class ModifyDeviceAlarmPlanRequestData
		{
		public:
			ModifyDeviceAlarmPlanRequestData();
			~ModifyDeviceAlarmPlanRequestData();
			
		public:
			/** 参考开放平台Wiki对应modifyDeviceAlarmPlan方法的rules规则 */
			string rules;
		public:
			/** [cstr]modifyDeviceAlarmPlan */
			#define _STATIC_ModifyDeviceAlarmPlanRequestData_method "modifyDeviceAlarmPlan"
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
		ModifyDeviceAlarmPlanRequest();
		~ModifyDeviceAlarmPlanRequest();
	public:
		virtual int build();
	public:
		ModifyDeviceAlarmPlanRequestData data;
		MetaInfo* _metainfo_ModifyDeviceAlarmPlanRequestData;
	};

	
	typedef typename ModifyDeviceAlarmPlanRequest::ModifyDeviceAlarmPlanRequestData ModifyDeviceAlarmPlanRequestData;


	class ModifyDeviceAlarmPlanResponse : public LCOpenApiResponse
	{
	public:
		class ModifyDeviceAlarmPlanResponseData
		{
		public:
			ModifyDeviceAlarmPlanResponseData();
			~ModifyDeviceAlarmPlanResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		ModifyDeviceAlarmPlanResponse();
		~ModifyDeviceAlarmPlanResponse();
	public:
		virtual int parse();
	public:
		ModifyDeviceAlarmPlanResponseData data;
		MetaInfo* _metainfo_ModifyDeviceAlarmPlanResponseData;
	};

	
	typedef typename ModifyDeviceAlarmPlanResponse::ModifyDeviceAlarmPlanResponseData ModifyDeviceAlarmPlanResponseData;

}
}

#endif
