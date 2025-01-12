//
//  DSSAppConfigInfo.h
//  ICCDataAdapterProtocol
//
//  Created by Mirror on 2022/7/5.
//

#import <Foundation/Foundation.h>


@interface DSSAppConfigMenuInfo : NSObject
@property (nonatomic, copy) NSString *menuId;
@property (nonatomic, copy) NSString *menuUrl;
@property (nonatomic, copy) NSString *menuName;
@end


@interface DSSAppConfigCardInfo : NSObject
@property (nonatomic, copy) NSString *cardId;
@property (nonatomic, copy) NSString *cardUrl;
@property (nonatomic, copy) NSString *cardName;
@end
