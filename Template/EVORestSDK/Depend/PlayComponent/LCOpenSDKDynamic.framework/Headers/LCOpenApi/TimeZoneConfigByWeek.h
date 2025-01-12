/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_TimeZoneConfigByWeek_H_
#define _LC_OPENAPI_CLIENT_TimeZoneConfigByWeek_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置设备夏令时
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class TimeZoneConfigByWeekRequest : public LCOpenApiRequest
	{
	public:
		class TimeZoneConfigByWeekRequestData
		{
		public:
			TimeZoneConfigByWeekRequestData();
			~TimeZoneConfigByWeekRequestData();
			
		public:
			/** 夏令时开始时间,表示“某月-第几个-周几（周日：0，周一：1,....周六：6），时分秒 */
			string beginSunTime;
		public:
			/** [String]授权的token(userToken或accessToken) */
			string token;
		public:
			/** 夏令时结束时间,表示“某月-第几个-周几（周日：0，周一：1,....周六：6），时分秒 */
			string endSunTime;
		public:
			/** 设备所在时区 */
			string timeZone;
		public:
			/** 设置的时区对应索引值 */
			string areaIndex;
		public:
			/** 2342s****2323 */
			string deviceId;

		};
	public:
		TimeZoneConfigByWeekRequest();
		~TimeZoneConfigByWeekRequest();
	public:
		virtual int build();
	public:
		TimeZoneConfigByWeekRequestData data;
		MetaInfo* _metainfo_TimeZoneConfigByWeekRequestData;
	};

	
	typedef typename TimeZoneConfigByWeekRequest::TimeZoneConfigByWeekRequestData TimeZoneConfigByWeekRequestData;


	class TimeZoneConfigByWeekResponse : public LCOpenApiResponse
	{
	public:
		class TimeZoneConfigByWeekResponseData
		{
		public:
			TimeZoneConfigByWeekResponseData();
			~TimeZoneConfigByWeekResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		TimeZoneConfigByWeekResponse();
		~TimeZoneConfigByWeekResponse();
	public:
		virtual int parse();
	public:
		TimeZoneConfigByWeekResponseData data;
		MetaInfo* _metainfo_TimeZoneConfigByWeekResponseData;
	};

	
	typedef typename TimeZoneConfigByWeekResponse::TimeZoneConfigByWeekResponseData TimeZoneConfigByWeekResponseData;

}
}

#endif
