//
//  MTLogger.h
//  Pods
//
//  Created by zyx on 17/5/8.
//
//

#import <Foundation/Foundation.h>

#ifdef  __cplusplus
extern "C" {
#endif

void NSLog_VA(NSString *format, ...);
//返回非0表示外部已处理该消息，MTLogger内部不需要再日志输出
typedef int(*LogProc) (NSString* formatmessage);
int MTLoggerAttachLogproc(LogProc proc);

#ifdef  __cplusplus
}
#endif

#define MTLOG(...) NSLog_VA(__VA_ARGS__);

@interface MTLoger : NSObject
+ (void)MTlogInSwift:(NSString *)str;
@end
