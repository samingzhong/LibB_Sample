#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "LibB.h"
#import "LibBClass.h"
#import "LibBClassA.h"

FOUNDATION_EXPORT double LibBVersionNumber;
FOUNDATION_EXPORT const unsigned char LibBVersionString[];

