//
//  MasterViewController.h
//  ScoreInput
//
//  Created by S Takahashi on 24.09.15.
//  Copyright (c) 2015 S Takahashi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

#import "Score.h"
#import "Course.h"
#import "Student.h"

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (void) showCourse:(NSIndexPath *) indexPath;
- (void) loadData;
- (void) clearData;

@end

