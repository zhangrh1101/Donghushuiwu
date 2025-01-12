/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_UnbindLive_H_
#define _LC_OPENAPI_CLIENT_UnbindLive_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
删除直播地址
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class UnbindLiveRequest : public LCOpenApiRequest
	{
	public:
		class UnbindLiveRequestData
		{
		public:
			UnbindLiveRequestData();
			~UnbindLiveRequestData();
			
		public:
			/** 授权的管理员token(accessToken) */
			string token;
		public:
			/**  */
			string liveToken;

		};
	public:
		UnbindLiveRequest();
		~UnbindLiveRequest();
	public:
		virtual int build();
	public:
		UnbindLiveRequestData data;
		MetaInfo* _metainfo_UnbindLiveRequestData;
	};

	
	typedef typename UnbindLiveRequest::UnbindLiveRequestData UnbindLiveRequestData;


	class UnbindLiveResponse : public LCOpenApiResponse
	{
	public:
		class UnbindLiveResponseData
		{
		public:
			UnbindLiveResponseData();
			~UnbindLiveResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		UnbindLiveResponse();
		~UnbindLiveResponse();
	public:
		virtual int parse();
	public:
		UnbindLiveResponseData data;
		MetaInfo* _metainfo_UnbindLiveResponseData;
	};

	
	typedef typename UnbindLiveResponse::UnbindLiveResponseData UnbindLiveResponseData;

}
}

#endif
