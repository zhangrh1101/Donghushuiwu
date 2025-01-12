/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_LightTimeGet_H_
#define _LC_OPENAPI_CLIENT_LightTimeGet_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取亮灯时长
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class LightTimeGetRequest : public LCOpenApiRequest
	{
	public:
		class LightTimeGetRequestData
		{
		public:
			LightTimeGetRequestData();
			~LightTimeGetRequestData();
			
		public:
			/** 为空或floodlight表示查询探照灯的工作模式和当前的工作模式 */
			string type;
		public:
			/** 授权的token(userToken或accessToken) */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		LightTimeGetRequest();
		~LightTimeGetRequest();
	public:
		virtual int build();
	public:
		LightTimeGetRequestData data;
		MetaInfo* _metainfo_LightTimeGetRequestData;
	};

	
	typedef typename LightTimeGetRequest::LightTimeGetRequestData LightTimeGetRequestData;


	class LightTimeGetResponse : public LCOpenApiResponse
	{
	public:
		class LightTimeGetResponseData
		{
		public:
			LightTimeGetResponseData();
			~LightTimeGetResponseData();
			
		public:
			/** 模式对应的索引值，有效值大于等于0 */
			string index;
		public:
			/** define a list with struct of LightTimeGetResponseData_ValuesElement */
			class LightTimeGetResponseData_ValuesElement : public LCOpenApiBase
			{
			public:
				LightTimeGetResponseData_ValuesElement();
				~LightTimeGetResponseData_ValuesElement();
			public:
				/** 探照灯模式对应的索引值，有效值大于等于0，从0顺序递增 */
				string index;
			public:
				/** 探照灯模式: manual：通用模式,motion activation：PIR联动模式,dusk to dawn：光敏联动模式 */
				string time;
			};
		public:
			LCOpenApiVector<LightTimeGetResponseData_ValuesElement> values;

		};
	public:
		LightTimeGetResponse();
		~LightTimeGetResponse();
	public:
		virtual int parse();
	public:
		LightTimeGetResponseData data;
		MetaInfo* _metainfo_LightTimeGetResponseData;
	};

	
	typedef typename LightTimeGetResponse::LightTimeGetResponseData LightTimeGetResponseData;
	typedef typename LightTimeGetResponse::LightTimeGetResponseData::LightTimeGetResponseData_ValuesElement LightTimeGetResponseData_ValuesElement;

}
}

#endif
