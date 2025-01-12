/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_LightTimeSet_H_
#define _LC_OPENAPI_CLIENT_LightTimeSet_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置探照灯亮灯时长
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class LightTimeSetRequest : public LCOpenApiRequest
	{
	public:
		class LightTimeSetRequestData
		{
		public:
			LightTimeSetRequestData();
			~LightTimeSetRequestData();
			
		public:
			/** 探照灯时长对应的索引值，有效值大于等于0 */
			string index;
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
		LightTimeSetRequest();
		~LightTimeSetRequest();
	public:
		virtual int build();
	public:
		LightTimeSetRequestData data;
		MetaInfo* _metainfo_LightTimeSetRequestData;
	};

	
	typedef typename LightTimeSetRequest::LightTimeSetRequestData LightTimeSetRequestData;


	class LightTimeSetResponse : public LCOpenApiResponse
	{
	public:
		class LightTimeSetResponseData
		{
		public:
			LightTimeSetResponseData();
			~LightTimeSetResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		LightTimeSetResponse();
		~LightTimeSetResponse();
	public:
		virtual int parse();
	public:
		LightTimeSetResponseData data;
		MetaInfo* _metainfo_LightTimeSetResponseData;
	};

	
	typedef typename LightTimeSetResponse::LightTimeSetResponseData LightTimeSetResponseData;

}
}

#endif
