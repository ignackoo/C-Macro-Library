/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  Char macros
**
*/
#ifndef __CM_CHAR_H
#define __CM_CHAR_H


/* upper case char */
#define IS_UPPER_CHAR(c)           ((c) >= 'A' && (c) <= 'Z')
/* lower case char */
#define IS_LOWER_CHAR(c)           ((c) >= 'a' && (c) <= 'z')
/* alphabet char */
#define IS_ALPHABET_CHAR(c)        (IS_LOWER_CHAR(c) || \
                                     IS_UPPER_CHAR(c))
/* digit char */
#define IS_DIGIT_CHAR(c)           ((c) >= '0' && (c) <= '9')

/* alphanumeric char */
#define IS_ALPHANUMERIC_CHAR(c)    (IS_ALPHABET_CHAR(c) || \
                                     IS_DIGIT_CHAR(c))
/* white space char */
#define IS_WHITE_SPACE_CHAR(c)     ((c)==' ' || (c)=='\t' || (c)=='\r' || \
                                     (c)=='\n' || (c)=='\0')

/* special char */
#define IS_SPECIAL_CHAR(c)         ((c)>31 && (c)<127 && \
                                     !IS_ALPHABET_CHAR(c) && \
                                     !IS_DIGIT_CHAR(c) )

 /* control char */
#define IS_CONTROL_CHAR(c)         ((c)<32 || (c)==127 )

/* upper vowel char */
#define IS_UPPER_VOWEL_CHAR(c)	    ((c)=='A' || (c)=='E' || (c)=='I' || \
                                     (c)=='O' || (c)=='U')
/* lower vowel char */
#define IS_LOWER_VOWEL_CHAR(c)     ((c)=='a' || (c)=='e' || (c)=='i' || \
                                     (c)=='o' || (c)=='u')
/* vowel char */
#define IS_VOWEL_CHAR(c)           (IS_UPPER_VOWEL_CHAR(c) || \
                                     IS_LOWER_VOWEL_CHAR(c))


/* char to upper */
#define CHAR2UPPER(c)              (('a'<=(c) && (c)<='z') ? \
                                          (((c)-'a') + 'A') : (c))
/* char to lower */
#define CHAR2LOWER(c)              (('A'<=(c) && (c)<='Z') ? \
                                          (((c)-'A') + 'a') : (c))

#endif /* __CM_CHAR_H */
