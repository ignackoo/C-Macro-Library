/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  Macros for arrays
**
*/
#ifndef __CM_ARRAY_H
#define __CM_ARRAY_H


/* check if an item is array */
#define IS_ARRAY(arry)            (sizeof(arry[0]) &&\
                                   (((void *) &arry) == ((void *) arry)))

/* get array size, number of items */
#define ARRAY_SIZE(arry)          (size_t)(sizeof((arry)) / sizeof((arry)[0]))

/* get array columns count, between first start item and last end item */
#define ARRAY_COLUMNS(start,end)  (size_t)((end) - (start) + 1)

/* set array part to a value */
#define ARRAY_SET(arry,count,val) do { size_t ix_, cn_;\
                                   for (cn_ = (count),ix_=0;cn_>0;--cn_,++ix_)\
                                    (arry)[ix_] = (val);\
                                  } while(0)


#endif /* __CM_ARRAY_H */
