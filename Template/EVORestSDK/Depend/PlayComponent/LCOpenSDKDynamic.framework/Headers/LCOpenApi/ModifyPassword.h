/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_ModifyPassword_H_
#define _LC_OPENAPI_CLIENT_ModifyPassword_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
修改设备密码，此仅对有"TCM"设备能力级的设备有效，设备管理相关的接口中会返回该设备是否具备TCM设备能力级，设备能力级介绍请见：设备能力级；

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class ModifyPasswordRequest : public LCOpenApiRequest
	{
	public:
		class ModifyPasswordRequestData
		{
		public:
			ModifyPasswordRequestData();
			~ModifyPasswordRequestData();
			
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 新密码 */
			string newPassword;
		public:
			/** [cstr]modifyPassword */
			#define _STATIC_ModifyPasswordRequestData_method "modifyPassword"
			string method;
		public:
			/** 老密码 */
			string oldPassword;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		ModifyPasswordRequest();
		~ModifyPasswordRequest();
	public:
		virtual int build();
	public:
		ModifyPasswordRequestData data;
		MetaInfo* _metainfo_ModifyPasswordRequestData;
	};

	
	typedef typename ModifyPasswordRequest::ModifyPasswordRequestData ModifyPasswordRequestData;


	class ModifyPasswordResponse : public LCOpenApiResponse
	{
	public:
		class ModifyPasswordResponseData
		{
		public:
			ModifyPasswordResponseData();
			~ModifyPasswordResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		ModifyPasswordResponse();
		~ModifyPasswordResponse();
	public:
		virtual int parse();
	public:
		ModifyPasswordResponseData data;
		MetaInfo* _metainfo_ModifyPasswordResponseData;
	};

	
	typedef typename ModifyPasswordResponse::ModifyPasswordResponseData ModifyPasswordResponseData;

}
}

#endif
