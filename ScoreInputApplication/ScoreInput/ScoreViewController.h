//
//  ScoreViewController.h
//  ScoreInput
//
//  Created by S Takahashi on 24.09.15.
//  Copyright (c) 2015 S Takahashi. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "Score.h"
#import "Student.h"

@interface ScoreViewController : UITableViewController {
    NSSet * scoreData;
}

@property (retain) NSSet* scoreData;

@end
