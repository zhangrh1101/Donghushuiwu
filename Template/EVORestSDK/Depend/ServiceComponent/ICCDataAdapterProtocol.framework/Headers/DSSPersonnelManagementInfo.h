//
//  DSSPersonnelManagementInfo.h
//  DataAdapterProtocol
//
//  Created by hsd on 2021/3/30.
//

#import <Foundation/Foundation.h>
#import "DSSBaseInfo.h"
@class DSSCarInfo;
@class DSSPersonBiosignature;
@class DSSPersonDepartmentInfo;
@class DSSCardInfo;
@interface DSSPersonnelManagementInfo : DSSBaseInfo
@property (nonatomic, copy) NSString *Id;
@property (nonatomic, copy) NSString *code;
@property (nonatomic, copy) NSString *selfCode;
@property (nonatomic, copy) NSString *name;
@property (nonatomic,assign) NSInteger sex;
@property (nonatomic,assign) NSInteger domainId;
@property (nonatomic, copy) NSString *birthday;
@property (nonatomic, copy) NSString *paperType;
@property (nonatomic, copy) NSString *paperTypeName;
@property (nonatomic, copy) NSString *paperNumber;
@property (nonatomic, copy) NSString *paperAddress;
@property (nonatomic,assign) NSInteger nation;
@property (nonatomic, copy) NSString *nationName;
@property (nonatomic, copy) NSString *phone;
@property (nonatomic, copy) NSString *email;
@property (nonatomic, copy) NSString *emailExt;
@property (nonatomic,assign) NSInteger departmentId;
@property (nonatomic, copy) NSString *departmentName;
@property (nonatomic, copy) NSString *departmentNameExt;
@property (nonatomic,assign) NSInteger status;
@property (nonatomic, copy) NSString *password;
@property (nonatomic,assign) NSInteger age;
@property (nonatomic, copy) NSString *ownerCode;
@property (nonatomic,assign) NSInteger personIdentityId;
@property (nonatomic, copy) NSString *personType;
@property (nonatomic,assign) NSInteger isAdmin;
@property (nonatomic, copy) NSString *parentIds;
@property (nonatomic,assign) NSInteger isBind;



@property (nonatomic, copy) NSString *picPath;
@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSString *personIdentityName;
@property (nonatomic, copy) NSArray<DSSCarInfo *> *cars;
@property (nonatomic, copy) NSArray<DSSPersonBiosignature *> *personBiosignatures;
@property (nonatomic, copy) NSArray<DSSPersonDepartmentInfo *> *departmentList;

@property (nonatomic,assign) BOOL select;
@property (nonatomic, copy) NSArray<DSSCardInfo *> *cards;


@end

@interface DSSPersonBiosignature : DSSBaseInfo
@property (nonatomic,assign) NSInteger type;
@property (nonatomic,assign) NSInteger index;
@property (nonatomic, copy) NSString *path;
@end
@interface DSSPersonDepartmentInfo : DSSBaseInfo
@property (nonatomic,assign) NSInteger departmentType;
@property (nonatomic,assign) NSInteger departmentId;
@property (nonatomic, copy) NSString *departmentName;
@property (nonatomic, copy) NSString *departmentNameExt;

@end
@interface DSSCarInfo : DSSBaseInfo
@property (nonatomic,assign) NSInteger Id;
@property (nonatomic, copy) NSString *carCode;
@property (nonatomic, copy) NSString *carNum;
@property (nonatomic, copy) NSString *carBrand;
@property (nonatomic, copy) NSString *carNumColor;
@property (nonatomic, copy) NSString *carColor;
@property (nonatomic, copy) NSString *carType;
@property (nonatomic, copy) NSString *carPicPath;
@property (nonatomic,assign) NSInteger ownerId;
@property (nonatomic, copy) NSString *departmentId;
@property (nonatomic, copy) NSString *departmentName;


@end

@interface DSSPersonnelIdentityInfo : DSSBaseInfo
@property (nonatomic,assign) NSInteger Id;
@property (nonatomic, copy) NSString *name;

@end
@interface DSSPMDepartmentInfo : DSSBaseInfo
@property (nonatomic,assign) NSInteger Id;
@property (nonatomic,assign) NSInteger parentId;
@property (nonatomic,assign) NSInteger isParent;
@property (nonatomic,assign) NSInteger nodeType;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *parentNameLine;

@property (nonatomic, strong)NSArray<DSSPMDepartmentInfo *> *children;;

@end


@interface DSSPersonnelFaceInfo : DSSBaseInfo
@property (nonatomic, copy) NSString *recordId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *personId;
@property (nonatomic, copy) NSString *gender;
@property (nonatomic, copy) NSString *birthday;
@property (nonatomic, copy) NSString *nationality;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic, copy) NSString *personTypeId;
@property (nonatomic, copy) NSString *personTypeName;
@property (nonatomic, copy) NSString *repositoryId;
@property (nonatomic, copy) NSString *repositoryName;
@property (nonatomic, copy) NSString *similarity;
@property (nonatomic, copy) NSString *memo;
@property (nonatomic, strong) UIImage *image;
@end

