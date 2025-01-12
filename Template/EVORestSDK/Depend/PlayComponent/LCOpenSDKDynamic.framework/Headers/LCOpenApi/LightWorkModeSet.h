/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_LightWorkModeSet_H_
#define _LC_OPENAPI_CLIENT_LightWorkModeSet_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
探照灯模式设置
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class LightWorkModeSetRequest : public LCOpenApiRequest
	{
	public:
		class LightWorkModeSetRequestData
		{
		public:
			LightWorkModeSetRequestData();
			~LightWorkModeSetRequestData();
			
		public:
			/** 为空或floodlight表示设置探照灯的工作模式 */
			string type;
		public:
			/** 探照灯模式对应的索引值，有效值大于等于0 */
			string index;
		public:
			/** 通道。为空为设备级操作（需要设备支持通道探照灯能力 ChanSearchLight）；不为空则为通道级操作 */
			string channelId;
		public:
			/** 授权的token(userToken或accessToken) */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		LightWorkModeSetRequest();
		~LightWorkModeSetRequest();
	public:
		virtual int build();
	public:
		LightWorkModeSetRequestData data;
		MetaInfo* _metainfo_LightWorkModeSetRequestData;
	};

	
	typedef typename LightWorkModeSetRequest::LightWorkModeSetRequestData LightWorkModeSetRequestData;


	class LightWorkModeSetResponse : public LCOpenApiResponse
	{
	public:
		class LightWorkModeSetResponseData
		{
		public:
			LightWorkModeSetResponseData();
			~LightWorkModeSetResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		LightWorkModeSetResponse();
		~LightWorkModeSetResponse();
	public:
		virtual int parse();
	public:
		LightWorkModeSetResponseData data;
		MetaInfo* _metainfo_LightWorkModeSetResponseData;
	};

	
	typedef typename LightWorkModeSetResponse::LightWorkModeSetResponseData LightWorkModeSetResponseData;

}
}

#endif
