/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_PanoLocationControl_H_
#define _LC_OPENAPI_CLIENT_PanoLocationControl_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
根据全景图位置控制PTZ，定位到某个方位
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class PanoLocationControlRequest : public LCOpenApiRequest
	{
	public:
		class PanoLocationControlRequestData
		{
		public:
			PanoLocationControlRequestData();
			~PanoLocationControlRequestData();
			
		public:
			/** 全景图Y坐标，单位为像素，Y轴从上往下 */
			string y;
		public:
			/** 全景图X坐标，单位为像素，X轴从左往右 */
			string x;
		public:
			/** xxx */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		PanoLocationControlRequest();
		~PanoLocationControlRequest();
	public:
		virtual int build();
	public:
		PanoLocationControlRequestData data;
		MetaInfo* _metainfo_PanoLocationControlRequestData;
	};

	
	typedef typename PanoLocationControlRequest::PanoLocationControlRequestData PanoLocationControlRequestData;


	class PanoLocationControlResponse : public LCOpenApiResponse
	{
	public:
		class PanoLocationControlResponseData
		{
		public:
			PanoLocationControlResponseData();
			~PanoLocationControlResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		PanoLocationControlResponse();
		~PanoLocationControlResponse();
	public:
		virtual int parse();
	public:
		PanoLocationControlResponseData data;
		MetaInfo* _metainfo_PanoLocationControlResponseData;
	};

	
	typedef typename PanoLocationControlResponse::PanoLocationControlResponseData PanoLocationControlResponseData;

}
}

#endif
