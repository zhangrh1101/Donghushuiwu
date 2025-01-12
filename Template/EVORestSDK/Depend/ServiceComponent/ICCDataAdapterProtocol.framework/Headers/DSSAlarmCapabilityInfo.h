//
//  DSSAlarmCapabilityInfo.h
//  DataAdapterProtocol
//
//  Created by zhangquan  on 2020/6/29.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN



@interface DSSAlarmCapabilityInfo : NSObject

@property (nonatomic, assign) BOOL isShow;              //该节点是否显示
@property (nonatomic, strong) NSString *treeNode;       //组织树节点
/// -1时表示没有类型 0时表示编码设备
@property (nonatomic, assign) NSInteger type;          //设备大类
@property (nonatomic, assign) NSUInteger chType;        //通道类型
@property (nonatomic, assign) NSUInteger capability;    //该节点对应的能力集

//组织
+ (instancetype)infoWithTreeNode:(NSString *)treeNode;
//设备
+ (instancetype)infoWithShow:(NSUInteger)isShow type:(NSUInteger)type;
//通道
+ (instancetype)infoWithShow:(NSUInteger)isShow type:(NSUInteger)type capability:(NSUInteger)capability;
+ (instancetype)infoWithShow:(NSUInteger)isShow chType:(NSUInteger)type capability:(NSUInteger)capability;


@end

NS_ASSUME_NONNULL_END
