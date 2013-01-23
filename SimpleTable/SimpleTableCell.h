//
//  SimpleTableCell.h
//  SimpleTable
//
//  Created by Danny Favela on 1/21/13.
//  Copyright (c) 2013 Danny Favela. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SimpleTableCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *prepTimeLabel;
@property (weak, nonatomic) IBOutlet UIImageView *thumbnailImageView;

@end
