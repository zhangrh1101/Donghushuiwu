//
//  DSSWisdomElecDetailNode.h
//  DSSViewModelModule
//
//  Created by zhangquan  on 2021/2/5.
//

#import <UIKit/UIKit.h>
#import "DSSWisdomElecAlertNode.h"

NS_ASSUME_NONNULL_BEGIN


@interface DSSWisdomElecDetailNode : NSObject

@property (nonatomic, strong) NSString *channelCode;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *ownerCode;
@property (nonatomic, strong) NSString *ownerName;
@property (nonatomic, strong) NSString *gatewayCode;
@property (nonatomic, strong) NSString *gatewayName;
@property (nonatomic, assign) BOOL type;
@property (nonatomic, assign) NSInteger state;
@property (nonatomic, assign) CGFloat A_voltage;
@property (nonatomic, assign) CGFloat A_electricCurrent;
@property (nonatomic, assign) CGFloat A_power;
@property (nonatomic, assign) CGFloat A_temperature;
@property (nonatomic, assign) CGFloat B_voltage;
@property (nonatomic, assign) CGFloat B_electricCurrent;
@property (nonatomic, assign) CGFloat B_power;
@property (nonatomic, assign) CGFloat B_temperature;
@property (nonatomic, assign) CGFloat C_voltage;
@property (nonatomic, assign) CGFloat C_electricCurrent;
@property (nonatomic, assign) CGFloat C_power;
@property (nonatomic, assign) CGFloat C_temperature;
@property (nonatomic, assign) CGFloat zero_temperature;
@property (nonatomic, assign) CGFloat leakage;
@property (nonatomic, strong) NSString *time;
@property (nonatomic, strong) NSString *exceptionType;

@property (nonatomic, strong) NSMutableArray *alertArray;
@property (nonatomic, strong) NSMutableString *alertString;
@property (nonatomic, assign) BOOL showAlert;
@property (nonatomic, assign) BOOL isSelected;

- (void)configAlertValues;


@end

NS_ASSUME_NONNULL_END
