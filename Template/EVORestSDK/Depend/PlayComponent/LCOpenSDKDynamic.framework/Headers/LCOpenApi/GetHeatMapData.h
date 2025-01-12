/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetHeatMapData_H_
#define _LC_OPENAPI_CLIENT_GetHeatMapData_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
热度图数据获取

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetHeatMapDataRequest : public LCOpenApiRequest
	{
	public:
		class GetHeatMapDataRequestData
		{
		public:
			GetHeatMapDataRequestData();
			~GetHeatMapDataRequestData();
			
		public:
			/** UTC采集结束时间 */
			string utcEndTime;
		public:
			/** [cstr]getHeatMapData */
			#define _STATIC_GetHeatMapDataRequestData_method "getHeatMapData"
			string method;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备本地采集结束时间 */
			string localEndTime;
		public:
			/** 设备本地采集开始时间 */
			string localBeginTime;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** UTC采集开始时间 */
			string utcBeginTime;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		GetHeatMapDataRequest();
		~GetHeatMapDataRequest();
	public:
		virtual int build();
	public:
		GetHeatMapDataRequestData data;
		MetaInfo* _metainfo_GetHeatMapDataRequestData;
	};

	
	typedef typename GetHeatMapDataRequest::GetHeatMapDataRequestData GetHeatMapDataRequestData;


	class GetHeatMapDataResponse : public LCOpenApiResponse
	{
	public:
		class GetHeatMapDataResponseData
		{
		public:
			GetHeatMapDataResponseData();
			~GetHeatMapDataResponseData();
			
		public:
			/** define a list with struct of GetHeatMapDataResponseData_Details */
			class GetHeatMapDataResponseData_Details : public LCOpenApiBase
			{
			public:
				GetHeatMapDataResponseData_Details();
				~GetHeatMapDataResponseData_Details();
			public:
				/** 可选(新增字段)，热度最小值 */
				string min;
			public:
				/** 可选(新增字段)，热度最大值 */
				string max;
			public:
				/** 图片高度 */
				string height;
			public:
				/** 热度图原始数据灰阶位图，Base64(Binary Data) */
				string heatData;
			public:
				/** 可选(新增字段)，热度均值 */
				string average;
			public:
				/** 图片宽度 */
				string width;
			};
		public:
			GetHeatMapDataResponseData_Details* details;

		};
	public:
		GetHeatMapDataResponse();
		~GetHeatMapDataResponse();
	public:
		virtual int parse();
	public:
		GetHeatMapDataResponseData data;
		MetaInfo* _metainfo_GetHeatMapDataResponseData;
	};

	
	typedef typename GetHeatMapDataResponse::GetHeatMapDataResponseData GetHeatMapDataResponseData;
	typedef typename GetHeatMapDataResponse::GetHeatMapDataResponseData::GetHeatMapDataResponseData_Details GetHeatMapDataResponseData_Details;

}
}

#endif
