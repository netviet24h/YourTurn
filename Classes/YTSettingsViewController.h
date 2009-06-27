//
//  YTSettingsViewController.h
//  YourTurn
//
//  Created by Masashi Ono on 09/06/26.
//  Copyright (c) 2009, Masashi Ono
//  All rights reserved.
//

#import <UIKit/UIKit.h>

@class YTSelectionCell;


@interface YTSettingsViewController : UITableViewController {
    YTSelectionCell *soundSettingsCell;
    YTSelectionCell *intermissionSettingsCell;
}

@end
