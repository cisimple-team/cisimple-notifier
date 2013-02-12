//
//  PCBuild.h
//  CISimple-notifier
//
//  Created by Romain Pouclet on 06/02/13.
//  Copyright (c) 2013 Perfectly Cooked. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ENUM(int, CISBuildPhase) {
    CISBuildPhaseStarted = 0,
    CISBuildPhaseCompleted = 1,
    CISBuildPhaseFinished = 2
};

@interface CISBuild : NSObject

@property (nonatomic, assign) NSNumber *buildNumber;
@property (nonatomic, strong) NSString *projectName;
@property (nonatomic, assign) enum CISBuildPhase phase;
@property (nonatomic, assign) BOOL success;

+ (CISBuild *)buildWithDictionnary:(NSDictionary *)dict;
- (CISBuild *)initWithDictionnary:(NSDictionary *)dict;

@end