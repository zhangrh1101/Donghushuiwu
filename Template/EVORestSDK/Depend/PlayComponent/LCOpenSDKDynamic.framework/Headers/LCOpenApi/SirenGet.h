/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SirenGet_H_
#define _LC_OPENAPI_CLIENT_SirenGet_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取警笛状态
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class SirenGetRequest : public LCOpenApiRequest
	{
	public:
		class SirenGetRequestData
		{
		public:
			SirenGetRequestData();
			~SirenGetRequestData();
			
		public:
			/** 客户端握手成功后信令发送的本地系统时间，yyyyMMddTHHmmss格式，如20180301T111730 */
			string clientLocalTime;
		public:
			/** xxx */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		SirenGetRequest();
		~SirenGetRequest();
	public:
		virtual int build();
	public:
		SirenGetRequestData data;
		MetaInfo* _metainfo_SirenGetRequestData;
	};

	
	typedef typename SirenGetRequest::SirenGetRequestData SirenGetRequestData;


	class SirenGetResponse : public LCOpenApiResponse
	{
	public:
		class SirenGetResponseData
		{
		public:
			SirenGetResponseData();
			~SirenGetResponseData();
			
		public:
			/** 客户端请求中的clientLocalTime值，将Req的值原样带回 */
			string clientLocalTime;
		public:
			/** [O]探照灯开关状态，on-开启，off-关闭 */
			string searchLight;
		public:
			/** [O]白光灯开关状态，on:开启，off:关闭 */
			string whiteLight;
		public:
			/** 响铃倒计时剩余时间，单位为秒，若为-1则表示未响铃 */
			string time;

		};
	public:
		SirenGetResponse();
		~SirenGetResponse();
	public:
		virtual int parse();
	public:
		SirenGetResponseData data;
		MetaInfo* _metainfo_SirenGetResponseData;
	};

	
	typedef typename SirenGetResponse::SirenGetResponseData SirenGetResponseData;

}
}

#endif
