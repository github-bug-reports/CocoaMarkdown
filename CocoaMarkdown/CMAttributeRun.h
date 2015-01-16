//
//  CMAttributeRun.h
//  CocoaMarkdown
//
//  Created by Indragie on 1/15/15.
//  Copyright (c) 2015 Indragie Karunaratne. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CMPlatformDefines.h"

@interface CMAttributeRun : NSObject
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) CMFontSymbolicTraits fontTraits;
@property (nonatomic) NSInteger orderedListItemNumber;
@property (nonatomic, readonly) BOOL listTight;

- (instancetype)initWithAttributes:(NSDictionary *)attributes;
- (instancetype)initWithAttributes:(NSDictionary *)attributes
                        fontTraits:(CMFontSymbolicTraits)fontTraits;
- (instancetype)initWithAttributes:(NSDictionary *)attributes
                 orderedListNumber:(NSInteger)orderedListNumber;

@end
