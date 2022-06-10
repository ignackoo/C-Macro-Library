/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  Assert macro
**
*/
#ifndef __CM_ASSERT_H
#define __CM_ASSERT_H


#ifdef ENABLE_ASSERT
    #define ASSERT(x)        assert(x)
#else /* ENABLE_ASSERT */
    #define ASSERT(x)
#endif /* ENABLE_ASSERT */


#endif /* __CM_ASSERT_H */
