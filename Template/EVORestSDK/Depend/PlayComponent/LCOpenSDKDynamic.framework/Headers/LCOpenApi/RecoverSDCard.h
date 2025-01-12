/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_RecoverSDCard_H_
#define _LC_OPENAPI_CLIENT_RecoverSDCard_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
请求初始化SD卡

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class RecoverSDCardRequest : public LCOpenApiRequest
	{
	public:
		class RecoverSDCardRequestData
		{
		public:
			RecoverSDCardRequestData();
			~RecoverSDCardRequestData();
			
		public:
			/** 需要格式化存储介质编号,不填该参数默认设备是单sd卡 */
			string index;
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
		RecoverSDCardRequest();
		~RecoverSDCardRequest();
	public:
		virtual int build();
	public:
		RecoverSDCardRequestData data;
		MetaInfo* _metainfo_RecoverSDCardRequestData;
	};

	
	typedef typename RecoverSDCardRequest::RecoverSDCardRequestData RecoverSDCardRequestData;


	class RecoverSDCardResponse : public LCOpenApiResponse
	{
	public:
		class RecoverSDCardResponseData
		{
		public:
			RecoverSDCardResponseData();
			~RecoverSDCardResponseData();
			
		public:
			/** 结果 */
			string result;

		};
	public:
		RecoverSDCardResponse();
		~RecoverSDCardResponse();
	public:
		virtual int parse();
	public:
		RecoverSDCardResponseData data;
		MetaInfo* _metainfo_RecoverSDCardResponseData;
	};

	
	typedef typename RecoverSDCardResponse::RecoverSDCardResponseData RecoverSDCardResponseData;

}
}

#endif
