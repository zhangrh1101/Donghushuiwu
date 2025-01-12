/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SetSoundVolumeSize_H_
#define _LC_OPENAPI_CLIENT_SetSoundVolumeSize_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
type=playsound 设置在线设备提示音量分贝,需要设备拥有PlaySoundModify设备提示音调节能力 
type=decible 设置在线设备异常检测音分贝,需要设备拥有AbAlarmSound异常报警音能力和CheckAbDecible异常检测音分贝阈值能力

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class SetSoundVolumeSizeRequest : public LCOpenApiRequest
	{
	public:
		class SetSoundVolumeSizeRequestData
		{
		public:
			SetSoundVolumeSizeRequestData();
			~SetSoundVolumeSizeRequestData();
			
		public:
			/** 设备音量类型,playsound:提示音 decible:异常检测音 */
			string type;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 通道下挂载设备的序列号,channelSn与channelId均存在则优先channelSn */
			string channelSn;
		public:
			/** 设备分贝大小,单位跟取值范围跟具体设备有关 */
			string value;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** [cstr]setSoundVolumeSize */
			#define _STATIC_SetSoundVolumeSizeRequestData_method "setSoundVolumeSize"
			string method;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		SetSoundVolumeSizeRequest();
		~SetSoundVolumeSizeRequest();
	public:
		virtual int build();
	public:
		SetSoundVolumeSizeRequestData data;
		MetaInfo* _metainfo_SetSoundVolumeSizeRequestData;
	};

	
	typedef typename SetSoundVolumeSizeRequest::SetSoundVolumeSizeRequestData SetSoundVolumeSizeRequestData;


	class SetSoundVolumeSizeResponse : public LCOpenApiResponse
	{
	public:
		class SetSoundVolumeSizeResponseData
		{
		public:
			SetSoundVolumeSizeResponseData();
			~SetSoundVolumeSizeResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		SetSoundVolumeSizeResponse();
		~SetSoundVolumeSizeResponse();
	public:
		virtual int parse();
	public:
		SetSoundVolumeSizeResponseData data;
		MetaInfo* _metainfo_SetSoundVolumeSizeResponseData;
	};

	
	typedef typename SetSoundVolumeSizeResponse::SetSoundVolumeSizeResponseData SetSoundVolumeSizeResponseData;

}
}

#endif
