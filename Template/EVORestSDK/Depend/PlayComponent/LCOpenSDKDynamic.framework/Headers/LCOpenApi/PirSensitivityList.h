/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_PirSensitivityList_H_
#define _LC_OPENAPI_CLIENT_PirSensitivityList_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取PIR灵敏度
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class PirSensitivityListRequest : public LCOpenApiRequest
	{
	public:
		class PirSensitivityListRequestData
		{
		public:
			PirSensitivityListRequestData();
			~PirSensitivityListRequestData();
			
		public:
			/** xxx */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		PirSensitivityListRequest();
		~PirSensitivityListRequest();
	public:
		virtual int build();
	public:
		PirSensitivityListRequestData data;
		MetaInfo* _metainfo_PirSensitivityListRequestData;
	};

	
	typedef typename PirSensitivityListRequest::PirSensitivityListRequestData PirSensitivityListRequestData;


	class PirSensitivityListResponse : public LCOpenApiResponse
	{
	public:
		class PirSensitivityListResponseData
		{
		public:
			PirSensitivityListResponseData();
			~PirSensitivityListResponseData();
			
		public:
			/** define a list with struct of PirSensitivityListResponseData_ShapedEnableElement */
			class PirSensitivityListResponseData_ShapedEnableElement : public LCOpenApiBase
			{
			public:
				PirSensitivityListResponseData_ShapedEnableElement();
				~PirSensitivityListResponseData_ShapedEnableElement();
			public:
				/** [int]小扇形的索引值，从0开始 */
				int index;
			public:
				/** on-开启 off-关闭 */
				string enable;
			};
		public:
			LCOpenApiVector<PirSensitivityListResponseData_ShapedEnableElement> shapedEnable;
		public:
			/** [int]取值范围[0,100]，检测半径的百分比 */
			int sensitivity;

		};
	public:
		PirSensitivityListResponse();
		~PirSensitivityListResponse();
	public:
		virtual int parse();
	public:
		PirSensitivityListResponseData data;
		MetaInfo* _metainfo_PirSensitivityListResponseData;
	};

	
	typedef typename PirSensitivityListResponse::PirSensitivityListResponseData PirSensitivityListResponseData;
	typedef typename PirSensitivityListResponse::PirSensitivityListResponseData::PirSensitivityListResponseData_ShapedEnableElement PirSensitivityListResponseData_ShapedEnableElement;

}
}

#endif
