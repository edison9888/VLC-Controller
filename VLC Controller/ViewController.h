#import <UIKit/UIKit.h>

#import "ConfigViewController.h"

#import "XMLReader.h"

@interface ViewController : UIViewController <ConfigViewControllerDelegate>

@property (nonatomic,assign) BOOL connected;

@property (strong, nonatomic) IBOutlet UILabel *timeLabel;
@property (strong, nonatomic) IBOutlet UILabel *filenameLabel;

- (IBAction)timeSliderValueChanged:(id)sender;
- (IBAction)seekBackPressed:(id)sender;
- (IBAction)seekForwardPressed:(id)sender;
- (IBAction)playPressed:(id)sender;
- (IBAction)stopPressed:(id)sender;
- (IBAction)prevPressed:(id)sender;
- (IBAction)nextPressed:(id)sender;
- (IBAction)softerPressed:(id)sender;
- (IBAction)louderPressed:(id)sender;
- (IBAction)playlistPressed:(id)sender;
- (IBAction)browsePressed:(id)sender;

@end
