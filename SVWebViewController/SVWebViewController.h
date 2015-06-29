//
//  SVWebViewController.h
//
//  Created by Sam Vermette on 08.11.10.
//  Copyright 2010 Sam Vermette. All rights reserved.
//
//  https://github.com/samvermette/SVWebViewController

@import UIKit;

//! Project version number for SVWebViewController.
FOUNDATION_EXPORT double SVWebViewControllerVersionNumber;

//! Project version string for SVWebViewController.
FOUNDATION_EXPORT const unsigned char SVWebViewControllerVersionString[];

#import "SVModalWebViewController.h"
#import "SVWebViewControllerActivity.h"
#import "SVWebViewControllerActivityChrome.h"
#import "SVWebViewControllerActivitySafari.h"

@interface SVWebViewController : UIViewController

- (instancetype)initWithAddress:(NSString*)urlString;
- (instancetype)initWithURL:(NSURL*)URL;
- (instancetype)initWithURLRequest:(NSURLRequest *)request;

@property (nonatomic, weak) id<UIWebViewDelegate> delegate;

@end
