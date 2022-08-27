#include <stdio.h>
#include "strlen.hpp"
size_t _strlen(const char* _string)
{
    size_t _len = 0;
    for (int i = 0; _string[i]; ++i)
    {
        ++_len;
    }
    return _len;
}
