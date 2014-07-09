//
//  DetailViewController.h
//  ControllingSource
//
//  Created by KEN on 7/9/14.
//  Copyright (c) 2014 Chee Kin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
