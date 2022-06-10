/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  Math macros
**
*/
#ifndef __CM_MATH_H
#define __CM_MATH_H


#define ZERO                        0
#define ONE                         1
#define	PI                          3.141593f

#define IS_NAN(x)                   (x != x)

#define IS_ZERO(x)                  ((x)==0)
#define IS_NOT_ZERO(x)              (!(IS_ZERO((x))))

#define IS_ODD(x)                   ((x) & 1)
#define IS_EVEN(x)                  (!(IS_ODD((x))))

#define IS_BETWEEN(x,l,h)           (((x) >= (l) && (x) <= (h)))

#define NOT(x)                      (!(x))

#define SWAP(x,y)                   { (x) ^= (y); (y) ^= (x); (x) ^= (y); }

#define SORT2UP(x,y)                { if ((x) > (y)) SWAP((x), (y)); }
#define SORT2DOWN(x,y)              { if ((x) < (y)) SWAP((x), (y)); }

#define INC(x)                      (++(x))
#define DEC(x)                      (--(x))

#define MIN(x,y)                    (((x) < (y)) ? (x) : (y))
#define MAX(x,y)                    (((x) > (y)) ? (x) : (y))

#define SIGN(x)                     (((x) > (0)) - ((x) < (0)))

#define ABS(x)                      (((x) <  0) ? -(x) : (x))
#define DIFF(x,y)                   ABS((x)-(y))

#define CLIP(x,min,max)             (((x) < (min)) ? (min) : (((x) > (max)) ? (max) : (x)))
#define MINCLIP(x,min)              (((x) < (min)) ? (min) : (x))
#define MAXCLIP(x,max)              (((x) > (max)) ? (max) : (x))


#endif /* __CM_MATH_H */
