/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  New and Delete macros
**
*/
#ifndef __CM_NEW_H
#define __CM_NEW_H


#define NEW(type, count)        ( (type *) malloc((count) * sizeof(type)) )

#define DELETE(arry)            free(arry)


#endif /* __CM_NEW_H */
