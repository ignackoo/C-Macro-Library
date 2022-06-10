/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  BCD conversions
**
*/
#ifndef __CM_BCD_H
#define __CM_BCD_H


/* binary value to bcd value */
#define DEC2BCD(v)    (((v) / 10 * 16) + ((v) % 10))
/* bcd value to binary value */
#define BCD2DEC(v)    (((v) / 16 * 10) + ((v) % 16))


#endif /* __CM_BCD_H */
