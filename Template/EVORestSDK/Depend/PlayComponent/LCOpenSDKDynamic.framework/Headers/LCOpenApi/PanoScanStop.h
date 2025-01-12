/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_PanoScanStop_H_
#define _LC_OPENAPI_CLIENT_PanoScanStop_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
停止全景云台扫描
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class PanoScanStopRequest : public LCOpenApiRequest
	{
	public:
		class PanoScanStopRequestData
		{
		public:
			PanoScanStopRequestData();
			~PanoScanStopRequestData();
			
		public:
			/** xxx */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		PanoScanStopRequest();
		~PanoScanStopRequest();
	public:
		virtual int build();
	public:
		PanoScanStopRequestData data;
		MetaInfo* _metainfo_PanoScanStopRequestData;
	};

	
	typedef typename PanoScanStopRequest::PanoScanStopRequestData PanoScanStopRequestData;


	class PanoScanStopResponse : public LCOpenApiResponse
	{
	public:
		class PanoScanStopResponseData
		{
		public:
			PanoScanStopResponseData();
			~PanoScanStopResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		PanoScanStopResponse();
		~PanoScanStopResponse();
	public:
		virtual int parse();
	public:
		PanoScanStopResponseData data;
		MetaInfo* _metainfo_PanoScanStopResponseData;
	};

	
	typedef typename PanoScanStopResponse::PanoScanStopResponseData PanoScanStopResponseData;

}
}

#endif
