/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SetAllStorageStrategy_H_
#define _LC_OPENAPI_CLIENT_SetAllStorageStrategy_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置云存储套餐开或关

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class SetAllStorageStrategyRequest : public LCOpenApiRequest
	{
	public:
		class SetAllStorageStrategyRequestData
		{
		public:
			SetAllStorageStrategyRequestData();
			~SetAllStorageStrategyRequestData();
			
		public:
			/** 状态，1表示开启，0表示关闭 */
			string status;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		SetAllStorageStrategyRequest();
		~SetAllStorageStrategyRequest();
	public:
		virtual int build();
	public:
		SetAllStorageStrategyRequestData data;
		MetaInfo* _metainfo_SetAllStorageStrategyRequestData;
	};

	
	typedef typename SetAllStorageStrategyRequest::SetAllStorageStrategyRequestData SetAllStorageStrategyRequestData;


	class SetAllStorageStrategyResponse : public LCOpenApiResponse
	{
	public:
		class SetAllStorageStrategyResponseData
		{
		public:
			SetAllStorageStrategyResponseData();
			~SetAllStorageStrategyResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		SetAllStorageStrategyResponse();
		~SetAllStorageStrategyResponse();
	public:
		virtual int parse();
	public:
		SetAllStorageStrategyResponseData data;
		MetaInfo* _metainfo_SetAllStorageStrategyResponseData;
	};

	
	typedef typename SetAllStorageStrategyResponse::SetAllStorageStrategyResponseData SetAllStorageStrategyResponseData;

}
}

#endif
