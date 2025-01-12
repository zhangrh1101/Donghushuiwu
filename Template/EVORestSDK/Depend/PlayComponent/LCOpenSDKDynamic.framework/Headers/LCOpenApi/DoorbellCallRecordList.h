/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DoorbellCallRecordList_H_
#define _LC_OPENAPI_CLIENT_DoorbellCallRecordList_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取门铃的呼叫记录
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DoorbellCallRecordListRequest : public LCOpenApiRequest
	{
	public:
		class DoorbellCallRecordListRequestData
		{
		public:
			DoorbellCallRecordListRequestData();
			~DoorbellCallRecordListRequestData();
			
		public:
			/** [int]手机所在时区的时间与零时区时间差值，单位为秒，可正负 */
			int timezoneOffset;
		public:
			/** 授权的token */
			string token;
		public:
			/** [long]从该呼叫记录id开始查询。若要从最新开始查，填-1 */
			int64 callRecordId;
		public:
			/** [int]需要查的最大条数 */
			int count;
		public:
			/** 门铃设备序列号 */
			string deviceId ;

		};
	public:
		DoorbellCallRecordListRequest();
		~DoorbellCallRecordListRequest();
	public:
		virtual int build();
	public:
		DoorbellCallRecordListRequestData data;
		MetaInfo* _metainfo_DoorbellCallRecordListRequestData;
	};

	
	typedef typename DoorbellCallRecordListRequest::DoorbellCallRecordListRequestData DoorbellCallRecordListRequestData;


	class DoorbellCallRecordListResponse : public LCOpenApiResponse
	{
	public:
		class DoorbellCallRecordListResponseData
		{
		public:
			DoorbellCallRecordListResponseData();
			~DoorbellCallRecordListResponseData();
			
		public:
			/** define a list with struct of DoorbellCallRecordListResponseData_CallRecordsElement */
			class DoorbellCallRecordListResponseData_CallRecordsElement : public LCOpenApiBase
			{
			public:
				DoorbellCallRecordListResponseData_CallRecordsElement();
				~DoorbellCallRecordListResponseData_CallRecordsElement();
			public:
				/**  answer:接听,call:未接听 */
				string status;
			public:
				/** 展示文案 */
				string title;
			public:
				/** 设备呼叫本地时间,yyyyMMddTHHmmss格式 */
				string localTime;
			public:
				/** [long]呼叫记录id */
				int64 callRecordId;
			};
		public:
			LCOpenApiVector<DoorbellCallRecordListResponseData_CallRecordsElement> callRecords;

		};
	public:
		DoorbellCallRecordListResponse();
		~DoorbellCallRecordListResponse();
	public:
		virtual int parse();
	public:
		DoorbellCallRecordListResponseData data;
		MetaInfo* _metainfo_DoorbellCallRecordListResponseData;
	};

	
	typedef typename DoorbellCallRecordListResponse::DoorbellCallRecordListResponseData DoorbellCallRecordListResponseData;
	typedef typename DoorbellCallRecordListResponse::DoorbellCallRecordListResponseData::DoorbellCallRecordListResponseData_CallRecordsElement DoorbellCallRecordListResponseData_CallRecordsElement;

}
}

#endif
