/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is a part of the C Macro Libray. 
** 
**  Macros to suppress compiler warnings for unused function parameters
**
*/
#ifndef __CM_ARG_H
#define __CM_ARG_H


#ifdef ENABLE_ARG_SUPPRESS
 /* suppressed */
 #define ARG_UNUSED_TO_EMPTY(e)
 #define ARG_UNUSED_TO_NULL(n)       ((void)0)
 #define ARG_UNUSED_TO_NULLPTR(nptr) ((void *)0)
 #define ARG_UNUSED_TO_BRACES(b)     {}
 #define ARG_UNUSED_TO_EQUAL(e)      {((e) == (e));}
 #define ARG_UNUSED_TO_EXPR(expr)    do {} while(0)
#else
 /* not suppressed */
 #define ARG_UNUSED_TO_EMPTY(e)      (e)
 #define ARG_UNUSED_TO_NULL(n)       (n)
 #define ARG_UNUSED_TO_NULLPTR(nptr) (nptr)
 #define ARG_UNUSED_TO_BRACES(b)     (b)
 #define ARG_UNUSED_TO_EQUAL(e)      (e)
 #define ARG_UNUSED_TO_EXPR(expr)    (expr)
#endif


#endif /* __CM_ARG_H */
