//
//  TVHChannelStore.h
//  TvhClient
//
//  Created by zipleen on 01/12/13.
//  Copyright (c) 2013 zipleen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TVHChannel.h"

@class TVHServer;

@protocol TVHChannelStoreDelegate <NSObject>
@optional
- (void)willLoadChannels;
- (void)didLoadChannels;
- (void)didErrorLoadingChannelStore:(NSError*)error;
@end

@protocol TVHChannelStore <NSObject>
@property (nonatomic, weak) TVHServer *tvhServer;
@property (nonatomic, weak) id <TVHChannelStoreDelegate> delegate;
@property (nonatomic) NSInteger filterTag;
- (id)initWithTvhServer:(TVHServer*)tvhServer;
- (void)fetchChannelList;
- (NSString*)getApiChannels;

- (NSArray*)channels;
- (NSArray*)arrayChannels;
- (TVHChannel*)channelWithName:(NSString*)name;
- (TVHChannel*)channelWithId:(NSString*)channelId;
- (NSArray*)filteredChannelList;
- (void)updateChannelsProgress;
@end
