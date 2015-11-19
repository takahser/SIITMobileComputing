//
//  Student+CoreDataProperties.h
//  ScoreInput
//
//  Created by Mickael Luangkhot on 24/09/2015.
//  Copyright © 2015 ___MIKA___. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Student.h"

NS_ASSUME_NONNULL_BEGIN

@interface Student (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSSet<Score *> *scores;

@end

@interface Student (CoreDataGeneratedAccessors)

- (void)addScoresObject:(Score *)value;
- (void)removeScoresObject:(Score *)value;
- (void)addScores:(NSSet<Score *> *)values;
- (void)removeScores:(NSSet<Score *> *)values;

@end

NS_ASSUME_NONNULL_END
