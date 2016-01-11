//
//  ViewController.h
//  Coredata
//
//  Created by Malathesh Helvar on 12/29/15.
//  Copyright © 2015 Ganesh Hebbal Subash. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>
@property (strong) NSMutableArray *devices;

@property (weak, nonatomic) IBOutlet UITableView *tableView;
@end

