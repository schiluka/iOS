//
//  RootViewController.h
//  HelloWorld
//
//  Created by Santhosh Chiluka on 8/31/13.
//  Copyright (c) 2013 Santhosh Chiluka. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController <UIPageViewControllerDelegate>

@property (strong, nonatomic) UIPageViewController *pageViewController;

@end
