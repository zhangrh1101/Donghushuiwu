/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_OpenCloudRecord_H_
#define _LC_OPENAPI_CLIENT_OpenCloudRecord_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
开通云存储

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class OpenCloudRecordRequest : public LCOpenApiRequest
	{
	public:
		class OpenCloudRecordRequestData
		{
		public:
			OpenCloudRecordRequestData();
			~OpenCloudRecordRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** [long]云存储套餐ID */
			int64 strategyId;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** [cstr]openCloudRecord */
			#define _STATIC_OpenCloudRecordRequestData_method "openCloudRecord"
			string method;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		OpenCloudRecordRequest();
		~OpenCloudRecordRequest();
	public:
		virtual int build();
	public:
		OpenCloudRecordRequestData data;
		MetaInfo* _metainfo_OpenCloudRecordRequestData;
	};

	
	typedef typename OpenCloudRecordRequest::OpenCloudRecordRequestData OpenCloudRecordRequestData;


	class OpenCloudRecordResponse : public LCOpenApiResponse
	{
	public:
		class OpenCloudRecordResponseData
		{
		public:
			OpenCloudRecordResponseData();
			~OpenCloudRecordResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		OpenCloudRecordResponse();
		~OpenCloudRecordResponse();
	public:
		virtual int parse();
	public:
		OpenCloudRecordResponseData data;
		MetaInfo* _metainfo_OpenCloudRecordResponseData;
	};

	
	typedef typename OpenCloudRecordResponse::OpenCloudRecordResponseData OpenCloudRecordResponseData;

}
}

#endif
