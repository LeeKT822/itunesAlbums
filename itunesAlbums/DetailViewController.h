//
//  DetailViewController.h
//  itunesAlbums
//
//  Created by Lee KT on 2015/11/1.
//  Copyright © 2015年 Lee KT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

