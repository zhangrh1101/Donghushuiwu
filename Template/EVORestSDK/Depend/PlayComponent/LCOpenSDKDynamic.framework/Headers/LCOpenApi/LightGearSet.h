/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_LightGearSet_H_
#define _LC_OPENAPI_CLIENT_LightGearSet_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置灯类设备的档位
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class LightGearSetRequest : public LCOpenApiRequest
	{
	public:
		class LightGearSetRequestData
		{
		public:
			LightGearSetRequestData();
			~LightGearSetRequestData();
			
		public:
			/** 档位类型数组 */
			string type;
		public:
			/** 授权的token(userToken或accessToken) */
			string token;
		public:
			/** 档位值 */
			string value;
		public:
			/** 通道,不存在默认为设备 */
			string channelId;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		LightGearSetRequest();
		~LightGearSetRequest();
	public:
		virtual int build();
	public:
		LightGearSetRequestData data;
		MetaInfo* _metainfo_LightGearSetRequestData;
	};

	
	typedef typename LightGearSetRequest::LightGearSetRequestData LightGearSetRequestData;


	class LightGearSetResponse : public LCOpenApiResponse
	{
	public:
		class LightGearSetResponseData
		{
		public:
			LightGearSetResponseData();
			~LightGearSetResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		LightGearSetResponse();
		~LightGearSetResponse();
	public:
		virtual int parse();
	public:
		LightGearSetResponseData data;
		MetaInfo* _metainfo_LightGearSetResponseData;
	};

	
	typedef typename LightGearSetResponse::LightGearSetResponseData LightGearSetResponseData;

}
}

#endif
