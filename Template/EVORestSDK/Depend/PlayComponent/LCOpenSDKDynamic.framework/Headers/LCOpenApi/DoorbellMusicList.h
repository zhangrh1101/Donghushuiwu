/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DoorbellMusicList_H_
#define _LC_OPENAPI_CLIENT_DoorbellMusicList_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取门铃的铃声列表
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DoorbellMusicListRequest : public LCOpenApiRequest
	{
	public:
		class DoorbellMusicListRequestData
		{
		public:
			DoorbellMusicListRequestData();
			~DoorbellMusicListRequestData();
			
		public:
			/** 授权的token */
			string token;
		public:
			/** 门铃设备序列号 */
			string deviceId ;

		};
	public:
		DoorbellMusicListRequest();
		~DoorbellMusicListRequest();
	public:
		virtual int build();
	public:
		DoorbellMusicListRequestData data;
		MetaInfo* _metainfo_DoorbellMusicListRequestData;
	};

	
	typedef typename DoorbellMusicListRequest::DoorbellMusicListRequestData DoorbellMusicListRequestData;


	class DoorbellMusicListResponse : public LCOpenApiResponse
	{
	public:
		class DoorbellMusicListResponseData
		{
		public:
			DoorbellMusicListResponseData();
			~DoorbellMusicListResponseData();
			
		public:
			/** define a list with struct of DoorbellMusicListResponseData_ListElement */
			class DoorbellMusicListResponseData_ListElement : public LCOpenApiBase
			{
			public:
				DoorbellMusicListResponseData_ListElement();
				~DoorbellMusicListResponseData_ListElement();
			public:
				/** [int]门铃自带的铃声索引号，从0开始 */
				int index;
			public:
				/** 门铃自带的铃声名称 */
				string name;
			};
		public:
			LCOpenApiVector<DoorbellMusicListResponseData_ListElement> list;
		public:
			/** [int]用户配置的铃声索引。-1：表示未配置 */
			int ringIndex;

		};
	public:
		DoorbellMusicListResponse();
		~DoorbellMusicListResponse();
	public:
		virtual int parse();
	public:
		DoorbellMusicListResponseData data;
		MetaInfo* _metainfo_DoorbellMusicListResponseData;
	};

	
	typedef typename DoorbellMusicListResponse::DoorbellMusicListResponseData DoorbellMusicListResponseData;
	typedef typename DoorbellMusicListResponse::DoorbellMusicListResponseData::DoorbellMusicListResponseData_ListElement DoorbellMusicListResponseData_ListElement;

}
}

#endif
