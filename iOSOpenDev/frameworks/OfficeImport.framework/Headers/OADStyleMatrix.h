/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADStyleMatrix : XXUnknownSuperclass {
@private
	NSMutableArray *mFills;	// 4 = 0x4
	NSMutableArray *mStrokes;	// 8 = 0x8
	NSMutableArray *mEffects;	// 12 = 0xc
	NSMutableArray *mBgFills;	// 16 = 0x10
}
- (id)init;	// 0xbda31
- (void)dealloc;	// 0x8d0d9
- (void)addFill:(id)fill;	// 0x1886e5
- (unsigned)fillCount;	// 0x2a6add
- (id)fillAtIndex:(unsigned)index;	// 0x1b137d
- (id)fillAtIndex:(unsigned)index color:(id)color;	// 0x2a6afd
- (void)addStroke:(id)stroke;	// 0x189365
- (unsigned)strokeCount;	// 0x2a6b55
- (id)strokeAtIndex:(unsigned)index;	// 0x1b9bd5
- (id)strokeAtIndex:(unsigned)index color:(id)color;	// 0x2a6b75
- (void)addEffects:(id)effects;	// 0x189935
- (unsigned)effectsCount;	// 0x2a6bcd
- (id)effectsAtIndex:(unsigned)index;	// 0x1b9c49
- (id)effectsAtIndex:(unsigned)index color:(id)color;	// 0x2a6bed
- (void)addBgFill:(id)fill;	// 0x189959
- (unsigned)bgFillCount;	// 0x2a6c75
- (id)bgFillAtIndex:(unsigned)index;	// 0x1ad645
@end