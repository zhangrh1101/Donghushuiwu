/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_LiveList_H_
#define _LC_OPENAPI_CLIENT_LiveList_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取直播列表
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class LiveListRequest : public LCOpenApiRequest
	{
	public:
		class LiveListRequestData
		{
		public:
			LiveListRequestData();
			~LiveListRequestData();
			
		public:
			/** 授权的管理员token(accessToken) */
			string token;
		public:
			/** 单次查询上限100,1-30表示第1条到第30条,包含30 */
			string queryRange;

		};
	public:
		LiveListRequest();
		~LiveListRequest();
	public:
		virtual int build();
	public:
		LiveListRequestData data;
		MetaInfo* _metainfo_LiveListRequestData;
	};

	
	typedef typename LiveListRequest::LiveListRequestData LiveListRequestData;


	class LiveListResponse : public LCOpenApiResponse
	{
	public:
		class LiveListResponseData
		{
		public:
			LiveListResponseData();
			~LiveListResponseData();
			
		public:
			/** [int] 当前抽取设备总数 */
			int count;
		public:
			/** define a list with struct of LiveListResponseData_LivesElement */
			class LiveListResponseData_LivesElement : public LCOpenApiBase
			{
			public:
				LiveListResponseData_LivesElement();
				~LiveListResponseData_LivesElement();
			public:
				/** define a list with struct of LiveListResponseData_LivesElement_JobElement */
				class LiveListResponseData_LivesElement_JobElement : public LCOpenApiBase
				{
				public:
					LiveListResponseData_LivesElement_JobElement();
					~LiveListResponseData_LivesElement_JobElement();
				public:
					/** [bool][可选]直播计划状态（true:开；false:关） */
					bool status;
				public:
					/** 开始时间 */
					string beginTime;
				public:
					/** 任务周期 */
					string period;
				public:
					/** 结束时间 */
					string endTime;
				};
			public:
				LCOpenApiVector<LiveListResponseData_LivesElement_JobElement> job;
			public:
				/** 直播授权token */
				string liveToken;
			public:
				/** define a list with struct of LiveListResponseData_LivesElement_StreamsElement */
				class LiveListResponseData_LivesElement_StreamsElement : public LCOpenApiBase
				{
				public:
					LiveListResponseData_LivesElement_StreamsElement();
					~LiveListResponseData_LivesElement_StreamsElement();
				public:
					/** 直播流hls访问地址 */
					string hls;
				public:
					/** [int]码流类型（0:主码流；1:辅码流）(当直播地址由rtsp源生成时，无该字段) */
					int streamId;
				public:
					/** 视频封面url */
					string coverUrl;
				};
			public:
				LCOpenApiVector<LiveListResponseData_LivesElement_StreamsElement> streams;
			public:
				/** [int]视频封面更新频率（单位：s） */
				int coverUpdate;
			public:
				/** [int]直播状态（1：开启；2：暂停；3：流量不足） */
				int liveStatus;
			public:
				/** 通道号 */
				string channelId;
			public:
				/** 设备序列号 */
				string deviceId;
			public:
				/** [int]直播源类型（1：设备；2：流地址） */
				int liveType;
			};
		public:
			LCOpenApiVector<LiveListResponseData_LivesElement> lives;

		};
	public:
		LiveListResponse();
		~LiveListResponse();
	public:
		virtual int parse();
	public:
		LiveListResponseData data;
		MetaInfo* _metainfo_LiveListResponseData;
	};

	
	typedef typename LiveListResponse::LiveListResponseData LiveListResponseData;
	typedef typename LiveListResponse::LiveListResponseData::LiveListResponseData_LivesElement LiveListResponseData_LivesElement;
	typedef typename LiveListResponse::LiveListResponseData::LiveListResponseData_LivesElement::LiveListResponseData_LivesElement_JobElement LiveListResponseData_LivesElement_JobElement;
	typedef typename LiveListResponse::LiveListResponseData::LiveListResponseData_LivesElement::LiveListResponseData_LivesElement_StreamsElement LiveListResponseData_LivesElement_StreamsElement;

}
}

#endif
