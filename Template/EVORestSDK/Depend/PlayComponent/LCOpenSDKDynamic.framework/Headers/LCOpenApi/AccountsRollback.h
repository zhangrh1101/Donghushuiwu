/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_AccountsRollback_H_
#define _LC_OPENAPI_CLIENT_AccountsRollback_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
账户回滚：用于DCloud账户回滚为DMSS账户
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class AccountsRollbackRequest : public LCOpenApiRequest
	{
	public:
		class AccountsRollbackRequestData
		{
		public:
			AccountsRollbackRequestData();
			~AccountsRollbackRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 必须 DMSS账号，邮箱或手机号(多个账户以英文字符','隔开) */
			string account;

		};
	public:
		AccountsRollbackRequest();
		~AccountsRollbackRequest();
	public:
		virtual int build();
	public:
		AccountsRollbackRequestData data;
		MetaInfo* _metainfo_AccountsRollbackRequestData;
	};

	
	typedef typename AccountsRollbackRequest::AccountsRollbackRequestData AccountsRollbackRequestData;


	class AccountsRollbackResponse : public LCOpenApiResponse
	{
	public:
		class AccountsRollbackResponseData
		{
		public:
			AccountsRollbackResponseData();
			~AccountsRollbackResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		AccountsRollbackResponse();
		~AccountsRollbackResponse();
	public:
		virtual int parse();
	public:
		AccountsRollbackResponseData data;
		MetaInfo* _metainfo_AccountsRollbackResponseData;
	};

	
	typedef typename AccountsRollbackResponse::AccountsRollbackResponseData AccountsRollbackResponseData;

}
}

#endif
