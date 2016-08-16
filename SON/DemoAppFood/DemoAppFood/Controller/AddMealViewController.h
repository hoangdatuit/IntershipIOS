//
//  AddMealViewController.h
//  DemoAppFood
//
//  Created by ThanhSon on 8/15/16.
//  Copyright © 2016 ThanhSon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Meal.h"
#import "RateView.h"

@interface AddMealViewController : UIViewController<UITextFieldDelegate,UIImagePickerControllerDelegate,UINavigationControllerDelegate,RateViewDelegate>

@property (weak, nonatomic) IBOutlet UITextField *txtNameMeal;
@property (weak, nonatomic) IBOutlet UIImageView *imvPhotoImage;

@property (strong, nonatomic)Meal *currentMeal;
@property (weak, nonatomic) IBOutlet UILabel *lblNameMeal;

@property (weak, nonatomic) IBOutlet UIButton *btnSetDefaultLabelText;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *btnSave;
@property (weak, nonatomic) IBOutlet RateView *viewRate;


@end
