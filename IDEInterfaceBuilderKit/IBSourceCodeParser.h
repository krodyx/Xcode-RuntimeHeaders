/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface IBSourceCodeParser : NSObject
{
    BOOL usesStrictParsing;
}

+ (id)secondaryParsableFileTypeIdentifiers;
+ (id)primaryParsableFileTypeIdentifiers;
+ (id)supportedFileExtensions;
- (id)parseData:(id)arg1 fromFile:(id)arg2 errors:(id *)arg3;
- (id)parseFile:(id)arg1 errors:(id *)arg2;
- (void)setUsesStrictParsing:(BOOL)arg1;
- (BOOL)usesStrictParsing;
- (id)init;

@end
