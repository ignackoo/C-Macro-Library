/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  Ascii digit conversions
**
*/
#ifndef __CM_ASCIIDIGITCONVERSION_H
#define __CM_ASCIIDIGITCONVERSION_H


/* binary value to dec digit char */
#define BIN2DEC(b)    (((b) >= 0 && (b) <= 9) ? (b)+'0' : (b))
/* dec digit char to binary value */
#define DEC2BIN(d)    (((d) >= '0' && (d) <= '9') ? (d)-'0' : (d))

/* binary value to hex digit char */
#define BIN2HEX(b)    (((b)>=0 && (b)<=9)?(b)+'0':\
                       ((b)>=10 && (b)<=15)?(b)-10+'A':\
                        (b))
/* hex digit char to binary value */
#define HEX2BIN(h)    (((h)>='0' && (h)<='9')?(h)-'0':\
                       ((h)>='A' && (h)<='F')?(h)-'A' + 10:\
                       ((h)>='a' && (h)<='f')?(h)-'a' + 10:\
                        (h))


#endif /* __CM_ASCIIDIGITCONVERSION_H */
