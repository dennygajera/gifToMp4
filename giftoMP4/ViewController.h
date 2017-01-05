//
//  ViewController.h
//  giftoMP4
//
//  Created by Darshan Gajera on 1/4/17.
//  Copyright © 2017 denny. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <CoreMedia/CoreMedia.h>
#import <CoreVideo/CoreVideo.h>
#import <CoreGraphics/CoreGraphics.h>
#import <AVFoundation/AVFoundation.h>
#import <QuartzCore/QuartzCore.h>
@interface ViewController : UIViewController


@property(strong, nonatomic) IBOutlet UIImageView *imgView;
@property(strong, nonatomic) IBOutlet UIButton *btnConvert;
-(IBAction)btnConvertClick:(id)sender;


@end

