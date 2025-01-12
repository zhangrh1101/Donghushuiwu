/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_LightGearList_H_
#define _LC_OPENAPI_CLIENT_LightGearList_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取灯类设备的档位信息
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class LightGearListRequest : public LCOpenApiRequest
	{
	public:
		class LightGearListRequestData
		{
		public:
			LightGearListRequestData();
			~LightGearListRequestData();
			
		public:
			/** 档位类型数组 */
			LCOpenApiVector<string> type;
		public:
			/** 通道,不存在默认为设备 */
			string channelId;
		public:
			/** 授权的token(userToken或accessToken) */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		LightGearListRequest();
		~LightGearListRequest();
	public:
		virtual int build();
	public:
		LightGearListRequestData data;
		MetaInfo* _metainfo_LightGearListRequestData;
	};

	
	typedef typename LightGearListRequest::LightGearListRequestData LightGearListRequestData;


	class LightGearListResponse : public LCOpenApiResponse
	{
	public:
		class LightGearListResponseData
		{
		public:
			LightGearListResponseData();
			~LightGearListResponseData();
			
		public:
			/** define a list with struct of LightGearListResponseData_GearElement */
			class LightGearListResponseData_GearElement : public LCOpenApiBase
			{
			public:
				LightGearListResponseData_GearElement();
				~LightGearListResponseData_GearElement();
			public:
				/** 档位值 */
				string value;
			public:
				/** 档位类型 */
				string type;
			};
		public:
			LCOpenApiVector<LightGearListResponseData_GearElement> gear;

		};
	public:
		LightGearListResponse();
		~LightGearListResponse();
	public:
		virtual int parse();
	public:
		LightGearListResponseData data;
		MetaInfo* _metainfo_LightGearListResponseData;
	};

	
	typedef typename LightGearListResponse::LightGearListResponseData LightGearListResponseData;
	typedef typename LightGearListResponse::LightGearListResponseData::LightGearListResponseData_GearElement LightGearListResponseData_GearElement;

}
}

#endif
