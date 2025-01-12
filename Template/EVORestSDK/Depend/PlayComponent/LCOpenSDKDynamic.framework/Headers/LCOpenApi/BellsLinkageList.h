/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_BellsLinkageList_H_
#define _LC_OPENAPI_CLIENT_BellsLinkageList_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
查询与门铃相关联的的所有铃铛
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class BellsLinkageListRequest : public LCOpenApiRequest
	{
	public:
		class BellsLinkageListRequestData
		{
		public:
			BellsLinkageListRequestData();
			~BellsLinkageListRequestData();
			
		public:
			/** 授权的token */
			string token;
		public:
			/** 门铃的ID */
			string doorId;

		};
	public:
		BellsLinkageListRequest();
		~BellsLinkageListRequest();
	public:
		virtual int build();
	public:
		BellsLinkageListRequestData data;
		MetaInfo* _metainfo_BellsLinkageListRequestData;
	};

	
	typedef typename BellsLinkageListRequest::BellsLinkageListRequestData BellsLinkageListRequestData;


	class BellsLinkageListResponse : public LCOpenApiResponse
	{
	public:
		class BellsLinkageListResponseData
		{
		public:
			BellsLinkageListResponseData();
			~BellsLinkageListResponseData();
			
		public:
			/** define a list with struct of BellsLinkageListResponseData_InfosElement */
			class BellsLinkageListResponseData_InfosElement : public LCOpenApiBase
			{
			public:
				BellsLinkageListResponseData_InfosElement();
				~BellsLinkageListResponseData_InfosElement();
			public:
				/** 铃铛的名称 */
				string bellName;
			public:
				/** 铃铛的ID */
				string bellId;
			};
		public:
			LCOpenApiVector<BellsLinkageListResponseData_InfosElement> infos;

		};
	public:
		BellsLinkageListResponse();
		~BellsLinkageListResponse();
	public:
		virtual int parse();
	public:
		BellsLinkageListResponseData data;
		MetaInfo* _metainfo_BellsLinkageListResponseData;
	};

	
	typedef typename BellsLinkageListResponse::BellsLinkageListResponseData BellsLinkageListResponseData;
	typedef typename BellsLinkageListResponse::BellsLinkageListResponseData::BellsLinkageListResponseData_InfosElement BellsLinkageListResponseData_InfosElement;

}
}

#endif
