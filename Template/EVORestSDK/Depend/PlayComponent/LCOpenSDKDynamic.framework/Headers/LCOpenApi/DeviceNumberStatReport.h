/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeviceNumberStatReport_H_
#define _LC_OPENAPI_CLIENT_DeviceNumberStatReport_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
查询设备客流统计报表
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeviceNumberStatReportRequest : public LCOpenApiRequest
	{
	public:
		class DeviceNumberStatReportRequestData
		{
		public:
			DeviceNumberStatReportRequestData();
			~DeviceNumberStatReportRequestData();
			
		public:
			/** 设备通道号 */
			string channelId;
		public:
			/** 授权的token */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		DeviceNumberStatReportRequest();
		~DeviceNumberStatReportRequest();
	public:
		virtual int build();
	public:
		DeviceNumberStatReportRequestData data;
		MetaInfo* _metainfo_DeviceNumberStatReportRequestData;
	};

	
	typedef typename DeviceNumberStatReportRequest::DeviceNumberStatReportRequestData DeviceNumberStatReportRequestData;


	class DeviceNumberStatReportResponse : public LCOpenApiResponse
	{
	public:
		class DeviceNumberStatReportResponseData
		{
		public:
			DeviceNumberStatReportResponseData();
			~DeviceNumberStatReportResponseData();
			
		public:
			/** [long]报表ID */
			int64 reportId;
		public:
			/** 报表名称 */
			string reportName;

		};
	public:
		DeviceNumberStatReportResponse();
		~DeviceNumberStatReportResponse();
	public:
		virtual int parse();
	public:
		DeviceNumberStatReportResponseData data;
		MetaInfo* _metainfo_DeviceNumberStatReportResponseData;
	};

	
	typedef typename DeviceNumberStatReportResponse::DeviceNumberStatReportResponseData DeviceNumberStatReportResponseData;

}
}

#endif
