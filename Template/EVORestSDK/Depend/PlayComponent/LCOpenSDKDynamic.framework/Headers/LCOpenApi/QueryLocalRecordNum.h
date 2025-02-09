/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_QueryLocalRecordNum_H_
#define _LC_OPENAPI_CLIENT_QueryLocalRecordNum_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
查询设备录像的数目（建议beginTime和endTime不要跨天）

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class QueryLocalRecordNumRequest : public LCOpenApiRequest
	{
	public:
		class QueryLocalRecordNumRequestData
		{
		public:
			QueryLocalRecordNumRequestData();
			~QueryLocalRecordNumRequestData();
			
		public:
			/** 类型,Manual、Event、All */
			string type;
		public:
			/** [cstr]queryLocalRecordNum */
			#define _STATIC_QueryLocalRecordNumRequestData_method "queryLocalRecordNum"
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
		QueryLocalRecordNumRequest();
		~QueryLocalRecordNumRequest();
	public:
		virtual int build();
	public:
		QueryLocalRecordNumRequestData data;
		MetaInfo* _metainfo_QueryLocalRecordNumRequestData;
	};

	
	typedef typename QueryLocalRecordNumRequest::QueryLocalRecordNumRequestData QueryLocalRecordNumRequestData;


	class QueryLocalRecordNumResponse : public LCOpenApiResponse
	{
	public:
		class QueryLocalRecordNumResponseData
		{
		public:
			QueryLocalRecordNumResponseData();
			~QueryLocalRecordNumResponseData();
			
		public:
			/** [int]录像总数 */
			int recordNum;

		};
	public:
		QueryLocalRecordNumResponse();
		~QueryLocalRecordNumResponse();
	public:
		virtual int parse();
	public:
		QueryLocalRecordNumResponseData data;
		MetaInfo* _metainfo_QueryLocalRecordNumResponseData;
	};

	
	typedef typename QueryLocalRecordNumResponse::QueryLocalRecordNumResponseData QueryLocalRecordNumResponseData;

}
}

#endif
