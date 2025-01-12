/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeleteAlarmMessage_H_
#define _LC_OPENAPI_CLIENT_DeleteAlarmMessage_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
删除用户的报警消息

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeleteAlarmMessageRequest : public LCOpenApiRequest
	{
	public:
		class DeleteAlarmMessageRequestData
		{
		public:
			DeleteAlarmMessageRequestData();
			~DeleteAlarmMessageRequestData();
			
		public:
			/** [cstr]deleteAlarmMessage */
			#define _STATIC_DeleteAlarmMessageRequestData_method "deleteAlarmMessage"
			string method;
		public:
			/** [String]设备ID */
			string deviceId;
		public:
			/** [String]通道号 */
			string channelId;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** [long]报警消息ID */
			int64 indexId;

		};
	public:
		DeleteAlarmMessageRequest();
		~DeleteAlarmMessageRequest();
	public:
		virtual int build();
	public:
		DeleteAlarmMessageRequestData data;
		MetaInfo* _metainfo_DeleteAlarmMessageRequestData;
	};

	
	typedef typename DeleteAlarmMessageRequest::DeleteAlarmMessageRequestData DeleteAlarmMessageRequestData;


	class DeleteAlarmMessageResponse : public LCOpenApiResponse
	{
	public:
		class DeleteAlarmMessageResponseData
		{
		public:
			DeleteAlarmMessageResponseData();
			~DeleteAlarmMessageResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		DeleteAlarmMessageResponse();
		~DeleteAlarmMessageResponse();
	public:
		virtual int parse();
	public:
		DeleteAlarmMessageResponseData data;
		MetaInfo* _metainfo_DeleteAlarmMessageResponseData;
	};

	
	typedef typename DeleteAlarmMessageResponse::DeleteAlarmMessageResponseData DeleteAlarmMessageResponseData;

}
}

#endif
