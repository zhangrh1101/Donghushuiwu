/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SetRecordSecretKey_H_
#define _LC_OPENAPI_CLIENT_SetRecordSecretKey_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
云录像加密接口
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class SetRecordSecretKeyRequest : public LCOpenApiRequest
	{
	public:
		class SetRecordSecretKeyRequestData
		{
		public:
			SetRecordSecretKeyRequestData();
			~SetRecordSecretKeyRequestData();
			
		public:
			/** [String]若需要删除云录像加密，该字段不传或者传空，然后oldSecretKey字段传待删除的云录像加密秘钥 */
			string secretKey;
		public:
			/** [String]若第一次设置加密秘钥，此值设为空或者不传均可。若更新或者删除秘钥，则需要传入更新前旧的秘钥值 */
			string oldSecretKey;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		SetRecordSecretKeyRequest();
		~SetRecordSecretKeyRequest();
	public:
		virtual int build();
	public:
		SetRecordSecretKeyRequestData data;
		MetaInfo* _metainfo_SetRecordSecretKeyRequestData;
	};

	
	typedef typename SetRecordSecretKeyRequest::SetRecordSecretKeyRequestData SetRecordSecretKeyRequestData;


	class SetRecordSecretKeyResponse : public LCOpenApiResponse
	{
	public:
		class SetRecordSecretKeyResponseData
		{
		public:
			SetRecordSecretKeyResponseData();
			~SetRecordSecretKeyResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		SetRecordSecretKeyResponse();
		~SetRecordSecretKeyResponse();
	public:
		virtual int parse();
	public:
		SetRecordSecretKeyResponseData data;
		MetaInfo* _metainfo_SetRecordSecretKeyResponseData;
	};

	
	typedef typename SetRecordSecretKeyResponse::SetRecordSecretKeyResponseData SetRecordSecretKeyResponseData;

}
}

#endif
