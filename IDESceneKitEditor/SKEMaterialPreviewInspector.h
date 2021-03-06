/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEInspectorViewController.h"

@class SCNGeometry, SCNLight, SCNView;

@interface SKEMaterialPreviewInspector : IDEInspectorViewController
{
    SCNView *previewView;
    SCNGeometry *previewObject;
    SCNLight *ambiLight;
}

- (void).cxx_destruct;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setContent:(id)arg1;
- (void)viewDidInstall;
- (void)setupPreviewView;
- (id)previewScene;
- (id)ambientLightFromMainScene;
- (id)materialByDefaultingIfNeeded;

@end

