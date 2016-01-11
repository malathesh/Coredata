//
//  DetailViewController.h
//  Coredata
//
//  Created by Malathesh Helvar on 12/29/15.
//  Copyright © 2015 Ganesh Hebbal Subash. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *name;
@property (weak, nonatomic) IBOutlet UITextField *version;
@property (weak, nonatomic) IBOutlet UITextField *company;
- (IBAction)cancel:(UIBarButtonItem *)sender;
- (IBAction)Save:(UIBarButtonItem *)sender;

@end
