//
//  DisperseBtn.h
//  button散开
//
///  Created by apple on 16/01/16.
//  Copyright © 2016年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DisperseBotton : UIView
//边界
@property (assign, nonatomic) CGRect borderRect;
@property (strong, nonatomic) UIImage *closeImage;
@property (strong, nonatomic) UIImage *openImage;
@property (nonatomic ,copy)NSArray *btns;
//回收按钮
-(void)recoverBotton;
@end
