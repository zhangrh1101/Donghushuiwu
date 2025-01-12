/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_AccountsUpgrade_H_
#define _LC_OPENAPI_CLIENT_AccountsUpgrade_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
用于原DMSS账户升级成DCloud账户使用
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class AccountsUpgradeRequest : public LCOpenApiRequest
	{
	public:
		class AccountsUpgradeRequestData
		{
		public:
			AccountsUpgradeRequestData();
			~AccountsUpgradeRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 必须 DMSS账号，邮箱或手机号(多个账户以英文字符','隔开) */
			string account;

		};
	public:
		AccountsUpgradeRequest();
		~AccountsUpgradeRequest();
	public:
		virtual int build();
	public:
		AccountsUpgradeRequestData data;
		MetaInfo* _metainfo_AccountsUpgradeRequestData;
	};

	
	typedef typename AccountsUpgradeRequest::AccountsUpgradeRequestData AccountsUpgradeRequestData;


	class AccountsUpgradeResponse : public LCOpenApiResponse
	{
	public:
		class AccountsUpgradeResponseData
		{
		public:
			AccountsUpgradeResponseData();
			~AccountsUpgradeResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		AccountsUpgradeResponse();
		~AccountsUpgradeResponse();
	public:
		virtual int parse();
	public:
		AccountsUpgradeResponseData data;
		MetaInfo* _metainfo_AccountsUpgradeResponseData;
	};

	
	typedef typename AccountsUpgradeResponse::AccountsUpgradeResponseData AccountsUpgradeResponseData;

}
}

#endif
