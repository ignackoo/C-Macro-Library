/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  Bool datatype definition
**
*/
#ifndef __CM_DATATYPEBOOL_H
#define __CM_DATATYPEBOOL_H


/* basic bool data type definitions small letters */
#ifndef __STDC_VERSION__
 /* C89 and earlier */
 #define __define_bool
#else /* __STDC_VERSION__ */
 #if __STDC_VERSION__ < 199901L
  /* C95 */
  #define __define_bool
 #endif /* __STDC_VERSION__ < 199901L */
#endif /* __STDC_VERSION__ */

#ifdef __define_bool
 #define __bool_true_false_are_defined 1

 #ifndef __cplusplus

  #ifndef bool
   #define bool  int
  #endif /* bool */
  #ifndef true
   #define true  1
  #endif /* true */
  #ifndef false
   #define false 0
  #endif /* false */

 #endif /* __cplusplus */

#else
 #include <stdbool.h>
#endif


/* basic bool data type definitions capital letters */
#ifndef BOOL
#define BOOL                                    bool
#endif /* BOOL */

#ifndef FALSE
#define FALSE                                   false
#endif /* FALSE */

#ifndef TRUE
#define TRUE                                    true
#endif /* TRUE */


 /* get bool */
#define GETBOOL(x)                              (!(!(x)))


#endif /* __CM_DATATYPEBOOL_H */
