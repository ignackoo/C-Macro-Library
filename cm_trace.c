#include <stdio.h>
#include <stdarg.h>
#include "cm_trace.h"


void Trace_Stdout(const char* file, const int line, const char* fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    fprintf(stdout, "%s:%d ", file, (unsigned int)line);
    vfprintf(stdout, fmt, args);
    fprintf(stdout, "\n");
    va_end(args);
    return;
}

void Trace_Stderr(const char* file, const int line, const char* fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    fprintf(stderr, "%s:%d ", file, (unsigned int)line);
    vfprintf(stderr, fmt, args);
    fprintf(stderr, "\n");
    va_end(args);
    return;
}
