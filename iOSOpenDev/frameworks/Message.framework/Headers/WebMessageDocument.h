/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFWebAttachmentSource.h>

@class NSData, NSURL, MimeBody, MimePart, MFLock, NSMutableDictionary;

@interface WebMessageDocument : MFWebAttachmentSource {
@private
	unsigned _uniqueId;	// 12 = 0xc
	NSURL *_baseURL;	// 16 = 0x10
	MimeBody *_mimeBody;	// 20 = 0x14
	MimePart *_htmlPart;	// 24 = 0x18
	NSData *_htmlData;	// 28 = 0x1c
	MFLock *_lock;	// 32 = 0x20
	NSMutableDictionary *_partsByURL;	// 36 = 0x24
	NSMutableDictionary *_partsByFilename;	// 40 = 0x28
	unsigned _preferredEncoding;	// 44 = 0x2c
}
@property(readonly, assign) NSURL *baseURL;	// G=0x1d195; @synthesize=_baseURL
@property(readonly, assign) MimeBody *mimeBody;	// G=0x1e405; @synthesize=_mimeBody
@property(readonly, assign) MimePart *mimePart;	// G=0x2c491; @synthesize=_htmlPart
@property(readonly, assign) NSData *htmlData;	// G=0x1d101; @synthesize=_htmlData
@property(assign) unsigned preferredEncoding;	// G=0x1d185; S=0x1caf5; @synthesize=_preferredEncoding
+ (id)sourceForURL:(id)url;	// 0x2c53d
- (id)init;	// 0x1c831
- (id)initWithMimeBody:(id)mimeBody;	// 0x2c4a1
- (id)_initWithMimePart:(id)mimePart htmlData:(id)data;	// 0x1c775
- (id)initWithMimePart:(id)mimePart;	// 0x2c505
- (id)initWithMimePart:(id)mimePart htmlData:(id)data encoding:(unsigned long)encoding;	// 0x1c741
- (void)dealloc;	// 0x1f5bd
- (id)mimePartForURL:(id)url;	// 0x1e069
- (id)attachmentForURL:(id)url;	// 0x1df89
- (id)attachmentsInDocument;	// 0x2c735
- (id)preferredCharacterSet;	// 0x1d111
- (id)fileWrapper;	// 0x2c6ad
// declared property getter: - (unsigned long)preferredEncoding;	// 0x1d185
// declared property setter: - (void)setPreferredEncoding:(unsigned long)encoding;	// 0x1caf5
// declared property getter: - (id)htmlData;	// 0x1d101
// declared property getter: - (id)mimePart;	// 0x2c491
// declared property getter: - (id)mimeBody;	// 0x1e405
// declared property getter: - (id)baseURL;	// 0x1d195
@end