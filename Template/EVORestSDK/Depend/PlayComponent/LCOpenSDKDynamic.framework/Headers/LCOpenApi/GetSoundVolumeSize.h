/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetSoundVolumeSize_H_
#define _LC_OPENAPI_CLIENT_GetSoundVolumeSize_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
type=playsound 获取在线设备提示音量分贝,需要设备拥有PlaySoundModify设备提示音调节能力
type=decible 获取在线设备异常检测音分贝,需要设备拥有AbAlarmSound异常报警音能力和CheckAbDecible异常检测音分贝阈值能力

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetSoundVolumeSizeRequest : public LCOpenApiRequest
	{
	public:
		class GetSoundVolumeSizeRequestData
		{
		public:
			GetSoundVolumeSizeRequestData();
			~GetSoundVolumeSizeRequestData();
			
		public:
			/** 通道下挂载设备的序列号,channelSn与channelId均存在则优先channelSn */
			string channelSn;
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
		GetSoundVolumeSizeRequest();
		~GetSoundVolumeSizeRequest();
	public:
		virtual int build();
	public:
		GetSoundVolumeSizeRequestData data;
		MetaInfo* _metainfo_GetSoundVolumeSizeRequestData;
	};

	
	typedef typename GetSoundVolumeSizeRequest::GetSoundVolumeSizeRequestData GetSoundVolumeSizeRequestData;


	class GetSoundVolumeSizeResponse : public LCOpenApiResponse
	{
	public:
		class GetSoundVolumeSizeResponseData
		{
		public:
			GetSoundVolumeSizeResponseData();
			~GetSoundVolumeSizeResponseData();
			
		public:
			/** 音量大小 */
			string value;

		};
	public:
		GetSoundVolumeSizeResponse();
		~GetSoundVolumeSizeResponse();
	public:
		virtual int parse();
	public:
		GetSoundVolumeSizeResponseData data;
		MetaInfo* _metainfo_GetSoundVolumeSizeResponseData;
	};

	
	typedef typename GetSoundVolumeSizeResponse::GetSoundVolumeSizeResponseData GetSoundVolumeSizeResponseData;

}
}

#endif
