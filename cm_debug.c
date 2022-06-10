#include <stdio.h>
#include <stdarg.h>
#include "cm_debug.h"


void Debug_Stdout(const char* fmt,...)
{
    va_list args;
    va_start(args, fmt);
    vfprintf(stdout, fmt, args);
    va_end(args);
    return;
}

void Debug_Stderr(const char* fmt,...)
{
    va_list args;
    va_start(args, fmt);
    vfprintf(stderr, fmt, args);
    va_end(args);
    return;
}
