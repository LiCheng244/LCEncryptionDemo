//
//  ViewController.m
//  Encryption
//
//  Created by LiCheng on 16/8/4.
//  Copyright © 2016年 Li_Cheng. All rights reserved.
//

#import "ViewController.h"
#import "NSString+encryption.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    NSString *str = @"1234";
    
    NSString *newStr = [str desForkey:@"12"];
    
    NSLog(@"%@", newStr);
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

@end
