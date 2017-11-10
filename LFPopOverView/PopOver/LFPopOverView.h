//
//  LFPopOverView.h
//  LFPopOverView
//
//  Created by user on 16/1/13.
//  Copyright © 2016年 user. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSUInteger, LFPopoverPosition) {
    LFPopoverPositionUp = 1,
    LFPopoverPositionDown,
};

typedef NS_ENUM(NSUInteger, LFPopoverMaskType) {
    LFPopoverMaskTypeBlack,
    LFPopoverMaskTypeNone,
};

@interface LFPopOverView : UIView

+ (instancetype)popover;


@property (nonatomic, assign) UIEdgeInsets contentInset;


@property (nonatomic, assign, readonly) LFPopoverPosition popoverPosition;


@property (nonatomic, assign) CGSize arrowSize;


@property (nonatomic, assign) CGFloat cornerRadius;


@property (nonatomic, assign) CGFloat animationIn;


@property (nonatomic, assign) CGFloat animationOut;


@property (nonatomic, assign) BOOL animationSpring;


@property (nonatomic, assign) LFPopoverMaskType maskType;


@property (nonatomic, strong, readonly) UIControl *blackOverlay;


@property (nonatomic, assign) BOOL applyShadow;


@property (nonatomic, assign) CGFloat betweenAtViewAndArrowHeight;


@property (nonatomic, assign) CGFloat sideEdge;


@property (nonatomic, copy) dispatch_block_t didShowHandler;


@property (nonatomic, copy) dispatch_block_t didDismissHandler;



- (void)showAtPoint:(CGPoint)point
     popoverPostion:(LFPopoverPosition)position
    withContentView:(UIView *)contentView
             inView:(UIView *)containerView;


- (void)showAtView:(UIView *)atView
    popoverPostion:(LFPopoverPosition)position
   withContentView:(UIView *)contentView
            inView:(UIView *)containerView;


- (void)showAtView:(UIView *)atView
   withContentView:(UIView *)contentView
            inView:(UIView *)containerView;


- (void)showAtView:(UIView *)atView withContentView:(UIView *)contentView;

- (void)showAtView:(UIView *)atView withText:(NSAttributedString *)abs;
- (void)showAtView:(UIView *)atView withText:(NSAttributedString *)abs inView:(UIView *)container;

- (void)dismiss;

@end
