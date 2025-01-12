/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SirenStop_H_
#define _LC_OPENAPI_CLIENT_SirenStop_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
停止警笛
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class SirenStopRequest : public LCOpenApiRequest
	{
	public:
		class SirenStopRequestData
		{
		public:
			SirenStopRequestData();
			~SirenStopRequestData();
			
		public:
			/** [int]设备通道号，从0开始.针对设备级的开启操作，channels这个参数不需要传值 */
			LCOpenApiVector<int> channels;
		public:
			/** xxx */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		SirenStopRequest();
		~SirenStopRequest();
	public:
		virtual int build();
	public:
		SirenStopRequestData data;
		MetaInfo* _metainfo_SirenStopRequestData;
	};

	
	typedef typename SirenStopRequest::SirenStopRequestData SirenStopRequestData;


	class SirenStopResponse : public LCOpenApiResponse
	{
	public:
		class SirenStopResponseData
		{
		public:
			SirenStopResponseData();
			~SirenStopResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		SirenStopResponse();
		~SirenStopResponse();
	public:
		virtual int parse();
	public:
		SirenStopResponseData data;
		MetaInfo* _metainfo_SirenStopResponseData;
	};

	
	typedef typename SirenStopResponse::SirenStopResponseData SirenStopResponseData;

}
}

#endif
