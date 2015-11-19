//
//  CubeGLAppDelegate.h
//  CubeGL
//
//  Created by Vuthichai Ampornaramveth on 9/18/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CubeGLViewController;

@interface CubeGLAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet CubeGLViewController *viewController;

@end
