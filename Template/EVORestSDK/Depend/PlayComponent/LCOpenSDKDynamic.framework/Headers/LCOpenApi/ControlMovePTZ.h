/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_ControlMovePTZ_H_
#define _LC_OPENAPI_CLIENT_ControlMovePTZ_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
云台移动控制接口

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class ControlMovePTZRequest : public LCOpenApiRequest
	{
	public:
		class ControlMovePTZRequestData
		{
		public:
			ControlMovePTZRequestData();
			~ControlMovePTZRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 操作行为；0-上，1-下，2-左，3-右，4-左上，5-左下，6-右上，7-右下，8-放大，9-缩小，10-停止 */
			string operation;
		public:
			/** 移动持续时间，单位为毫秒 */
			string duration;
		public:
			/** 通道号 */
			string channelId;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		ControlMovePTZRequest();
		~ControlMovePTZRequest();
	public:
		virtual int build();
	public:
		ControlMovePTZRequestData data;
		MetaInfo* _metainfo_ControlMovePTZRequestData;
	};

	
	typedef typename ControlMovePTZRequest::ControlMovePTZRequestData ControlMovePTZRequestData;


	class ControlMovePTZResponse : public LCOpenApiResponse
	{
	public:
		class ControlMovePTZResponseData
		{
		public:
			ControlMovePTZResponseData();
			~ControlMovePTZResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		ControlMovePTZResponse();
		~ControlMovePTZResponse();
	public:
		virtual int parse();
	public:
		ControlMovePTZResponseData data;
		MetaInfo* _metainfo_ControlMovePTZResponseData;
	};

	
	typedef typename ControlMovePTZResponse::ControlMovePTZResponseData ControlMovePTZResponseData;

}
}

#endif
