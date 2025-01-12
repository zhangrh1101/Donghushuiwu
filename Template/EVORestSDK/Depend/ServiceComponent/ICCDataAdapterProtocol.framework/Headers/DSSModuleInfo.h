//
//  DSSModuleInfo.h
//  Pods
//
//  Created by zf's on 2018/2/11.
//

#import <Foundation/Foundation.h>

@interface DSSModuleInfo : NSObject
@property (nonatomic, assign) NSUInteger order;
@property (nonatomic, assign) NSTimeInterval lastVisitTime;
@property (nonatomic, copy) NSString *moduleUrl;
@property (nonatomic, copy) NSString *menuRightCode;
@property (nonatomic, assign) BOOL isSelected;
@end
