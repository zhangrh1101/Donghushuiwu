//
//  DSSObjectDetectionInfo.h
//  DataAdapterProtocol
//
//  Created by chenfeifei on 2019/3/19.
//  目标检测相关定义信息

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#define DSS_PLATE_COLOR 22     //车牌颜色
#define DSS_CAR_BRAND   2016   //车辆商标
#define DSS_CAR_TYPE    2054   //车辆类型
#define DSS_CAR_COLOR   2001   //车身颜色

#define DSS_NOMOTORCAR_COLOR 2053  //非机动车颜色
#define DSS_NOMOTORCAR_TYPE  2052  //非机动车类型

#define DSS_CLOTHES_COLOR   9041 //衣服颜色

#define DSS_QUERY_PAGE_SIZE 20


//性别特征
typedef NS_ENUM(NSInteger,DSSHumanGender){
    DSSHumanGender_Unknow ,//未知
    DSSHumanGender_Male,   //男
    DSSHumanGender_Female ,//女
    
};

//衣服颜色 上衣 下衣
typedef NS_ENUM(NSInteger,DSSHumanClothesColor) {
    DSSHumanClothes_Unknown, //未知
    DSSHumanClothes_White, //白色
    DSSHumanClothes_Orange, //橙色
    DSSHumanClothes_Pink, //粉色
    DSSHumanClothes_Black, //黑色
    DSSHumanClothes_Red , //红色
    DSSHumanClothes_Yellow , //黄色
    DSSHumanClothes_Gray , //灰色
    DSSHumanClothes_Blue , //蓝色
    DSSHumanClothes_Green , //绿色
    DSSHumanClothes_Purple , //紫色
    DSSHumanClothes_Brown , //棕色
};

//人体表情
typedef NS_ENUM(NSInteger,DSSHumanEmotion) {
    DSSHumanEmotion_Smile, //微笑
    DSSHumanEmotion_Angry, //愤怒
    DSSHumanEmotion_Sad, //悲伤
    DSSHumanEmotion_Disgust, //厌恶
    DSSHumanEmotion_Scared, //害怕
    DSSHumanEmotion_Surprise , //惊喜
    DSSHumanEmotion_Normal , //正常
    DSSHumanEmotion_Laugh , //大笑
    DSSHumanEmotion_Happy , //高兴
    DSSHumanEmotion_Puzzled , //困惑
    DSSHumanEmotion_Scream , //惊叫
};

//佩戴帽子的情况
typedef NS_ENUM(NSInteger,DSSHumanHat){
    DSSHumanHat_Unknow ,//未知
    DSSHumanHat_Unwear ,//不带
    DSSHumanHat_Wear,   //带
};

//下衣特征
typedef NS_ENUM(NSInteger,DSSHumanTrousers){
    DSSHumanTrousers_Unknow ,//未知
    DSSHumanTrousers_Long ,//长裤
    DSSHumanTrousers_Short,   //短裤
    DSSHumanTrousers_Dress,   //裙子
};
//上衣特征
typedef NS_ENUM(NSInteger,DSSHumanCoat){
    DSSHumanCoat_Unknow ,//未知
    DSSHumanCoat_Long ,  //长袖
    DSSHumanCoat_Short,  //短袖
};
//是否佩戴包的情况
typedef NS_ENUM(NSInteger,DSSHumanBag){
    DSSHumanBag_Unknow ,//未知
    DSSHumanBag_UnWear ,  //不带包
    DSSHumanBag_Wear,  //带包
};

//是否有胡子
typedef NS_ENUM(NSInteger,DSSHumanBeard){
    DSSHumanBeard_Unknow ,//未知
    DSSHumanBeard_YES ,  //有胡子
    DSSHumanBeard_NO,  //无胡子
};

//是否佩戴眼镜
typedef NS_ENUM(NSInteger,DSSHumanGlasses){
    DSSHumanGlasses_None ,//无
    DSSHumanGlasses_Wear , //眼镜
    DSSHumanGlasses_Sun,  //墨镜
};

