//
//  main.m
//  TimeAfterTime
//
//  Created by William Mora on 31/12/13.
//  Copyright (c) 2013 wmora. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSDate *now = [NSDate date];
        NSLog(@"The new date lives at %p", now); //Location of the object
        NSLog(@"The new date is %@", now); //String representation of the object
        
        double seconds = [now timeIntervalSince1970];
        NSLog(@"It has been %f seconds since the start of 1970", seconds);
        
        NSDate *later = [now dateByAddingTimeInterval:100000];
        NSLog(@"In 100000 seconds it will be %@", later);
        
        //Challenge
        NSDateComponents *comps = [[NSDateComponents alloc] init];
        [comps setYear:1985];
        [comps setMonth:5];
        [comps setDay:24];
        [comps setHour:12];
        [comps setMinute:0];
        [comps setSecond:0];
        
        NSCalendar *g = [[NSCalendar alloc] initWithCalendarIdentifier:NSGregorianCalendar];
        NSDate *dateOfBirth = [g dateFromComponents:comps];
        
        double d = [now timeIntervalSinceDate:dateOfBirth];
        NSLog(@"I have been alive for %f seconds", d);
        
    }
    return 0;
}

