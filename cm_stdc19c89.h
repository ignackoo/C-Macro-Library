/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  ANSI C Standard C89 & C90 (year 1989 & 1990)
**
**
**  C89
**
**  The ANSI standard was completed in 1989 and ratified as
**  ANSI X3.159 - 1989 "Programming Language C."
**  This version of the language is often referred to as "ANSI C".
**  Later on sometimes the label "C89" is used to distinguish it
**  from C90 but using the same labeling method.
**
**
**  C90
**
**  The same standard as C89 was ratified by the
**  International Organization for Standardization as ISO/IEC 9899:1990,
**  with only formatting changes, which is sometimes referred to as C90.
**  Therefore, the terms "C89" and "C90" refer to essentially
**  the same language.
**
** 
**  ANSI C Compliance detectability
**
**  To mitigate the differences between K&R C and the ANSI C standard,
**  the __STDC__("standard c") macro can be used to split code
**  into ANSI and K&R sections.
**
**  #if defined(__STDC__) && __STDC__
**      ... ANSI C code ... standard ansi c function prototype
**      extern int getopt(int, char * const *, const char *);
**  #else
**      ... K&R C code ... k&r function prototype, do not use !!
**      extern int getopt();
**  #endif
**
**  In the above example, a prototype is used in a function declaration
**  for ANSI compliant implementations, while an obsolescent
**  non - prototype declaration is used otherwise.
**  Those are still ANSI - compliant as of C99.
**  Note how this code checks both definition and evaluation:
**  this is because some implementations may set __STDC__
**  to zero to indicate non - ANSI compliance.
**
*/
#ifndef __CM_STDC19C89C90_H
#define __CM_STDC19C89C90_H


/* Stdc _STDC_VERSIONCvv versions for C89 & C90 specifications, user defined */
#define _STDC_VERSIONC89                        198912L
#define _STDC_VERSIONC90                        _STDC_VERSIONC89

/* Stdc _STDC_VERSIONYyyyy year versions for C89 & C90 specifications */
/* _STDC_VERSIONY1989 and _STDC_VERSIONY1990 have the same year 1989 */
#define _STDC_VERSIONY1989                      (_STDC_VERSIONC89/100L)
#define _STDC_VERSIONY1990                      _STDC_VERSIONY1989


#endif /* __CM_STDC19C89C90_H */
