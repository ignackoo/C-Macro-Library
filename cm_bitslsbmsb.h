/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  Macros for most and least significant bits
**
*/
#ifndef __CM_BITSLSBMSB_H
#define __CM_BITSLSBMSB_H


/* least significant bit */
#define GET_BYTE_LSB(x)       (((x) & 1) ? 1 : 0)
#define SET_BYTE_LSB(x)       (((x) | 1) ? 1 : 0)

#define GET_WORD_LSB(x)       (((x) & 1) ? 1 : 0)
#define SET_WORD_LSB(x)       (((x) | 1) ? 1 : 0)

#define GET_DWORD_LSB(x)      (((x) & 1l) ? 1 : 0)
#define SET_DWORD_LSB(x)      (((x) | 1l) ? 1 : 0)

#if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901l
#define GET_QWORD_LSB(x)      (((x) & 1ll) ? 1 : 0)
#define SET_QWORD_LSB(x)      (((x) | 1ll) ? 1 : 0)
#endif


/* most significant bit */
#define GET_BYTE_MSB(x)       (((x) & (1 << ((sizeof(char) * 8) - 1))) ? 1 : 0)
#define SET_BYTE_MSB(x)       (((x) | (1 << ((sizeof(char) * 8) - 1))) ? 1 : 0)

#define GET_WORD_MSB(x)       (((x) & (1 << ((sizeof(short) * 8) - 1))) ? 1 : 0)
#define SET_WORD_MSB(x)       (((x) | (1 << ((sizeof(short) * 8) - 1))) ? 1 : 0)

#define GET_DWORD_MSB(x)      (((x) & (1l << ((sizeof(long) * 8) - 1))) ? 1 : 0)
#define SET_DWORD_MSB(x)      (((x) | (1l << ((sizeof(long) * 8) - 1))) ? 1 : 0)

#if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901l
#define GET_QWORD_MSB(x)      (((x) & (1ll << ((sizeof(long long) * 8) - 1))) ? 1 : 0)
#define SET_QWORD_MSB(x)      (((x) | (1ll << ((sizeof(long long) * 8) - 1))) ? 1 : 0)
#endif


#endif /* __CM_BITSLSBMSB_H */
