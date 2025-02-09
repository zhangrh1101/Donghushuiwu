/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_QueryCloudRecordNum_H_
#define _LC_OPENAPI_CLIENT_QueryCloudRecordNum_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
查询报警云录像的数目（建议beginTime和endTime不要跨天）

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class QueryCloudRecordNumRequest : public LCOpenApiRequest
	{
	public:
		class QueryCloudRecordNumRequestData
		{
		public:
			QueryCloudRecordNumRequestData();
			~QueryCloudRecordNumRequestData();
			
		public:
			/** [cstr]queryCloudRecordNum */
			#define _STATIC_QueryCloudRecordNumRequestData_method "queryCloudRecordNum"
			string method;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 结束时间，如2010-05-25 23:59:59 */
			string endTime;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** 开始时间，如2010-05-25 00:00:00 */
			string beginTime;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		QueryCloudRecordNumRequest();
		~QueryCloudRecordNumRequest();
	public:
		virtual int build();
	public:
		QueryCloudRecordNumRequestData data;
		MetaInfo* _metainfo_QueryCloudRecordNumRequestData;
	};

	
	typedef typename QueryCloudRecordNumRequest::QueryCloudRecordNumRequestData QueryCloudRecordNumRequestData;


	class QueryCloudRecordNumResponse : public LCOpenApiResponse
	{
	public:
		class QueryCloudRecordNumResponseData
		{
		public:
			QueryCloudRecordNumResponseData();
			~QueryCloudRecordNumResponseData();
			
		public:
			/** [int]录像总数 */
			int recordNum;

		};
	public:
		QueryCloudRecordNumResponse();
		~QueryCloudRecordNumResponse();
	public:
		virtual int parse();
	public:
		QueryCloudRecordNumResponseData data;
		MetaInfo* _metainfo_QueryCloudRecordNumResponseData;
	};

	
	typedef typename QueryCloudRecordNumResponse::QueryCloudRecordNumResponseData QueryCloudRecordNumResponseData;

}
}

#endif
