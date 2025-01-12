/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DoorsLinkageList_H_
#define _LC_OPENAPI_CLIENT_DoorsLinkageList_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
查询与铃铛相关联的的所有门铃
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DoorsLinkageListRequest : public LCOpenApiRequest
	{
	public:
		class DoorsLinkageListRequestData
		{
		public:
			DoorsLinkageListRequestData();
			~DoorsLinkageListRequestData();
			
		public:
			/** 授权的token */
			string token;
		public:
			/** 铃铛的ID */
			string bellId;

		};
	public:
		DoorsLinkageListRequest();
		~DoorsLinkageListRequest();
	public:
		virtual int build();
	public:
		DoorsLinkageListRequestData data;
		MetaInfo* _metainfo_DoorsLinkageListRequestData;
	};

	
	typedef typename DoorsLinkageListRequest::DoorsLinkageListRequestData DoorsLinkageListRequestData;


	class DoorsLinkageListResponse : public LCOpenApiResponse
	{
	public:
		class DoorsLinkageListResponseData
		{
		public:
			DoorsLinkageListResponseData();
			~DoorsLinkageListResponseData();
			
		public:
			/** define a list with struct of DoorsLinkageListResponseData_InfosElement */
			class DoorsLinkageListResponseData_InfosElement : public LCOpenApiBase
			{
			public:
				DoorsLinkageListResponseData_InfosElement();
				~DoorsLinkageListResponseData_InfosElement();
			public:
				/** 相关联的门铃ID */
				string doorId;
			public:
				/** 相关联的门铃名称 */
				string doorName;
			};
		public:
			LCOpenApiVector<DoorsLinkageListResponseData_InfosElement> infos;

		};
	public:
		DoorsLinkageListResponse();
		~DoorsLinkageListResponse();
	public:
		virtual int parse();
	public:
		DoorsLinkageListResponseData data;
		MetaInfo* _metainfo_DoorsLinkageListResponseData;
	};

	
	typedef typename DoorsLinkageListResponse::DoorsLinkageListResponseData DoorsLinkageListResponseData;
	typedef typename DoorsLinkageListResponse::DoorsLinkageListResponseData::DoorsLinkageListResponseData_InfosElement DoorsLinkageListResponseData_InfosElement;

}
}

#endif
