/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetDeviceCloud_H_
#define _LC_OPENAPI_CLIENT_GetDeviceCloud_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取当前设备的云存储服务信息

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetDeviceCloudRequest : public LCOpenApiRequest
	{
	public:
		class GetDeviceCloudRequestData
		{
		public:
			GetDeviceCloudRequestData();
			~GetDeviceCloudRequestData();
			
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
		GetDeviceCloudRequest();
		~GetDeviceCloudRequest();
	public:
		virtual int build();
	public:
		GetDeviceCloudRequestData data;
		MetaInfo* _metainfo_GetDeviceCloudRequestData;
	};

	
	typedef typename GetDeviceCloudRequest::GetDeviceCloudRequestData GetDeviceCloudRequestData;


	class GetDeviceCloudResponse : public LCOpenApiResponse
	{
	public:
		class GetDeviceCloudResponseData
		{
		public:
			GetDeviceCloudResponseData();
			~GetDeviceCloudResponseData();
			
		public:
			/** 套餐名称 */
			string name;
		public:
			/** [bool]是否有默认套餐 */
			bool hasDefault;
		public:
			/** 套餐结束时间 默认套餐切未开通 此字段为空 */
			string endTime;
		public:
			/** 套餐开启时间 默认套餐切未开通 此字段为空 */
			string beginTime;
		public:
			/** [int]套餐状态 -1-未开通 0-过期 1-使用中 2-暂停 */
			int strategyStatus;
		public:
			/** [long]云存储策略id 默认套餐 此字段为空 */
			int64 strategyId;

		};
	public:
		GetDeviceCloudResponse();
		~GetDeviceCloudResponse();
	public:
		virtual int parse();
	public:
		GetDeviceCloudResponseData data;
		MetaInfo* _metainfo_GetDeviceCloudResponseData;
	};

	
	typedef typename GetDeviceCloudResponse::GetDeviceCloudResponseData GetDeviceCloudResponseData;

}
}

#endif
