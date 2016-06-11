//
//  FavoritesList.h
//  Fonts
//
//  Created by Leo Peng on 6/7/16.
//  Copyright © 2016 Leo Peng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FavoritesList : NSObject

+ (instancetype)sharedFavoritesList;

- (NSArray *)favorites;

- (void)addFavorite:(id)item;
- (void)removeFavorite:(id)item;
- (void)moveItemAtIndex:(NSInteger)from toIndex:(NSInteger)to;

@end
