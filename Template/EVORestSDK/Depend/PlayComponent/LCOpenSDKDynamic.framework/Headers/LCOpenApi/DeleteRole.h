/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeleteRole_H_
#define _LC_OPENAPI_CLIENT_DeleteRole_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
删除用户角色
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeleteRoleRequest : public LCOpenApiRequest
	{
	public:
		class DeleteRoleRequestData
		{
		public:
			DeleteRoleRequestData();
			~DeleteRoleRequestData();
			
		public:
			/** [long]角色Id */
			int64 roleId;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** [cstr]deleteRole */
			#define _STATIC_DeleteRoleRequestData_method "deleteRole"
			string method;

		};
	public:
		DeleteRoleRequest();
		~DeleteRoleRequest();
	public:
		virtual int build();
	public:
		DeleteRoleRequestData data;
		MetaInfo* _metainfo_DeleteRoleRequestData;
	};

	
	typedef typename DeleteRoleRequest::DeleteRoleRequestData DeleteRoleRequestData;


	class DeleteRoleResponse : public LCOpenApiResponse
	{
	public:
		class DeleteRoleResponseData
		{
		public:
			DeleteRoleResponseData();
			~DeleteRoleResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		DeleteRoleResponse();
		~DeleteRoleResponse();
	public:
		virtual int parse();
	public:
		DeleteRoleResponseData data;
		MetaInfo* _metainfo_DeleteRoleResponseData;
	};

	
	typedef typename DeleteRoleResponse::DeleteRoleResponseData DeleteRoleResponseData;

}
}

#endif
