/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

#import <Conference/CNFRegListController.h>

@class NSArray, PSSpecifier, CNFRegAlias;

@interface CNFRegAliasDetailController : CNFRegListController {
@private
	CNFRegAlias *_alias;	// 252 = 0xfc
	PSSpecifier *_removeGroupSpecifier;	// 256 = 0x100
	PSSpecifier *_removeButtonSpecifier;	// 260 = 0x104
	NSArray *_resendValidationSpecifierGroup;	// 264 = 0x108
}
@property(retain, nonatomic) CNFRegAlias *alias;	// G=0x3d5f5; S=0x3d631; @synthesize=_alias
- (id)initWithRegController:(id)regController alias:(id)alias;	// 0x3e2bd
- (void)dealloc;	// 0x3e235
- (id)bundle;	// 0x3e231
- (id)specifierList;	// 0x3e149
- (void)viewDidLoad;	// 0x3e0c5
- (void)viewWillAppear:(BOOL)view;	// 0x3d605
- (void)viewDidAppear:(BOOL)view;	// 0x3e085
- (void)viewDidDisappear:(BOOL)view;	// 0x3e059
- (void)viewWillDisappear:(BOOL)view;	// 0x3e009
- (BOOL)_canRemoveAlias;	// 0x3dee1
- (void)_updateUIAnimated:(BOOL)animated;	// 0x3de71
- (void)_showResendGroup:(BOOL)group animated:(BOOL)animated;	// 0x3ddad
- (void)forgetAliasTapped:(id)tapped;	// 0x3dd9d
- (void)setRemoveAliasEnabled:(BOOL)enabled animated:(BOOL)animated;	// 0x3dce5
- (void)showRemoveAliasConfirmation;	// 0x3db21
- (void)resendValidationEmailTapped:(id)tapped;	// 0x3da81
- (void)_buildSpecifierCache:(id)cache;	// 0x3d939
- (void)willResignActive;	// 0x3d8bd
- (void)willBecomeActive;	// 0x3d87d
- (void)_showAliasValidationError:(id)error;	// 0x3d791
- (void)_setupEventHandlers;	// 0x3d659
// declared property getter: - (id)alias;	// 0x3d5f5
// declared property setter: - (void)setAlias:(id)alias;	// 0x3d631
@end