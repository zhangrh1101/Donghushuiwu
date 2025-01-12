/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeleteUserAuthTaget_H_
#define _LC_OPENAPI_CLIENT_DeleteUserAuthTaget_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
删除授权对象
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeleteUserAuthTagetRequest : public LCOpenApiRequest
	{
	public:
		class DeleteUserAuthTagetRequestData
		{
		public:
			DeleteUserAuthTagetRequestData();
			~DeleteUserAuthTagetRequestData();
			
		public:
			/** [long]授权Id */
			int64 authId;
		public:
			/** 授权的token(userToken或accessToken) */
			string token;
		public:
			/** [cstr]deleteUserAuthTaget */
			#define _STATIC_DeleteUserAuthTagetRequestData_method "deleteUserAuthTaget"
			string method;

		};
	public:
		DeleteUserAuthTagetRequest();
		~DeleteUserAuthTagetRequest();
	public:
		virtual int build();
	public:
		DeleteUserAuthTagetRequestData data;
		MetaInfo* _metainfo_DeleteUserAuthTagetRequestData;
	};

	
	typedef typename DeleteUserAuthTagetRequest::DeleteUserAuthTagetRequestData DeleteUserAuthTagetRequestData;


	class DeleteUserAuthTagetResponse : public LCOpenApiResponse
	{
	public:
		class DeleteUserAuthTagetResponseData
		{
		public:
			DeleteUserAuthTagetResponseData();
			~DeleteUserAuthTagetResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		DeleteUserAuthTagetResponse();
		~DeleteUserAuthTagetResponse();
	public:
		virtual int parse();
	public:
		DeleteUserAuthTagetResponseData data;
		MetaInfo* _metainfo_DeleteUserAuthTagetResponseData;
	};

	
	typedef typename DeleteUserAuthTagetResponse::DeleteUserAuthTagetResponseData DeleteUserAuthTagetResponseData;

}
}

#endif
