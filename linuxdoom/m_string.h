// TODO(robin): How should we handle headers for completely new files
//
// String utility functions for safer handling of strings

#ifndef __M_STRING__
#define __M_STRING__

#include "doomtype.h"

isize M_StringLenCap(const char* string, isize cap);
isize M_StringLenZero(const char* string);
intptr M_StringToIntptr(const char* string, intptr string_len);

#endif // __M_STRING__
