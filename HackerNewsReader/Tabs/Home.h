//
//  Home.h
//  HackerNewsReader
//
//  Created by Chris on 10/08/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PullRefreshTableViewController.h"

#import "ADTClientDelegate.h"
#import "ADTClient.h"

#import "MPAdView.h"

#define PUB_ID_320x50 @"agltb3B1Yi1pbmNyDAsSBFNpdGUYkaoMDA"
#define PUB_ID_300x250 @"agltb3B1Yi1pbmNyDAsSBFNpdGUYycEMDA"

@interface Home : PullRefreshTableViewController <ADTClientDelegate, MPAdViewDelegate> {
    ADTClient *_audioACR;
    MPAdView *_adView;
}

- (NSString*)baseUrl;
- (NSString*)basePage;
- (NSString*)baseTitle;
@property (nonatomic, retain) ADTClient *audioACR;
@end

