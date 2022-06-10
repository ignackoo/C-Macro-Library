/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  Trace macros
**
*/
#ifndef __CM_TRACE_H
#define __CM_TRACE_H


#ifdef ENABLE_TRACE
    #ifdef __cplusplus
    extern "C" {
    #endif
        void Trace_Stdout(const char* file, const int line, const char* fmt, ...);
        void Trace_Stderr(const char* file, const int line, const char* fmt, ...);
    #ifdef __cplusplus
    }
    #endif
    #define TRACE_STDOUT(args)               do { Trace_Stdout args; } while(0)
    #define TRACE_STDERR(args)               do { Trace_Stderr args; } while(0)
#else /* ENABLE_TRACE */
    #define TRACE_STDOUT(args)
    #define TRACE_STDERR(args)
#endif /* ENABLE_TRACE */


#endif /* __CM_TRACE_H */
