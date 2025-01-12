/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_RefreshDeviceCover_H_
#define _LC_OPENAPI_CLIENT_RefreshDeviceCover_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设备/通道封面刷新

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class RefreshDeviceCoverRequest : public LCOpenApiRequest
	{
	public:
		class RefreshDeviceCoverRequestData
		{
		public:
			RefreshDeviceCoverRequestData();
			~RefreshDeviceCoverRequestData();
			
		public:
			/** [cstr]refreshDeviceCover */
			#define _STATIC_RefreshDeviceCoverRequestData_method "refreshDeviceCover"
			string method;
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
		RefreshDeviceCoverRequest();
		~RefreshDeviceCoverRequest();
	public:
		virtual int build();
	public:
		RefreshDeviceCoverRequestData data;
		MetaInfo* _metainfo_RefreshDeviceCoverRequestData;
	};

	
	typedef typename RefreshDeviceCoverRequest::RefreshDeviceCoverRequestData RefreshDeviceCoverRequestData;


	class RefreshDeviceCoverResponse : public LCOpenApiResponse
	{
	public:
		class RefreshDeviceCoverResponseData
		{
		public:
			RefreshDeviceCoverResponseData();
			~RefreshDeviceCoverResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		RefreshDeviceCoverResponse();
		~RefreshDeviceCoverResponse();
	public:
		virtual int parse();
	public:
		RefreshDeviceCoverResponseData data;
		MetaInfo* _metainfo_RefreshDeviceCoverResponseData;
	};

	
	typedef typename RefreshDeviceCoverResponse::RefreshDeviceCoverResponseData RefreshDeviceCoverResponseData;

}
}

#endif