//是否佩戴口罩
typedef NS_ENUM(NSInteger,DSSHumanMask){
    DSSHumanMask_Unknow , //未知
    DSSHumanMask_Unidentified, //未识别
    DSSHumanMask_UnWear , //无口罩
    DSSHumanMask_Wear,    //有口罩
};

//刘海
typedef NS_ENUM(NSInteger,DSSHumanFringe) {
    DSSHumanFringe_None, //无刘海
    DSSHumanFringe_YES // 有刘海
};

//眼睛
typedef NS_ENUM(NSInteger,DSSHumanEye) {
    DSSHumanEye_Unknown = 1, //未识别
    DSSHumanEye_Closed, //闭眼
    DSSHumanEye_Open //睁眼
};

//嘴巴
typedef NS_ENUM(NSInteger,DSSHumanMouth) {
    DSSHumanMouth_Unknown = 1, //未识别
    DSSHumanMouth_Closed, //闭嘴
    DSSHumanMouth_Open //张嘴
};

//目标检测基础信息
@interface DSSObjectDetectBaseInfo : NSObject
@property(nonatomic,copy) NSString *recordId;  //ID
@property(nonatomic,copy) NSString *channelId; //通道编码
@property(nonatomic,assign) NSInteger captureTime;   //抓拍时间：秒
@end
//查询人体抓拍的条件
@interface DSSQueryHumanInfo:NSObject
@property(nonatomic,strong) NSMutableArray<NSString *>* channels;
@property(nonatomic,strong) NSDate *startTime;
@property(nonatomic,strong) NSDate *endTime;
@property(nonatomic,copy)   NSString *gender;
@property(nonatomic,copy)   NSString *hat;           //帽子： 未知 0 不带 1 带 2
@property(nonatomic,copy)   NSString *trousers;     //下衣：未知 0 长裤 1 短裤 2 裙子 3
@property(nonatomic,strong) NSMutableArray<NSNumber*>* trousersColors; //下衣颜色：DSSHumanClothesColor
@property(nonatomic,copy)   NSString *coat;          //上衣： 未知 0 长袖 1 短袖 2
@property(nonatomic,strong) NSMutableArray<NSNumber*>* coatColors; //上衣颜色 DSSHumanClothesColor
@property(nonatomic,copy)   NSString *bag;          //包 未知 0 不带包 1 带包 2
@property(nonatomic,assign) NSInteger pageSize;    //每页数量
@property(nonatomic,assign) NSInteger pageNo;    //页码编号
@end

//人体抓拍结果列表
@interface DSSHumanInfo : DSSObjectDetectBaseInfo
@property(nonatomic,copy) NSString *humamImageUrl; //人体图
@property(nonatomic,copy) NSString *pictureUrl;    //场景图
@property(nonatomic,copy) NSString *faceImageUrl;  //人脸图
@property(nonatomic,assign) NSInteger gender;        //性别： 未识别 0 男 1 女 2
@property(nonatomic,assign) NSInteger hat;           //帽子： 未知 0 不带 1 带 2
@property(nonatomic,assign) NSInteger coat;          //上衣： 未知 0 长袖 1 短袖 2
@property(nonatomic,assign) NSInteger coatColor; //上衣颜色 DSSHumanClothesColor
@property(nonatomic,copy) NSString *coatColorName;//上衣颜色国际化
@property(nonatomic,assign) NSInteger bag;          //包 未知 0 不带包 1 带包 2
@property(nonatomic,assign) NSInteger trousers;     //下衣：未知 0 长裤 1 短裤 2 裙子 3
@property(nonatomic,assign) NSInteger trousersColor; //下衣颜色：DSSHumanClothesColor
@property(nonatomic,copy) NSString *trousersColorName;//下衣颜色国际化
@property(nonatomic,assign) NSInteger emotion;          //表情：DSSHumanEmotion
@property(nonatomic,assign) NSInteger beard;          //胡子 未知 0 未识别 1 没胡子 2 有胡子 3
@property(nonatomic,assign) NSInteger glasses;          //眼镜 无 0 眼镜 1 墨镜 2
@property(nonatomic,assign) NSInteger mask;          //口罩 未知 0 未识别 1 无口罩 2 戴口罩3
@property(nonatomic,assign) NSInteger eye; // 眼睛  未识别 1，闭眼 2，睁眼 3
@property(nonatomic,assign) NSInteger fringe; // 刘海 无 0，有 1
@property(nonatomic,copy)  NSString *age;           //年龄
@property(nonatomic,copy)  NSString *faceImageTop;  //人脸在图片中的坐标Top
@property(nonatomic,copy)  NSString *faceImageLeft;  //人脸在图片中的坐标Left
@property(nonatomic,copy)  NSString *faceImageBottom;  //人脸在图片中的坐标Bottom
@property(nonatomic,copy)  NSString *faceImageRight;  //人脸在图片中的坐标Right
@property(nonatomic,copy)  NSString *humanImageTop;  //人体在图片中的坐标Top
@property(nonatomic,copy)  NSString *humanImageLeft;  //人体在图片中的坐标Left
@property(nonatomic,copy)  NSString *humanImageBottom;  //人体在图片中的坐标Bottom
@property(nonatomic,copy)  NSString *humanImageRight;  //人体在图片中的坐标Right

