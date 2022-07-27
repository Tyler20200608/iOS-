//
//  Passenger.m
//  College Demo
//
//  Created by mashujun on 2022/7/18.
//

#import "Passenger.h"


@implementation Orders

@end

@implementation Passenger

- (void)BookTicket:(NsDate *)createDate origin:(NSString *)origin destination:(NSString *)destination price:(float)price{
    Orders *order = [Orders new];
    order.price = rice;
    order.origin = origin;
    order.destination = destination;
    order.createDate = createDate;
    order.isComplete = NO;
    //order.completeDate = ;
    if(self.isAdult)
         [self.openOrdersArray addObject:@[order]];
    
}

- (void)CheckTicket:(NsDate *)completeDate origin:(NSString *)origin{
    if(self.openOrdersArray.origin==origin){
        self.openOrdersArray.isComplete = YES;
        self.openOrdersArray.createDate = completeDate;
        [self.historyOrdersArray addObject:@[self.openOrdersArray]];
        [self.openOrdersArray removeObjectAtIndex:0];
    }
}
@end
