//
//  GuardDoorComand.h
//  Pods
//
//  Created by 28404 on 2018/01/11.
//

#import <Foundation/Foundation.h>

/** 门禁操作类型 */
typedef NS_ENUM(NSInteger, MBL_DOOR_COMAND){
    MBL_DOOR_COMAND_PROGARM,
    MBL_DOOR_COMAND_OPEN            = 5,                // 开门
    MBL_DOOR_COMAND_CLOSE           = 6,                // 关门
    MBL_DOOR_COMAND_ALWAYS_OPEN,                        // 门常开
    MBL_DOOR_COMAND_ALWAYS_CLOSE,                       // 门常关
    MBL_DOOR_COMAND_HOLIDAY_MAG_OPEN,                   // 假日管理门常开
    MBL_DOOR_COMAND_HOLIDAY_MAG_CLOSE,                  // 假日管理门常关
    MBL_DOOR_COMAND_RESET,                              // 复位
    MBL_DOOR_COMAND_HOST_ALWAYS_OPEN,                   // 报警主机下的门禁通道，常开
    MBL_DOOR_COMAND_HOST_ALWAYS_CLOSE,                  // 报警主机下的门禁通道，常关
};



