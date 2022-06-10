/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  C code in Cpp using extern "C" directive
**
*/
#ifndef __CM_EXTERNC_H
#define __CM_EXTERNC_H


/* extern "C" for function */
#ifdef __cplusplus
#define EXTERN_C                               extern "C"
#else
#define EXTERN_C
#endif

/* extern "C" for block of code */
#ifdef __cplusplus
#define EXTERN_C_BEGIN                         extern "C" {
#define EXTERN_C_END                           }
#else
#define EXTERN_C_BEGIN
#define EXTERN_C_END
#endif


#endif /* __CM_EXTERNC_H */
