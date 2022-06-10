/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is a part of the C Macro Libray.
**
**  Macros for parameter value inversion
**
*/
#ifndef __CM_BITSINVERSE_H
#define __CM_BITSINVERSE_H


#define INVERT_BITS_BYTE(x)     TOGGLE_BITS(x,0xFF)
#define INVERT_BITS_WORD(x)     TOGGLE_BITS(x,0xFFFF)
#define INVERT_BITS_DWORD(x)    TOGGLE_BITS(x,0xFFFFFFFFl)
#if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901l
#define INVERT_BITS_QWORD(x)    TOGGLE_BITS(x,0xFFFFFFFFFFFFFFFFll)
#endif

#endif /* __CM_BITSINVERSE_H */
