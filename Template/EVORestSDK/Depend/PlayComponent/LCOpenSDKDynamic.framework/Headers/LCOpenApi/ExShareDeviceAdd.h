/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_ExShareDeviceAdd_H_
#define _LC_OPENAPI_CLIENT_ExShareDeviceAdd_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设备分享,支持分享给单个或多个用户 
functions详细描述： 
	realtime：视频查看权限
	videoMonitor：视频控制权限
	alarmMsg：报警消息查看 
	alarmManage：报警消息管理 
	localVideoRecord：本地录像查看 
	videoRecord：云录像查看 
	cloudRecordManage：云录像管理 
	configure：基础配置管理 
	seniorConfigure：高级配置管理 
	functions为空，取默认值："realtime,videoMonitor,alarmMsg,videoRecord,localVideoRecord"
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class ExShareDeviceAddRequest : public LCOpenApiRequest
	{
	public:
		class ExShareDeviceAddRequestData
		{
		public:
			ExShareDeviceAddRequestData();
			~ExShareDeviceAddRequestData();
			
		public:
			/** 分享的功能 */
			string functions;
		public:
			/** 被分享账号 */
			string account;
		public:
			/** 授权token */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		ExShareDeviceAddRequest();
		~ExShareDeviceAddRequest();
	public:
		virtual int build();
	public:
		ExShareDeviceAddRequestData data;
		MetaInfo* _metainfo_ExShareDeviceAddRequestData;
	};

	
	typedef typename ExShareDeviceAddRequest::ExShareDeviceAddRequestData ExShareDeviceAddRequestData;


	class ExShareDeviceAddResponse : public LCOpenApiResponse
	{
	public:
		class ExShareDeviceAddResponseData
		{
		public:
			ExShareDeviceAddResponseData();
			~ExShareDeviceAddResponseData();
			
		public:
			/** 可选 用户ID,被分享用户为一个人时返回 */
			string userId;

		};
	public:
		ExShareDeviceAddResponse();
		~ExShareDeviceAddResponse();
	public:
		virtual int parse();
	public:
		ExShareDeviceAddResponseData data;
		MetaInfo* _metainfo_ExShareDeviceAddResponseData;
	};

	
	typedef typename ExShareDeviceAddResponse::ExShareDeviceAddResponseData ExShareDeviceAddResponseData;

}
}

#endif
