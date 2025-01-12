/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_BindDeviceChannelInfo_H_
#define _LC_OPENAPI_CLIENT_BindDeviceChannelInfo_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取单个设备通道的信息

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class BindDeviceChannelInfoRequest : public LCOpenApiRequest
	{
	public:
		class BindDeviceChannelInfoRequestData
		{
		public:
			BindDeviceChannelInfoRequestData();
			~BindDeviceChannelInfoRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** [cstr]bindDeviceChannelInfo */
			#define _STATIC_BindDeviceChannelInfoRequestData_method "bindDeviceChannelInfo"
			string method;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		BindDeviceChannelInfoRequest();
		~BindDeviceChannelInfoRequest();
	public:
		virtual int build();
	public:
		BindDeviceChannelInfoRequestData data;
		MetaInfo* _metainfo_BindDeviceChannelInfoRequestData;
	};

	
	typedef typename BindDeviceChannelInfoRequest::BindDeviceChannelInfoRequestData BindDeviceChannelInfoRequestData;


	class BindDeviceChannelInfoResponse : public LCOpenApiResponse
	{
	public:
		class BindDeviceChannelInfoResponseData
		{
		public:
			BindDeviceChannelInfoResponseData();
			~BindDeviceChannelInfoResponseData();
			
		public:
			/** [int]报警布撤防状态，0-撤防，1-布防 */
			int alarmStatus;
		public:
			/** [int]云存储状态：-1-未开通 0-已失效 1-使用中 2-套餐暂停 */
			int csStatus;
		public:
			/** 设备ID */
			string deviceId;
		public:
			/** 通道名称 */
			string channelName;
		public:
			/** 可选,被共享和授权的权限功能列表（逗号隔开） */
			string shareFunctions;
		public:
			/** 通道能力集，逗号隔开 */
			string channelAbility;
		public:
			/** 缩略图URL */
			string channelPicUrl;
		public:
			/** [int]通道号 */
			int channelId;
		public:
			/** [bool]是否在线 */
			bool channelOnline;
		public:
			/** [bool]是否分享给别人的,true表示分享给了别人,false表示未分享给别人 */
			bool shareStatus;

		};
	public:
		BindDeviceChannelInfoResponse();
		~BindDeviceChannelInfoResponse();
	public:
		virtual int parse();
	public:
		BindDeviceChannelInfoResponseData data;
		MetaInfo* _metainfo_BindDeviceChannelInfoResponseData;
	};

	
	typedef typename BindDeviceChannelInfoResponse::BindDeviceChannelInfoResponseData BindDeviceChannelInfoResponseData;

}
}

#endif
