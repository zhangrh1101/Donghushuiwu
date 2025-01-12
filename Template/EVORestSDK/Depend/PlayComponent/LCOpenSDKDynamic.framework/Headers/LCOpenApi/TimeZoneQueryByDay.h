/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_TimeZoneQueryByDay_H_
#define _LC_OPENAPI_CLIENT_TimeZoneQueryByDay_H_

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
	class TimeZoneQueryByDayRequest : public LCOpenApiRequest
	{
	public:
		class TimeZoneQueryByDayRequestData
		{
		public:
			TimeZoneQueryByDayRequestData();
			~TimeZoneQueryByDayRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		TimeZoneQueryByDayRequest();
		~TimeZoneQueryByDayRequest();
	public:
		virtual int build();
	public:
		TimeZoneQueryByDayRequestData data;
		MetaInfo* _metainfo_TimeZoneQueryByDayRequestData;
	};

	
	typedef typename TimeZoneQueryByDayRequest::TimeZoneQueryByDayRequestData TimeZoneQueryByDayRequestData;


	class TimeZoneQueryByDayResponse : public LCOpenApiResponse
	{
	public:
		class TimeZoneQueryByDayResponseData
		{
		public:
			TimeZoneQueryByDayResponseData();
			~TimeZoneQueryByDayResponseData();
			
		public:
			/** 3-1-1 18:59:20 */
			string endWeekSunTime;
		public:
			/** 02-01 18:59:20 */
			string beginSunTime;
		public:
			/** 8,The time zone of the device is optional. If not, the current configuration of the device shall prevail */
			string timeZone;
		public:
			/** day/week */
			string mode;
		public:
			/** 3-1-1 18:59:20 */
			string beginWeekSunTime;
		public:
			/** 10-01 18:59:20 */
			string endSunTime;
		public:
			/** 1,Set time zone corresponding to the index value */
			string areaIndex;

		};
	public:
		TimeZoneQueryByDayResponse();
		~TimeZoneQueryByDayResponse();
	public:
		virtual int parse();
	public:
		TimeZoneQueryByDayResponseData data;
		MetaInfo* _metainfo_TimeZoneQueryByDayResponseData;
	};

	
	typedef typename TimeZoneQueryByDayResponse::TimeZoneQueryByDayResponseData TimeZoneQueryByDayResponseData;

}
}

#endif
