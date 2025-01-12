/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_PanoScanProgressGet_H_
#define _LC_OPENAPI_CLIENT_PanoScanProgressGet_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取全景扫描的进度
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class PanoScanProgressGetRequest : public LCOpenApiRequest
	{
	public:
		class PanoScanProgressGetRequestData
		{
		public:
			PanoScanProgressGetRequestData();
			~PanoScanProgressGetRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		PanoScanProgressGetRequest();
		~PanoScanProgressGetRequest();
	public:
		virtual int build();
	public:
		PanoScanProgressGetRequestData data;
		MetaInfo* _metainfo_PanoScanProgressGetRequestData;
	};

	
	typedef typename PanoScanProgressGetRequest::PanoScanProgressGetRequestData PanoScanProgressGetRequestData;


	class PanoScanProgressGetResponse : public LCOpenApiResponse
	{
	public:
		class PanoScanProgressGetResponseData
		{
		public:
			PanoScanProgressGetResponseData();
			~PanoScanProgressGetResponseData();
			
		public:
			/** 进度百分比 */
			string percent;

		};
	public:
		PanoScanProgressGetResponse();
		~PanoScanProgressGetResponse();
	public:
		virtual int parse();
	public:
		PanoScanProgressGetResponseData data;
		MetaInfo* _metainfo_PanoScanProgressGetResponseData;
	};

	
	typedef typename PanoScanProgressGetResponse::PanoScanProgressGetResponseData PanoScanProgressGetResponseData;

}
}

#endif
