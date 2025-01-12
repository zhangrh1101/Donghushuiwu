/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeleteCollection_H_
#define _LC_OPENAPI_CLIENT_DeleteCollection_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
删除给定的收藏点

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeleteCollectionRequest : public LCOpenApiRequest
	{
	public:
		class DeleteCollectionRequestData
		{
		public:
			DeleteCollectionRequestData();
			~DeleteCollectionRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 收藏点名称列表 */
			string names;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** [cstr]deleteCollection */
			#define _STATIC_DeleteCollectionRequestData_method "deleteCollection"
			string method;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		DeleteCollectionRequest();
		~DeleteCollectionRequest();
	public:
		virtual int build();
	public:
		DeleteCollectionRequestData data;
		MetaInfo* _metainfo_DeleteCollectionRequestData;
	};

	
	typedef typename DeleteCollectionRequest::DeleteCollectionRequestData DeleteCollectionRequestData;


	class DeleteCollectionResponse : public LCOpenApiResponse
	{
	public:
		class DeleteCollectionResponseData
		{
		public:
			DeleteCollectionResponseData();
			~DeleteCollectionResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		DeleteCollectionResponse();
		~DeleteCollectionResponse();
	public:
		virtual int parse();
	public:
		DeleteCollectionResponseData data;
		MetaInfo* _metainfo_DeleteCollectionResponseData;
	};

	
	typedef typename DeleteCollectionResponse::DeleteCollectionResponseData DeleteCollectionResponseData;

}
}

#endif
