/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_RemoteDeviceUpgradeProgressGet_H_
#define _LC_OPENAPI_CLIENT_RemoteDeviceUpgradeProgressGet_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
远程设备升级进度查询
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class RemoteDeviceUpgradeProgressGetRequest : public LCOpenApiRequest
	{
	public:
		class RemoteDeviceUpgradeProgressGetRequestData
		{
		public:
			RemoteDeviceUpgradeProgressGetRequestData();
			~RemoteDeviceUpgradeProgressGetRequestData();
			
		public:
			/** 远程设备序列号 */
			string sn;
		public:
			/** xxx */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		RemoteDeviceUpgradeProgressGetRequest();
		~RemoteDeviceUpgradeProgressGetRequest();
	public:
		virtual int build();
	public:
		RemoteDeviceUpgradeProgressGetRequestData data;
		MetaInfo* _metainfo_RemoteDeviceUpgradeProgressGetRequestData;
	};

	
	typedef typename RemoteDeviceUpgradeProgressGetRequest::RemoteDeviceUpgradeProgressGetRequestData RemoteDeviceUpgradeProgressGetRequestData;


	class RemoteDeviceUpgradeProgressGetResponse : public LCOpenApiResponse
	{
	public:
		class RemoteDeviceUpgradeProgressGetResponseData
		{
		public:
			RemoteDeviceUpgradeProgressGetResponseData();
			~RemoteDeviceUpgradeProgressGetResponseData();
			
		public:
			/** 升级状态 */
			string status;
		public:
			/** 当前版本 */
			string version;
		public:
			/** 当前正在进行的百分比 */
			string percent;

		};
	public:
		RemoteDeviceUpgradeProgressGetResponse();
		~RemoteDeviceUpgradeProgressGetResponse();
	public:
		virtual int parse();
	public:
		RemoteDeviceUpgradeProgressGetResponseData data;
		MetaInfo* _metainfo_RemoteDeviceUpgradeProgressGetResponseData;
	};

	
	typedef typename RemoteDeviceUpgradeProgressGetResponse::RemoteDeviceUpgradeProgressGetResponseData RemoteDeviceUpgradeProgressGetResponseData;

}
}

#endif
