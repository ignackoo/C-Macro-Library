/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  Bit field macros
**
*/
#ifndef __CM_BITS_H
#define __CM_BITS_H


#define GET_BITS(x,mask)        ((x) &   (mask))
#define SET_BITS(x,mask)        ((x) |   (mask))
#define TOGGLE_BITS(x,mask)     ((x) ^   (mask))
#define CLEAR_BITS(x,mask)      ((x) & (~(mask)))


#endif /* __CM_BITS_H */
