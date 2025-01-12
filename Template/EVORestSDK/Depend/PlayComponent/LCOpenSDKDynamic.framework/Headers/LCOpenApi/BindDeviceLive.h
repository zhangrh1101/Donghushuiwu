/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_BindDeviceLive_H_
#define _LC_OPENAPI_CLIENT_BindDeviceLive_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
创建设备源直播地址
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class BindDeviceLiveRequest : public LCOpenApiRequest
	{
	public:
		class BindDeviceLiveRequestData
		{
		public:
			BindDeviceLiveRequestData();
			~BindDeviceLiveRequestData();
			
		public:
			/** 授权的管理员token(accessToken) */
			string token;
		public:
			/** [int]码流类型（0:主码流；1:辅码流） */
			int streamId;
		public:
			/** 通道号 */
			string channelId;
		public:
			/** 直播类型（cdn:通用直播；proxy:经济型直播） */
			string liveMode;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		BindDeviceLiveRequest();
		~BindDeviceLiveRequest();
	public:
		virtual int build();
	public:
		BindDeviceLiveRequestData data;
		MetaInfo* _metainfo_BindDeviceLiveRequestData;
	};

	
	typedef typename BindDeviceLiveRequest::BindDeviceLiveRequestData BindDeviceLiveRequestData;


	class BindDeviceLiveResponse : public LCOpenApiResponse
	{
	public:
		class BindDeviceLiveResponseData
		{
		public:
			BindDeviceLiveResponseData();
			~BindDeviceLiveResponseData();
			
		public:
			/** define a list with struct of BindDeviceLiveResponseData_JobElement */
			class BindDeviceLiveResponseData_JobElement : public LCOpenApiBase
			{
			public:
				BindDeviceLiveResponseData_JobElement();
				~BindDeviceLiveResponseData_JobElement();
			public:
				/** [bool]直播计划状态（true:开；false:关） */
				bool status;
			public:
				/** 任务周期 */
				string period;
			};
		public:
			LCOpenApiVector<BindDeviceLiveResponseData_JobElement> job;
		public:
			/** 直播授权token */
			string liveToken;
		public:
			/** define a list with struct of BindDeviceLiveResponseData_StreamsElement */
			class BindDeviceLiveResponseData_StreamsElement : public LCOpenApiBase
			{
			public:
				BindDeviceLiveResponseData_StreamsElement();
				~BindDeviceLiveResponseData_StreamsElement();
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
			LCOpenApiVector<BindDeviceLiveResponseData_StreamsElement> streams;
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
		BindDeviceLiveResponse();
		~BindDeviceLiveResponse();
	public:
		virtual int parse();
	public:
		BindDeviceLiveResponseData data;
		MetaInfo* _metainfo_BindDeviceLiveResponseData;
	};

	
	typedef typename BindDeviceLiveResponse::BindDeviceLiveResponseData BindDeviceLiveResponseData;
	typedef typename BindDeviceLiveResponse::BindDeviceLiveResponseData::BindDeviceLiveResponseData_JobElement BindDeviceLiveResponseData_JobElement;
	typedef typename BindDeviceLiveResponse::BindDeviceLiveResponseData::BindDeviceLiveResponseData_StreamsElement BindDeviceLiveResponseData_StreamsElement;

}
}

#endif
