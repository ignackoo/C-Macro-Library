/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  ANSI C Standard C99 (year 1999)
**
**
**  C99
**
**  In March 2000, ANSI adopted the ISO/IEC 9899:1999 standard.
**  This standard is commonly referred to as C99.
**  Some notable additions to the previous standard include:
**
**  -New built-in data types: long long, _Bool, _Complex, and _Imaginary
**  -Several new core language features, including static array indices,
**      designated initializers, compound literals, variable-length arrays,
**      flexible array members, variadic macros, and restrict keyword
**  -Several new library headers,
**      including stdint.h, <tgmath.h>, fenv.h, <complex.h>
**  -Improved compatibility with several C++ features,
**      including inline functions, single-line comments with //,
**      mixing declarations and code, and universal character names
**      in identifiers
**  -Removed several dangerous C89 language features such as
**      implicit function declarations and implicit int
**
**  Three technical corrigenda were published by ISO for C99:
**
**  -ISO/IEC 9899:1999/Cor 1:2001(E)
**  -ISO/IEC 9899:1999/Cor 2:2004(E)
**  -ISO/IEC 9899:1999/Cor 3:2007(E),
**      notable for deprecating the standard library function gets
**
**  This standard has been withdrawn by both 
**      ANSI/INCITS and ISO/IEC in favour of C11. 
** 
**
**  Variadic macros __VA_OPT__ and __VA_ARGS__ became a standard part
**  of the C language with C99
**
**  Before the existence of variable-arguments in C99,
**  it was quite common to use doubly nested parentheses to exploit
**  the variable number of arguments that could be supplied
**  to the printf() function:
**
**   #define dbgprintf(x) realdbgprintf x
**      dbgprintf() could then be called as:
**
**   dbgprintf (("Hello, world %d", 27));
**      which expands to:
**
**   realdbgprintf ("Hello, world %d", 27);
**
**
**  Macro __STDC_HOSTED__ is defined since C99
**
**  Expands to the integer constant
**  1 if the implementation is hosted (runs under an OS),
** ​ 0​ if freestanding (runs without an OS)
**
**  Under a freestanding implementation, it is implementation-defined
**  whether a program can have more than one thread of execution.
**
**  Under a hosted implementation, a C program can have more than one
**  thread running concurrently.
**
**  A freestanding implementation has an implementation-defined set of headers.
**
**
**  The predefined variable __func__ (see function definition for details)
**  is not a preprocessor macro, even though it is sometimes used together with
**  __FILE__ and __LINE__, e.g. by assert.
**
*/
#ifndef __CM_STDC19C99_H
#define __CM_STDC19C99_H


/* Stdc _STDC_VERSIONCvv version for C99 specifications */
#define _STDC_VERSIONC99                        199901L

/* Stdc _STDC_VERSIONYyyyy year version for C99 specifications */
#define _STDC_VERSIONY1999                      (_STDC_VERSIONC99/100L)


#endif /* __CM_STDC19C99_H */
