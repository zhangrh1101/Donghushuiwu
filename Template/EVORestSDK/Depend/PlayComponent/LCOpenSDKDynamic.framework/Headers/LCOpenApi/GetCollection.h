/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetCollection_H_
#define _LC_OPENAPI_CLIENT_GetCollection_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取已添加的收藏点名称信息

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetCollectionRequest : public LCOpenApiRequest
	{
	public:
		class GetCollectionRequestData
		{
		public:
			GetCollectionRequestData();
			~GetCollectionRequestData();
			
		public:
			/** [cstr]getCollection */
			#define _STATIC_GetCollectionRequestData_method "getCollection"
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
		GetCollectionRequest();
		~GetCollectionRequest();
	public:
		virtual int build();
	public:
		GetCollectionRequestData data;
		MetaInfo* _metainfo_GetCollectionRequestData;
	};

	
	typedef typename GetCollectionRequest::GetCollectionRequestData GetCollectionRequestData;


	class GetCollectionResponse : public LCOpenApiResponse
	{
	public:
		class GetCollectionResponseData
		{
		public:
			GetCollectionResponseData();
			~GetCollectionResponseData();
			
		public:
			/** define a list with struct of GetCollectionResponseData_CollectionsElement */
			class GetCollectionResponseData_CollectionsElement : public LCOpenApiBase
			{
			public:
				GetCollectionResponseData_CollectionsElement();
				~GetCollectionResponseData_CollectionsElement();
			public:
				/** 收藏点名称 */
				string name;
			};
		public:
			LCOpenApiVector<GetCollectionResponseData_CollectionsElement> collections;

		};
	public:
		GetCollectionResponse();
		~GetCollectionResponse();
	public:
		virtual int parse();
	public:
		GetCollectionResponseData data;
		MetaInfo* _metainfo_GetCollectionResponseData;
	};

	
	typedef typename GetCollectionResponse::GetCollectionResponseData GetCollectionResponseData;
	typedef typename GetCollectionResponse::GetCollectionResponseData::GetCollectionResponseData_CollectionsElement GetCollectionResponseData_CollectionsElement;

}
}

#endif
