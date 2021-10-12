//
//  ViewController.h
//  meh
//
//  Created by student on 12/10/2021.
//  Copyright © 2021 wvffle.net. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (nonatomic, weak) IBOutlet UILabel *messageLabel;
@property (nonatomic, weak) IBOutlet UITextField *inputField;

- (IBAction) enter;
@end

