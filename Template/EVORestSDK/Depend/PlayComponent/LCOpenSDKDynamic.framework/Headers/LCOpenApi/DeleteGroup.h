/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeleteGroup_H_
#define _LC_OPENAPI_CLIENT_DeleteGroup_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
用户删除分组

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeleteGroupRequest : public LCOpenApiRequest
	{
	public:
		class DeleteGroupRequestData
		{
		public:
			DeleteGroupRequestData();
			~DeleteGroupRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** [cstr]deleteGroup */
			#define _STATIC_DeleteGroupRequestData_method "deleteGroup"
			string method;
		public:
			/** [long]分组Id */
			int64 groupId;

		};
	public:
		DeleteGroupRequest();
		~DeleteGroupRequest();
	public:
		virtual int build();
	public:
		DeleteGroupRequestData data;
		MetaInfo* _metainfo_DeleteGroupRequestData;
	};

	
	typedef typename DeleteGroupRequest::DeleteGroupRequestData DeleteGroupRequestData;


	class DeleteGroupResponse : public LCOpenApiResponse
	{
	public:
		class DeleteGroupResponseData
		{
		public:
			DeleteGroupResponseData();
			~DeleteGroupResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		DeleteGroupResponse();
		~DeleteGroupResponse();
	public:
		virtual int parse();
	public:
		DeleteGroupResponseData data;
		MetaInfo* _metainfo_DeleteGroupResponseData;
	};

	
	typedef typename DeleteGroupResponse::DeleteGroupResponseData DeleteGroupResponseData;

}
}

#endif
