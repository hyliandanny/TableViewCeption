//
//  SimpleTableViewController.h
//  SimpleTable
//
//  Created by Danny Favela on 1/16/13.
//  Copyright (c) 2013 Danny Favela. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SecondTableViewController.h"
#import "SimpleTableCell.h"

@interface SimpleTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property NSMutableArray *tableData;
@property IBOutlet SecondTableViewController *secondTableController;
@property IBOutlet UITableView *secondTable;

-(void)pushView:(UIViewController *)inViewController;

@end
