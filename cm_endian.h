/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  Endian identification and conversions macros
**
*/
#ifndef __CM_ENDIAN_H
#define __CM_ENDIAN_H


typedef union _endian_byteorder__ {
    unsigned char bytes[4];
    unsigned long value;
} _ENDIAN_BYTEORDER__;

#ifdef __cplusplus
extern "C" {
#endif
    extern const _ENDIAN_BYTEORDER__ _byteorder__;
#ifdef __cplusplus
}
#endif


/* endian identification */
#define ENDIAN_BIG              0x01020304
#define ENDIAN_LITTLE_WORD      0x02010403
#define ENDIAN_BIG_WORD         0x03040102
#define ENDIAN_LITTLE           0x04030201
#define ENDIAN_UNKNOWN          0x00000000


#define BYTEORDER()             _byteorder__.value
#define ENDIAN()                BYTEORDER()


#define IS_ENDIAN_BIG()         ((ENDIAN() == ENDIAN_BIG)?1:0)
#define IS_ENDIAN_LITTLE_WORD() ((ENDIAN() == ENDIAN_LITTLE_WORD)?1:0)
#define IS_ENDIAN_BIG_WORD()    ((ENDIAN() == ENDIAN_BIG_WORD)?1:0)
#define IS_ENDIAN_LITTLE()      ((ENDIAN() == ENDIAN_LITTLE)?1:0)


/* endian conversions */

/* 16bit */
#define ___ENDIAN16_CHANGE8(x)          ((((x)&0x00FF)<<8) | (((x)&0xFF00)>>8))

#define ENDIAN16_BIG2LITTLE(x)          ___ENDIAN16_CHANGE8(x)
#define ENDIAN16_LITTLE2BIG(x)          ___ENDIAN16_CHANGE8(x)

/* 32bit */
#define ___ENDIAN32_CHANGE8(x)          ( (((x)&0x000000FF)<<8) \
                                         |(((x)&0x0000FF00)>>8) \
                                         |(((x)&0x00FF0000)<<8) \
                                         |(((x)&0xFF000000)>>8) )

#define ___ENDIAN32_CHANGE16(x)         ( (((x)&0x000000FF)<< 16) \
                                         |(((x)&0x0000FF00)<<16) \
                                         |(((x)&0x00FF0000)>>16) \
                                         |(((x)&0xFF000000)>>16) )

#define ___ENDIAN32_CHANGE248(x)        ( (((x)&0x000000FF)<<24) \
                                         |(((x)&0x0000FF00)<<8) \
                                         |(((x)&0x00FF0000)>>8) \
                                         |(((x)&0xFF000000)>>24) )

#define ENDIAN32_BIG2LITTLEWORD(x)      ___ENDIAN32_CHANGE8(x)
#define ENDIAN32_BIG2BIGWORD(x)         ___ENDIAN32_CHANGE16(x)
#define ENDIAN32_BIG2LITTLE(x)          ___ENDIAN32_CHANGE248(x)

#define ENDIAN32_LITTLEWORD2BIG(x)      ___ENDIAN32_CHANGE8(x)
#define ENDIAN32_LITTLEWORD2BIGWORD(x)  ___ENDIAN32_CHANGE248(x)
#define ENDIAN32_LITTLEWORD2LITTLE(x)   ___ENDIAN32_CHANGE16(x)

#define ENDIAN32_BIGWORD2BIG(x)         ___ENDIAN32_CHANGE16(x)
#define ENDIAN32_BIGWORD2LITTLEWORD(x)  ___ENDIAN32_CHANGE248(x)
#define ENDIAN32_BIGWORD2LITTLE(x)      ___ENDIAN32_CHANGE8(x)

#define ENDIAN32_LITTLE2BIG(x)          ___ENDIAN32_CHANGE248(x)
#define ENDIAN32_LITTLE2LITTLEWORD(x)   ___ENDIAN32_CHANGE16(x)
#define ENDIAN32_LITTLE2BIGWORD(x)      ___ENDIAN32_CHANGE8(x)


#endif /* __CM_ENDIAN_H */
