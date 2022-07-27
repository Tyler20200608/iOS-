//
//  Passenger.h
//  College Demo
//
//  Created by mashujun on 2022/7/18.
//

#import "Person.h"

NS_ASSUME_NONNULL_BEGIN

@interface Orders : NSObject
@property (nonatomic, strong)float price;//价格
@property (nonatomic, copy)NSString *origin;//始发地
@property (nonatomic, copy)NSString *destination;//目的地
@property (nonatomic, strong) NSDate *createDate;//建立时间
@property (nonatomic, strong) BOOL isComplete;//是否完成
@property (nonatomic, strong) NSDate *completeDate;//完成时间
@end

@interface Passenger : Person
// @property 属性
@property (nonatomic, readonly) BOOL isAdult;// 是否年满 18 岁
@property (nonatomic, strong)NSMutableArray *historyOrdersArray =[[NSMutableArray alloc] init];// 历史订单 （数组）
@property (nonatomic, strong)NSMutableArray *openOrdersArray =[[NSMutableArray alloc] init];// 未出行订单 （数组）

// Function 方法
// 去订票
- (void)BookTicket:(NsDate *)createDate origin:(NSString *)origin destination:(NSString *)destination price:(float)price;
// 去检票
- (void)CheckTicket:(NsDate *)completeDate origin:(NSString *)origin;
@end

NS_ASSUME_NONNULL_END
