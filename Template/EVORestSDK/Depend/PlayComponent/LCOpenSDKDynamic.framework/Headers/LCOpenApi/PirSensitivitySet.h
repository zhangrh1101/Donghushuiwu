/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_PirSensitivitySet_H_
#define _LC_OPENAPI_CLIENT_PirSensitivitySet_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置PIR灵敏度
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class PirSensitivitySetRequest : public LCOpenApiRequest
	{
	public:
		class PirSensitivitySetRequestData
		{
		public:
			PirSensitivitySetRequestData();
			~PirSensitivitySetRequestData();
			
		public:
			/** define a list with struct of PirSensitivitySetRequestData_ShapedEnableElement */
			class PirSensitivitySetRequestData_ShapedEnableElement : public LCOpenApiBase
			{
			public:
				PirSensitivitySetRequestData_ShapedEnableElement();
				~PirSensitivitySetRequestData_ShapedEnableElement();
			public:
				/** [int]小扇形的索引值 */
				int index;
			public:
				/** on-开启 off-关闭 */
				string enable;
			};
		public:
			LCOpenApiVector<PirSensitivitySetRequestData_ShapedEnableElement> shapedEnable;
		public:
			/** [int]取值范围[0,100]，检测半径的百分比 */
			int sensitivity;
		public:
			/** 授权token */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		PirSensitivitySetRequest();
		~PirSensitivitySetRequest();
	public:
		virtual int build();
	public:
		PirSensitivitySetRequestData data;
		MetaInfo* _metainfo_PirSensitivitySetRequestData;
	};

	
	typedef typename PirSensitivitySetRequest::PirSensitivitySetRequestData PirSensitivitySetRequestData;
	typedef typename PirSensitivitySetRequest::PirSensitivitySetRequestData::PirSensitivitySetRequestData_ShapedEnableElement PirSensitivitySetRequestData_ShapedEnableElement;


	class PirSensitivitySetResponse : public LCOpenApiResponse
	{
	public:
		class PirSensitivitySetResponseData
		{
		public:
			PirSensitivitySetResponseData();
			~PirSensitivitySetResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		PirSensitivitySetResponse();
		~PirSensitivitySetResponse();
	public:
		virtual int parse();
	public:
		PirSensitivitySetResponseData data;
		MetaInfo* _metainfo_PirSensitivitySetResponseData;
	};

	
	typedef typename PirSensitivitySetResponse::PirSensitivitySetResponseData PirSensitivitySetResponseData;

}
}

#endif
