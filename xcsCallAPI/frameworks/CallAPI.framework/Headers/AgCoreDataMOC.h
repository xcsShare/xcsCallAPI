//
//  AgCoreDataMOC.h
//  CallAPI
//
//  Copyright © 2018年 AnGoo Libs. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface AgCoreDataMOC : NSManagedObjectContext

@property (nonatomic,readonly) NSManagedObjectModel *MOModel;
@property (nonatomic,readonly) NSPersistentStoreCoordinator *PSC;
@property (nonatomic,readonly) NSPersistentStore* PS;


- (id)initMainQueueMOCWithMOM:(NSManagedObjectModel*)model;
- (id)initMainQueueMOCWithPSC:(NSPersistentStoreCoordinator *)psc;
- (NSError*)setPersistentStoreWithType:(NSString *)storeType
                         configuration:(NSString *)configuration
                                   URL:(NSURL *)storeURL
                               options:(NSDictionary *)options;

+ (id)getPrivateQueueMOCWithMainQueueMOC:(id)moc Error:(NSError **)error;

@end
