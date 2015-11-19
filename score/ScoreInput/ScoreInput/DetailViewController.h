//
//  DetailViewController.h
//  ScoreInput
//
//  Created by Mickael Luangkhot on 24/09/2015.
//  Copyright © 2015 ___MIKA___. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

