/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_QueryCloudPlanRecordBitmap_H_
#define _LC_OPENAPI_CLIENT_QueryCloudPlanRecordBitmap_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
按月查询有定时云录像的日期（以“天”为单位）

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class QueryCloudPlanRecordBitmapRequest : public LCOpenApiRequest
	{
	public:
		class QueryCloudPlanRecordBitmapRequestData
		{
		public:
			QueryCloudPlanRecordBitmapRequestData();
			~QueryCloudPlanRecordBitmapRequestData();
			
		public:
			/** [cstr]queryCloudPlanRecordBitmap */
			#define _STATIC_QueryCloudPlanRecordBitmapRequestData_method "queryCloudPlanRecordBitmap"
			string method;
		public:
			/** [int]月 */
			int month;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** [int]年 */
			int year;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		QueryCloudPlanRecordBitmapRequest();
		~QueryCloudPlanRecordBitmapRequest();
	public:
		virtual int build();
	public:
		QueryCloudPlanRecordBitmapRequestData data;
		MetaInfo* _metainfo_QueryCloudPlanRecordBitmapRequestData;
	};

	
	typedef typename QueryCloudPlanRecordBitmapRequest::QueryCloudPlanRecordBitmapRequestData QueryCloudPlanRecordBitmapRequestData;


	class QueryCloudPlanRecordBitmapResponse : public LCOpenApiResponse
	{
	public:
		class QueryCloudPlanRecordBitmapResponseData
		{
		public:
			QueryCloudPlanRecordBitmapResponseData();
			~QueryCloudPlanRecordBitmapResponseData();
			
		public:
			/** 日掩码-1111100000111110000011111000001 */
			string bitmap;

		};
	public:
		QueryCloudPlanRecordBitmapResponse();
		~QueryCloudPlanRecordBitmapResponse();
	public:
		virtual int parse();
	public:
		QueryCloudPlanRecordBitmapResponseData data;
		MetaInfo* _metainfo_QueryCloudPlanRecordBitmapResponseData;
	};

	
	typedef typename QueryCloudPlanRecordBitmapResponse::QueryCloudPlanRecordBitmapResponseData QueryCloudPlanRecordBitmapResponseData;

}
}

#endif
