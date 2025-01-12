/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_ExDeviceSharedInfo_H_
#define _LC_OPENAPI_CLIENT_ExDeviceSharedInfo_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
查询设备分享信息，设备拥有者和设备被分享者信息
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class ExDeviceSharedInfoRequest : public LCOpenApiRequest
	{
	public:
		class ExDeviceSharedInfoRequestData
		{
		public:
			ExDeviceSharedInfoRequestData();
			~ExDeviceSharedInfoRequestData();
			
		public:
			/** 授权token */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		ExDeviceSharedInfoRequest();
		~ExDeviceSharedInfoRequest();
	public:
		virtual int build();
	public:
		ExDeviceSharedInfoRequestData data;
		MetaInfo* _metainfo_ExDeviceSharedInfoRequestData;
	};

	
	typedef typename ExDeviceSharedInfoRequest::ExDeviceSharedInfoRequestData ExDeviceSharedInfoRequestData;


	class ExDeviceSharedInfoResponse : public LCOpenApiResponse
	{
	public:
		class ExDeviceSharedInfoResponseData
		{
		public:
			ExDeviceSharedInfoResponseData();
			~ExDeviceSharedInfoResponseData();
			
		public:
			/** [O]分享次数，设备或者通道目前分享出去了多少次 */
			string shareCount;
		public:
			/** [O]分享者的账号 */
			string ownerAccount;
		public:
			/** [O]剩余分享和授权的数量 */
			string leftShareCount;
		public:
			/** [O]允许分享数量, 999表示不限制,999表示为vip */
			string allowShareCount;
		public:
			/** define a list with struct of ExDeviceSharedInfoResponseData_ShareInfoListElement */
			class ExDeviceSharedInfoResponseData_ShareInfoListElement : public LCOpenApiBase
			{
			public:
				ExDeviceSharedInfoResponseData_ShareInfoListElement();
				~ExDeviceSharedInfoResponseData_ShareInfoListElement();
			public:
				/** [O]分享的功能，可选项见说明，用逗号分隔 */
				string functions;
			public:
				/** 被分享者的账号状态，registered-账号已经注册，unregistered-账号未注册 */
				string accountStatus;
			public:
				/** [O]分享时间，yyyy-MM-dd HH:mm:ss */
				string shareTime;
			public:
				/** 被分享者的用户id */
				string userId;
			public:
				/** 被分享者的账号 */
				string account;
			};
		public:
			LCOpenApiVector<ExDeviceSharedInfoResponseData_ShareInfoListElement> shareInfoList;

		};
	public:
		ExDeviceSharedInfoResponse();
		~ExDeviceSharedInfoResponse();
	public:
		virtual int parse();
	public:
		ExDeviceSharedInfoResponseData data;
		MetaInfo* _metainfo_ExDeviceSharedInfoResponseData;
	};

	
	typedef typename ExDeviceSharedInfoResponse::ExDeviceSharedInfoResponseData ExDeviceSharedInfoResponseData;
	typedef typename ExDeviceSharedInfoResponse::ExDeviceSharedInfoResponseData::ExDeviceSharedInfoResponseData_ShareInfoListElement ExDeviceSharedInfoResponseData_ShareInfoListElement;

}
}

#endif
