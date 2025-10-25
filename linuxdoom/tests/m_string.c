#include <stdio.h>

#include "t_tests.h"

// Unity build the test, easier to manage with meson
#include "../m_string.h"
#include "../m_string.c"

#include "../doomtype.h"

int main(int argc, char** argv) {
    (void)argc;
    (void)argv;

    T_Init();


    //
    // M_StringToIntptr
    //

    ASSERT(M_StringToIntptr("  1", 0) == 1);
    ASSERT(M_StringToIntptr("  +1", 0) == 1);
    ASSERT(M_StringToIntptr("  -1", 0) == -1);
    ASSERT(M_StringToIntptr("  11", 0) == 11);
    ASSERT(M_StringToIntptr("  -11", 0) == -11);

    printf("%" FMT_INTPTR "\n", M_StringToIntptr("  -11274837934747047230761407031743081320437108347", 0));

    //
    // M_StringLenCap
    //

    ASSERT(M_StringLenCap(NULL, 0) == 0);
    ASSERT(M_StringLenCap((char[10]){0}, 10) == 0);
    ASSERT(M_StringLenCap((char[10]){1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, 10) == 10);

    //
    // M_StringLenZero
    //

    ASSERT(M_StringLenZero(NULL) == 0);
    ASSERT(M_StringLenZero("") == 0);
    ASSERT(M_StringLenZero("test") == 4);
    ASSERT(M_StringLenZero((char[]){'c', 0}) == 1);
}
