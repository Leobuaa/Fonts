//
//  FontListViewController.h
//  Fonts
//
//  Created by Leo Peng on 6/9/16.
//  Copyright © 2016 Leo Peng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FontListViewController : UITableViewController

@property (copy, nonatomic) NSArray *fontNames;
@property (assign, nonatomic) BOOL showsFavorites;

@end
