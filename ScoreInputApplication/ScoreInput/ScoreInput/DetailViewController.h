//
//  DetailViewController.h
//  ScoreInput
//
//  Created by S Takahashi on 24.09.15.
//  Copyright (c) 2015 S Takahashi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

