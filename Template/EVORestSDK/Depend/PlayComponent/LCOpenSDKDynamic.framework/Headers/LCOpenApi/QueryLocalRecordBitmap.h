/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_QueryLocalRecordBitmap_H_
#define _LC_OPENAPI_CLIENT_QueryLocalRecordBitmap_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
按月查询有设备录像的日期（以“天”为单位）

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class QueryLocalRecordBitmapRequest : public LCOpenApiRequest
	{
	public:
		class QueryLocalRecordBitmapRequestData
		{
		public:
			QueryLocalRecordBitmapRequestData();
			~QueryLocalRecordBitmapRequestData();
			
		public:
			/** [String，可选]type可传本地录像类型的指定值(all,normal,videomotion等类型) */
			string type;
		public:
			/** [cstr]queryLocalRecordBitmap */
			#define _STATIC_QueryLocalRecordBitmapRequestData_method "queryLocalRecordBitmap"
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
		QueryLocalRecordBitmapRequest();
		~QueryLocalRecordBitmapRequest();
	public:
		virtual int build();
	public:
		QueryLocalRecordBitmapRequestData data;
		MetaInfo* _metainfo_QueryLocalRecordBitmapRequestData;
	};

	
	typedef typename QueryLocalRecordBitmapRequest::QueryLocalRecordBitmapRequestData QueryLocalRecordBitmapRequestData;


	class QueryLocalRecordBitmapResponse : public LCOpenApiResponse
	{
	public:
		class QueryLocalRecordBitmapResponseData
		{
		public:
			QueryLocalRecordBitmapResponseData();
			~QueryLocalRecordBitmapResponseData();
			
		public:
			/** 日掩码-1111100000111110000011111000001 */
			string bitmap;

		};
	public:
		QueryLocalRecordBitmapResponse();
		~QueryLocalRecordBitmapResponse();
	public:
		virtual int parse();
	public:
		QueryLocalRecordBitmapResponseData data;
		MetaInfo* _metainfo_QueryLocalRecordBitmapResponseData;
	};

	
	typedef typename QueryLocalRecordBitmapResponse::QueryLocalRecordBitmapResponseData QueryLocalRecordBitmapResponseData;

}
}

#endif
