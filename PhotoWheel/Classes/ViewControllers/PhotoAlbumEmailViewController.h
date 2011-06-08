//
//  PhotoAlbumEmailViewController.h
//  PhotoWheel
//
//  Created by Kirby Turner on 5/27/11.
//  Copyright 2011 White Peak Software Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SendEmailController.h"

@class PhotoAlbum;

@interface PhotoAlbumEmailViewController : UIViewController <SendEmailControllerDelegate>
{
    
}

@property (nonatomic, retain) PhotoAlbum *photoAlbum;

- (id)initWithDefaultNib;

- (IBAction)sendAsImages:(id)sender;
- (IBAction)sendAsPhotoWheel:(id)sender;
- (IBAction)cancel:(id)sender;

@end
