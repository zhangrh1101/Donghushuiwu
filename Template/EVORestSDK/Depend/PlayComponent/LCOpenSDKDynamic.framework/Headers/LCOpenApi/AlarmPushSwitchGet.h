/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_AlarmPushSwitchGet_H_
#define _LC_OPENAPI_CLIENT_AlarmPushSwitchGet_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取设备推送提醒开关
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class AlarmPushSwitchGetRequest : public LCOpenApiRequest
	{
	public:
		class AlarmPushSwitchGetRequestData
		{
		public:
			AlarmPushSwitchGetRequestData();
			~AlarmPushSwitchGetRequestData();
			
		public:
			/** [O]通道号 */
			string channelId;
		public:
			/** xxx */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		AlarmPushSwitchGetRequest();
		~AlarmPushSwitchGetRequest();
	public:
		virtual int build();
	public:
		AlarmPushSwitchGetRequestData data;
		MetaInfo* _metainfo_AlarmPushSwitchGetRequestData;
	};

	
	typedef typename AlarmPushSwitchGetRequest::AlarmPushSwitchGetRequestData AlarmPushSwitchGetRequestData;


	class AlarmPushSwitchGetResponse : public LCOpenApiResponse
	{
	public:
		class AlarmPushSwitchGetResponseData
		{
		public:
			AlarmPushSwitchGetResponseData();
			~AlarmPushSwitchGetResponseData();
			
		public:
			/** [bool]是否有效 */
			bool enable;

		};
	public:
		AlarmPushSwitchGetResponse();
		~AlarmPushSwitchGetResponse();
	public:
		virtual int parse();
	public:
		AlarmPushSwitchGetResponseData data;
		MetaInfo* _metainfo_AlarmPushSwitchGetResponseData;
	};

	
	typedef typename AlarmPushSwitchGetResponse::AlarmPushSwitchGetResponseData AlarmPushSwitchGetResponseData;

}
}

#endif
