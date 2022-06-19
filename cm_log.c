#include <stdio.h>
#include <stdarg.h>
#include <time.h>
#include <stdlib.h>
#include <malloc.h>
#include <errno.h>

#include "cm_log.h"


void Log_Stdout(int x, const char* fmt, ...)
{
    if (x)
    {
        time_t t = time(NULL);
        struct tm stm;
        va_list args;
#if defined _MSC_VER
        localtime_s(&stm, &t);
#else
        stm = *localtime(&t);
#endif
        va_start(args, fmt);
        fprintf(stdout, "%04d.%02d.%02d ", 1900 + stm.tm_year, 1 + stm.tm_mon, stm.tm_mday);
        fprintf(stdout, "%02d:%02d:%02d ", stm.tm_hour, stm.tm_min, stm.tm_sec);
        vfprintf(stdout, fmt, args);
        fprintf(stdout, "\n");
        va_end(args);
    }
    return;
}

void Log_Stderr(int x, const char* fmt, ...)
{
    if (x)
    {
        time_t t = time(NULL);
        struct tm stm;
        va_list args;
#if defined _MSC_VER
        localtime_s(&stm, &t);
#else
        stm = *localtime(&t);
#endif
        va_start(args, fmt);
        fprintf(stderr, "%04d.%02d.%02d ", 1900 + stm.tm_year, 1 + stm.tm_mon, stm.tm_mday);
        fprintf(stderr, "%02d:%02d:%02d ", stm.tm_hour, stm.tm_min, stm.tm_sec);
        vfprintf(stderr, fmt, args);
        fprintf(stderr, "\n");
        va_end(args);
    }
    return;
}

void Log_ToFile(const char* logfilename, const char* fmt, ...)
{
    if (logfilename != NULL)
    {
        time_t t = time(NULL);
        struct tm stm;
        FILE* pf;
#if defined _MSC_VER
        errno_t err;
#endif
        va_list args;
#if defined _MSC_VER
        localtime_s(&stm, &t);
#else
        stm = *localtime(&t);
#endif

        /* a+ (create + append) removes EOF in append, option allow appending useful in a log file */
#if defined _MSC_VER
        err = fopen_s(&pf, logfilename, "a+");
        if (err != 0)
        {
            if (pf != NULL) fclose(pf);
            pf = NULL;
        }
#else
        pf = fopen(logfilename, "a+");
#endif
        if (pf != NULL)
        {
            va_start(args, fmt);
            fprintf(pf, "%04d.%02d.%02d ", 1900 + stm.tm_year, 1 + stm.tm_mon, stm.tm_mday);
            fprintf(pf, "%02d:%02d:%02d ", stm.tm_hour, stm.tm_min, stm.tm_sec);
            vfprintf(pf, fmt, args);
            fprintf(pf, "\n");
            va_end(args);
            fclose(pf);
        }
    }
    return;
}
