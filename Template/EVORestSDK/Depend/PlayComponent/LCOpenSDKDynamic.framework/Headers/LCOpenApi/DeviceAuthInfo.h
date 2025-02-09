/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeviceAuthInfo_H_
#define _LC_OPENAPI_CLIENT_DeviceAuthInfo_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取设备通道的授权信息
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeviceAuthInfoRequest : public LCOpenApiRequest
	{
	public:
		class DeviceAuthInfoRequestData
		{
		public:
			DeviceAuthInfoRequestData();
			~DeviceAuthInfoRequestData();
			
		public:
			/** [cstr]deviceAuthInfo */
			#define _STATIC_DeviceAuthInfoRequestData_method "deviceAuthInfo"
			string method;
		public:
			/** 通道号 */
			string channelId;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备Id */
			string deviceId;

		};
	public:
		DeviceAuthInfoRequest();
		~DeviceAuthInfoRequest();
	public:
		virtual int build();
	public:
		DeviceAuthInfoRequestData data;
		MetaInfo* _metainfo_DeviceAuthInfoRequestData;
	};

	
	typedef typename DeviceAuthInfoRequest::DeviceAuthInfoRequestData DeviceAuthInfoRequestData;


	class DeviceAuthInfoResponse : public LCOpenApiResponse
	{
	public:
		class DeviceAuthInfoResponseData
		{
		public:
			DeviceAuthInfoResponseData();
			~DeviceAuthInfoResponseData();
			
		public:
			/** define a list with struct of DeviceAuthInfoResponseData_ShareInfosElement */
			class DeviceAuthInfoResponseData_ShareInfosElement : public LCOpenApiBase
			{
			public:
				DeviceAuthInfoResponseData_ShareInfosElement();
				~DeviceAuthInfoResponseData_ShareInfosElement();
			public:
				/** 被授权的手机号码 */
				string phoneNumber;
			public:
				/** 授权的功能，可选项见说明，用逗号分隔 */
				string functions;
			};
		public:
			LCOpenApiVector<DeviceAuthInfoResponseData_ShareInfosElement> shareInfos;
		public:
			/** [int]剩余分享和授权的数量 */
			int leftShareCount;
		public:
			/** [int]允许分享数量, 999表示不限制,999表示为vip */
			int allowShareCount;

		};
	public:
		DeviceAuthInfoResponse();
		~DeviceAuthInfoResponse();
	public:
		virtual int parse();
	public:
		DeviceAuthInfoResponseData data;
		MetaInfo* _metainfo_DeviceAuthInfoResponseData;
	};

	
	typedef typename DeviceAuthInfoResponse::DeviceAuthInfoResponseData DeviceAuthInfoResponseData;
	typedef typename DeviceAuthInfoResponse::DeviceAuthInfoResponseData::DeviceAuthInfoResponseData_ShareInfosElement DeviceAuthInfoResponseData_ShareInfosElement;

}
}

#endif
