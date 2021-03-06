//
//  MyDatePicker.h
//  YWYiphone
//
//  Created by 汪达on 14/9/28.
//  Copyright (c) 2014年 汪达. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MyPicker.h"
#import "WDMacros.h"

@protocol MyDatePickerDelegate <NSObject>

-(void)myDatePickerDidSelectedDate:(NSDate *)selectedDate;

@end

@interface MyDatePicker : UIView

@property (nonatomic,strong)UIView *backgroundView;
@property (nonatomic,strong)UIDatePicker *datePicker;
@property (nonatomic,strong)MyPickerTitleView *titleView;
@property (nonatomic, assign) NSInteger index;

@property (nonatomic,strong)id <MyDatePickerDelegate> delegate;

-(void)showWithTitle:(NSString *)title;
-(void)showWithDatePickerMode:(UIDatePickerMode )mode;
-(void)setSelectedDate:(NSDate *)date;
-(void)open;
-(void)close;


@end
