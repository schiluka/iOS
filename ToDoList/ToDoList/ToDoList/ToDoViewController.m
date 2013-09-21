//
//  ToDoViewController.m
//  ToDoList
//
//  Created by Santhosh Chiluka on 9/21/13.
//  Copyright (c) 2013 Santhosh Chiluka. All rights reserved.
//

#import "ToDoViewController.h"

@interface ToDoViewController ()

@end

@implementation ToDoViewController
{
    NSArray *todoList;
}
- (void)viewDidLoad
{
    [super viewDidLoad];
	todoList = [NSArray arrayWithObjects:@"Groceries", @"Movie", @"Play", @"Blog", @"Drive", @"Laundry", @"Shopping", @"Party", @"Misc", nil];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return [todoList count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *simpleTableIdentifier = @"SimpleTableItem";
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:simpleTableIdentifier];
    
    if (cell == nil) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:simpleTableIdentifier];
    }
    
    cell.textLabel.text = [todoList objectAtIndex:indexPath.row];
    cell.imageView.image = [UIImage imageNamed:@"asterisk.png"];
    return cell;
}

@end
