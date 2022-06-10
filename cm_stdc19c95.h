/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  ANSI C Standard C95 (year 1995)
**
** 
**  C95
**
**  In 1995, the ISO published an extension, called Amendment 1,
**     for the ANSI-C standard. Its full name finally was
**     ISO/IEC 9899:1990/AMD1:1995 or nicknamed C95.
**  Aside from error correction there were further changes
**     to the language capabilities, such as:
**
**  -Improved multi-byte and wide character support in the standard library,
**     introducing <wchar.h> and <wctype.h> as well as multi-byte I/O
**  -Addition of digraphs to the language
**  -Specification of standard macros for the alternative specification
**     of operators, e.g. and for &&
**  -Specification of the standard macro __STDC_VERSION__
**
**  In addition to the amendment,
**     two technical corrigenda were published by ISO for C90:
**
**   -ISO/IEC 9899:1990/Cor 1:1994 TCOR1 in 1994
**   -ISO/IEC 9899:1990/Cor 2:1996 in 1996
**
**
**  Macro __STDC_VERSION__ is defined since C95
**
**  Expands to an integer constant of type long whose value
**  increases with each version of the C standard.
**  This macro is not defined if the -traditional-cpp option is used,
**  nor when compiling C++ or Objective - C.
**
** 
**  Preprocessor test for C95 compatibility
**
**  #if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199409L
**      ... C95 compatible source code. ...
**  #elif defined(__STDC__)
**      ... C89 compatible source code. ...
**  #endif
**
*/
#ifndef __CM_STDC19C95_H
#define __CM_STDC19C95_H


/* Stdc _STDC_VERSIONCvv version for C95 specifications */
#define _STDC_VERSIONC95                        199409L

/* Stdc _STDC_VERSIONYyyyy year version for C95 specifications */
#define _STDC_VERSIONY1995                      (_STDC_VERSIONC95/100L)


#endif /* __CM_STDC19C95_H */
