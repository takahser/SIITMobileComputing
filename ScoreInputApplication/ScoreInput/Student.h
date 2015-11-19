//
//  Student.h
//  ScoreInput
//
//  Created by S Takahashi on 24.09.15.
//  Copyright (c) 2015 S Takahashi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Student : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *scores;
@end

@interface Student (CoreDataGeneratedAccessors)

- (void)addScoresObject:(NSManagedObject *)value;
- (void)removeScoresObject:(NSManagedObject *)value;
- (void)addScores:(NSSet *)values;
- (void)removeScores:(NSSet *)values;

@end
