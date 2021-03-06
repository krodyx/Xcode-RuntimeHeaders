/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DevkitLocation, NSString;

@interface DevkitEngineError : NSObject
{
    NSString *_message;
    int _category;
    DevkitLocation *_oldLocation;
    DevkitLocation *_newLocation;
}

+ (id)engineErrorWithOldLocation:(id)arg1 newLocation:(id)arg2 category:(int)arg3 format:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
@property(retain) DevkitLocation *newLocation; // @synthesize newLocation=_newLocation;
@property(retain) DevkitLocation *oldLocation; // @synthesize oldLocation=_oldLocation;
@property int category; // @synthesize category=_category;
@property(retain) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (long long)compareLocation:(id)arg1;
- (id)initWithOldLocation:(id)arg1 newLocation:(id)arg2 category:(int)arg3 format:(id)arg4 arguments:(struct __va_list_tag [1])arg5;

@end

