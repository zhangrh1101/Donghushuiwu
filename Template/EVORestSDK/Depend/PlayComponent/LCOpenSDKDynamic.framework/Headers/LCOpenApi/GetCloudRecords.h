/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_GetCloudRecords_H_
#define _LC_OPENAPI_CLIENT_GetCloudRecords_H_

#include "LCOpenApiDefine.h"
#include "LCOpenApiRequest.h"
#include "LCOpenApiResponse.h"

/** DESCRIPTION: 
按条件查询所有录像记录(倒序展示)

 */
#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi{
	class MetaInfo;
	using namespace std;
	class GetCloudRecordsRequest : public LCOpenApiRequest
	{
	public:
		class GetCloudRecordsRequestData
		{
		public:
			GetCloudRecordsRequestData();
			~GetCloudRecordsRequestData();
			
		public:
			/** 和nextRecordId选其一，SDK传nextRecordRegionId */
			string nextRecordRegionId;
		public:
			/** 上次取到的最后录像的ID */
			string nextRecordId;
		public:
			/** [int]分页查询的数量 */
			int count;
		public:
			/** 开始时间，yyyy-MM-dd HH:mm:ss */
			string beginTime;
		public:
			/** 结束时间，yyyy-MM-dd HH:mm:ss */
			string endTime;
		public:
			/** 通道ID */
			string channelId;
		public:
			/** 授权token(userToken或accessToken) */
			string token;
		public:
			/** 设备ID */
			string deviceId;

		};
	public:
		GetCloudRecordsRequest();
		~GetCloudRecordsRequest();
	public:
		virtual int build();
	public:
		GetCloudRecordsRequestData data;
		MetaInfo* _metainfo_GetCloudRecordsRequestData;
	};

	
	typedef typename GetCloudRecordsRequest::GetCloudRecordsRequestData GetCloudRecordsRequestData;


	class GetCloudRecordsResponse : public LCOpenApiResponse
	{
	public:
		class GetCloudRecordsResponseData
		{
		public:
			GetCloudRecordsResponseData();
			~GetCloudRecordsResponseData();
			
		public:
			/** define a list with struct of GetCloudRecordsResponseData_RecordsElement */
			class GetCloudRecordsResponseData_RecordsElement : public LCOpenApiBase
			{
			public:
				GetCloudRecordsResponseData_RecordsElement();
				~GetCloudRecordsResponseData_RecordsElement();
			public:
				/** 录像Id */
				string recordId;
			public:
				/** 设备ID */
				string deviceId;
			public:
				/** 录像recordRegionId */
				string recordRegionId;
			public:
				/** 缩略图Url */
				string thumbUrl;
			public:
				/** 通道ID */
				string channelId;
			public:
				/** 结束时间 */
				string endTime;
			public:
				/** [int]加密模式, 0表示默认加密模式, 1表示用户加密模式 */
				int encryptMode;
			public:
				/** 开始时间 */
				string beginTime;
			public:
				/** [long]云录像大小，单位byte */
				int64 size;
			};
		public:
			LCOpenApiVector<GetCloudRecordsResponseData_RecordsElement> records;

		};
	public:
		GetCloudRecordsResponse();
		~GetCloudRecordsResponse();
	public:
		virtual int parse();
	public:
		GetCloudRecordsResponseData data;
		MetaInfo* _metainfo_GetCloudRecordsResponseData;
	};

	
	typedef typename GetCloudRecordsResponse::GetCloudRecordsResponseData GetCloudRecordsResponseData;
	typedef typename GetCloudRecordsResponse::GetCloudRecordsResponseData::GetCloudRecordsResponseData_RecordsElement GetCloudRecordsResponseData_RecordsElement;

}
}

#endif
