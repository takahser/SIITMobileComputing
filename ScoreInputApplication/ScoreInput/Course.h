//
//  Course.h
//  ScoreInput
//
//  Created by S Takahashi on 24.09.15.
//  Copyright (c) 2015 S Takahashi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Score;

@interface Course : NSManagedObject

@property (nonatomic, retain) NSString * courseID;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSSet *scores;
@end

@interface Course (CoreDataGeneratedAccessors)

- (void)addScoresObject:(Score *)value;
- (void)removeScoresObject:(Score *)value;
- (void)addScores:(NSSet *)values;
- (void)removeScores:(NSSet *)values;

@end
