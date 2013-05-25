//
//  TVHDebugLogViewController.h
//  TvhClient
//
//  Created by zipleen on 09/03/13.
//  Copyright 2013 Luis Fernandes
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <UIKit/UIKit.h>
#import "TVHLogStore.h"
#import "MGSplitViewController.h"

@interface TVHDebugLogViewController : UITableViewController <TVHLogDelegate, MGSplitViewControllerDelegate>
@property (weak, nonatomic) IBOutlet UIBarButtonItem *debugButton;
@property (weak, nonatomic) IBOutlet UISearchBar *searchBar;
@property (weak, nonatomic) MGSplitViewController *splitViewController;
- (IBAction)debugButton:(UIBarButtonItem *)sender;
- (IBAction)clearLog:(id)sender;
- (IBAction)moveSplit:(id)sender;

@end
