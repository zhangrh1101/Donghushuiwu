//
//  DSSWisdomElecListNode.h
//  DataAdapterProtocol
//
//  Created by zhangquan  on 2021/2/23.
//

#import <Foundation/Foundation.h>
#import "DSSWisdomElecDetailNode.h"

NS_ASSUME_NONNULL_BEGIN

@interface DSSWisdomElecListNode : NSObject

@property (nonatomic, strong) NSMutableArray<DSSWisdomElecDetailNode*>*pageData;

//全部信息数量
@property (nonatomic,assign) NSInteger allInfoCount;
//全部异常数量
@property (nonatomic,assign) NSInteger allExceptionCount;
//电压异常数量
@property (nonatomic,assign) NSInteger voltageExcCount;
//电流异常数量
@property (nonatomic,assign) NSInteger currentExcCount;
//功率异常数量，
@property (nonatomic,assign) NSInteger powerExcCount;
//温度异常数量，
@property (nonatomic,assign) NSInteger tempExcCount;
//漏电流异常数量
@property (nonatomic,assign) NSInteger leakageExcCount;

@property (nonatomic,assign) NSInteger pageSize;
@property (nonatomic,assign) NSInteger currentPage;
@property (nonatomic,assign) NSInteger totalPage;

@end

NS_ASSUME_NONNULL_END
