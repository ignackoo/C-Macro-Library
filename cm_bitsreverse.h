/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is a part of the C Macro Libray.
**
**  Reverses bits from Right to Left and Left to Right
**
*/
#ifndef __CM_BITSREVERSE_H
#define __CM_BITSREVERSE_H


#ifdef __cplusplus
extern "C" {
#endif

    unsigned char      ByteReverseBits(unsigned char number);

    unsigned short     WordReverseBits(unsigned short number);

    unsigned long      DWordReverseBits(unsigned long number);

    #if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901l
    unsigned long long QWordReverseBits(unsigned long long number);
    #endif

#ifdef __cplusplus
}
#endif


#endif /* __CM_BITSREVERSE_H */
