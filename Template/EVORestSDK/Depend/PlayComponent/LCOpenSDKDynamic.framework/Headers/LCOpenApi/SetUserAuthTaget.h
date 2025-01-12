/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SetUserAuthTaget_H_
#define _LC_OPENAPI_CLIENT_SetUserAuthTaget_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置授权对象(单一设备授权)
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class SetUserAuthTagetRequest : public LCOpenApiRequest
	{
	public:
		class SetUserAuthTagetRequestData
		{
		public:
			SetUserAuthTagetRequestData();
			~SetUserAuthTagetRequestData();
			
		public:
			/** [long]角色ID */
			int64 roleId;
		public:
			/** [cstr]setUserAuthTaget */
			#define _STATIC_SetUserAuthTagetRequestData_method "setUserAuthTaget"
			string method;
		public:
			/** 被授权的手机号 */
			string userPhone;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		SetUserAuthTagetRequest();
		~SetUserAuthTagetRequest();
	public:
		virtual int build();
	public:
		SetUserAuthTagetRequestData data;
		MetaInfo* _metainfo_SetUserAuthTagetRequestData;
	};

	
	typedef typename SetUserAuthTagetRequest::SetUserAuthTagetRequestData SetUserAuthTagetRequestData;


	class SetUserAuthTagetResponse : public LCOpenApiResponse
	{
	public:
		class SetUserAuthTagetResponseData
		{
		public:
			SetUserAuthTagetResponseData();
			~SetUserAuthTagetResponseData();
			
		public:
			/** [long]授权Id */
			int64 authId;

		};
	public:
		SetUserAuthTagetResponse();
		~SetUserAuthTagetResponse();
	public:
		virtual int parse();
	public:
		SetUserAuthTagetResponseData data;
		MetaInfo* _metainfo_SetUserAuthTagetResponseData;
	};

	
	typedef typename SetUserAuthTagetResponse::SetUserAuthTagetResponseData SetUserAuthTagetResponseData;

}
}

#endif
