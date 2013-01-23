//
//  SecondTableViewController.h
//  SimpleTable
//
//  Created by Danny Favela on 1/16/13.
//  Copyright (c) 2013 Danny Favela. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SimpleTableCell.h"
#import "SimpleNonTableScreenViewController.h"

@interface SecondTableViewController : UITableViewController

@property NSMutableArray *tableData;
@property NSMutableArray *thumbnails;
@property NSMutableArray *prepTime;
@property (nonatomic) UIViewController *manualViewControllerParent;

-(void)setManualViewControllerParent:(UIViewController *)inManualViewControllerParent;
-(void)arbitraryMethod:(NSString *)inString;

@end
