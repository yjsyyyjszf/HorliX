/*=========================================================================
  Program:   OsiriX

  Copyright (c) OsiriX Team
  All rights reserved.
  Distributed under GNU - GPL
  
  See http://homepage.mac.com/rossetantoine/osirix/copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.
=========================================================================*/




#import <Cocoa/Cocoa.h>
#import "DicomSeries.h"

@interface DicomSeries : NSManagedObject {
}

- (NSSet *)paths;
- (NSSet *)keyImages;
- (NSArray *)sortedImages;
- (NSString *)dicomSeriesInstanceUID;
@end
