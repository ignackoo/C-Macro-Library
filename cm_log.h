/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  Log macros
**
*/
#ifndef __CM_LOG_H
#define __CM_LOG_H


#ifdef ENABLE_LOG
    #ifdef __cplusplus
    extern "C" {
    #endif
        void Log_Stdout(int x, const char* fmt, ...);
        void Log_Stderr(int x, const char* fmt, ...);
        void Log_ToFile(const char* logfilename, const char* fmt, ...);
#ifdef __cplusplus
    }
    #endif
    #define LOG_STDOUT(args)               do { Log_Stdout args; } while(0)
    #define LOG_STDERR(args)               do { Log_Stderr args; } while(0)
    #define LOG_TOFILE(args)               do { Log_ToFile args; } while(0)
#else /* ENABLE_LOG */
    #define LOG_STDOUT(args)
    #define LOG_STDERR(args)
    #define LOG_TOFILE(args)
#endif /* ENABLE_LOG */


#endif /* __CM_LOG_H */
