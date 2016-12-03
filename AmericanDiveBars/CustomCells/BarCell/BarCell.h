//
//  BarCell.h
//  AmericanDiveBars
//
//  Created by spaculus on 9/2/15.
//  Copyright (c) 2015 spaculus. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum RATINGS
{
    ZERO_STAR = 0,
    ONE_STAR,
    TWO_STAR,
    THREE_STAR,
    FOUR_STAR,
    FIVE_STAR
} Ratings;


@interface BarCell : UITableViewCell

@property (strong, nonatomic) IBOutlet UIImageView *imgBarLogo;
@property (strong, nonatomic) IBOutlet UIImageView *imgBarType;

@property (strong, nonatomic) IBOutlet UIImageView *imgStar1;
@property (strong, nonatomic) IBOutlet UIImageView *imgStar2;
@property (strong, nonatomic) IBOutlet UIImageView *imgStar3;
@property (strong, nonatomic) IBOutlet UIImageView *imgStar4;
@property (strong, nonatomic) IBOutlet UIImageView *imgStar5;

@property (strong, nonatomic) IBOutlet UILabel *lblBarTitle;
@property (strong, nonatomic) IBOutlet UILabel *lblAddress;
@property (strong, nonatomic) IBOutlet UILabel *lblPhone;

-(void)setBarRatingsBy:(int)total_rating andComments:(int)total_commnets;

@end