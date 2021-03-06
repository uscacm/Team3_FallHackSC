//
//  CenterViewController.h
//  Nom
//
//  Created by Kaitlyn Lee on 10/12/13.
//  Copyright (c) 2013 Kaitlyn Lee. All rights reserved.
//

#include "diningHall.h"

#import <UIKit/UIKit.h>
#import "LeftViewController.h"
#include "Meal.h"

@protocol CenterViewControllerDelegate <NSObject>

@optional
- (void)movePanelLeft;
- (void)movePanelRight;
- (void)imageSelected:(UIImage *)image
            withTitle:(NSString *)imageTitle;
- (void)mealSelected:(Meal *)meal;


@required
- (void)movePanelToOriginalPosition;

@end

@interface CenterViewController : UIViewController <LeftViewControllerDelegate, UITableViewDelegate, UITableViewDataSource> {
  NSURLConnection * connect;
  NSMutableData * Udata;
  int _hallS;
}

@property (nonatomic, assign) id<CenterViewControllerDelegate> delegate;
@property (weak, nonatomic) UIButton *leftButton;
@property (weak, nonatomic) UIButton *imageB ;
@property (strong, nonatomic)   UIImageView *view1 ;
@property (strong, nonatomic) diningHall *selectedHall;
@property NSInteger pageIndex;
@property (nonatomic, strong) UILabel *dayLabel;

@property (weak, nonatomic) IBOutlet UIWebView *webView;
@property (weak, nonatomic) IBOutlet UISegmentedControl *mealS;
@property (strong, nonatomic) UINavigationBar *navBar;

- (void)updateTextViews:(BOOL)force;
-(void)setHall:(diningHall *)hall;
//-(void)setFoodArrayFromHall;
-(void)btnMovePanelRight;
// left button
@end
