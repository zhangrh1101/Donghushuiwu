/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_OtherRingTypeNotify_H_
#define _LC_OPENAPI_CLIENT_OtherRingTypeNotify_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
通知门铃第三方铃铛类型
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class OtherRingTypeNotifyRequest : public LCOpenApiRequest
	{
	public:
		class OtherRingTypeNotifyRequestData
		{
		public:
			OtherRingTypeNotifyRequestData();
			~OtherRingTypeNotifyRequestData();
			
		public:
			/** [int]第三方铃铛的类型,0 未接，默认0、1 机械、2 电子 */
			int type;
		public:
			/** 授权的token(userToken或accessToken) */
			string token;
		public:
			/** 通道,不存在默认为设备 */
			string channelId;
		public:
			/** 响铃的时间 */
			string ringtime;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		OtherRingTypeNotifyRequest();
		~OtherRingTypeNotifyRequest();
	public:
		virtual int build();
	public:
		OtherRingTypeNotifyRequestData data;
		MetaInfo* _metainfo_OtherRingTypeNotifyRequestData;
	};

	
	typedef typename OtherRingTypeNotifyRequest::OtherRingTypeNotifyRequestData OtherRingTypeNotifyRequestData;


	class OtherRingTypeNotifyResponse : public LCOpenApiResponse
	{
	public:
		class OtherRingTypeNotifyResponseData
		{
		public:
			OtherRingTypeNotifyResponseData();
			~OtherRingTypeNotifyResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		OtherRingTypeNotifyResponse();
		~OtherRingTypeNotifyResponse();
	public:
		virtual int parse();
	public:
		OtherRingTypeNotifyResponseData data;
		MetaInfo* _metainfo_OtherRingTypeNotifyResponseData;
	};

	
	typedef typename OtherRingTypeNotifyResponse::OtherRingTypeNotifyResponseData OtherRingTypeNotifyResponseData;

}
}

#endif
