/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeleteUserAuthTager_H_
#define _LC_OPENAPI_CLIENT_DeleteUserAuthTager_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
删除授权对象
 */

namespace Dahua{
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeleteUserAuthTagerRequest : public LCOpenApiRequest
	{
	public:
		class DeleteUserAuthTagerRequestData
		{
		public:
			DeleteUserAuthTagerRequestData();
			~DeleteUserAuthTagerRequestData();
			
		public:
			/** [long]授权ID */
			int64 authId;
		public:
			/** 被授权的手机号 */
			string userPhone;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** [cstr]deleteUserAuthTager */
			#define _STATIC_DeleteUserAuthTagerRequestData_method "deleteUserAuthTager"
			string method;

		};
	public:
		DeleteUserAuthTagerRequest();
		~DeleteUserAuthTagerRequest();
	public:
		virtual int build();
	public:
		DeleteUserAuthTagerRequestData data;
		MetaInfo* _metainfo_DeleteUserAuthTagerRequestData;
	};

	
	typedef typename DeleteUserAuthTagerRequest::DeleteUserAuthTagerRequestData DeleteUserAuthTagerRequestData;


	class DeleteUserAuthTagerResponse : public LCOpenApiResponse
	{
	public:
		class DeleteUserAuthTagerResponseData
		{
		public:
			DeleteUserAuthTagerResponseData();
			~DeleteUserAuthTagerResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		DeleteUserAuthTagerResponse();
		~DeleteUserAuthTagerResponse();
	public:
		virtual int parse();
	public:
		DeleteUserAuthTagerResponseData data;
		MetaInfo* _metainfo_DeleteUserAuthTagerResponseData;
	};

	
	typedef typename DeleteUserAuthTagerResponse::DeleteUserAuthTagerResponseData DeleteUserAuthTagerResponseData;

}
}

#endif
