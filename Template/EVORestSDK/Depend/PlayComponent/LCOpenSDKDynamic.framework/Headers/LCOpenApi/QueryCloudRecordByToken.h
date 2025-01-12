/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_QueryCloudRecordByToken_H_
#define _LC_OPENAPI_CLIENT_QueryCloudRecordByToken_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
根据token查询设备云录像片段信息

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class QueryCloudRecordByTokenRequest : public LCOpenApiRequest
	{
	public:
		class QueryCloudRecordByTokenRequestData
		{
		public:
			QueryCloudRecordByTokenRequestData();
			~QueryCloudRecordByTokenRequestData();
			
		public:
			/** [cstr]queryCloudRecordByToken */
			#define _STATIC_QueryCloudRecordByTokenRequestData_method "queryCloudRecordByToken"
			string method;
		public:
			/** 云录像token */
			string cloudToken;
		public:
			/** 授权的token(userToken或accessToken) */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		QueryCloudRecordByTokenRequest();
		~QueryCloudRecordByTokenRequest();
	public:
		virtual int build();
	public:
		QueryCloudRecordByTokenRequestData data;
		MetaInfo* _metainfo_QueryCloudRecordByTokenRequestData;
	};

	
	typedef typename QueryCloudRecordByTokenRequest::QueryCloudRecordByTokenRequestData QueryCloudRecordByTokenRequestData;


	class QueryCloudRecordByTokenResponse : public LCOpenApiResponse
	{
	public:
		class QueryCloudRecordByTokenResponseData
		{
		public:
			QueryCloudRecordByTokenResponseData();
			~QueryCloudRecordByTokenResponseData();
			
		public:
			/** 区域 */
			string region;
		public:
			/** 录像ID */
			string recordId;
		public:
			/** 录像Id */
			string recordRegionId;
		public:
			/** 录像地址 */
			string recordPath;
		public:
			/** 缩略图URL */
			string thumbUrl;
		public:
			/** 设备本地结束时间,yyyyMMddTHHmmss格式 */
			string localEndTime;
		public:
			/** [int]加密模式, 0表示默认加密模式, 1表示用户加密模式 */
			int encryptMode;
		public:
			/** 设备本地开始时间,yyyyMMddTHHmmss格式 */
			string localBeginTime;
		public:
			/** 云录像的大小，单位byte */
			string size;

		};
	public:
		QueryCloudRecordByTokenResponse();
		~QueryCloudRecordByTokenResponse();
	public:
		virtual int parse();
	public:
		QueryCloudRecordByTokenResponseData data;
		MetaInfo* _metainfo_QueryCloudRecordByTokenResponseData;
	};

	
	typedef typename QueryCloudRecordByTokenResponse::QueryCloudRecordByTokenResponseData QueryCloudRecordByTokenResponseData;

}
}

#endif
