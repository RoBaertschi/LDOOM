#include "m_string.h"

#include <ctype.h>
#include <string.h>

isize M_StringLenCap(const char* string, isize cap)
{
    isize i = 0;

    if (string == NULL)
    {
        return 0;
    }

    for (i = 0; i < cap; i++)
    {
        if (string[i] == 0)
        {
            return i;
        }
    }

    return cap;
}


isize M_StringLenZero(const char* string)
{
    if (string == NULL)
    {
        return 0;
    }

    return (isize)strlen(string);
}

// TODO(robin): handle integer overflow
intptr M_StringToIntptr(const char* string, isize string_len)
{
    uintptr value = 0; // we use a unsigned integer for the calculation because the behaviour is well defined for overflows
    intptr result = 0;
    isize i = 0;
    bool negative = false;

    if (string_len <= 0)
    {
        string_len = M_StringLenZero(string);
    }

    // skip whitespace
    while (i < string_len && isspace(string[i]))
        i += 1;

    // check for sign
    if (i < string_len && string[i] == '-')
    {
        negative = true;
        i += 1;
    }
    else if(i < string_len && string[i] == '+')
        i += 1;

    while (i < string_len && isdigit(string[i]))
    {
        value *= 10;
        value += string[i] - '0';
        i += 1;
    }

    memcpy(&result, &value, sizeof(result));

    if (negative)
        result = -result;

    return result;
}
