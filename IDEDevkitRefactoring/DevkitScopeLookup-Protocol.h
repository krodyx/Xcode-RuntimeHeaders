/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol DevkitScopeLookup
- (void)addDeclaration:(id)arg1 project:(id)arg2;
- (id)declarations;
- (id)findName:(id)arg1 nameKind:(int)arg2;
- (id)lookupNameRecursively:(id)arg1 nameKind:(int)arg2 upTo:(id)arg3;
- (id)lookupName:(id)arg1 nameKind:(int)arg2;
- (void)setContainingScope:(id)arg1;
- (id)containingScope;
@end

