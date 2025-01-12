/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_UserBindNoVerify_H_
#define _LC_OPENAPI_CLIENT_UserBindNoVerify_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
账号绑定无验证码
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class UserBindNoVerifyRequest : public LCOpenApiRequest
	{
	public:
		class UserBindNoVerifyRequestData
		{
		public:
			UserBindNoVerifyRequestData();
			~UserBindNoVerifyRequestData();
			
		public:
			/** [String][Not Null]国内手机号 ，国外输入邮箱 */
			string account;

		};
	public:
		UserBindNoVerifyRequest();
		~UserBindNoVerifyRequest();
	public:
		virtual int build();
	public:
		UserBindNoVerifyRequestData data;
		MetaInfo* _metainfo_UserBindNoVerifyRequestData;
	};

	
	typedef typename UserBindNoVerifyRequest::UserBindNoVerifyRequestData UserBindNoVerifyRequestData;


	class UserBindNoVerifyResponse : public LCOpenApiResponse
	{
	public:
		class UserBindNoVerifyResponseData
		{
		public:
			UserBindNoVerifyResponseData();
			~UserBindNoVerifyResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		UserBindNoVerifyResponse();
		~UserBindNoVerifyResponse();
	public:
		virtual int parse();
	public:
		UserBindNoVerifyResponseData data;
		MetaInfo* _metainfo_UserBindNoVerifyResponseData;
	};

	
	typedef typename UserBindNoVerifyResponse::UserBindNoVerifyResponseData UserBindNoVerifyResponseData;

}
}

#endif
