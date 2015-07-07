//
//  Page.h
//  
//
//  Created by Alexander Doloz on 7/7/15.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Book;

@interface Page : NSManagedObject

@property (nonatomic, retain) NSString * text;
@property (nonatomic, retain) Book *book;

@end
