/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeviceBaseDetailList_H_
#define _LC_OPENAPI_CLIENT_DeviceBaseDetailList_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
批量根据设备序列号、通道号列表和配件号列表，获取乐橙app添加或分享的设备的详细信息

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeviceBaseDetailListRequest : public LCOpenApiRequest
	{
	public:
		class DeviceBaseDetailListRequestData
		{
		public:
			DeviceBaseDetailListRequestData();
			~DeviceBaseDetailListRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** define a list with struct of DeviceBaseDetailListRequestData_DeviceListElement */
			class DeviceBaseDetailListRequestData_DeviceListElement : public LCOpenApiBase
			{
			public:
				DeviceBaseDetailListRequestData_DeviceListElement();
				~DeviceBaseDetailListRequestData_DeviceListElement();
			public:
				/** 批量配件Id */
				string apList;
			public:
				/** 批量通道号 */
				string channelList;
			public:
				/** 设备序列号 */
				string deviceId;
			};
		public:
			LCOpenApiVector<DeviceBaseDetailListRequestData_DeviceListElement> deviceList;

		};
	public:
		DeviceBaseDetailListRequest();
		~DeviceBaseDetailListRequest();
	public:
		virtual int build();
	public:
		DeviceBaseDetailListRequestData data;
		MetaInfo* _metainfo_DeviceBaseDetailListRequestData;
	};

	
	typedef typename DeviceBaseDetailListRequest::DeviceBaseDetailListRequestData DeviceBaseDetailListRequestData;
	typedef typename DeviceBaseDetailListRequest::DeviceBaseDetailListRequestData::DeviceBaseDetailListRequestData_DeviceListElement DeviceBaseDetailListRequestData_DeviceListElement;


	class DeviceBaseDetailListResponse : public LCOpenApiResponse
	{
	public:
		class DeviceBaseDetailListResponseData
		{
		public:
			DeviceBaseDetailListResponseData();
			~DeviceBaseDetailListResponseData();
			
		public:
			/** [int]设备总量 */
			int count;
		public:
			/** define a list with struct of DeviceBaseDetailListResponseData_DeviceListElement */
			class DeviceBaseDetailListResponseData_DeviceListElement : public LCOpenApiBase
			{
			public:
				DeviceBaseDetailListResponseData_DeviceListElement();
				~DeviceBaseDetailListResponseData_DeviceListElement();
			public:
				/** 设备品牌信息：lechange-乐橙设备，general-通用设备 */
				string brand;
			public:
				/** 设备大类【NVR/DVR/HCVR/IPC/SD/IHG/ARC】 */
				string catalog;
			public:
				/** define a list with struct of DeviceBaseDetailListResponseData_DeviceListElement_ChannelsElement */
				class DeviceBaseDetailListResponseData_DeviceListElement_ChannelsElement : public LCOpenApiBase
				{
				public:
					DeviceBaseDetailListResponseData_DeviceListElement_ChannelsElement();
					~DeviceBaseDetailListResponseData_DeviceListElement_ChannelsElement();
				public:
					/** 云存储状态 notExist:未开通套餐，using：开通云存储且没有过期， expired：套餐过期 */
					string storageStrategyStatus;
				public:
					/** 缩略图URL */
					string picUrl;
				public:
					/** 通道能力集 如AlarmMD,AudioTalk 逗号隔开 */
					string ability;
				public:
					/** 设备序列号 */
					string deviceId;
				public:
					/** 通道名称 */
					string channelName;
				public:
					/** [O]被共享和授权的权限功能列表（逗号隔开） */
					string shareFunctions;
				public:
					/** 遮罩状态，on-打开 off-关闭 */
					string cameraStatus;
				public:
					/** 远程通道状态 online-在线 offline-离线 close-未配置 sleep-休眠  */
					string status;
				public:
					/** 通道号  */
					string channelId;
				public:
					/** 设备属于自己；"share"：通过开放平台共享给此用户； */
					string shareStatus;
				public:
					/** 提醒状态，off-不提醒，on-提醒 */
					string remindStatus;
				};
			public:
				LCOpenApiVector<DeviceBaseDetailListResponseData_DeviceListElement_ChannelsElement> channels;
			public:
				/** 设备型号 */
				string deviceModel;
			public:
				/** 设备ID */
				string deviceId;
			public:
				/** define a list with struct of DeviceBaseDetailListResponseData_DeviceListElement_AplistElement */
				class DeviceBaseDetailListResponseData_DeviceListElement_AplistElement : public LCOpenApiBase
				{
				public:
					DeviceBaseDetailListResponseData_DeviceListElement_AplistElement();
					~DeviceBaseDetailListResponseData_DeviceListElement_AplistElement();
				public:
					/** 报警网关配件id  */
					string apId;
				public:
					/** 配件能力项，逗号隔开，如AudioTalk,PT */
					string apCapacity;
				public:
					/** 配件的型号 */
					string apModel;
				public:
					/** 配件名称 */
					string apName;
				public:
					/** 配件的使能 on-使能开启 off-使能关闭 */
					string apEnable;
				public:
					/** 配件的类型 */
					string apType;
				public:
					/** 配件的在线状态 online-在线 offline-离线 */
					string apStatus;
				public:
					/** 配件的io类型 in-输入 out-输出 */
					string ioType;
				public:
					/** 配件的版本号 */
					string apVersion;
				};
			public:
				LCOpenApiVector<DeviceBaseDetailListResponseData_DeviceListElement_AplistElement> aplist;
			public:
				/** 设备软件版本号 */
				string version;
			public:
				/** 当前状态：online-在线 offline-离线 upgrading-升级中 sleep-休眠 */
				string status;
			public:
				/** 设备接入类型，PaaS-表示Paas程序接入、Lechange-表示乐橙非PaaS设备、Easy4IP表示Easy4IP程序设备、P2P表示P2P程序设备 */
				string accessType;
			public:
				/** 设备能力项，逗号隔开，详见设备能力集AlarmMD,AudioTalk,AlarmPIR,WLAN,VVP2P */
				string ability;
			public:
				/** 设备名称 */
				string name;
			};
		public:
			LCOpenApiVector<DeviceBaseDetailListResponseData_DeviceListElement> deviceList;

		};
	public:
		DeviceBaseDetailListResponse();
		~DeviceBaseDetailListResponse();
	public:
		virtual int parse();
	public:
		DeviceBaseDetailListResponseData data;
		MetaInfo* _metainfo_DeviceBaseDetailListResponseData;
	};

	
	typedef typename DeviceBaseDetailListResponse::DeviceBaseDetailListResponseData DeviceBaseDetailListResponseData;
	typedef typename DeviceBaseDetailListResponse::DeviceBaseDetailListResponseData::DeviceBaseDetailListResponseData_DeviceListElement DeviceBaseDetailListResponseData_DeviceListElement;
	typedef typename DeviceBaseDetailListResponse::DeviceBaseDetailListResponseData::DeviceBaseDetailListResponseData_DeviceListElement::DeviceBaseDetailListResponseData_DeviceListElement_ChannelsElement DeviceBaseDetailListResponseData_DeviceListElement_ChannelsElement;
	typedef typename DeviceBaseDetailListResponse::DeviceBaseDetailListResponseData::DeviceBaseDetailListResponseData_DeviceListElement::DeviceBaseDetailListResponseData_DeviceListElement_AplistElement DeviceBaseDetailListResponseData_DeviceListElement_AplistElement;

}
}

#endif
