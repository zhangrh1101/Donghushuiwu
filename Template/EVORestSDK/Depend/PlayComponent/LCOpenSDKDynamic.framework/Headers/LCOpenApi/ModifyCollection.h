/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_ModifyCollection_H_
#define _LC_OPENAPI_CLIENT_ModifyCollection_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
修改已存在的收藏点名称

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class ModifyCollectionRequest : public LCOpenApiRequest
	{
	public:
		class ModifyCollectionRequestData
		{
		public:
			ModifyCollectionRequestData();
			~ModifyCollectionRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 新的收藏点名称 */
			string newName;
		public:
			/** 旧的收藏点名称 */
			string oldName;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** [cstr]modifyCollection */
			#define _STATIC_ModifyCollectionRequestData_method "modifyCollection"
			string method;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		ModifyCollectionRequest();
		~ModifyCollectionRequest();
	public:
		virtual int build();
	public:
		ModifyCollectionRequestData data;
		MetaInfo* _metainfo_ModifyCollectionRequestData;
	};

	
	typedef typename ModifyCollectionRequest::ModifyCollectionRequestData ModifyCollectionRequestData;


	class ModifyCollectionResponse : public LCOpenApiResponse
	{
	public:
		class ModifyCollectionResponseData
		{
		public:
			ModifyCollectionResponseData();
			~ModifyCollectionResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		ModifyCollectionResponse();
		~ModifyCollectionResponse();
	public:
		virtual int parse();
	public:
		ModifyCollectionResponseData data;
		MetaInfo* _metainfo_ModifyCollectionResponseData;
	};

	
	typedef typename ModifyCollectionResponse::ModifyCollectionResponseData ModifyCollectionResponseData;

}
}

#endif
