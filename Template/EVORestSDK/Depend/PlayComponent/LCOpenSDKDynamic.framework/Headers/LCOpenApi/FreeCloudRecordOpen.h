/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_FreeCloudRecordOpen_H_
#define _LC_OPENAPI_CLIENT_FreeCloudRecordOpen_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设备通道开通免费云存储套餐
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class FreeCloudRecordOpenRequest : public LCOpenApiRequest
	{
	public:
		class FreeCloudRecordOpenRequestData
		{
		public:
			FreeCloudRecordOpenRequestData();
			~FreeCloudRecordOpenRequestData();
			
		public:
			/** [long]云服务套餐id */
			int64 strategyId;
		public:
			/** 通道号 */
			string channelId;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		FreeCloudRecordOpenRequest();
		~FreeCloudRecordOpenRequest();
	public:
		virtual int build();
	public:
		FreeCloudRecordOpenRequestData data;
		MetaInfo* _metainfo_FreeCloudRecordOpenRequestData;
	};

	
	typedef typename FreeCloudRecordOpenRequest::FreeCloudRecordOpenRequestData FreeCloudRecordOpenRequestData;


	class FreeCloudRecordOpenResponse : public LCOpenApiResponse
	{
	public:
		class FreeCloudRecordOpenResponseData
		{
		public:
			FreeCloudRecordOpenResponseData();
			~FreeCloudRecordOpenResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		FreeCloudRecordOpenResponse();
		~FreeCloudRecordOpenResponse();
	public:
		virtual int parse();
	public:
		FreeCloudRecordOpenResponseData data;
		MetaInfo* _metainfo_FreeCloudRecordOpenResponseData;
	};

	
	typedef typename FreeCloudRecordOpenResponse::FreeCloudRecordOpenResponseData FreeCloudRecordOpenResponseData;

}
}

#endif
