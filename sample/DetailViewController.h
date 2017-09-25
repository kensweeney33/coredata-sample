//
//  DetailViewController.h
//  sample
//
//  Created by Obie Malik on 7/23/17.
//  Copyright © 2017 Obie Malik. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "sample+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

