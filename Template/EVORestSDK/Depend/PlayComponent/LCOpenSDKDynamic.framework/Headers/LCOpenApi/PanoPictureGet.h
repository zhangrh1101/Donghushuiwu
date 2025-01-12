/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_PanoPictureGet_H_
#define _LC_OPENAPI_CLIENT_PanoPictureGet_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取全景图
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class PanoPictureGetRequest : public LCOpenApiRequest
	{
	public:
		class PanoPictureGetRequestData
		{
		public:
			PanoPictureGetRequestData();
			~PanoPictureGetRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		PanoPictureGetRequest();
		~PanoPictureGetRequest();
	public:
		virtual int build();
	public:
		PanoPictureGetRequestData data;
		MetaInfo* _metainfo_PanoPictureGetRequestData;
	};

	
	typedef typename PanoPictureGetRequest::PanoPictureGetRequestData PanoPictureGetRequestData;


	class PanoPictureGetResponse : public LCOpenApiResponse
	{
	public:
		class PanoPictureGetResponseData
		{
		public:
			PanoPictureGetResponseData();
			~PanoPictureGetResponseData();
			
		public:
			/** 全景图URL */
			string url;

		};
	public:
		PanoPictureGetResponse();
		~PanoPictureGetResponse();
	public:
		virtual int parse();
	public:
		PanoPictureGetResponseData data;
		MetaInfo* _metainfo_PanoPictureGetResponseData;
	};

	
	typedef typename PanoPictureGetResponse::PanoPictureGetResponseData PanoPictureGetResponseData;

}
}

#endif
