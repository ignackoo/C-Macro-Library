/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  Basic data conversions
**
*/
#ifndef __CM_DATACONVERSION_H
#define __CM_DATACONVERSION_H


/* basic data retype macros */
#define TO_CHAR(v)      ((char)(v))
#define TO_UCHAR(v)     ((unsigned char)(v))

#define TO_SHORT(v)     ((short)(v))
#define TO_USHORT(v)    ((unsigned short)(v))

#define TO_INT(v)       ((int)(v))
#define TO_UINT(v)      ((unsigned int)(v))

#define TO_LONG(v)      ((long)(v))
#define TO_ULONG(v)     ((unsigned long)(v))

#if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901l
#define TO_LONGLONG(v)  ((long long)(v))
#define TO_ULONGLONG(v) ((unsigned long long)(v))
#endif


/* basic data types operations half of */
#define LONIBBLE(v) (unsigned char)((v)&0x0F)
#define HINIBBLE(v) (unsigned char)(((v)&0xF0)>>4)

#define LOBYTE(v)   (unsigned char)((v)&0x00FF)
#define HIBYTE(v)   (unsigned char)(((v)&0xFF00)>>8)

#define LOWORD(v)   (unsigned short)((v)&0x0000FFFFl)
#define HIWORD(v)   (unsigned short)(((v)&0xFFFF0000l)>>16)

#if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901l
#define LODWORD(v)  (unsigned long)((v)&0x00000000FFFFFFFFl)
#define HIDWORD(v)  (unsigned long)(((v)&0xFFFFFFFF00000000l)>>32)
#endif


/* basic data types operations make from */
#define MAKEBYTE(h,l)  (((unsigned char)((unsigned char)(h)<<4))|\
                                          (unsigned char)(l))

#define MAKEWORD(h,l)  (((unsigned short)((unsigned short)(h)<<8))|\
                                           (unsigned short)(l))

#define MAKEDWORD(h,l) (((unsigned long)((unsigned long)(h)<<16))|\
                                          (unsigned long)(l))

#if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901l
#define MAKEQWORD(h,l) (((unsigned long long)((unsigned long long)(h)<<32))|\
                                               (unsigned long long)(l))
#endif

/* basic data types operations swap halfs */
#define SWAPNIBBLES(v) ((((v)&0xF0)>>4)|(((v)&0x0F)<<4))

#define SWAPBYTES(v)   ((((v)&0xFF00)>>8)|(((v)&0xFF)<<8))

#define SWAPWORDS(v)   ((((v)&0xFFFF0000l)>>16)|(((v)&0x0000FFFFl)<<16))

#if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901l
#define SWAPDWORDS(v)  ((((v)&0xFFFFFFFF00000000ll)>>32)|(((v)&0x00000000FFFFFFFFll)<<32))
#endif


#endif /* __CM_DATACONVERSION_H */
