//
//  ToDoAppDelegate.h
//  ToDoList
//
//  Created by Santhosh Chiluka on 9/21/13.
//  Copyright (c) 2013 Santhosh Chiluka. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ToDoViewController;

@interface ToDoAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) ToDoViewController *viewController;

@end
