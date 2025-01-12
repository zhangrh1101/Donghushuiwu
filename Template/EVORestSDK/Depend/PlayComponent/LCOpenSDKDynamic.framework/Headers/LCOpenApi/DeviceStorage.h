/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeviceStorage_H_
#define _LC_OPENAPI_CLIENT_DeviceStorage_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取设备存储介质容量信息
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DeviceStorageRequest : public LCOpenApiRequest
	{
	public:
		class DeviceStorageRequestData
		{
		public:
			DeviceStorageRequestData();
			~DeviceStorageRequestData();
			
		public:
			/** 可选，需要格式化的存储介质编号 */
			string index;
		public:
			/** 授权Token */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		DeviceStorageRequest();
		~DeviceStorageRequest();
	public:
		virtual int build();
	public:
		DeviceStorageRequestData data;
		MetaInfo* _metainfo_DeviceStorageRequestData;
	};

	
	typedef typename DeviceStorageRequest::DeviceStorageRequestData DeviceStorageRequestData;


	class DeviceStorageResponse : public LCOpenApiResponse
	{
	public:
		class DeviceStorageResponseData
		{
		public:
			DeviceStorageResponseData();
			~DeviceStorageResponseData();
			
		public:
			/** [long]总容量，单位为Byte */
			int64 totalBytes;
		public:
			/** [long]已使用容量，单位为Byte */
			int64 usedBytes;

		};
	public:
		DeviceStorageResponse();
		~DeviceStorageResponse();
	public:
		virtual int parse();
	public:
		DeviceStorageResponseData data;
		MetaInfo* _metainfo_DeviceStorageResponseData;
	};

	
	typedef typename DeviceStorageResponse::DeviceStorageResponseData DeviceStorageResponseData;

}
}

#endif
