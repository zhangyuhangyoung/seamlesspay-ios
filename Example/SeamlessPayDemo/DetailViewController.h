//
//  DetailViewController.h
//  SeamlessPayDemo
//
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
#import <QuartzCore/QuartzCore.h>

@interface DetailViewController : UIViewController <WKNavigationDelegate>

@property (strong, nonatomic) NSString *detailItem;
@property (strong, nonatomic) NSString *contentHTML;
@property (strong, nonatomic) WKWebView *webView;

@end

