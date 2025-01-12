/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_QueryDeviceOsd_H_
#define _LC_OPENAPI_CLIENT_QueryDeviceOsd_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取设备OSD配置

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class QueryDeviceOsdRequest : public LCOpenApiRequest
	{
	public:
		class QueryDeviceOsdRequestData
		{
		public:
			QueryDeviceOsdRequestData();
			~QueryDeviceOsdRequestData();
			
		public:
			/** [cstr]setDeviceOsd */
			#define _STATIC_QueryDeviceOsdRequestData_method "setDeviceOsd"
			string method;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		QueryDeviceOsdRequest();
		~QueryDeviceOsdRequest();
	public:
		virtual int build();
	public:
		QueryDeviceOsdRequestData data;
		MetaInfo* _metainfo_QueryDeviceOsdRequestData;
	};

	
	typedef typename QueryDeviceOsdRequest::QueryDeviceOsdRequestData QueryDeviceOsdRequestData;


	class QueryDeviceOsdResponse : public LCOpenApiResponse
	{
	public:
		class QueryDeviceOsdResponseData
		{
		public:
			QueryDeviceOsdResponseData();
			~QueryDeviceOsdResponseData();
			
		public:
			/** OSD使能开关（on使能打开,off使能关闭） */
			string enable;
		public:
			/** OSD字符，对应设备端channelTitle，不支持换行 */
			string osd;

		};
	public:
		QueryDeviceOsdResponse();
		~QueryDeviceOsdResponse();
	public:
		virtual int parse();
	public:
		QueryDeviceOsdResponseData data;
		MetaInfo* _metainfo_QueryDeviceOsdResponseData;
	};

	
	typedef typename QueryDeviceOsdResponse::QueryDeviceOsdResponseData QueryDeviceOsdResponseData;

}
}

#endif
