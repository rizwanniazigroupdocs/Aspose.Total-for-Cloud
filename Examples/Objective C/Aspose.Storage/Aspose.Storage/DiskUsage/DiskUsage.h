//
//  DiskUsage.h
//  Aspose.Storage
//
//  Created on 03/04/2017.
//  Copyright © 2017 Aspose. All rights reserved.
//

#import <Foundation/Foundation.h>
@class ASPStorageApi;

@interface DiskUsage : NSObject

@property(nonatomic, strong) ASPStorageApi *storageApi;

- (void)getDiscUsage;
- (void)getDiskUsageFromThirdPartyStorage;

@end
