//
//  HelloAppDelegate.h
//  iOSHello
//
//  Created by Santhosh Chiluka on 9/21/13.
//  Copyright (c) 2013 Santhosh Chiluka. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HelloViewController;

@interface HelloAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) HelloViewController *viewController;

@end
