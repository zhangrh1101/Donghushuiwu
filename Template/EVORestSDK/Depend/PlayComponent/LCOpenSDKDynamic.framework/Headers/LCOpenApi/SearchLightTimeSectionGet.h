/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SearchLightTimeSectionGet_H_
#define _LC_OPENAPI_CLIENT_SearchLightTimeSectionGet_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
探照灯时间段计划获取,需要在ScheduleMode（时间段模式下）有效
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class SearchLightTimeSectionGetRequest : public LCOpenApiRequest
	{
	public:
		class SearchLightTimeSectionGetRequestData
		{
		public:
			SearchLightTimeSectionGetRequestData();
			~SearchLightTimeSectionGetRequestData();
			
		public:
			/** [int]通道号 */
			LCOpenApiVector<int> channels;
		public:
			/** 授权的token */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		SearchLightTimeSectionGetRequest();
		~SearchLightTimeSectionGetRequest();
	public:
		virtual int build();
	public:
		SearchLightTimeSectionGetRequestData data;
		MetaInfo* _metainfo_SearchLightTimeSectionGetRequestData;
	};

	
	typedef typename SearchLightTimeSectionGetRequest::SearchLightTimeSectionGetRequestData SearchLightTimeSectionGetRequestData;


	class SearchLightTimeSectionGetResponse : public LCOpenApiResponse
	{
	public:
		class SearchLightTimeSectionGetResponseData
		{
		public:
			SearchLightTimeSectionGetResponseData();
			~SearchLightTimeSectionGetResponseData();
			
		public:
			/** define a list with struct of SearchLightTimeSectionGetResponseData_ChannelsElement */
			class SearchLightTimeSectionGetResponseData_ChannelsElement : public LCOpenApiBase
			{
			public:
				SearchLightTimeSectionGetResponseData_ChannelsElement();
				~SearchLightTimeSectionGetResponseData_ChannelsElement();
			public:
				/** define a list with struct of SearchLightTimeSectionGetResponseData_ChannelsElement_RulesElement */
				class SearchLightTimeSectionGetResponseData_ChannelsElement_RulesElement : public LCOpenApiBase
				{
				public:
					SearchLightTimeSectionGetResponseData_ChannelsElement_RulesElement();
					~SearchLightTimeSectionGetResponseData_ChannelsElement_RulesElement();
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
				LCOpenApiVector<SearchLightTimeSectionGetResponseData_ChannelsElement_RulesElement> rules;
			public:
				/** [int]通道ID */
				int channelId;
			};
		public:
			LCOpenApiVector<SearchLightTimeSectionGetResponseData_ChannelsElement> channels;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		SearchLightTimeSectionGetResponse();
		~SearchLightTimeSectionGetResponse();
	public:
		virtual int parse();
	public:
		SearchLightTimeSectionGetResponseData data;
		MetaInfo* _metainfo_SearchLightTimeSectionGetResponseData;
	};

	
	typedef typename SearchLightTimeSectionGetResponse::SearchLightTimeSectionGetResponseData SearchLightTimeSectionGetResponseData;
	typedef typename SearchLightTimeSectionGetResponse::SearchLightTimeSectionGetResponseData::SearchLightTimeSectionGetResponseData_ChannelsElement SearchLightTimeSectionGetResponseData_ChannelsElement;
	typedef typename SearchLightTimeSectionGetResponse::SearchLightTimeSectionGetResponseData::SearchLightTimeSectionGetResponseData_ChannelsElement::SearchLightTimeSectionGetResponseData_ChannelsElement_RulesElement SearchLightTimeSectionGetResponseData_ChannelsElement_RulesElement;

}
}

#endif
