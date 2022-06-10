/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  Exclude code at build and runtime
**
*/
#ifndef __CM_EXCLUDECODE_H
#define __CM_EXCLUDECODE_H


/* exclude code from build */
#ifdef ENABLE_EXCLUDE_CODE_AT_BUILD
    /* exclude at build */
    #define EXCLUDE_CODE_AT_BUILD(code)
#else
    /* not excluded at build */
    #define EXCLUDE_CODE_AT_BUILD(code)             code
#endif 

/* exclude code from runtime */
#ifdef ENABLE_EXCLUDE_CODE_AT_RUNTIME
    /* exclude code from runtime according to true(x=1)/false(x=0) */
    #define EXCLUDE_CODE_AT_RUNTIME_BEGIN(x)        if(!(x)) {
    #define EXCLUDE_CODE_AT_RUNTIME_END             }
#else
    /* not excluded at runtime */
    #define EXCLUDE_CODE_AT_RUNTIME_BEGIN(x)
    #define EXCLUDE_CODE_AT_RUNTIME_END
#endif


#endif /* __CM_EXCLUDECODE_H */
