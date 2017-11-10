//
//  ViewController.m
//  LFPopOverView
//
//  Created by user on 16/1/13.
//  Copyright © 2016年 user. All rights reserved.
//

#import "ViewController.h"
#import "LFPopOverView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    UIButton *button = [[UIButton alloc] initWithFrame:CGRectMake(30, 70, 40, 30)];
    button.backgroundColor = [UIColor redColor];
    [button addTarget:self action:@selector(present:) forControlEvents:UIControlEventTouchUpInside];
    
    
    UIButton *button1 = [[UIButton alloc] initWithFrame:CGRectMake(320, 70, 40, 30)];
    button1.backgroundColor = [UIColor yellowColor];
    [button1 addTarget:self action:@selector(presentk:) forControlEvents:UIControlEventTouchUpInside];
    
    [self.view addSubview:button];
    [self.view addSubview:button1];
    
    self.view.backgroundColor = [UIColor lightGrayColor];
    
}

- (void)present:(id)sender{
    
    /**
     是view的位置与大小 决定了容器的大小
     
     - returns: <#return value description#>
     */
    UIView *view = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 100, 200)];
    view.backgroundColor = [UIColor yellowColor];
    
    LFPopOverView *pop = [LFPopOverView popover];
    
    /**
     *  箭头弹出的位置
     *
     *  @param 30 <#30 description#>
     *  @param 80 <#80 description#>
     *
     *  @return <#return value description#>
     */
    [pop showAtPoint:CGPointMake(30, 80) popoverPostion:LFPopoverPositionDown withContentView:view inView:self.view];
    
}

- (void)presentk:(id)sender{
    
    UIView *view = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 140, 200)];
    view.backgroundColor = [UIColor yellowColor];
    
    LFPopOverView *pop = [LFPopOverView popover];
    
    [pop showAtPoint:CGPointMake(320, 80) popoverPostion:LFPopoverPositionDown withContentView:view inView:self.view];

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    
}

@end
