/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/XXUnknownSuperclass.h>
#import <Message/NSCoding.h>


@interface MFOfflineCacheOperation : XXUnknownSuperclass <NSCoding> {
	long long _rowid;	// 4 = 0x4
}
@property(assign, nonatomic) long long rowid;	// G=0x7f869; S=0x7f8e1; @synthesize=_rowid
- (id)init;	// 0x7f881
- (id)initWithCoder:(id)coder;	// 0x7f939
- (void)encodeWithCoder:(id)coder;	// 0x7f865
// declared property setter: - (void)setRowid:(long long)rowid;	// 0x7f8e1
- (BOOL)hasRowid;	// 0x7f8c5
// declared property getter: - (long long)rowid;	// 0x7f869
@end