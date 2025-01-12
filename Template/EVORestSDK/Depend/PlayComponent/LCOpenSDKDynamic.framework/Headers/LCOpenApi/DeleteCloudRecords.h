/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeleteCloudRecords_H_
#define _LC_OPENAPI_CLIENT_DeleteCloudRecords_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
删除动检云录像片段

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeleteCloudRecordsRequest : public LCOpenApiRequest
	{
	public:
		class DeleteCloudRecordsRequestData
		{
		public:
			DeleteCloudRecordsRequestData();
			~DeleteCloudRecordsRequestData();
			
		public:
			/** 云录像Id */
			string recordId;
		public:
			/** 录像regionId */
			string recordRegionId;
		public:
			/** 授权token(userToken或accessToken) */
			string token;

		};
	public:
		DeleteCloudRecordsRequest();
		~DeleteCloudRecordsRequest();
	public:
		virtual int build();
	public:
		DeleteCloudRecordsRequestData data;
		MetaInfo* _metainfo_DeleteCloudRecordsRequestData;
	};

	
	typedef typename DeleteCloudRecordsRequest::DeleteCloudRecordsRequestData DeleteCloudRecordsRequestData;


	class DeleteCloudRecordsResponse : public LCOpenApiResponse
	{
	public:
		class DeleteCloudRecordsResponseData
		{
		public:
			DeleteCloudRecordsResponseData();
			~DeleteCloudRecordsResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		DeleteCloudRecordsResponse();
		~DeleteCloudRecordsResponse();
	public:
		virtual int parse();
	public:
		DeleteCloudRecordsResponseData data;
		MetaInfo* _metainfo_DeleteCloudRecordsResponseData;
	};

	
	typedef typename DeleteCloudRecordsResponse::DeleteCloudRecordsResponseData DeleteCloudRecordsResponseData;

}
}

#endif
