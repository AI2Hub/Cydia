/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <AssistantServices/AFSyncBeginInfo.h>
#import <AssistantServices/XXUnknownSuperclass.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ASSyncBeginInfo : XXUnknownSuperclass <AFSyncBeginInfo> {
	NSString *_validity;	// 4 = 0x4
}
@property(copy) NSString *validity;	// G=0x428d; S=0x42a1; @synthesize=_validity
// declared property setter: - (void)setValidity:(id)validity;	// 0x42a1
// declared property getter: - (id)validity;	// 0x428d
- (id)description;	// 0x422d
- (void)resetWithValidity:(id)validity;	// 0x421d
- (void)dealloc;	// 0x41d1
@end