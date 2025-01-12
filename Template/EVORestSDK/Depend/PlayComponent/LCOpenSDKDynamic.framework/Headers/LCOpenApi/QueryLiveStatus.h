/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_QueryLiveStatus_H_
#define _LC_OPENAPI_CLIENT_QueryLiveStatus_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取直播状态
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class QueryLiveStatusRequest : public LCOpenApiRequest
	{
	public:
		class QueryLiveStatusRequestData
		{
		public:
			QueryLiveStatusRequestData();
			~QueryLiveStatusRequestData();
			
		public:
			/** 授权的管理员token(accessToken) */
			string token;
		public:
			/**  */
			string liveToken;

		};
	public:
		QueryLiveStatusRequest();
		~QueryLiveStatusRequest();
	public:
		virtual int build();
	public:
		QueryLiveStatusRequestData data;
		MetaInfo* _metainfo_QueryLiveStatusRequestData;
	};

	
	typedef typename QueryLiveStatusRequest::QueryLiveStatusRequestData QueryLiveStatusRequestData;


	class QueryLiveStatusResponse : public LCOpenApiResponse
	{
	public:
		class QueryLiveStatusResponseData
		{
		public:
			QueryLiveStatusResponseData();
			~QueryLiveStatusResponseData();
			
		public:
			/** define a list with struct of QueryLiveStatusResponseData_StreamsElement */
			class QueryLiveStatusResponseData_StreamsElement : public LCOpenApiBase
			{
			public:
				QueryLiveStatusResponseData_StreamsElement();
				~QueryLiveStatusResponseData_StreamsElement();
			public:
				/** [int]码流类型（0:主码流；1:辅码流） */
				int streamId;
			public:
				/** 0:正在直播中,1:正在直播中，但是视频封面异常,2:视频源异常,3:码流转换异常,4:云存储访问异常,10:直播暂停中 */
				string status;
			};
		public:
			LCOpenApiVector<QueryLiveStatusResponseData_StreamsElement> streams;

		};
	public:
		QueryLiveStatusResponse();
		~QueryLiveStatusResponse();
	public:
		virtual int parse();
	public:
		QueryLiveStatusResponseData data;
		MetaInfo* _metainfo_QueryLiveStatusResponseData;
	};

	
	typedef typename QueryLiveStatusResponse::QueryLiveStatusResponseData QueryLiveStatusResponseData;
	typedef typename QueryLiveStatusResponse::QueryLiveStatusResponseData::QueryLiveStatusResponseData_StreamsElement QueryLiveStatusResponseData_StreamsElement;

}
}

#endif
