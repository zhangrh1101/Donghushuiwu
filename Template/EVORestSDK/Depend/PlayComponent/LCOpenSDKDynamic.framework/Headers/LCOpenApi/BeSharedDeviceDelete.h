/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_BeSharedDeviceDelete_H_
#define _LC_OPENAPI_CLIENT_BeSharedDeviceDelete_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
删除被分享的设备权限（别人分享给我的设备）
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class BeSharedDeviceDeleteRequest : public LCOpenApiRequest
	{
	public:
		class BeSharedDeviceDeleteRequestData
		{
		public:
			BeSharedDeviceDeleteRequestData();
			~BeSharedDeviceDeleteRequestData();
			
		public:
			/** 分享的功能 */
			string functions;
		public:
			/** 授权token */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		BeSharedDeviceDeleteRequest();
		~BeSharedDeviceDeleteRequest();
	public:
		virtual int build();
	public:
		BeSharedDeviceDeleteRequestData data;
		MetaInfo* _metainfo_BeSharedDeviceDeleteRequestData;
	};

	
	typedef typename BeSharedDeviceDeleteRequest::BeSharedDeviceDeleteRequestData BeSharedDeviceDeleteRequestData;


	class BeSharedDeviceDeleteResponse : public LCOpenApiResponse
	{
	public:
		class BeSharedDeviceDeleteResponseData
		{
		public:
			BeSharedDeviceDeleteResponseData();
			~BeSharedDeviceDeleteResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		BeSharedDeviceDeleteResponse();
		~BeSharedDeviceDeleteResponse();
	public:
		virtual int parse();
	public:
		BeSharedDeviceDeleteResponseData data;
		MetaInfo* _metainfo_BeSharedDeviceDeleteResponseData;
	};

	
	typedef typename BeSharedDeviceDeleteResponse::BeSharedDeviceDeleteResponseData BeSharedDeviceDeleteResponseData;

}
}

#endif
