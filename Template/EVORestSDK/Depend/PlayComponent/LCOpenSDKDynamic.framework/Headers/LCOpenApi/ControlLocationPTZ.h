/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_ControlLocationPTZ_H_
#define _LC_OPENAPI_CLIENT_ControlLocationPTZ_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
第二版云台定位接口

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class ControlLocationPTZRequest : public LCOpenApiRequest
	{
	public:
		class ControlLocationPTZRequestData
		{
		public:
			ControlLocationPTZRequestData();
			~ControlLocationPTZRequestData();
			
		public:
			/** [double]水平操作参数 */
			double h;
		public:
			/** [cstr]controlLocationPTZ */
			#define _STATIC_ControlLocationPTZRequestData_method "controlLocationPTZ"
			string method;
		public:
			/** [double]变倍参数 */
			double z;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 通道号 */
			string channelId;
		public:
			/** [double]垂直操作参数 */
			double v;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		ControlLocationPTZRequest();
		~ControlLocationPTZRequest();
	public:
		virtual int build();
	public:
		ControlLocationPTZRequestData data;
		MetaInfo* _metainfo_ControlLocationPTZRequestData;
	};

	
	typedef typename ControlLocationPTZRequest::ControlLocationPTZRequestData ControlLocationPTZRequestData;


	class ControlLocationPTZResponse : public LCOpenApiResponse
	{
	public:
		class ControlLocationPTZResponseData
		{
		public:
			ControlLocationPTZResponseData();
			~ControlLocationPTZResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		ControlLocationPTZResponse();
		~ControlLocationPTZResponse();
	public:
		virtual int parse();
	public:
		ControlLocationPTZResponseData data;
		MetaInfo* _metainfo_ControlLocationPTZResponseData;
	};

	
	typedef typename ControlLocationPTZResponse::ControlLocationPTZResponseData ControlLocationPTZResponseData;

}
}

#endif
