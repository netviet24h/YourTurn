//
//  YTTextFieldCell.h
//  YourTurn
//
//  Created by Masashi Ono on 09/05/06.
//

#import <UIKit/UIKit.h>


@interface YTTextFieldCell : UITableViewCell<UITextFieldDelegate> {
    id delegate;
    UILabel *label;
    UITextField *textField;
}

@property (nonatomic, assign) id delegate;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) NSString *value;
@property (nonatomic, retain) NSString *placeholder;
@property (nonatomic, readonly) CGFloat height;

- (IBAction)focus:(id)sender;

@end

// TODO: delegate declaration
// TODO: use delegate for addattendeeviewcontroller
