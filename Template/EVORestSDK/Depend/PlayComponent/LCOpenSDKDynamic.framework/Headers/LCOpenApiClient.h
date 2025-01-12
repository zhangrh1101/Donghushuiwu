//
//  Client.h
//  LCOpenApiClient_C++
//
//  Created by mac318340418 on 17/1/6.
//  Copyright © 2017年 bzy. All rights reserved.
//

#ifndef Client_H
#define Client_H

#include <string>
using std::string;
#define NODEVICE	"command"
#define STRING_LEN 64

typedef void *LCOpenApiHandle;

#ifdef GENERAL
namespace General {
#else
namespace Dahua {
#endif
namespace Infra{
    class CMutex;
}
}

#ifdef GENERAL
namespace General {
#else
namespace Dahua{
#endif
namespace LCOpenApi {

class LCOpenApiRequest;
class LCOpenApiResponse;

    enum  protocolType {HTTP = 0, HTTPS = 1};
    class MetaInfo;
    class LCOpenApiClient {
    public:
        typedef void (*LCOpenApiClientLogger)(int level, const char* str);

   private:
        LCOpenApiClient();
        LCOpenApiClient(const LCOpenApiClient&);
        LCOpenApiClient& operator=(const LCOpenApiClient&);
        ~LCOpenApiClient();
    public:
        static LCOpenApiClient* getInstance();
        static LCOpenApiHandle client_create(protocolType protocol, const char *host, int port);
        static void client_destroy(LCOpenApiHandle hc);
        int request(LCOpenApiHandle hc, LCOpenApiRequest* req, LCOpenApiResponse* resp, int timeout);
        string request_build(LCOpenApiRequest* p, void* obj, MetaInfo* mi, const string& isSys);
        int request_sign(LCOpenApiRequest* p, const string& appId, const string& appSecret, string& time);
		int request_signSaas(LCOpenApiRequest *req, const char *username, const char *pwd, const char *uaInfo);
        int response_parse(LCOpenApiResponse* p, void* obj, MetaInfo* mi);
        void set_logger(LCOpenApiClientLogger logger);

        void set_host_port(const string& host, int port);
        void set_protocol(protocolType  protocol);
        void set_client(const string& type, const string& mac);
        void set_os_version(const string& version);
        void set_sdk_version(const string& version);
        void set_api_versin(const string& version);
        void set_safe_code(const string& bundleId, const string& isSDK);
        void set_ca_path(const string& caPath);
        void set_ca_info(bool caSwitch, const string& caPath);
        void set_uri_prefix(const string& prefix);
        void set_appId(const string& appId);
        void set_appSecret(const string& appSecret);
        
        void set_open_user_id(const string& openUserId);
        void set_app_source(const string& appSource);
        
        //void set_auth(const string& userName, const string& password);
        void set_auth_base_md5(const string& userName, const string& pwdMd5);
        void set_client_ua_info(const string& clientUaInfo);
        
        void set_ua_clientType(const string& ua_clientType);
        void set_ua_clientVersion(const string& ua_clientVersion);
        void set_ua_clientOV(const string& ua_clientOV);
        void set_ua_clientOS(const string& ua_clientOS);
        void set_ua_terminalModel(const string& ua_terminalModel);
        void set_ua_terminalId(const string& ua_terminalId);
        void set_ua_appid(const string& ua_appid);
        void set_ua_project(const string& ua_project);
        void set_ua_language(const string& ua_language);
        void set_ua_clientProtocolVersion(const string& ua_clientProtocolVersion);
        void set_ua_timezoneOffset(const string& ua_timezoneOffset);
        void set_ua_clientOSBits(const string& ua_clientOSBits);
        
        void set_cos_auth(const string& cosAuth);
        void set_authorization(const string& authorization);
        void set_terminalCompanyId(const string& terminalCompanyId);
        
        void set_cos_req_ver(const string& cosVer);
		void set_cos_sign_key(const string& cosKey);
        
		//for dolynk
        void set_dolynk_token(const string& token);

        /*网络切换时原长连接失效，可使用此接口快速恢复，而不必等心跳超时恢复*/
        void client_refresh_longLives();
        void client_clear_all();

        const string get_client_host();
        const protocolType get_protocol();
        const int get_client_port();
        const string get_client_type();
        const string get_client_mac();
        const string get_os_version();
        const string get_sdk_version();
        const string get_api_version();
        const string get_safe_code();
        const string get_ca_path();
        const bool get_ca_switch();
        const string get_version();
        const string get_uri_prefix();
        const string get_appId();
        const string get_appSecret();
        const unsigned int get_serialNo();
        
        const string get_open_user_id();
        const string get_app_source();
        
        const string get_auth_userName();
//        const string get_auth_password();
        const string get_auth_pwdMd5();
        const string getClientUaInfo();
        
        const string get_cos_auth();
        const string get_authorization();
        const string get_terminalCompanyId();

        
        const string get_cos_req_ver();
		const string get_cos_sign_key();
		//for dolynk
		const string get_dolynk_token();

    private:
        protocolType protocol;
        int          port;
        string       host;
        string       appId;
        string       appSecret;
        string       type;
        string       mac;
        string       os_version;
        string       sdk_version;
        string       api_version;
        string       safe_code;
        string       ca_path;
        bool         ca_switch;
        string       version;
        string       uri_prefix;
        
        string       open_user_id;
        string       app_source;
        
        string      authUserName;
        //string      authPassword;
        string      authPwdMd5;
        string      clientUaInfo;
        
        string      cosAuth;
        string      cosReqVer;
		string		cosSignKey;
        string      authorization;
        string      terminalCompanyId;
		
		//for dolynk
		string		dolynk_token;
        
        static unsigned int m_serialNo;
        static LCOpenApiClient* sm_instance;
        static Infra::CMutex m_serialNoMutex;
        static Infra::CMutex m_instanceMutex;
    public:
       int      logLevel = 5;
    };
}
}
#endif /* Client_H */
