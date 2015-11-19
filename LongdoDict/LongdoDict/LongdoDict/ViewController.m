//
//  ViewController.m
//  LongdoDict
//
//  Created by S Takahashi on 10.09.15.
//  Copyright (c) 2015 S Takahashi. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    [searchBar becomeFirstResponder];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)searchBarSearchButtonClicked:(UISearchBar *)bar
{
    //NSLog(@"Search %@", bar.text);
    
    // hide keyboard
    //[bar resignFirstResponder];
    
    // create url string
    NSString *urlString = [NSString stringWithFormat:@"http://dict.longdo.com/mobile.php?search=%@", bar.text];
    
    // url object
    NSURL *url = [NSURL URLWithString:urlString];
    
    // load url with webView
    [webView loadRequest:[NSURLRequest requestWithURL:url]];
}

- (void)webViewDidFinishLoad:(UIWebView *)webView
{
    //NSLog(@"WebView finished loading");
    [UIApplication sharedApplication].networkActivityIndicatorVisible = NO;
}

- (void)webViewDidStartLoad:(UIWebView *)webView
{
    //NSLog(@"WebView started loading");
    [UIApplication sharedApplication].networkActivityIndicatorVisible = YES;
}

- (void)webView:(UIWebView *)webView didFailLoadWithError:(NSError *)error
{
    [UIApplication sharedApplication].networkActivityIndicatorVisible = NO;
    NSLog(@"Load Failed %@", [error localizedDescription]);
    
    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"No network connection"
                                                    message:@"You must be connected to the internet to use this app."
                                                   delegate:nil
                                          cancelButtonTitle:@"OK"
                                          otherButtonTitles:nil];
    [alert show];
    //[alert release];

}
- (void) back
{
    [webView goBack];
}
- (void) forward
{
    [webView goForward];
}
- (void) clear
{
    NSString *urlString = [NSString stringWithFormat:@""];
    
    // url object
    NSURL *url = [NSURL URLWithString:urlString];
    
    // load url with webView
    [webView loadRequest:[NSURLRequest requestWithURL:url]];

}


@end
