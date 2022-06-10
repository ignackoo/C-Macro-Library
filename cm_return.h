/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  Return RET macros
**
*/
#ifndef __CM_RETURN_H
#define __CM_RETURN_H


 /* positive returned values are WARNINGS */
#define RET_WARNING(x)                         (x)
 /* zero value is OK */
#define RET_OK                                 0
 /* negative values are ERRORS */
#define RET_ERROR(x)                           (-(x))


 /* return null pointer */
#define RET_PTRNULL                            (void*)0
 /* return pointer */
#define RET_PTR(x)                             (x)


/* Examples */
/*
    return(RET_OK); ... for function exeution without a bug or error

    return(RET_WARNING(1)); ... produces warning as a return value 1
    return(RET_ERROR(1)); ... produces error as a return value -1
*/


#endif /* __CM_RETURN_H */
