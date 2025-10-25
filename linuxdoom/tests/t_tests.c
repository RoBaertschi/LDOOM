#include "t_tests.h"

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

void T_Init(void)
{}

void T_Fail(const char* error, ...)
{
    va_list argptr;
    va_start(argptr, error);

    fprintf(stderr, "FAIL: ");
    vfprintf(stderr, error, argptr);
    fprintf(stderr, "\n");
    va_end(argptr);
    fflush(stderr);

    exit(EXIT_FAILURE);
}
