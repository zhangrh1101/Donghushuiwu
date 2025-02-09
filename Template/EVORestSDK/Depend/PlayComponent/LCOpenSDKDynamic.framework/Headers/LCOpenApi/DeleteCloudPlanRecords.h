/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeleteCloudPlanRecords_H_
#define _LC_OPENAPI_CLIENT_DeleteCloudPlanRecords_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
删除计划云录像片段
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeleteCloudPlanRecordsRequest : public LCOpenApiRequest
	{
	public:
		class DeleteCloudPlanRecordsRequestData
		{
		public:
			DeleteCloudPlanRecordsRequestData();
			~DeleteCloudPlanRecordsRequestData();
			
		public:
			/** 云录像Id */
			string recordId;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** [cstr]deleteCloudPlanRecords */
			#define _STATIC_DeleteCloudPlanRecordsRequestData_method "deleteCloudPlanRecords"
			string method;

		};
	public:
		DeleteCloudPlanRecordsRequest();
		~DeleteCloudPlanRecordsRequest();
	public:
		virtual int build();
	public:
		DeleteCloudPlanRecordsRequestData data;
		MetaInfo* _metainfo_DeleteCloudPlanRecordsRequestData;
	};

	
	typedef typename DeleteCloudPlanRecordsRequest::DeleteCloudPlanRecordsRequestData DeleteCloudPlanRecordsRequestData;


	class DeleteCloudPlanRecordsResponse : public LCOpenApiResponse
	{
	public:
		class DeleteCloudPlanRecordsResponseData
		{
		public:
			DeleteCloudPlanRecordsResponseData();
			~DeleteCloudPlanRecordsResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		DeleteCloudPlanRecordsResponse();
		~DeleteCloudPlanRecordsResponse();
	public:
		virtual int parse();
	public:
		DeleteCloudPlanRecordsResponseData data;
		MetaInfo* _metainfo_DeleteCloudPlanRecordsResponseData;
	};

	
	typedef typename DeleteCloudPlanRecordsResponse::DeleteCloudPlanRecordsResponseData DeleteCloudPlanRecordsResponseData;

}
}

#endif
