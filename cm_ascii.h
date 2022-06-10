/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  Ascii characters
**
*/
#ifndef __CM_ASCII_H
#define __CM_ASCII_H


/* control characters */
#define CHAR_NUL                 0   /* NUL Null */
#define CHAR_SOH                 1   /* SOH Start of heading */
#define CHAR_STX                 2   /* STX Start of text */
#define CHAR_ETX                 3   /* ETX End of text */
#define CHAR_EOT                 4   /* EOT End of transmission */
#define CHAR_ENQ                 5   /* ENQ Enquiry */
#define CHAR_ACK                 6   /* ACK Acknowledge */
#define CHAR_BEL                 7   /* BEL Bell */
#define CHAR_BS                  8   /* BS  Backspace */
#define CHAR_HT                  9   /* HT  Horizontal tab */
#define CHAR_LF                  10  /* LF  Line feed */
#define CHAR_VT                  11  /* VT  Vertical tab */
#define CHAR_FF                  12  /* FF  New page / form feed */
#define CHAR_CR                  13  /* CR  Carriage return */
#define CHAR_SO                  14  /* SO  Shift out */
#define CHAR_SI                  15  /* SI  Shift in */
#define CHAR_DLE                 16  /* DLE Data link escape */
#define CHAR_DC1                 17  /* DC1 Device control 1 */
#define CHAR_DC2                 18  /* DC2 Device control 2 */
#define CHAR_DC3                 19  /* DC2 Device control 3 */
#define CHAR_DC4                 20  /* DC4 Device control 4 */
#define CHAR_NAK                 21  /* NAK Negative acknowledge */
#define CHAR_SYN                 22  /* SYN Synchronous idle */
#define CHAR_ETB                 23  /* ETB End of transmission block */
#define CHAR_CAN                 24  /* CAN Cancel */
#define CHAR_EM                  25  /* EM  End of medium */
#define CHAR_SUB                 26  /* SUB Substitute */
#define CHAR_ESC                 27  /* ESC Escape */
#define CHAR_FS                  28  /* FS  File separator */
#define CHAR_GS                  29  /* GS  Group separator */
#define CHAR_RS                  30  /* RS  Record separator */
#define CHAR_US                  31  /* US  Unit separator */

#define CHAR_SPACE               32  /* ' ' Space */
#define CHAR_EXCLAMATION         33  /* '!' Exclamation mark */
#define CHAR_DOUBLEQUOTE         34  /* '"' Quotation mark/Double quote */
#define CHAR_NUMBER              35  /* '#' Number sign */
#define CHAR_DOLLAR              36  /* '$' Dollar sign */
#define CHAR_PERCENT             37  /* '%' Percent sign */
#define CHAR_AMPERSAND           38  /* '&' Ampersand */
#define CHAR_APOSTROPHE          39  /* ''' Apostrophe/Single quote */
#define CHAR_LEFTPARENTHESIS     40  /* '(' Left parenthesis */
#define CHAR_RIGHTPARENTHESIS    41  /* ')' Right parenthesis */
#define CHAR_ASTERISK            42  /* '*' Asterisk */
#define CHAR_PLUS                43  /* '+' Plus sign */
#define CHAR_COMMA               44  /* ',' Comma */
#define CHAR_MINUS               45  /* '-' Hyphen/Minus */
#define CHAR_PERIOD              46  /* '.' Full stop/Period */
#define CHAR_SLASH               47  /* '/' Solidus/Slash */

/* digit characters */
#define CHAR_ZERO                48  /* '0' Zero */
#define CHAR_ONE                 49  /* '1' One */
#define CHAR_TWO                 50  /* '2' Two */
#define CHAR_THREE               51  /* '3' Three */
#define CHAR_FOUR                52  /* '4' Four */
#define CHAR_FIVE                53  /* '5' Five */
#define CHAR_SIX                 54  /* '6' Six */
#define CHAR_SEVEN               55  /* '7' Seven */
#define CHAR_EIGHT               56  /* '8' Eight */
#define CHAR_NINE                57  /* '9' Nine */

#define CHAR_COLON               58  /* ':' Colon */
#define CHAR_SEMICOLON           59  /* ';' Semicolon */
#define CHAR_LESSTHAN            60  /* '<' Less-than sign */
#define CHAR_EQUAL               61  /* '=' Equal/Equality sign */
#define CHAR_GREATERTHAN         62  /* '>' Greater-than sign */
#define CHAR_QUESTION            63  /* '?' Question mark */
#define CHAR_AT                  64  /* '@' Commercial at/At sign */

