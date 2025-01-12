/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_LightWorkModeList_H_
#define _LC_OPENAPI_CLIENT_LightWorkModeList_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取灯类设备所有工作模式和当前的工作模式
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class LightWorkModeListRequest : public LCOpenApiRequest
	{
	public:
		class LightWorkModeListRequestData
		{
		public:
			LightWorkModeListRequestData();
			~LightWorkModeListRequestData();
			
		public:
			/** 为空或floodlight表示查询探照灯的工作模式和当前的工作模式 */
			string type;
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
		LightWorkModeListRequest();
		~LightWorkModeListRequest();
	public:
		virtual int build();
	public:
		LightWorkModeListRequestData data;
		MetaInfo* _metainfo_LightWorkModeListRequestData;
	};

	
	typedef typename LightWorkModeListRequest::LightWorkModeListRequestData LightWorkModeListRequestData;


	class LightWorkModeListResponse : public LCOpenApiResponse
	{
	public:
		class LightWorkModeListResponseData
		{
		public:
			LightWorkModeListResponseData();
			~LightWorkModeListResponseData();
			
		public:
			/** 模式对应的索引值，有效值大于等于0 */
			string index;
		public:
			/** define a list with struct of LightWorkModeListResponseData_ValuesElement */
			class LightWorkModeListResponseData_ValuesElement : public LCOpenApiBase
			{
			public:
				LightWorkModeListResponseData_ValuesElement();
				~LightWorkModeListResponseData_ValuesElement();
			public:
				/** 探照灯模式对应的索引值，有效值大于等于0，从0顺序递增 */
				string index;
			public:
				/** 探照灯模式: manual：通用模式,motion activation：PIR联动模式,dusk to dawn：光敏联动模式 */
				string mode;
			};
		public:
			LCOpenApiVector<LightWorkModeListResponseData_ValuesElement> values;

		};
	public:
		LightWorkModeListResponse();
		~LightWorkModeListResponse();
	public:
		virtual int parse();
	public:
		LightWorkModeListResponseData data;
		MetaInfo* _metainfo_LightWorkModeListResponseData;
	};

	
	typedef typename LightWorkModeListResponse::LightWorkModeListResponseData LightWorkModeListResponseData;
	typedef typename LightWorkModeListResponse::LightWorkModeListResponseData::LightWorkModeListResponseData_ValuesElement LightWorkModeListResponseData_ValuesElement;

}
}

#endif
