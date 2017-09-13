//
//  AppDelegate.h
//  Practica 2
//
//  Created by Aldo Preciado on 9/13/17.
//  Copyright © 2017 Aldirrix. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

