//
//  MyClass.h
//  RuntimeStudy
//
//  Created by Zhu J on 10/16/13.
//  Copyright (c) 2013 Zhu J. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MyClass : NSObject

@property NSString *familyName;
@property long version;
@property (nonatomic, strong) NSString *lastName;
- (void)print;
@end
