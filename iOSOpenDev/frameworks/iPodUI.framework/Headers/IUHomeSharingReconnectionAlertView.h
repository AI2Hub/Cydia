/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/XXUnknownSuperclass.h>
#import <iPodUI/iPodUI-Structs.h>

@class NSString, UIActivityIndicatorView, UILabel;

@interface IUHomeSharingReconnectionAlertView : XXUnknownSuperclass {
@private
	UIActivityIndicatorView *_activityIndicator;	// 48 = 0x30
	UILabel *_titleLabel;	// 52 = 0x34
}
@property(copy, nonatomic) NSString *title;	// G=0xc2ca5; S=0xc2a0d; 
// declared property getter: - (id)title;	// 0xc2ca5
- (void)showInView:(id)view animated:(BOOL)animated;	// 0xc2a5d
// declared property setter: - (void)setTitle:(id)title;	// 0xc2a0d
- (void)hideAnimated:(BOOL)animated;	// 0xc2829
- (void)layoutSubviews;	// 0xc2665
- (void)drawRect:(CGRect)rect;	// 0xc2585
- (void)dealloc;	// 0xc2525
- (id)initWithFrame:(CGRect)frame;	// 0xc2355
@end