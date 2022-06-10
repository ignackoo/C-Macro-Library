/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  Macros for bit rotations
**
*/
#ifndef __CM_BITSROTATE_H
#define __CM_BITSROTATE_H


#define BYTE_ROR(v,c)  ((c)==0) ? (v) : (((v)>>(c)) | (((v) << (8 - (c)))&0xFF))
#define BYTE_ROL(v,c)  ((c)==0) ? (v) : ((((v)<<(c))&0xFF) | ((v) >> (8 - (c))))

#define WORD_ROR(v,c)  ((c)==0) ? (v) : (((v)>>(c)) | (((v) << (16 - (c)))&0xFFFF))
#define WORD_ROL(v,c)  ((c)==0) ? (v) : ((((v)<<(c))&0xFFFF) | ((v) >> (16 - (c))))

#define DWORD_ROR(v,c) ((c)==0) ? (v) : (((v)>>(c)) | (((v) << (32 - (c)))&0xFFFFFFFFl))
#define DWORD_ROL(v,c) ((c)==0) ? (v) : ((((v)<<(c))&0xFFFFFFFFl) | ((v) >> (32 - (c))))

#if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901l
#define QWORD_ROR(v,c) ((c)==0) ? (v) : (((v)>>(c)) | (((v) << (64 - (c)))&0xFFFFFFFFFFFFFFFFll))
#define QWORD_ROL(v,c) ((c)==0) ? (v) : ((((v)<<(c))&0xFFFFFFFFFFFFFFFFll) | ((v) >> (64 - (c))))
#endif


#endif /* __CM_BITSROTATE_H */
