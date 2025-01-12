/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_TimeZoneConfigByDay_H_
#define _LC_OPENAPI_CLIENT_TimeZoneConfigByDay_H_

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
	class TimeZoneConfigByDayRequest : public LCOpenApiRequest
	{
	public:
		class TimeZoneConfigByDayRequestData
		{
		public:
			TimeZoneConfigByDayRequestData();
			~TimeZoneConfigByDayRequestData();
			
		public:
			/** 夏令时开始时间,表示“某月-该月的第几个星期-该星期的第几天，时分秒 */
			string beginSunTime;
		public:
			/** [String]授权的token(userToken或accessToken) */
			string token;
		public:
			/** 夏令时结束时间,表示某月-该月的第几个星期-该星期的第几天，时分秒 */
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
		TimeZoneConfigByDayRequest();
		~TimeZoneConfigByDayRequest();
	public:
		virtual int build();
	public:
		TimeZoneConfigByDayRequestData data;
		MetaInfo* _metainfo_TimeZoneConfigByDayRequestData;
	};

	
	typedef typename TimeZoneConfigByDayRequest::TimeZoneConfigByDayRequestData TimeZoneConfigByDayRequestData;


	class TimeZoneConfigByDayResponse : public LCOpenApiResponse
	{
	public:
		class TimeZoneConfigByDayResponseData
		{
		public:
			TimeZoneConfigByDayResponseData();
			~TimeZoneConfigByDayResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		TimeZoneConfigByDayResponse();
		~TimeZoneConfigByDayResponse();
	public:
		virtual int parse();
	public:
		TimeZoneConfigByDayResponseData data;
		MetaInfo* _metainfo_TimeZoneConfigByDayResponseData;
	};

	
	typedef typename TimeZoneConfigByDayResponse::TimeZoneConfigByDayResponseData TimeZoneConfigByDayResponseData;

}
}

#endif
