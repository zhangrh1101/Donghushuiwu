/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_ExShareDeviceDelete_H_
#define _LC_OPENAPI_CLIENT_ExShareDeviceDelete_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
删除设备分享权限
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class ExShareDeviceDeleteRequest : public LCOpenApiRequest
	{
	public:
		class ExShareDeviceDeleteRequestData
		{
		public:
			ExShareDeviceDeleteRequestData();
			~ExShareDeviceDeleteRequestData();
			
		public:
			/** 授权token */
			string token;
		public:
			/** 分享的功能 */
			string functions;
		public:
			/** phone */
			string accountType;
		public:
			/** 被分享账号 */
			string account;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		ExShareDeviceDeleteRequest();
		~ExShareDeviceDeleteRequest();
	public:
		virtual int build();
	public:
		ExShareDeviceDeleteRequestData data;
		MetaInfo* _metainfo_ExShareDeviceDeleteRequestData;
	};

	
	typedef typename ExShareDeviceDeleteRequest::ExShareDeviceDeleteRequestData ExShareDeviceDeleteRequestData;


	class ExShareDeviceDeleteResponse : public LCOpenApiResponse
	{
	public:
		class ExShareDeviceDeleteResponseData
		{
		public:
			ExShareDeviceDeleteResponseData();
			~ExShareDeviceDeleteResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		ExShareDeviceDeleteResponse();
		~ExShareDeviceDeleteResponse();
	public:
		virtual int parse();
	public:
		ExShareDeviceDeleteResponseData data;
		MetaInfo* _metainfo_ExShareDeviceDeleteResponseData;
	};

	
	typedef typename ExShareDeviceDeleteResponse::ExShareDeviceDeleteResponseData ExShareDeviceDeleteResponseData;

}
}

#endif
