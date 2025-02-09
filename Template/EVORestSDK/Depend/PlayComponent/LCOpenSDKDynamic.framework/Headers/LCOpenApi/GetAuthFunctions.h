/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetAuthFunctions_H_
#define _LC_OPENAPI_CLIENT_GetAuthFunctions_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取授权列表
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetAuthFunctionsRequest : public LCOpenApiRequest
	{
	public:
		class GetAuthFunctionsRequestData
		{
		public:
			GetAuthFunctionsRequestData();
			~GetAuthFunctionsRequestData();
			
		public:
			/** [cstr]getAuthFunctions */
			#define _STATIC_GetAuthFunctionsRequestData_method "getAuthFunctions"
			string method;
		public:
			/** 授权token(userToken或accessToken) */
			string token;

		};
	public:
		GetAuthFunctionsRequest();
		~GetAuthFunctionsRequest();
	public:
		virtual int build();
	public:
		GetAuthFunctionsRequestData data;
		MetaInfo* _metainfo_GetAuthFunctionsRequestData;
	};

	
	typedef typename GetAuthFunctionsRequest::GetAuthFunctionsRequestData GetAuthFunctionsRequestData;


	class GetAuthFunctionsResponse : public LCOpenApiResponse
	{
	public:
		class GetAuthFunctionsResponseData
		{
		public:
			GetAuthFunctionsResponseData();
			~GetAuthFunctionsResponseData();
			
		public:
			/** define a list with struct of GetAuthFunctionsResponseData_AuthFunctionsElement */
			class GetAuthFunctionsResponseData_AuthFunctionsElement : public LCOpenApiBase
			{
			public:
				GetAuthFunctionsResponseData_AuthFunctionsElement();
				~GetAuthFunctionsResponseData_AuthFunctionsElement();
			public:
				/** 权限标示 */
				string function;
			public:
				/** 权限描述 */
				string remark;
			};
		public:
			LCOpenApiVector<GetAuthFunctionsResponseData_AuthFunctionsElement> authFunctions;

		};
	public:
		GetAuthFunctionsResponse();
		~GetAuthFunctionsResponse();
	public:
		virtual int parse();
	public:
		GetAuthFunctionsResponseData data;
		MetaInfo* _metainfo_GetAuthFunctionsResponseData;
	};

	
	typedef typename GetAuthFunctionsResponse::GetAuthFunctionsResponseData GetAuthFunctionsResponseData;
	typedef typename GetAuthFunctionsResponse::GetAuthFunctionsResponseData::GetAuthFunctionsResponseData_AuthFunctionsElement GetAuthFunctionsResponseData_AuthFunctionsElement;

}
}

#endif
