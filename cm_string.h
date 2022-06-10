/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  String macros
**
*/
#ifndef __CM_STRING_H
#define __CM_STRING_H


#include <string.h>


/* string to upper case */
#define STRING2UPPER(s)      { size_t _i, _l; for (_i=0, _l=strlen(s); _i<=_l; _i++) \
                                   s[_i] = CHAR2UPPER(s[_i]); }
/* string to lower case */
#define STRING2LOWER(s)      { size_t _i, _l; for (_i=0, _l=strlen(s); _i<=_l; _i++) \
                                   s[_i] = CHAR2LOWER(s[_i]); }


/* paste two strings */
#define STRINGS_PASTE(s1,s2) s1 "" s2


#endif /* __CM_STRING_H */
