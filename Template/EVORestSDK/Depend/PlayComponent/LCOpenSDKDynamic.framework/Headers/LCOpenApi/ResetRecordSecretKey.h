/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_ResetRecordSecretKey_H_
#define _LC_OPENAPI_CLIENT_ResetRecordSecretKey_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
重置设备云录像秘钥
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class ResetRecordSecretKeyRequest : public LCOpenApiRequest
	{
	public:
		class ResetRecordSecretKeyRequestData
		{
		public:
			ResetRecordSecretKeyRequestData();
			~ResetRecordSecretKeyRequestData();
			
		public:
			/** 重置后的新秘钥 */
			string secretKey;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		ResetRecordSecretKeyRequest();
		~ResetRecordSecretKeyRequest();
	public:
		virtual int build();
	public:
		ResetRecordSecretKeyRequestData data;
		MetaInfo* _metainfo_ResetRecordSecretKeyRequestData;
	};

	
	typedef typename ResetRecordSecretKeyRequest::ResetRecordSecretKeyRequestData ResetRecordSecretKeyRequestData;


	class ResetRecordSecretKeyResponse : public LCOpenApiResponse
	{
	public:
		class ResetRecordSecretKeyResponseData
		{
		public:
			ResetRecordSecretKeyResponseData();
			~ResetRecordSecretKeyResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		ResetRecordSecretKeyResponse();
		~ResetRecordSecretKeyResponse();
	public:
		virtual int parse();
	public:
		ResetRecordSecretKeyResponseData data;
		MetaInfo* _metainfo_ResetRecordSecretKeyResponseData;
	};

	
	typedef typename ResetRecordSecretKeyResponse::ResetRecordSecretKeyResponseData ResetRecordSecretKeyResponseData;

}
}

#endif
