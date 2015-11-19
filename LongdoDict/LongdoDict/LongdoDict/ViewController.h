//
//  ViewController.h
//  LongdoDict
//
//  Created by S Takahashi on 10.09.15.
//  Copyright (c) 2015 S Takahashi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UISearchBarDelegate, UIWebViewDelegate> {
    IBOutlet UIWebView *webView;
    IBOutlet UISearchBar *searchBar;
}

- (IBAction)back;
- (IBAction)forward;
- (IBAction)clear;

@end

