/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SearchLightTimeSectionSet_H_
#define _LC_OPENAPI_CLIENT_SearchLightTimeSectionSet_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
探照灯时间段设置,需要在ScheduleMode（时间段模式下）有效
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class SearchLightTimeSectionSetRequest : public LCOpenApiRequest
	{
	public:
		class SearchLightTimeSectionSetRequestData
		{
		public:
			SearchLightTimeSectionSetRequestData();
			~SearchLightTimeSectionSetRequestData();
			
		public:
			/** define a list with struct of SearchLightTimeSectionSetRequestData_ChannelsElement */
			class SearchLightTimeSectionSetRequestData_ChannelsElement : public LCOpenApiBase
			{
			public:
				SearchLightTimeSectionSetRequestData_ChannelsElement();
				~SearchLightTimeSectionSetRequestData_ChannelsElement();
			public:
				/** define a list with struct of SearchLightTimeSectionSetRequestData_ChannelsElement_RulesElement */
				class SearchLightTimeSectionSetRequestData_ChannelsElement_RulesElement : public LCOpenApiBase
				{
				public:
					SearchLightTimeSectionSetRequestData_ChannelsElement_RulesElement();
					~SearchLightTimeSectionSetRequestData_ChannelsElement_RulesElement();
				public:
					/** 生效的结束时间,时间格式为THHMMSS,如T010000 */
					string endTime;
				public:
					/** 生效的起始时间,时间格式为THHMMSS,如T000000 */
					string beginTime;
				public:
					/** 计划周期,如Monday */
					string period;
				};
			public:
				LCOpenApiVector<SearchLightTimeSectionSetRequestData_ChannelsElement_RulesElement> rules;
			public:
				/** [int]通道号 */
				int channelId;
			};
		public:
			LCOpenApiVector<SearchLightTimeSectionSetRequestData_ChannelsElement> channels;
		public:
			/** 授权的token(userToken或accessToken) */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		SearchLightTimeSectionSetRequest();
		~SearchLightTimeSectionSetRequest();
	public:
		virtual int build();
	public:
		SearchLightTimeSectionSetRequestData data;
		MetaInfo* _metainfo_SearchLightTimeSectionSetRequestData;
	};

	
	typedef typename SearchLightTimeSectionSetRequest::SearchLightTimeSectionSetRequestData SearchLightTimeSectionSetRequestData;
	typedef typename SearchLightTimeSectionSetRequest::SearchLightTimeSectionSetRequestData::SearchLightTimeSectionSetRequestData_ChannelsElement SearchLightTimeSectionSetRequestData_ChannelsElement;
	typedef typename SearchLightTimeSectionSetRequest::SearchLightTimeSectionSetRequestData::SearchLightTimeSectionSetRequestData_ChannelsElement::SearchLightTimeSectionSetRequestData_ChannelsElement_RulesElement SearchLightTimeSectionSetRequestData_ChannelsElement_RulesElement;


	class SearchLightTimeSectionSetResponse : public LCOpenApiResponse
	{
	public:
		class SearchLightTimeSectionSetResponseData
		{
		public:
			SearchLightTimeSectionSetResponseData();
			~SearchLightTimeSectionSetResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		SearchLightTimeSectionSetResponse();
		~SearchLightTimeSectionSetResponse();
	public:
		virtual int parse();
	public:
		SearchLightTimeSectionSetResponseData data;
		MetaInfo* _metainfo_SearchLightTimeSectionSetResponseData;
	};

	
	typedef typename SearchLightTimeSectionSetResponse::SearchLightTimeSectionSetResponseData SearchLightTimeSectionSetResponseData;

}
}

#endif
