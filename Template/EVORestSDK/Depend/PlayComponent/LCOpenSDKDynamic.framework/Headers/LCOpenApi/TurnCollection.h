/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_TurnCollection_H_
#define _LC_OPENAPI_CLIENT_TurnCollection_H_

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
	class TurnCollectionRequest : public LCOpenApiRequest
	{
	public:
		class TurnCollectionRequestData
		{
		public:
			TurnCollectionRequestData();
			~TurnCollectionRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 目标收藏点，必须添加过 */
			string name;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** [cstr]turnCollection */
			#define _STATIC_TurnCollectionRequestData_method "turnCollection"
			string method;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		TurnCollectionRequest();
		~TurnCollectionRequest();
	public:
		virtual int build();
	public:
		TurnCollectionRequestData data;
		MetaInfo* _metainfo_TurnCollectionRequestData;
	};

	
	typedef typename TurnCollectionRequest::TurnCollectionRequestData TurnCollectionRequestData;


	class TurnCollectionResponse : public LCOpenApiResponse
	{
	public:
		class TurnCollectionResponseData
		{
		public:
			TurnCollectionResponseData();
			~TurnCollectionResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		TurnCollectionResponse();
		~TurnCollectionResponse();
	public:
		virtual int parse();
	public:
		TurnCollectionResponseData data;
		MetaInfo* _metainfo_TurnCollectionResponseData;
	};

	
	typedef typename TurnCollectionResponse::TurnCollectionResponseData TurnCollectionResponseData;

}
}

#endif
