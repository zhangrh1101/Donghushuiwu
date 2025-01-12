/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SetPreparation_H_
#define _LC_OPENAPI_CLIENT_SetPreparation_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置预案

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class SetPreparationRequest : public LCOpenApiRequest
	{
	public:
		class SetPreparationRequestData
		{
		public:
			SetPreparationRequestData();
			~SetPreparationRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 预案，Normal：通用  FaceDetection：人脸智能  NumberStat：客流统计  HeatMap：热度分析 */
			string selecting;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** [cstr]setPreparation */
			#define _STATIC_SetPreparationRequestData_method "setPreparation"
			string method;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		SetPreparationRequest();
		~SetPreparationRequest();
	public:
		virtual int build();
	public:
		SetPreparationRequestData data;
		MetaInfo* _metainfo_SetPreparationRequestData;
	};

	
	typedef typename SetPreparationRequest::SetPreparationRequestData SetPreparationRequestData;


	class SetPreparationResponse : public LCOpenApiResponse
	{
	public:
		class SetPreparationResponseData
		{
		public:
			SetPreparationResponseData();
			~SetPreparationResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		SetPreparationResponse();
		~SetPreparationResponse();
	public:
		virtual int parse();
	public:
		SetPreparationResponseData data;
		MetaInfo* _metainfo_SetPreparationResponseData;
	};

	
	typedef typename SetPreparationResponse::SetPreparationResponseData SetPreparationResponseData;

}
}

#endif
