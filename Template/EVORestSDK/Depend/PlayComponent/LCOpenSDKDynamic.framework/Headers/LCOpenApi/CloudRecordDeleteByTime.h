/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_CloudRecordDeleteByTime_H_
#define _LC_OPENAPI_CLIENT_CloudRecordDeleteByTime_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
删除某个设备一段时间内的录像，返回被删除的录像数
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class CloudRecordDeleteByTimeRequest : public LCOpenApiRequest
	{
	public:
		class CloudRecordDeleteByTimeRequestData
		{
		public:
			CloudRecordDeleteByTimeRequestData();
			~CloudRecordDeleteByTimeRequestData();
			
		public:
			/** 录像类型，为空表示不区分录像类型 */
			string type;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备本地结束时间,yyyyMMddTHHmmss格式 */
			string localEndTime;
		public:
			/** 通道号 */
			string channelId;
		public:
			/** 设备本地开始时间,yyyyMMddTHHmmss格式 */
			string localBeginTime;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		CloudRecordDeleteByTimeRequest();
		~CloudRecordDeleteByTimeRequest();
	public:
		virtual int build();
	public:
		CloudRecordDeleteByTimeRequestData data;
		MetaInfo* _metainfo_CloudRecordDeleteByTimeRequestData;
	};

	
	typedef typename CloudRecordDeleteByTimeRequest::CloudRecordDeleteByTimeRequestData CloudRecordDeleteByTimeRequestData;


	class CloudRecordDeleteByTimeResponse : public LCOpenApiResponse
	{
	public:
		class CloudRecordDeleteByTimeResponseData
		{
		public:
			CloudRecordDeleteByTimeResponseData();
			~CloudRecordDeleteByTimeResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		CloudRecordDeleteByTimeResponse();
		~CloudRecordDeleteByTimeResponse();
	public:
		virtual int parse();
	public:
		CloudRecordDeleteByTimeResponseData data;
		MetaInfo* _metainfo_CloudRecordDeleteByTimeResponseData;
	};

	
	typedef typename CloudRecordDeleteByTimeResponse::CloudRecordDeleteByTimeResponseData CloudRecordDeleteByTimeResponseData;

}
}

#endif
