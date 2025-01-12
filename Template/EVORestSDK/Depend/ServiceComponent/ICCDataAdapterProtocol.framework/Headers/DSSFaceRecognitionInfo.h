//
//  DSSFaceRecognitionInfo.h
//  Pods
//
//  Created by caidong on 2018/10/19.
//
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger,DSSSnapFaceEmotion) {
    DSSSnapFaceEmotion_Unknown = -1,
    DSSSnapFaceEmotion_Smile = 0, //微笑
    DSSSnapFaceEmotion_Angry = 1, //愤怒
    DSSSnapFaceEmotion_Sad = 2, //悲伤
    DSSSnapFaceEmotion_Disgust = 3, //厌恶
    DSSSnapFaceEmotion_Scared = 4, //害怕
    DSSSnapFaceEmotion_Surprise = 5, //害怕
    DSSSnapFaceEmotion_Normal = 6, //正常
    DSSSnapFaceEmotion_Laugh = 7, //大笑
    DSSSnapFaceEmotion_Happy = 8, //高兴
    DSSSnapFaceEmotion_Puzzled = 9, //困惑
    DSSSnapFaceEmotion_Scream = 10, //惊叫
};

//是否佩戴眼镜
typedef NS_ENUM(NSInteger,DSSSnapFaceGlasses){
    DSSSnapFaceGlasses_None ,//无
    DSSSnapFaceGlasses_Wear , //眼镜
    DSSSnapFaceGlasses_Sun,  //墨镜
};

//是否有胡子
typedef NS_ENUM(NSInteger,DSSSnapBeard){
    DSSSnapBeard_Unknow = 1,//未知
    DSSSnapBeard_YES = 3,  //有胡子
    DSSSnapBeard_NO = 2,  //无胡子
};

//是否佩戴口罩
typedef NS_ENUM(NSInteger,DSSSnapMask){
    DSSSnapMask_Unknow = 0, //未知
    DSSSnapMask_Unidentified = 1, //未识别
    DSSSnapMask_UnWear = 2, //无口罩
    DSSSnapMask_Wear = 3,    //有口罩
};

@interface DSSFaceRecognitionInfo: NSObject

@end

///人员类型信息
@interface DSSFacePersonTypeInfo: NSObject
@property (nonatomic, copy, nullable) NSString *personTypeId;
@property (nonatomic, copy, nullable) NSString *personTypeName;
@end
///人脸库信息
@interface DSSFaceRepositoryInfo: NSObject
@property (nonatomic, copy, nullable) NSString *repositoryId;
@property (nonatomic, copy, nullable) NSString *repositoryName;//库名称
@property (nonatomic, copy, nullable) NSString *iconUrl;  //图标
@property (nonatomic, copy, nullable) NSString *memo;  //备注
@property (nonatomic, strong, nullable) UIColor *color; //库颜色
@property (nonatomic, assign) NSInteger personCount; //人员数量
@end
///人脸库人脸信息
@interface DSSRepositoryFaceInfo: NSObject
@property (nonatomic, copy, nullable) NSString *recordId;
@property (nonatomic, copy, nullable) NSString *name;
@property (nonatomic, copy, nullable) NSString *personId;
@property (nonatomic, copy, nullable) NSString *gender;
@property (nonatomic, copy, nullable) NSString *birthday;
@property (nonatomic, copy, nullable) NSString *nationality;
@property (nonatomic, copy, nullable) NSString *imageUrl;
@property (nonatomic, copy, nullable) NSString *personTypeId;
@property (nonatomic, copy, nullable) NSString *personTypeName;
@property (nonatomic, copy, nullable) NSString *repositoryId;
@property (nonatomic, copy, nullable) NSString *repositoryName;
@property (nonatomic, copy, nullable) NSString *similarity;
@property (nonatomic, copy, nullable) NSString *memo;
@property (nonatomic, strong, nullable) UIImage *image;
@end

///抓拍库人脸信息
@interface DSSSnapLibraryFaceInfo: NSObject
@property (nonatomic, copy, nullable) NSString *recordId;
@property (nonatomic, copy, nullable) NSString *code;
@property (nonatomic, copy, nullable) NSString *channelId;
@property (nonatomic, copy, nullable) NSString *channelName;
@property (nonatomic, copy, nullable) NSString *faceImageUrl;
@property (nonatomic, copy, nullable) NSString *pictureUrl;
@property (nonatomic, copy, nullable) NSString *gender;
@property (nonatomic, copy, nullable) NSString *age;
@property (nonatomic, assign) DSSSnapFaceEmotion emotion;
@property (nonatomic, assign) DSSSnapFaceGlasses glasses;
@property (nonatomic, assign) NSInteger beginTime;
@property (nonatomic, copy, nullable) NSString *similarity;
@property (nonatomic, assign) DSSSnapMask mask;
@property (nonatomic, assign) DSSSnapBeard beard;
@property (nonatomic, copy, nullable) NSString *name;
@property (nonatomic, copy, nullable) NSString *identity;
@property (nonatomic, copy, nullable) NSString *bornYear;


@end
