/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_AddRole_H_
#define _LC_OPENAPI_CLIENT_AddRole_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
创建用户角色

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class AddRoleRequest : public LCOpenApiRequest
	{
	public:
		class AddRoleRequestData
		{
		public:
			AddRoleRequestData();
			~AddRoleRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 授权名称,不能超过128个中文 */
			string roleName;
		public:
			/** [cstr]addRole */
			#define _STATIC_AddRoleRequestData_method "addRole"
			string method;
		public:
			/** 权限列表，以逗号分隔 */
			string authFunctions;

		};
	public:
		AddRoleRequest();
		~AddRoleRequest();
	public:
		virtual int build();
	public:
		AddRoleRequestData data;
		MetaInfo* _metainfo_AddRoleRequestData;
	};

	
	typedef typename AddRoleRequest::AddRoleRequestData AddRoleRequestData;


	class AddRoleResponse : public LCOpenApiResponse
	{
	public:
		class AddRoleResponseData
		{
		public:
			AddRoleResponseData();
			~AddRoleResponseData();
			
		public:
			/** [long]角色Id */
			int64 roleId;

		};
	public:
		AddRoleResponse();
		~AddRoleResponse();
	public:
		virtual int parse();
	public:
		AddRoleResponseData data;
		MetaInfo* _metainfo_AddRoleResponseData;
	};

	
	typedef typename AddRoleResponse::AddRoleResponseData AddRoleResponseData;

}
}

#endif
