/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_OtherRingTypeList_H_
#define _LC_OPENAPI_CLIENT_OtherRingTypeList_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
获取第三方铃铛类型
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class OtherRingTypeListRequest : public LCOpenApiRequest
	{
	public:
		class OtherRingTypeListRequestData
		{
		public:
			OtherRingTypeListRequestData();
			~OtherRingTypeListRequestData();
			
		public:
			/** 通道,不存在默认为设备 */
			string channelId;
		public:
			/** 授权的token(userToken或accessToken) */
			string token;
		public:
			/** 设备序列号 */
			string deviceId;

		};
	public:
		OtherRingTypeListRequest();
		~OtherRingTypeListRequest();
	public:
		virtual int build();
	public:
		OtherRingTypeListRequestData data;
		MetaInfo* _metainfo_OtherRingTypeListRequestData;
	};

	
	typedef typename OtherRingTypeListRequest::OtherRingTypeListRequestData OtherRingTypeListRequestData;


	class OtherRingTypeListResponse : public LCOpenApiResponse
	{
	public:
		class OtherRingTypeListResponseData
		{
		public:
			OtherRingTypeListResponseData();
			~OtherRingTypeListResponseData();
			
		public:
			/** 可选,响铃的时间 */
			string ringtime;
		public:
			/** [int]第三方铃铛的类型,0 未接，默认0、1 机械、2 电子 */
			int type;

		};
	public:
		OtherRingTypeListResponse();
		~OtherRingTypeListResponse();
	public:
		virtual int parse();
	public:
		OtherRingTypeListResponseData data;
		MetaInfo* _metainfo_OtherRingTypeListResponseData;
	};

	
	typedef typename OtherRingTypeListResponse::OtherRingTypeListResponseData OtherRingTypeListResponseData;

}
}

#endif