@end

//车牌颜色
typedef NS_ENUM(NSInteger,DSSPlateColor){
    DSSPlateColor_Blue , //蓝色
    DSSPlateColor_Yellow, //黄色
    DSSPlateColor_White,  //白色
    DSSPlateColor_Black,  //黑色
    DSSPlateColor_Green,  //绿色
    DSSPlateColor_Unknow = 99, //未识别
    DSSPlateColor_Other  = 100, //其他颜色
};

//查询机动车的条件信息
@interface DSSQueryVehicleInfo : NSObject

@property(nonatomic,strong) NSMutableArray<NSString *>* plateColors; //车牌颜色
@property(nonatomic,strong) NSDate *startTime;  //开始时间
@property(nonatomic,strong) NSMutableArray<NSString *>* carBrands; //车辆商标
@property(nonatomic,strong)  NSMutableArray<NSString *>* carTypes;  //车辆类型
@property(nonatomic,strong) NSDate *endTime;  //结束时间
@property(nonatomic,strong)  NSMutableArray<NSString *>* plates;    //号牌号码
@property(nonatomic,strong)NSMutableArray<NSString *>* channels; //查询通道ID
@property(nonatomic,strong)  NSMutableArray<NSString *>* carColors; //车身颜色
@property(nonatomic,assign) NSInteger pageSize;    //每页数量
@property(nonatomic,assign) NSInteger pageNo;    //页码编号

@end

//查询机动车抓拍的结果信息
@interface DSSVehicleDetailInfo : DSSObjectDetectBaseInfo
@property(nonatomic,copy) NSString *pictureUrl; //车辆图片
@property(nonatomic,copy) NSString *plateImageUrl; //车牌图片
@property(nonatomic,copy) NSString *plate;         //号牌号码
@property(nonatomic,copy) NSString *carType;       //车辆类型
@property(nonatomic,copy) NSString *carTypeName;   //车辆类型国际化
@property(nonatomic,copy) NSString *carColor;      //车身颜色
@property(nonatomic,copy) NSString *carColorName;  //车身颜色国际化
@property(nonatomic,copy) NSString *plateColor;    //车牌颜色
@property(nonatomic,copy) NSString *plateColorName;//车牌颜色国际化
@property(nonatomic,copy) NSString *carBrand;      //车辆商标
@property(nonatomic,copy) NSString *carBrandName;  //车牌商标国际化

@property(nonatomic,copy) NSString *carImageTop;   //车辆在图片中的坐标Top
@property(nonatomic,copy) NSString *carImageLeft;   //车辆在图片中的坐标left
@property(nonatomic,copy) NSString *carImageBottom;   //车辆在图片中的坐标Bottom
@property(nonatomic,copy) NSString *carImageRight;   //车辆在图片中的坐标Right

@end


typedef NS_ENUM(NSInteger,DSSFaceComplexion){
    DSSFaceComplexion_Unknow,  //未知
    DSSFaceComplexion_Yellow,  //黄
    DSSFaceComplexion_Black,   //黑
    DSSFaceComplexion_White,   //白
};


