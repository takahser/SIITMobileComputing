//
//  Score.h
//  ScoreInput
//
//  Created by S Takahashi on 24.09.15.
//  Copyright (c) 2015 S Takahashi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Student;

@interface Score : NSManagedObject

@property (nonatomic, retain) NSNumber * score;
@property (nonatomic, retain) NSManagedObject *forCourse;
@property (nonatomic, retain) Student *forStudent;

@end
