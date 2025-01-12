/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SetCollection_H_
#define _LC_OPENAPI_CLIENT_SetCollection_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
新增收藏点

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class SetCollectionRequest : public LCOpenApiRequest
	{
	public:
		class SetCollectionRequestData
		{
		public:
			SetCollectionRequestData();
			~SetCollectionRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 收藏点名称，不可重复，最多20个 */
			string name;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** [cstr]setCollection */
			#define _STATIC_SetCollectionRequestData_method "setCollection"
			string method;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		SetCollectionRequest();
		~SetCollectionRequest();
	public:
		virtual int build();
	public:
		SetCollectionRequestData data;
		MetaInfo* _metainfo_SetCollectionRequestData;
	};

	
	typedef typename SetCollectionRequest::SetCollectionRequestData SetCollectionRequestData;


	class SetCollectionResponse : public LCOpenApiResponse
	{
	public:
		class SetCollectionResponseData
		{
		public:
			SetCollectionResponseData();
			~SetCollectionResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		SetCollectionResponse();
		~SetCollectionResponse();
	public:
		virtual int parse();
	public:
		SetCollectionResponseData data;
		MetaInfo* _metainfo_SetCollectionResponseData;
	};

	
	typedef typename SetCollectionResponse::SetCollectionResponseData SetCollectionResponseData;

}
}

#endif
