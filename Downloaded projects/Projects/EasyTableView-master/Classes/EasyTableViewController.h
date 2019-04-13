//
//  EasyTableViewController.h
//  EasyTableViewView
//
//  Created by Aleksey Novicov on 5/30/10.
//
// Sample code that demonstrates how to use EasyTableView

#import <UIKit/UIKit.h>
#import "EasyTableView.h"
#import "FlipsideViewController.h"

@interface EasyTableViewController : UIViewController <EasyTableViewDelegate>

@property (nonatomic, weak) IBOutlet UILabel *bigLabel;
@property (nonatomic) EasyTableView *verticalView;			// Demonstrates how to setup a vertical EasyTableView programmatically
@property (nonatomic) EasyTableView *horizontalView;		// Demonstrates how to setup a horizontal EasyTableView programmatically

@end

