//
//  YWTableViewHeadView.h
//  YWExcelDemo
//
//  Created by yaowei on 2018/8/16.
//  Copyright © 2018年 yaowei. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YWTableViewHeadView : UITableViewHeaderFooterView

@property (nonatomic, strong) UIScrollView *rightScrollView;

@property (nonatomic, strong) UILabel *nameLabel;
- (instancetype)initWithReuseIdentifier:(NSString *)reuseIdentifier
                              itemCount:(NSInteger)item
                         withItemWidths:(NSArray *)itemWidths
                       itemDefalutWidth:(NSInteger)width
                             withNotiID:(NSString *)notif
                             showBorder:(BOOL)showBorder
                        showBorderColor:(UIColor *)color;

- (instancetype)initWithReuseIdentifier:(NSString *)reuseIdentifier
                inSrcollectionitemCount:(NSInteger)item
                         withItemWidths:(NSArray *)itemWidths
                       itemDefalutWidth:(NSInteger)width
                             withNotiID:(NSString *)notif
                             showBorder:(BOOL)showBorder
                        showBorderColor:(UIColor *)color;
@end
