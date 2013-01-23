//
//  SimpleTableCell.m
//  SimpleTable
//
//  Created by Danny Favela on 1/21/13.
//  Copyright (c) 2013 Danny Favela. All rights reserved.
//

#import "SimpleTableCell.h"

@implementation SimpleTableCell

@synthesize nameLabel;
@synthesize prepTimeLabel;
@synthesize thumbnailImageView;

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
