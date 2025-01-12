/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_VerifyPassword_H_
#define _LC_OPENAPI_CLIENT_VerifyPassword_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
验证设备密码

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class VerifyPasswordRequest : public LCOpenApiRequest
	{
	public:
		class VerifyPasswordRequestData
		{
		public:
			VerifyPasswordRequestData();
			~VerifyPasswordRequestData();
			
		public:
			/** [String]用户名 */
			string username;
		public:
			/** 设备密码加密后的字符串 */
			string password;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		VerifyPasswordRequest();
		~VerifyPasswordRequest();
	public:
		virtual int build();
	public:
		VerifyPasswordRequestData data;
		MetaInfo* _metainfo_VerifyPasswordRequestData;
	};

	
	typedef typename VerifyPasswordRequest::VerifyPasswordRequestData VerifyPasswordRequestData;


	class VerifyPasswordResponse : public LCOpenApiResponse
	{
	public:
		class VerifyPasswordResponseData
		{
		public:
			VerifyPasswordResponseData();
			~VerifyPasswordResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		VerifyPasswordResponse();
		~VerifyPasswordResponse();
	public:
		virtual int parse();
	public:
		VerifyPasswordResponseData data;
		MetaInfo* _metainfo_VerifyPasswordResponseData;
	};

	
	typedef typename VerifyPasswordResponse::VerifyPasswordResponseData VerifyPasswordResponseData;

}
}

#endif
