//
//  MPAdManager+MPInterstitialAdControllerFriend.h
//  MoPub
//
//  Created by Andrew He on 7/13/11.
//  Copyright 2011 MoPub, Inc. All rights reserved.
//

#import "MPAdManager.h"

@interface MPAdManager (MPInterstitialAdControllerFriend)

@property (nonatomic, assign) BOOL ignoresAutorefresh;

- (void)didLoadAdFromExternalAdapter;
- (void)didFailToLoadAdFromExternalAdapter;
- (void)trackClick;
- (void)trackImpression;

@end
