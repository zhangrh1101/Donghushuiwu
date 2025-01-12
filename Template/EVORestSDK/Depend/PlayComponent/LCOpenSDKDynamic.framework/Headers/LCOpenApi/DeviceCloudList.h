/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeviceCloudList_H_
#define _LC_OPENAPI_CLIENT_DeviceCloudList_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
查询设备通道下所有云存储服务
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeviceCloudListRequest : public LCOpenApiRequest
	{
	public:
		class DeviceCloudListRequestData
		{
		public:
			DeviceCloudListRequestData();
			~DeviceCloudListRequestData();
			
		public:
			/** 通道号 */
			string channelId;
		public:
			/** 授权的token(userToken或accessToken) */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		DeviceCloudListRequest();
		~DeviceCloudListRequest();
	public:
		virtual int build();
	public:
		DeviceCloudListRequestData data;
		MetaInfo* _metainfo_DeviceCloudListRequestData;
	};

	
	typedef typename DeviceCloudListRequest::DeviceCloudListRequestData DeviceCloudListRequestData;


	class DeviceCloudListResponse : public LCOpenApiResponse
	{
	public:
		class DeviceCloudListResponseData
		{
		public:
			DeviceCloudListResponseData();
			~DeviceCloudListResponseData();
			
		public:
			/** define a list with struct of DeviceCloudListResponseData_StrategiesElement */
			class DeviceCloudListResponseData_StrategiesElement : public LCOpenApiBase
			{
			public:
				DeviceCloudListResponseData_StrategiesElement();
				~DeviceCloudListResponseData_StrategiesElement();
			public:
				/** 云存储套餐结束时间，格式2020/05/09，永久免费套餐endTime时间可为空 */
				string endTime;
			public:
				/** 录像保存天数 */
				string recordSaveDays;
			public:
				/** 云存储唯一id */
				string deviceCloudId;
			public:
				/** [int] 套餐收费类型，1-收费套餐，2-普通的存在结束时间的免费套餐，3-永久免费套餐 */
				int cloudType;
			public:
				/** 云存储策略id */
				string strategyId;
			public:
				/** [int] 云存储套餐使用状态，1-正在使用，2-列队状态， 3-套餐过期 */
				int cloudStatus;
			public:
				/** [int] 当前使用的云存储状态，1-云存储开启，0-云存储关闭 */
				int useStatus;
			public:
				/** 云存储套餐开始时间，格式2019/05/10 */
				string startTime;
			public:
				/** [int]剩余有效天数，永久套餐为-1 */
				int validDays;
			};
		public:
			LCOpenApiVector<DeviceCloudListResponseData_StrategiesElement> strategies;

		};
	public:
		DeviceCloudListResponse();
		~DeviceCloudListResponse();
	public:
		virtual int parse();
	public:
		DeviceCloudListResponseData data;
		MetaInfo* _metainfo_DeviceCloudListResponseData;
	};

	
	typedef typename DeviceCloudListResponse::DeviceCloudListResponseData DeviceCloudListResponseData;
	typedef typename DeviceCloudListResponse::DeviceCloudListResponseData::DeviceCloudListResponseData_StrategiesElement DeviceCloudListResponseData_StrategiesElement;

}
}

#endif
