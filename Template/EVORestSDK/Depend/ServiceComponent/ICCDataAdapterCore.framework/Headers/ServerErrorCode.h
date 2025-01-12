//
//  ServerErrorCode.h
//  SDKWeikit
//
//  Created by ding_qili on 15/7/10.
//  Copyright (c) 2015年 ding_qili. All rights reserved.
//

#ifndef SDKWeikit_ServerErrorCode_h
#define SDKWeikit_ServerErrorCode_h


#endif

typedef enum{
      SC_OK = 200 ,// OK （API调用成功,但是具体返回结果,由content中的code和desc描述）
      Bad_Request= 400 ,// Bad Request （API格式错误,无返回内容）
      Unauthorized = 401 ,// Unauthorized （用户名密码认证失败,无返回内容）
      Forbidden = 403 ,// Forbidden （认证成功但是无权限,无返回内容）
      Not_Found =  404 ,// Not Found （请求的URI错误,无返回内容）
      Precondition_Failed =  412 ,// Precondition Failed （先决条件失败,无返回内容。通常是由于客户端所带的x-hs-date时间与服务器时间相差过大。）
      Internal_Server_Error = 500 ,// Internal Server Error （服务器内部错误,无返回内容）
      Service_Unavailable = 503 ,// Service Unavailable （服务不可用,无返回内容。这种情况一般是因为接口调用超出频率限制。）
}HttpCode;

typedef enum{

    
    
    
    
    /** 成功 **/
    SUCCESS = 1000 ,
    
    /** 未知错误 */
    UNKNOWN_ERROR = 1001 ,
    
    /**
     * 1100 - 用户
     */
    /** 用户名已经存在 **/
    USER_LOGINNAME_EXIST = 1100 ,
    
    /** 手机号已经存在 **/
    USER_PHONE_EXIST = 1101 ,
    
    /** 验证码不匹配 **/
    VALID_CODE_ERROR = 1102 ,
    
    /** 验证码发送失败 **/
    VALID_CODE_SEND_FAILED = 1103 ,
    
    /** 保存用户头像失败 **/
    SAVE_HEAD_PIC_FAILED = 1104 ,
    
    /** 第三方账号校验失败 **/
    THIRD_ACCOUNT_VALID_FAILED = 1105 ,
    
    /** 第三方账号已绑定其他账号 **/
    THIRD_ACCOUNT_BIND_OTHERS = 1106 ,
    
    /** 用户冻结 **/
    USER_FREEZE = 1107 ,
    
    /** 第三方账号未绑定 **/
    THIRD_ACCOUNT_NOT_BIND = 1108 ,
    
    /** 用户名和密码不匹配 **/
    USER_PASSWORD_ERROR = 1109 ,
    
    /** 调用获取验证码太频繁 **/
    GET_VALIDCODE_TOO_MANY = 1110 ,
    
    
    /**
     * 1200 - 消息
     */
    /** 超过最大的分页限制 **/
    PAGE_SIZE_TOO_BIG = 1200 ,
    
    /** 子账号被冻结 **/
    AUTHORIZED_USER_FREEZE = 1207,
    
    /**
     * 1300 - 设备
     */
    
    /** 设备未注册 **/
    DEVICE_NOT_EXIST = 1301 ,
    
    /** 设备注册码错误 **/
    DEVICE_REGCODE_ERROR = 1302 ,
    
    /** 设备被自己添加 **/
    DEVICE_ADDBYYOURSELF = 1303 ,
    
    /** 设备项目属性和用户不匹配 */
    DEVICE_PROJECT_NOT_MATCH = 1304 ,
    
    /** 设备未添加 **/
    DEVICE_NOT_ADDED = 1305 ,
    
    /** 设备被别人添加 **/
    DEVICE_ADDBYOTHER = 1306 ,
    
    /** 分享失败 **/
    BUILD_DEVICE_SHARE_INFO_ERROR = 1307 ,
    
    /** 修改通道失败 **/
    UPDATE_CHANNEL_FAIL = 1308 ,
    
    /** 设备离线 **/
    DEVICE_OFFLINE = 1309 ,
    
    
    /**
     * 1600 - 存储
     */
    
    /** 云存储录像未找到 */
    CLOUD_STORAGE_RECORD_NOT_FOUND = 1621 ,
    
    
    /**
     * 1700 - 视频广场
     */
    /** 视频已经被分享 */
     VIDEO_HAS_SHARED = 1701,
    
    /** 视频还未被分享 */
    VIDEO_NOT_SHARED = 1702,
    
    /** 评论不存在 */
    COMMENT_NOT_EXISTS = 1703,
    
    /** 已经点过赞 */
    VIDEO_HAS_PRIZED = 1704,
    
    /** 未点过赞 */
    VIDEO_NOT_PRIZED = 1705,

    
    /**
     * 2000 第三方接入
     */
    
    /**
     * 无效的access tocken
     */
    INVALID_ACCESSTOCKEN = 2000 ,

}RestErrorCode;
