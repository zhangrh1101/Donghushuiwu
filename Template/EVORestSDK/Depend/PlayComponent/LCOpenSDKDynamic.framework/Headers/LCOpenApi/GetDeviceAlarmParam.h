/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetDeviceAlarmParam_H_
#define _LC_OPENAPI_CLIENT_GetDeviceAlarmParam_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取设备动检参数
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetDeviceAlarmParamRequest : public LCOpenApiRequest
	{
	public:
		class GetDeviceAlarmParamRequestData
		{
		public:
			GetDeviceAlarmParamRequestData();
			~GetDeviceAlarmParamRequestData();
			
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
		GetDeviceAlarmParamRequest();
		~GetDeviceAlarmParamRequest();
	public:
		virtual int build();
	public:
		GetDeviceAlarmParamRequestData data;
		MetaInfo* _metainfo_GetDeviceAlarmParamRequestData;
	};

	
	typedef typename GetDeviceAlarmParamRequest::GetDeviceAlarmParamRequestData GetDeviceAlarmParamRequestData;


	class GetDeviceAlarmParamResponse : public LCOpenApiResponse
	{
	public:
		class GetDeviceAlarmParamResponseData
		{
		public:
			GetDeviceAlarmParamResponseData();
			~GetDeviceAlarmParamResponseData();
			
		public:
			/** [int][O]表示档位，0表示设备不支持，未返回该字段 */
			int stall;
		public:
			/** 4194303, 3216384 */
			string region;
		public:
			/** [int]动态检测区域的列数（只读，设备能力） */
			int column;
		public:
			/** [int] */
			int threshold;
		public:
			/** [int]动态检测区域的行数（只读，设备能力） */
			int row;
		public:
			/** [int]灵敏度,目前支持5个档位 1灵敏度最低 5灵敏度最高 */
			int sensitive;

		};
	public:
		GetDeviceAlarmParamResponse();
		~GetDeviceAlarmParamResponse();
	public:
		virtual int parse();
	public:
		GetDeviceAlarmParamResponseData data;
		MetaInfo* _metainfo_GetDeviceAlarmParamResponseData;
	};

	
	typedef typename GetDeviceAlarmParamResponse::GetDeviceAlarmParamResponseData GetDeviceAlarmParamResponseData;

}
}

#endif
