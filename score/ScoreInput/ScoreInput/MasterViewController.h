//
//  MasterViewController.h
//  ScoreInput
//
//  Created by Mickael Luangkhot on 24/09/2015.
//  Copyright © 2015 ___MIKA___. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

#import "Score.h"
#import "Course.h"
#import "Student.h"

@class DetailViewController;

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (void) showCourse:(NSIndexPath *) indexPath;
- (void) loadData;
- (void) clearData;

@end

