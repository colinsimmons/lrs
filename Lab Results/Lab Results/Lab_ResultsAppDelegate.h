//
//  Lab_ResultsAppDelegate.h
//  Lab Results
//
//  Created by Peter Simmons on 7/09/11.
//  Copyright 2011 Simnix Limited. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Lab_ResultsAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end
