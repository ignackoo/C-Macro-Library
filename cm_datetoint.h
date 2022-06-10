/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  Macros to get parts of date and date timestamp form __DATE__
**
*/
#ifndef __CM_DATETOINT_H
#define __CM_DATETOINT_H


/* helper functions */
#define _MONTH_IS_JAN(d)    (d[0] == 'J' && d[1] == 'a' && d[2] == 'n')
#define _MONTH_IS_FEB(d)    (d[0] == 'F')
#define _MONTH_IS_MAR(d)    (d[0] == 'M' && d[1] == 'a' && d[2] == 'r')
#define _MONTH_IS_APR(d)    (d[0] == 'A' && d[1] == 'p')
#define _MONTH_IS_MAY(d)    (d[0] == 'M' && d[1] == 'a' && d[2] == 'y')
#define _MONTH_IS_JUN(d)    (d[0] == 'J' && d[1] == 'u' && d[2] == 'n')
#define _MONTH_IS_JUL(d)    (d[0] == 'J' && d[1] == 'u' && d[2] == 'l')
#define _MONTH_IS_AUG(d)    (d[0] == 'A' && d[1] == 'u')
#define _MONTH_IS_SEP(d)    (d[0] == 'S')
#define _MONTH_IS_OCT(d)    (d[0] == 'O')
#define _MONTH_IS_NOV(d)    (d[0] == 'N')
#define _MONTH_IS_DEC(d)    (d[0] == 'D')


/* get macros */
#define GET_MONTH(d)        ((_MONTH_IS_JAN(d)) ?  1 : \
                             (_MONTH_IS_FEB(d)) ?  2 : \
                             (_MONTH_IS_MAR(d)) ?  3 : \
                             (_MONTH_IS_APR(d)) ?  4 : \
                             (_MONTH_IS_MAY(d)) ?  5 : \
                             (_MONTH_IS_JUN(d)) ?  6 : \
                             (_MONTH_IS_JUL(d)) ?  7 : \
                             (_MONTH_IS_AUG(d)) ?  8 : \
                             (_MONTH_IS_SEP(d)) ?  9 : \
                             (_MONTH_IS_OCT(d)) ? 10 : \
                             (_MONTH_IS_NOV(d)) ? 11 : \
                             12)

#define GET_DAY(d)          (((d[4] >= '0') ? (d[4] - '0') * 10 : 0) + (d[5] - '0'))

#define GET_YEAR(d)         ((d[7] - '0') * 1000 + (d[8] - '0') *  100 + (d[9] - '0') *   10 + (d[10] - '0'))


/* get date timestamp macro */
#define GET_DATE(d)         ((GET_YEAR(d) * 10000) + (GET_MONTH(d) * 100) + GET_DAY(d))


#endif /* __CM_DATETOINT_H */
