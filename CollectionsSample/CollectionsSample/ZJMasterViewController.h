//
//  ZJMasterViewController.h
//  CollectionsSample
//
//  Created by Zhu J on 10/23/13.
//  Copyright (c) 2013 Zhu J. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ZJDetailViewController;

@interface ZJMasterViewController : UITableViewController

@property (strong, nonatomic) ZJDetailViewController *detailViewController;

@end
