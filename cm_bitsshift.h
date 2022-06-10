/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  Macros for bit shifts
**
*/
#ifndef __CM_BITSSHIFT_H
#define __CM_BITSSHIFT_H


#define BYTE_SHR(v,c)  (((v) >> (c)) & 0xFF)
#define BYTE_SHL(v,c)  (((v) << (c)) & 0xFF)

#define WORD_SHR(v,c)  (((v) >> (c)) & 0xFFFF)
#define WORD_SHL(v,c)  (((v) << (c)) & 0xFFFF)

#define DWORD_SHR(v,c) (((v) >> (c)) & 0xFFFFFFFFl)
#define DWORD_SHL(v,c) (((v) << (c)) & 0xFFFFFFFFl)

#if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901l
#define QWORD_SHR(v,c) (((v) >> (c)) & 0xFFFFFFFFFFFFFFFFll)
#define QWORD_SHL(v,c) (((v) << (c)) & 0xFFFFFFFFFFFFFFFFll)
#endif


#endif /* __CM_BITSSHIFT_H */
