//
//  ModelController.h
//  HelloWorld
//
//  Created by Santhosh Chiluka on 8/31/13.
//  Copyright (c) 2013 Santhosh Chiluka. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
