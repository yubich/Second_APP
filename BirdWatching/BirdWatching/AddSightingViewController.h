//
//  AddSightingViewController.h
//  BirdWatching
//
//  Created by BINGCHEN YU on 1/24/13.
//  Copyright (c) 2013 BINGCHEN YU. All rights reserved.
//

#import <UIKit/UIKit.h>


@class BirdSighting;

@interface AddSightingViewController : UITableViewController <UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *birdNameInput;
@property (weak, nonatomic) IBOutlet UITextField *locationInPut;
@property (strong, nonatomic) BirdSighting *birdSighting;

@end
