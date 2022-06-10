/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  Debugging macros
**
*/
#ifndef __CM_DEBUG_H
#define __CM_DEBUG_H


/* debug functions */
#ifdef ENABLE_DEBUG
    #ifdef __cplusplus
    extern "C" {
    #endif
        void Debug_Stdout(const char* fmt, ...);
        void Debug_Stderr(const char* fmt, ...);
    #ifdef __cplusplus
    }
    #endif
    #define DEBUG_STDOUT(args)               do { Debug_Stdout args; } while(0)
    #define DEBUG_STDERR(args)               do { Debug_Stderr args; } while(0)
#else /* ENABLE_DEBUG */
    #define DEBUG_STDOUT(args)
    #define DEBUG_STDERR(args)
#endif /* ENABLE_DEBUG */


#endif /* __CM_DEBUG_H */
