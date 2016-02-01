//
//  ViewController.m
//  OpenGL
//
//  Created by PVGCLIM01 on 2/1/16.
//  Copyright © 2016 Chuan Li. All rights reserved.
//

#import "ViewController.h"
#import "OpenGLView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
}

- (void)viewDidAppear:(BOOL)animated{
    [super viewDidAppear:animated];
    
    [self.glView load];
}

@end
