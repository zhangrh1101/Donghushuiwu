//
//  DSSUserViewInfo.h
//  DataAdapterProtocol
//
//  Created by 32943 on 2020/9/16.
//

#import <Foundation/Foundation.h>

@interface DSSUserViewChannelInfo : NSObject
@property (nonatomic, copy, nonnull) NSString *channelId;
@property (nonatomic, copy, nullable) NSString *substream;
@property (nonatomic, copy, nullable) NSString *windowNo;
@end

@interface DSSUserViewInfo : NSObject
@property (nonatomic, copy, nonnull) NSString *viewId;
@property (nonatomic, copy, nullable) NSString *name;
@property (nonatomic, copy, nullable) NSString *windows;
@property (nonatomic, copy, nullable) NSString *module;
@property (nonatomic, strong, nullable) NSMutableArray<DSSUserViewChannelInfo *> *subChannels;
@end

@interface DSSUserViewDeptInfo : NSObject
@property (nonatomic, copy, nonnull) NSString *deptId;
@property (nonatomic, copy, nullable) NSString *name;
@property (nonatomic, strong, nullable) NSMutableArray<DSSUserViewInfo *> *subViews;
@property (nonatomic, strong, nullable) NSMutableArray<DSSUserViewDeptInfo *> *subDepts;
@end

