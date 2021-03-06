///**********************************************************************************************************************************
///  DKLinearObjectStorage.h
///  DrawKit ©2005-2008 Apptree.net
///
///  Created by graham on 03/01/2009.
///
///	 This software is released subject to licensing conditions as detailed in DRAWKIT-LICENSING.TXT, which must accompany this source file. 
///
///**********************************************************************************************************************************


#import <Cocoa/Cocoa.h>
#import "DKObjectStorageProtocol.h"



@interface DKLinearObjectStorage : NSObject <DKObjectStorage, NSCoding>
{
@private
	NSMutableArray*		mObjects;
}

@end





/*

Basic storage class stores objects in a standard array. For many uses this will be entirely adequate, but may be substituted for scalability or
 special uses.
 
 Note regarding NSCoding: currently the storage itself is no longer archived - only its objects are. The storage class is selected at runtime. However for
 a brief period (beta 5), the storage was archived. To support files written at that time, this class and its derivatives currently support NSCoding (for reading)
 so that the files can be correctly dearchived. Re-saving the files will update to the new approach. Archiving of the storage isn't curremtly done, and attempting to
 archive will throw an exception.

*/

