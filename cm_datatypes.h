/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  Data types definitions
**
*/
#ifndef __CM_DATATYPES_H
#define __CM_DATATYPES_H


#if !defined __STDC_VERSION__ || __STDC_VERSION__ < 199901l
 /* basic data type definitions using typedef, small letters */
 /* definitions optionally included in stdint.h */
 #ifndef	_int8_t
 #define	_int8_t
 typedef	signed char                    int8_t;
 #endif /* _int8_t */

 #ifndef	_uint8_t
 #define	_uint8_t
 typedef unsigned char                  uint8_t;
 #endif /* _uint8_t */

 #ifndef	_int16_t
 #define	_int16_t
 typedef short                          int16_t;
 #endif /* _int16_t */

 #ifndef	_uint16_t
 #define	_uint16_t
 typedef unsigned short                 uint16_t;
 #endif /* _uint16_t */

 #ifndef	_int32_t
 #define	_int32_t
 typedef long                           int32_t;
 #endif /* _int32_t */

 #ifndef	_uint32_t
 #define	_uint32_t
 typedef unsigned long                  uint32_t;
 #endif /* _uint32_t */

#if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901l
 #ifndef	_int64_t
 #define	_int64_t
 typedef long long                      int64_t;
 #endif /* _int64_t */

 #ifndef	_uint64_t
 #define	_uint64_t
 typedef unsigned long long             uint64_t;
 #endif /* _uint64_t */
#endif

 #ifndef	_string_t
 #define	_string_t
 typedef char*                          string_t;
 #endif /* _string_t */
#else
 #include <stdint.h>
#endif

/* basic data type definitions using typedef */
typedef signed char                    int8;
typedef unsigned char                  uint8;
typedef short                          int16;
typedef unsigned short                 uint16;
typedef long                           int32;
typedef unsigned long                  uint32;
#if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901l
typedef long long                      int64;
typedef unsigned long long             uint64;
#endif

typedef char*                          string;


/* basic data type definitions using #define, capitalised letters */
#define INT8                           int8
#define UINT8                          uint8
#define INT16                          int16
#define UINT16                         uint16
#define INT32                          int32
#define UINT32                         uint32
#if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901l
#define INT64                          int64
#define UINT64                         uint64
#endif

#define BYTE                           uint8
#define WORD                           uint16
#define DWORD                          uint32
#if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901l
#define QWORD                          uint64
#endif

#define CHAR                           int8
#define UCHAR                          uint8

#if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901l
#define LONGLONG                       int64
#define ULONGLONG                      uint64
#endif

#define	FLOAT                          float
#define DOUBLE                         double
#define LONGDOUBLE                     long double

#define STRING                         string


#endif /* __CM_DATATYPES_H */
