/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  Redefinition standard c macros for compliance detectability
**
**
**  ANSI C Standard C89/C90,C95,C99,C11,C17
**
**  How STD macros are defined
**  (C89/C90) = __DATE__, __TIME__, __FILE__, __LINE__, __STDC__
**  (C95)     = (C89/C90) + __STDC_VERSION__
**  (C99)     = (C95) + __STDC_HOSTED__
**
*/
#ifndef __CM_STDC_H
#define __CM_STDC_H


#include "cm_stdckr.h"      /* Kernighan and Ritchie */
#include "cm_stdc19c89.h"   /* C89 */
#include "cm_stdc19c95.h"   /* C95 */
#include "cm_stdc19c99.h"   /* C99 */
#include "cm_stdc20c11.h"   /* C11 */
#include "cm_stdc20c17.h"   /* C17 */


/******************************************************************************
**  C89 / C90 Predefined Standard Macros & C99 __func__ definitions
*/

/* The first C Standard specified that the macro __STDC__ be defined to 1
   if the implementation conforms to the ANSI ISO Standard and 0 otherwise */

/* _STDC can have this values */
#define	_STDC_ANSI                              1  /* ANSI C89 and higher */
#define _STDC_NONANSI                           0  /* non ANSI */
#define _NSTDC_KR                               -1 /* non standard K&R */

#if defined(__STDC__)
    #if(__STDC__ == 0)
        #define _STDC                           _STDC_NONANSI
    #else /* __STDC__ != 0 */
        #define _STDC                           _STDC_ANSI
    #endif
#else /* !defined(__STDC__) */
    #define _STDC                               _NSTDC_KR
#endif

/* Current System date, as a string literal. Mmm dd yyyy */
#ifdef __DATE__
#define _DATE                                   __DATE__
#endif /* __DATE__ */

/* Current System time, as a string literal. hh:mm:ss */
#ifdef __TIME__
#define _TIME                                   __TIME__
#endif /* __TIME__ */

/* The name(along with full path) of the current file, as a string literal. */
#ifdef __FILE__
#define _FILE                                   __FILE__
#endif /* __FILE__ */

/* Current line in the source code file where __LINE__ is written, 
   as numeric literal. */
#ifdef __LINE__
#define _LINE                                   __LINE__
#endif /* __LINE__ */

/* Function name macro definition if __func__ doesnt exist */
#if !defined(__STDC_VERSION__) || \
    (defined(__STDC_VERSION__) && __STDC_VERSION__ < _STDC_VERSIONC99)
    #define __func__                            "<unknown>"
#endif

#define _FUNC                                   __func__


/* C++ preprocessor directive */
/* is undefined when your C code is being compiled by a C compiler */
#ifdef __cplusplus
#define _CPLUSPLUS                              __cplusplus
#endif /* __cplusplus */

/* Objective-c preprocessor directive */
/* is defined when your C code is being compiled by a Objective C compiler */
#ifdef __OBJC__
#define _OBJC                                   __OBJC__
#endif /* __OBJC__ */

/* Assembpler preprocessor directive */
#ifdef __ASSEMBLER__
#define _ASSEMBLER                              __ASSEMBLER__
#endif /* __ASSEMBLER__ */


/******************************************************************************
**  C95 Predefined Standard Macros
*/

/* Macro __STDC_VERSION__ is defined since C95 */
/* In C89/C90 __STDC_VERSION__ is not defined */
/* Expands to an integer constant of type long whose value increases with 
   each version of the C standard */
#if defined(__STDC_VERSION__)
    #define _STDC_VERSION                       __STDC_VERSION__
#else /* !defined(__STDC_VERSION__) */
    #if defined(__STDC__)
        #define _STDC_VERSION                   _STDC_VERSIONC89
	#else /* !defined(__STDC__) */
        #define _STDC_VERSION                   _NSTDC_VERSION_KR
	#endif
#endif

#if(_STDC_VERSION == _STDC_VERSIONC17)
    #define _STDC_VERSIONYEAR                   _STDC_VERSIONY2017
#elif(_STDC_VERSION == _STDC_VERSIONC11)
    #define _STDC_VERSIONYEAR                   _STDC_VERSIONY2011
#elif(_STDC_VERSION == _STDC_VERSIONC99)
    #define _STDC_VERSIONYEAR                   _STDC_VERSIONY1999
#elif(_STDC_VERSION == _STDC_VERSIONC95)
    #define _STDC_VERSIONYEAR                   _STDC_VERSIONY1995
#elif(_STDC_VERSION == _STDC_VERSIONC89)
    #define _STDC_VERSIONYEAR                   _STDC_VERSIONY1989
#else
    #define _STDC_VERSIONYEAR                   _NSTDC_VERSIONY1978_KR
#endif


/******************************************************************************
**  C99 Predefined Standard Macros
*/

/* Macro __STDC_HOSTED__ is defined since C99 */
/* In C89/C90 and C95 __STDC_HOSTED__ is not defined */
/* Expands to the integer constant 
**  1 if the implementation is hosted (runs under an OS),
**  ​0​ if freestanding (runs without an OS) 
*/

/* 1 if the implementation is hosted (runs under an OS) */
#define _STDC_HOSTED_IN_OS                      1
/* ​0​ if freestanding (runs without an OS) */
#define _STDC_HOSTED_WITHOUT_OS                 0
/* -1 if is unknown if runs under an OS */
#define _STDC_HOSTED_UNKNOWN                    -1

#if defined(__STDC_HOSTED__)
    #if(__STDC_HOSTED__ == 0)
        #define _STDC_HOSTED                    _STDC_HOSTED_WITHOUT_OS
    #else
        #define _STDC_HOSTED                    _STDC_HOSTED_IN_OS
    #endif
#else /* !defined(__STDC_HOSTED__) */
    #define _STDC_HOSTED                        _STDC_HOSTED_UNKNOWN
#endif


/******************************************************************************
**                               Get Stdc API
*/
#ifdef __cplusplus
extern "C" {
#endif

    /* library STDC build identification data */
    unsigned long GetStdc(int stdc);

    unsigned long GetStdcVersion(long stdcversion);

    unsigned long GetStdcVersionYear(long stdcversionyear);

    unsigned long GetStdcHosted(int stdchosted);

#ifdef __cplusplus
}
#endif


/******************************************************************************
**                               Examples of use
*/
/*
    if(_STDC == _NSTDC_KR)
       ... do not use this convention ...
    else if(_STDC == _STDC_NONANSI)
       ... do not use this convention ...
    else / _STDC == _STDC_ANSI /
       ... do something ...

    printf(_DATE);
    printf(_TIME);
    printf(_FILE);
    printf(_LINE);

    printf(_FUNC);

    if(_STDC_VERSION == _NSTDC_VERSION_KR)
       ... do not use this convention ...
    if(_STDC_VERSION == _STDC_VERSIONC17)
       ... do something for C17 ...
    else / ANSI convention according to from _STDC_VERSIONC89 to _STDC_VERSIONC11 /
       ... do something else ...

    if(_STDC_VERSIONYEAR == _NSTDC_VERSIONY1978_KR)
       ... do not use this convention ...
    else
       ... do something ...

    if(_STDC_HOSTED == _STDC_HOSTED_WITHOUT_OS)
       ... do something ...
    if(_STDC_HOSTED == _STDC_HOSTED_IN_OS)
       ... do something else ...
    else / _STDC_HOSTED_UNKNOWN /
       ... maybe do nothing ...
*/


#endif /* __CM_STDC_H */
