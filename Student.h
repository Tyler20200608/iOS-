#import <Foundation/Foundation.h>

@interface Student : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *major;
@property (nonatomic, assign) int age;


- (void)study:(float)time;

@end