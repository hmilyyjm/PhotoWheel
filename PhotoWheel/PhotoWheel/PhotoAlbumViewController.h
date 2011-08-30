//
//  PhotoAlbumViewController.h
//  PhotoWheel
//
//  Created by Kirby Turner on 8/13/11.
//  Copyright (c) 2011 White Peak Software Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GridView.h"
#import "PhotoBrowserViewController.h"

@interface PhotoAlbumViewController : UIViewController <UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, NSFetchedResultsControllerDelegate, GridViewDataSource, PhotoBrowserViewControllerDelegate>

@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, strong) NSManagedObjectID *objectID;
@property (nonatomic, strong) IBOutlet UIToolbar *toolbar;
@property (nonatomic, strong) IBOutlet UITextField *textField;
@property (nonatomic, strong) IBOutlet UIBarButtonItem *addButton;
@property (strong, nonatomic) IBOutlet GridView *gridView;

- (void)reload;
- (IBAction)showActionMenu:(id)sender;
- (IBAction)addPhoto:(id)sender;

- (UIImage *)selectedImage;
- (CGRect)selectedCellFrame;

@end
