/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetPreparation_H_
#define _LC_OPENAPI_CLIENT_GetPreparation_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取预案

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetPreparationRequest : public LCOpenApiRequest
	{
	public:
		class GetPreparationRequestData
		{
		public:
			GetPreparationRequestData();
			~GetPreparationRequestData();
			
		public:
			/** [cstr]getPreparation */
			#define _STATIC_GetPreparationRequestData_method "getPreparation"
			string method;
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
		GetPreparationRequest();
		~GetPreparationRequest();
	public:
		virtual int build();
	public:
		GetPreparationRequestData data;
		MetaInfo* _metainfo_GetPreparationRequestData;
	};

	
	typedef typename GetPreparationRequest::GetPreparationRequestData GetPreparationRequestData;


	class GetPreparationResponse : public LCOpenApiResponse
	{
	public:
		class GetPreparationResponseData
		{
		public:
			GetPreparationResponseData();
			~GetPreparationResponseData();
			
		public:
			/** 设备支持预案 */
			string preparation;
		public:
			/** 已设置预案 */
			string selected;

		};
	public:
		GetPreparationResponse();
		~GetPreparationResponse();
	public:
		virtual int parse();
	public:
		GetPreparationResponseData data;
		MetaInfo* _metainfo_GetPreparationResponseData;
	};

	
	typedef typename GetPreparationResponse::GetPreparationResponseData GetPreparationResponseData;

}
}

#endif
