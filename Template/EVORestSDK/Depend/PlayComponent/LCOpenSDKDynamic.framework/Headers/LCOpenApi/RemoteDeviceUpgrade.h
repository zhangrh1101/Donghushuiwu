/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_RemoteDeviceUpgrade_H_
#define _LC_OPENAPI_CLIENT_RemoteDeviceUpgrade_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取检测wifi网络的地址
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class RemoteDeviceUpgradeRequest : public LCOpenApiRequest
	{
	public:
		class RemoteDeviceUpgradeRequestData
		{
		public:
			RemoteDeviceUpgradeRequestData();
			~RemoteDeviceUpgradeRequestData();
			
		public:
			/** xxx */
			string token;

		};
	public:
		RemoteDeviceUpgradeRequest();
		~RemoteDeviceUpgradeRequest();
	public:
		virtual int build();
	public:
		RemoteDeviceUpgradeRequestData data;
		MetaInfo* _metainfo_RemoteDeviceUpgradeRequestData;
	};

	
	typedef typename RemoteDeviceUpgradeRequest::RemoteDeviceUpgradeRequestData RemoteDeviceUpgradeRequestData;


	class RemoteDeviceUpgradeResponse : public LCOpenApiResponse
	{
	public:
		class RemoteDeviceUpgradeResponseData
		{
		public:
			RemoteDeviceUpgradeResponseData();
			~RemoteDeviceUpgradeResponseData();
			
		public:
			/** 检测wifi服务的地址 */
			string addr;

		};
	public:
		RemoteDeviceUpgradeResponse();
		~RemoteDeviceUpgradeResponse();
	public:
		virtual int parse();
	public:
		RemoteDeviceUpgradeResponseData data;
		MetaInfo* _metainfo_RemoteDeviceUpgradeResponseData;
	};

	
	typedef typename RemoteDeviceUpgradeResponse::RemoteDeviceUpgradeResponseData RemoteDeviceUpgradeResponseData;

}
}

#endif
