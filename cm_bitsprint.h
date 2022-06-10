/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is a part of the C Macro Libray.
**
**  Prints bits as binary string
**
*/
#ifndef __CM_BITSPRINT_H
#define __CM_BITSPRINT_H


#ifdef __cplusplus
extern "C" {
#endif

    void BytePrintBitStr(unsigned char uc);

    void WordPrintBitStr(unsigned short us);

    void DWordPrintBitStr(unsigned long ul);

    #if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901l
    void QWordPrintBitStr(unsigned long long ull);
    #endif

#ifdef __cplusplus
}
#endif


#endif /* __CM_BITSPRINT_H */