typedef NS_ENUM(NSInteger,DSSFaceMouth){
    DSSFaceMouth_Unknow,  //未知
    DSSFaceMouth_Undetified, //未识别
    DSSFaceMouth_Shut,   //闭嘴
    DSSFaceMouth_Open,   //张嘴
};


typedef NS_ENUM(NSInteger,DSSFaceGlasses){
    DSSFaceGlasses_Unknow,  //未知
    DSSFaceGlasses_UnWear, //未戴
    DSSFaceGlasses_Normal,   //戴普通眼镜
    DSSFaceGlasses_Sun ,   //戴太阳眼镜
    DSSFaceGlasses_BlackBox, //戴黑框眼镜
};

typedef NS_ENUM(NSInteger,DSSFaceMask){
    DSSFaceMask_Undetified,  //未识别
    DSSFaceMask_UnWear, //否
    DSSFaceMask_Wear,   //是
};

//非机动抓拍查询的条件信息
@interface DSSQueryNonVehicleInfo : NSObject
@property(nonatomic,strong)NSMutableArray<NSString *>* channels; //查询通道ID
@property(nonatomic,assign)NSInteger riderNum; //骑车人数
@property(nonatomic,strong) NSDate *startTime;  //开始时间
@property(nonatomic,strong) NSDate *endTime;  //结束时间
@property(nonatomic,strong)  NSMutableArray<NSString *>* carTypes;  //车辆类型
@property(nonatomic,strong)  NSMutableArray<NSString *>* carColors; //车身颜色
@property(nonatomic,assign) NSInteger pageSize;    //每页数量
@property(nonatomic,assign) NSInteger pageNo;    //页码编号
@end

@interface DSSFaceOnNonVehicleInfo: NSObject
@property(nonatomic,copy) NSString *faceID;  //人脸信息ID
@property(nonatomic,copy) NSString *faceOrder;  //排序
@property(nonatomic,copy) NSString *faceUrl;    //人脸图片
@property(nonatomic,assign) NSInteger gender;   //性别 DSSHumanGender
@property(nonatomic,assign) NSInteger complexion; //fu色 DSSFaceComplexion
@property(nonatomic,assign) NSInteger mask; //是否遮隐 DSSFaceMask
@property(nonatomic,assign) NSInteger glasses; //是否带眼镜 DSSFaceGlasses
@property(nonatomic,assign) NSInteger mouth; //嘴巴状态 DSSFaceMouth
@end


//非机动车抓拍查询结果信息
@interface DSSNonVehicleDetailInfo : DSSObjectDetectBaseInfo
@property(nonatomic,copy) NSString *pictureUrl; //车辆图片
@property(nonatomic,copy) NSString *carImageUrl; //车牌图片
@property(nonatomic,copy) NSString *carType;       //车辆类型
@property(nonatomic,copy) NSString *carTypeName;   //车辆类型国际化
@property(nonatomic,copy) NSString *carColor;      //车身颜色
@property(nonatomic,copy) NSString *carColorName;  //车身颜色国际化
@property(nonatomic,assign)NSInteger riderNum;     //骑车人数
@property(nonatomic,copy) NSString *carImageTop;   //车辆在图片中的坐标Top
@property(nonatomic,copy) NSString *carImageLeft;   //车辆在图片中的坐标left
@property(nonatomic,copy) NSString *carImageBottom;   //车辆在图片中的坐标Bottom
@property(nonatomic,copy) NSString *carImageRight;   //车辆在图片中的坐标Right
@property(nonatomic,strong)NSMutableArray<DSSFaceOnNonVehicleInfo *>* faceInfos; //人脸信息

@end


//获取服务定义相关字典的信息
@interface DSSBaseDictionaryInfo : NSObject

@property(nonatomic,copy)NSString *code;
@property(nonatomic,copy)NSString *identify;
@property(nonatomic,copy)NSString *typeCode;
@property(nonatomic,copy)NSString *i18nName;
@property(nonatomic,copy)NSString *memo;

@end





NS_ASSUME_NONNULL_END
