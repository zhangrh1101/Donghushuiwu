/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_ModifyDevicePwd_H_
#define _LC_OPENAPI_CLIENT_ModifyDevicePwd_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
修改设备密码

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class ModifyDevicePwdRequest : public LCOpenApiRequest
	{
	public:
		class ModifyDevicePwdRequestData
		{
		public:
			ModifyDevicePwdRequestData();
			~ModifyDevicePwdRequestData();
			
		public:
			/** [String]用户名 */
			string username;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 新密码 */
			string newPwd;
		public:
			/** 老密码 */
			string oldPwd;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		ModifyDevicePwdRequest();
		~ModifyDevicePwdRequest();
	public:
		virtual int build();
	public:
		ModifyDevicePwdRequestData data;
		MetaInfo* _metainfo_ModifyDevicePwdRequestData;
	};

	
	typedef typename ModifyDevicePwdRequest::ModifyDevicePwdRequestData ModifyDevicePwdRequestData;


	class ModifyDevicePwdResponse : public LCOpenApiResponse
	{
	public:
		class ModifyDevicePwdResponseData
		{
		public:
			ModifyDevicePwdResponseData();
			~ModifyDevicePwdResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		ModifyDevicePwdResponse();
		~ModifyDevicePwdResponse();
	public:
		virtual int parse();
	public:
		ModifyDevicePwdResponseData data;
		MetaInfo* _metainfo_ModifyDevicePwdResponseData;
	};

	
	typedef typename ModifyDevicePwdResponse::ModifyDevicePwdResponseData ModifyDevicePwdResponseData;

}
}

#endif
