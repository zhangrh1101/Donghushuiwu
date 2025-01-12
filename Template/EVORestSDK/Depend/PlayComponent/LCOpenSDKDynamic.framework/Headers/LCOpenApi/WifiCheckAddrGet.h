/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_WifiCheckAddrGet_H_
#define _LC_OPENAPI_CLIENT_WifiCheckAddrGet_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
远程设备升级
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class WifiCheckAddrGetRequest : public LCOpenApiRequest
	{
	public:
		class WifiCheckAddrGetRequestData
		{
		public:
			WifiCheckAddrGetRequestData();
			~WifiCheckAddrGetRequestData();
			
		public:
			/** xxx */
			string token;

		};
	public:
		WifiCheckAddrGetRequest();
		~WifiCheckAddrGetRequest();
	public:
		virtual int build();
	public:
		WifiCheckAddrGetRequestData data;
		MetaInfo* _metainfo_WifiCheckAddrGetRequestData;
	};

	
	typedef typename WifiCheckAddrGetRequest::WifiCheckAddrGetRequestData WifiCheckAddrGetRequestData;


	class WifiCheckAddrGetResponse : public LCOpenApiResponse
	{
	public:
		class WifiCheckAddrGetResponseData
		{
		public:
			WifiCheckAddrGetResponseData();
			~WifiCheckAddrGetResponseData();
			
		public:
			/** 检测wifi服务的地址 */
			string addr;

		};
	public:
		WifiCheckAddrGetResponse();
		~WifiCheckAddrGetResponse();
	public:
		virtual int parse();
	public:
		WifiCheckAddrGetResponseData data;
		MetaInfo* _metainfo_WifiCheckAddrGetResponseData;
	};

	
	typedef typename WifiCheckAddrGetResponse::WifiCheckAddrGetResponseData WifiCheckAddrGetResponseData;

}
}

#endif
