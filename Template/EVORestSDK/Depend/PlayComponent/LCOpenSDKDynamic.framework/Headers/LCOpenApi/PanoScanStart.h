/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_PanoScanStart_H_
#define _LC_OPENAPI_CLIENT_PanoScanStart_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
开始全景云台扫描
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class PanoScanStartRequest : public LCOpenApiRequest
	{
	public:
		class PanoScanStartRequestData
		{
		public:
			PanoScanStartRequestData();
			~PanoScanStartRequestData();
			
		public:
			/** 密钥 */
			string secretKey;
		public:
			/** xxx */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		PanoScanStartRequest();
		~PanoScanStartRequest();
	public:
		virtual int build();
	public:
		PanoScanStartRequestData data;
		MetaInfo* _metainfo_PanoScanStartRequestData;
	};

	
	typedef typename PanoScanStartRequest::PanoScanStartRequestData PanoScanStartRequestData;


	class PanoScanStartResponse : public LCOpenApiResponse
	{
	public:
		class PanoScanStartResponseData
		{
		public:
			PanoScanStartResponseData();
			~PanoScanStartResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		PanoScanStartResponse();
		~PanoScanStartResponse();
	public:
		virtual int parse();
	public:
		PanoScanStartResponseData data;
		MetaInfo* _metainfo_PanoScanStartResponseData;
	};

	
	typedef typename PanoScanStartResponse::PanoScanStartResponseData PanoScanStartResponseData;

}
}

#endif
