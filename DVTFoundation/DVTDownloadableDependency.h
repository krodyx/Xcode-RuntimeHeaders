/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class DVTDotSeparatedVersion, NSString;

@interface DVTDownloadableDependency : NSObject <NSCoding>
{
    NSString *_identifier;
    DVTDotSeparatedVersion *_minVersion;
}

@property(readonly) DVTDotSeparatedVersion *minVersion; // @synthesize minVersion=_minVersion;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)propertyList;
- (id)initWithPropertyList:(id)arg1 error:(id *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 minVersion:(id)arg2;

@end

