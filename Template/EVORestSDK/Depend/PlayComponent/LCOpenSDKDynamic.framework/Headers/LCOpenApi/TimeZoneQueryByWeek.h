/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_TimeZoneQueryByWeek_H_
#define _LC_OPENAPI_CLIENT_TimeZoneQueryByWeek_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
查询设备夏令时配置
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class TimeZoneQueryByWeekRequest : public LCOpenApiRequest
	{
	public:
		class TimeZoneQueryByWeekRequestData
		{
		public:
			TimeZoneQueryByWeekRequestData();
			~TimeZoneQueryByWeekRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		TimeZoneQueryByWeekRequest();
		~TimeZoneQueryByWeekRequest();
	public:
		virtual int build();
	public:
		TimeZoneQueryByWeekRequestData data;
		MetaInfo* _metainfo_TimeZoneQueryByWeekRequestData;
	};

	
	typedef typename TimeZoneQueryByWeekRequest::TimeZoneQueryByWeekRequestData TimeZoneQueryByWeekRequestData;


	class TimeZoneQueryByWeekResponse : public LCOpenApiResponse
	{
	public:
		class TimeZoneQueryByWeekResponseData
		{
		public:
			TimeZoneQueryByWeekResponseData();
			~TimeZoneQueryByWeekResponseData();
			
		public:
			/** 夏令时结束时间,表示“某月-第几个-周几（周日：0，周一：1,....周六：6），时分秒 */
			string endSunTime;
		public:
			/** 夏令时开始时间,表示“某月-第几个-周几（周日：0，周一：1,....周六：6），时分秒 */
			string beginSunTime;
		public:
			/** 设备所在时区 */
			string timeZone;
		public:
			/** 设置的时区对应索引值 */
			string areaIndex;

		};
	public:
		TimeZoneQueryByWeekResponse();
		~TimeZoneQueryByWeekResponse();
	public:
		virtual int parse();
	public:
		TimeZoneQueryByWeekResponseData data;
		MetaInfo* _metainfo_TimeZoneQueryByWeekResponseData;
	};

	
	typedef typename TimeZoneQueryByWeekResponse::TimeZoneQueryByWeekResponseData TimeZoneQueryByWeekResponseData;

}
}

#endif
