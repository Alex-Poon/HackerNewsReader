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

@interface Home : PullRefreshTableViewController <ADTClientDelegate> {
    ADTClient *_audioACR;
}

- (NSString*)baseUrl;
- (NSString*)basePage;
- (NSString*)baseTitle;
@property (nonatomic, retain) ADTClient *audioACR;
@end

