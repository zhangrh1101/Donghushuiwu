//
//  DSSMajorMenuInfo.h
//  ICCDataAdapterProtocol
//
//  Created by Mirror on 2022/5/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class DSSMenuGroupInfo;
@class DSSMenuInfo;

@interface DSSMajorMenuInfo : NSObject
@property (nonatomic ,copy)NSString * moduleName;
@property (nonatomic ,assign)int  moduleId;
@property (nonatomic ,copy)NSString * moduleKey;
@property (nonatomic ,strong)NSArray  <DSSMenuGroupInfo *>*groups;
@property (nonatomic ,strong)NSArray *combinMenuArray;//所有组里的菜单整合到一起
@property (nonatomic ,copy) NSString *iconBaseName;// 需要拼接 _n  或 _h
@property (nonatomic ,strong)NSArray *selectedCombinMenuArray;//所有组里的菜单整合到一起

@end


@interface DSSMenuGroupInfo: NSObject
@property (nonatomic ,copy)NSString *groupKey;
@property (nonatomic ,copy)NSString *groupName;
@property (nonatomic ,assign)int     groupSort;
@property (nonatomic ,assign)int     terminal;
@property (nonatomic ,strong)NSArray <DSSMenuInfo *> *menus;
@end


@interface DSSMenuInfo : NSObject
@property (nonatomic ,copy)NSString * uniqueMenuCode;
@property (nonatomic ,copy)NSString * menuUuid;
@property (nonatomic ,assign)int   menuType;
@property (nonatomic ,copy)NSString * menuName;
@property (nonatomic ,copy)NSString * menuHomeIcon;
@property (nonatomic ,assign)int   sort;
@property (nonatomic ,copy)NSString * menuOpenType;
@property (nonatomic ,copy)NSString * menuAddType;
@property (nonatomic ,copy)NSString * menuTreePath;
@property (nonatomic ,assign) NSInteger     menuRight;
@property (nonatomic ,copy)NSString * mccsModuleId;
@end


NS_ASSUME_NONNULL_END
