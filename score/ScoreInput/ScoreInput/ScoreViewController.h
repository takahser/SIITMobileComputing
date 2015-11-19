//
//  ScoreViewController.h
//  ScoreInput
//
//  Created by Mickael Luangkhot on 24/09/2015.
//  Copyright © 2015 ___MIKA___. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Score.h"
#import "Student.h"

@interface ScoreViewController : UITableViewController  {
    NSSet * scoreData;
}

@property (retain) NSSet* scoreData;

@end
