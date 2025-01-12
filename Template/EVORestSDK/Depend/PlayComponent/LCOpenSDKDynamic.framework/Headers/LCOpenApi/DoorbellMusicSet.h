/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DoorbellMusicSet_H_
#define _LC_OPENAPI_CLIENT_DoorbellMusicSet_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
设置门铃的自带铃声
 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class DoorbellMusicSetRequest : public LCOpenApiRequest
	{
	public:
		class DoorbellMusicSetRequestData
		{
		public:
			DoorbellMusicSetRequestData();
			~DoorbellMusicSetRequestData();
			
		public:
			/** [int]门铃自带的铃声索引号 */
			int index;
		public:
			/** 门铃设备序列号 */
			string deviceId ;
		public:
			/** 授权的token */
			string token;

		};
	public:
		DoorbellMusicSetRequest();
		~DoorbellMusicSetRequest();
	public:
		virtual int build();
	public:
		DoorbellMusicSetRequestData data;
		MetaInfo* _metainfo_DoorbellMusicSetRequestData;
	};

	
	typedef typename DoorbellMusicSetRequest::DoorbellMusicSetRequestData DoorbellMusicSetRequestData;


	class DoorbellMusicSetResponse : public LCOpenApiResponse
	{
	public:
		class DoorbellMusicSetResponseData
		{
		public:
			DoorbellMusicSetResponseData();
			~DoorbellMusicSetResponseData();
			
		public:
			/** [int][O]保留 */
			int _nouse;

		};
	public:
		DoorbellMusicSetResponse();
		~DoorbellMusicSetResponse();
	public:
		virtual int parse();
	public:
		DoorbellMusicSetResponseData data;
		MetaInfo* _metainfo_DoorbellMusicSetResponseData;
	};

	
	typedef typename DoorbellMusicSetResponse::DoorbellMusicSetResponseData DoorbellMusicSetResponseData;

}
}

#endif
