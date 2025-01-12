/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_SirenStart_H_
#define _LC_OPENAPI_CLIENT_SirenStart_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
开启警笛
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class SirenStartRequest : public LCOpenApiRequest
	{
	public:
		class SirenStartRequestData
		{
		public:
			SirenStartRequestData();
			~SirenStartRequestData();
			
		public:
			/** 客户端本地时间，如20180301T111730 */
			string clientLocalTime;
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
		SirenStartRequest();
		~SirenStartRequest();
	public:
		virtual int build();
	public:
		SirenStartRequestData data;
		MetaInfo* _metainfo_SirenStartRequestData;
	};

	
	typedef typename SirenStartRequest::SirenStartRequestData SirenStartRequestData;


	class SirenStartResponse : public LCOpenApiResponse
	{
	public:
		class SirenStartResponseData
		{
		public:
			SirenStartResponseData();
			~SirenStartResponseData();
			
		public:
			/** 20200709T161051 */
			string clientLocalTime;
		public:
			/** [int]30 */
			int time;
		public:
			/** define a list with struct of SirenStartResponseData_ChannelsElement */
			class SirenStartResponseData_ChannelsElement : public LCOpenApiBase
			{
			public:
				SirenStartResponseData_ChannelsElement();
				~SirenStartResponseData_ChannelsElement();
			public:
				/** [int]警笛持续时间 */
				int time;
			public:
				/** [String]通道号 */
				string channelId;
			};
		public:
			LCOpenApiVector<SirenStartResponseData_ChannelsElement> channels;

		};
	public:
		SirenStartResponse();
		~SirenStartResponse();
	public:
		virtual int parse();
	public:
		SirenStartResponseData data;
		MetaInfo* _metainfo_SirenStartResponseData;
	};

	
	typedef typename SirenStartResponse::SirenStartResponseData SirenStartResponseData;
	typedef typename SirenStartResponse::SirenStartResponseData::SirenStartResponseData_ChannelsElement SirenStartResponseData_ChannelsElement;

}
}

#endif
