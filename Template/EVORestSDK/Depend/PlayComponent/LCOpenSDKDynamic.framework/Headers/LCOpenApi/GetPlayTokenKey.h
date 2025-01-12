/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetPlayTokenKey_H_
#define _LC_OPENAPI_CLIENT_GetPlayTokenKey_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取设备播放码解密秘钥
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetPlayTokenKeyRequest : public LCOpenApiRequest
	{
	public:
		class GetPlayTokenKeyRequestData
		{
		public:
			GetPlayTokenKeyRequestData();
			~GetPlayTokenKeyRequestData();
			
		public:
			/** [cstr]getPlayTokenKey */
			#define _STATIC_GetPlayTokenKeyRequestData_method "getPlayTokenKey"
			string method;
		public:
			/** 授权token(userToken或accessToken) */
			string token;

		};
	public:
		GetPlayTokenKeyRequest();
		~GetPlayTokenKeyRequest();
	public:
		virtual int build();
	public:
		GetPlayTokenKeyRequestData data;
		MetaInfo* _metainfo_GetPlayTokenKeyRequestData;
	};

	
	typedef typename GetPlayTokenKeyRequest::GetPlayTokenKeyRequestData GetPlayTokenKeyRequestData;


	class GetPlayTokenKeyResponse : public LCOpenApiResponse
	{
	public:
		class GetPlayTokenKeyResponseData
		{
		public:
			GetPlayTokenKeyResponseData();
			~GetPlayTokenKeyResponseData();
			
		public:
			/** 设备播放码秘钥 */
			string playTokenKey;

		};
	public:
		GetPlayTokenKeyResponse();
		~GetPlayTokenKeyResponse();
	public:
		virtual int parse();
	public:
		GetPlayTokenKeyResponseData data;
		MetaInfo* _metainfo_GetPlayTokenKeyResponseData;
	};

	
	typedef typename GetPlayTokenKeyResponse::GetPlayTokenKeyResponseData GetPlayTokenKeyResponseData;

}
}

#endif
