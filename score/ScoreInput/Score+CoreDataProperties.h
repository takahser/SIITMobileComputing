//
//  Score+CoreDataProperties.h
//  ScoreInput
//
//  Created by Mickael Luangkhot on 24/09/2015.
//  Copyright © 2015 ___MIKA___. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Score.h"

NS_ASSUME_NONNULL_BEGIN

@interface Score (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *score;
@property (nullable, nonatomic, retain) Course *forCourse;
@property (nullable, nonatomic, retain) NSManagedObject *forStudent;

@end

NS_ASSUME_NONNULL_END
