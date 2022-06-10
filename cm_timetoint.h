/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  Macros to get parts of time and time timestamp form __TIME__
**
*/
#ifndef __CM_TIMETOINT_H
#define __CM_TIMETOINT_H


/* get macros */
#define GET_HOUR(d)                 ((d[0] - '0') * 10 + d[1] - '0')

#define GET_MINUTE(d)               ((d[3] - '0') * 10 + d[4] - '0')

#define GET_SECOND(d)               ((d[6] - '0') * 10 + d[7] - '0')


/* get time timestamp macro */
#define GET_TIME(d)                 ((GET_HOUR(d) * 10000) + (GET_MINUTE(d) * 100) + GET_SECOND(d))


#endif /* __CM_TIMETOINT_H */
