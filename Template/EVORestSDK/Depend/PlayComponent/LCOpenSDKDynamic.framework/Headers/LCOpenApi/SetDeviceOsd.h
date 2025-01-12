/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SetDeviceOsd_H_
#define _LC_OPENAPI_CLIENT_SetDeviceOsd_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置设备OSD配置

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class SetDeviceOsdRequest : public LCOpenApiRequest
	{
	public:
		class SetDeviceOsdRequestData
		{
		public:
			SetDeviceOsdRequestData();
			~SetDeviceOsdRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** OSD字符,不支持换行 */
			string osd;
		public:
			/** 是否生效 */
			string enable;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** [cstr]setDeviceOsd */
			#define _STATIC_SetDeviceOsdRequestData_method "setDeviceOsd"
			string method;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		SetDeviceOsdRequest();
		~SetDeviceOsdRequest();
	public:
		virtual int build();
	public:
		SetDeviceOsdRequestData data;
		MetaInfo* _metainfo_SetDeviceOsdRequestData;
	};

	
	typedef typename SetDeviceOsdRequest::SetDeviceOsdRequestData SetDeviceOsdRequestData;


	class SetDeviceOsdResponse : public LCOpenApiResponse
	{
	public:
		class SetDeviceOsdResponseData
		{
		public:
			SetDeviceOsdResponseData();
			~SetDeviceOsdResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		SetDeviceOsdResponse();
		~SetDeviceOsdResponse();
	public:
		virtual int parse();
	public:
		SetDeviceOsdResponseData data;
		MetaInfo* _metainfo_SetDeviceOsdResponseData;
	};

	
	typedef typename SetDeviceOsdResponse::SetDeviceOsdResponseData SetDeviceOsdResponseData;

}
}

#endif
