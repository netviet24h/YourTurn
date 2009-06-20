//
//  YourTurnAppDelegate.h
//  YourTurn
//
//  Created by Masashi Ono on 09/06/20.
//  Copyright (c) 2009, Masashi Ono
//  All rights reserved.
//

#import <UIKit/UIKit.h>


@interface YourTurnAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    UINavigationController *queueTableNavigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *queueTableNavigationController;

@end