/* latin capital letters */
#define CHAR_LATIN_C_A           65  /* 'A' */
#define CHAR_LATIN_C_B           66  /* 'B' */
#define CHAR_LATIN_C_C           67  /* 'C' */
#define CHAR_LATIN_C_D           68  /* 'D' */
#define CHAR_LATIN_C_E           69  /* 'E' */
#define CHAR_LATIN_C_F           70  /* 'F' */
#define CHAR_LATIN_C_G           71  /* 'G' */
#define CHAR_LATIN_C_H           72  /* 'H' */
#define CHAR_LATIN_C_I           73  /* 'I' */
#define CHAR_LATIN_C_J           74  /* 'J' */
#define CHAR_LATIN_C_K           75  /* 'K' */
#define CHAR_LATIN_C_L           76  /* 'L' */
#define CHAR_LATIN_C_M           77  /* 'M' */
#define CHAR_LATIN_C_N           78  /* 'N' */
#define CHAR_LATIN_C_O           79  /* 'O' */
#define CHAR_LATIN_C_P           80  /* 'P' */
#define CHAR_LATIN_C_Q           81  /* 'Q' */
#define CHAR_LATIN_C_R           82  /* 'R' */
#define CHAR_LATIN_C_S           83  /* 'S' */
#define CHAR_LATIN_C_T           84  /* 'T' */
#define CHAR_LATIN_C_U           85  /* 'U' */
#define CHAR_LATIN_C_V           86  /* 'V' */
#define CHAR_LATIN_C_W           87  /* 'W' */
#define CHAR_LATIN_C_X           88  /* 'X' */
#define CHAR_LATIN_C_Y           89  /* 'Y' */
#define CHAR_LATIN_C_Z           90  /* 'Z' */

#define CHAR_LEFTSQUAREBRACKET   91  /* '[' Left square bracket */
#define CHAR_BACKSLASH           92  /* '\' Reverse solidus / Backslash */
#define CHAR_RIGHTSQUAREBRACKET  93  /* ']' Right square bracket */
#define CHAR_CARET               94  /* '^' Circumflex accent / Caret */
#define CHAR_UNDERSCORE          95  /* '_' Underscore / Low line */
#define CHAR_GRAVEACCENT         96  /* '`' Grave accent */

/* latin small letters */
#define CHAR_LATIN_S_A           97  /* 'a' */
#define CHAR_LATIN_S_B           98  /* 'b' */
#define CHAR_LATIN_S_C           99  /* 'c' */
#define CHAR_LATIN_S_D           100 /* 'd' */
#define CHAR_LATIN_S_E           101 /* 'e' */
#define CHAR_LATIN_S_F           102 /* 'f' */
#define CHAR_LATIN_S_G           103 /* 'g' */
#define CHAR_LATIN_S_H           104 /* 'h' */
#define CHAR_LATIN_S_I           105 /* 'i' */
#define CHAR_LATIN_S_J           106 /* 'j' */
#define CHAR_LATIN_S_K           107 /* 'k' */
#define CHAR_LATIN_S_L           108 /* 'l' */
#define CHAR_LATIN_S_M           109 /* 'm' */
#define CHAR_LATIN_S_N           110 /* 'n' */
#define CHAR_LATIN_S_O           111 /* 'o' */
#define CHAR_LATIN_S_P           112 /* 'p' */
#define CHAR_LATIN_S_Q           113 /* 'q' */
#define CHAR_LATIN_S_R           114 /* 'r' */
#define CHAR_LATIN_S_S           115 /* 's' */
#define CHAR_LATIN_S_T           116 /* 't' */
#define CHAR_LATIN_S_U           117 /* 'u' */
#define CHAR_LATIN_S_V           118 /* 'v' */
#define CHAR_LATIN_S_W           119 /* 'w' */
#define CHAR_LATIN_S_X           120 /* 'x' */
#define CHAR_LATIN_S_Y           121 /* 'y' */
#define CHAR_LATIN_S_Z           122 /* 'z' */

#define CHAR_LEFTCURLYBRACKET    123 /* '{' Left curly bracket */
#define CHAR_VERTICALLINE        124 /* '|' Vertical line / Vertical bar */
#define CHAR_RIGHTCURLYBRACKET   125 /* '}' Right curly bracket */
#define CHAR_TILDE               126 /* '~' Tilde */

/* control characters */
#define CHAR_DEL                 127 /* DEL Delete */


#endif /* __CM_ASCII_H */
