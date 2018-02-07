//
//  AppDelegate.h
//  AGmimo
//
//  Created by Shuo Wang on 2/6/18.
//  Copyright © 2018 Shuo Wang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

