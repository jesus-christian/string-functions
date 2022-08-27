#include <stdio.h>

const char* _strchr(const char* _string, char _char)
{
    for (int i = 0; _string[i]; ++i)
    {
        if (_char == _string[i])
        {
            return &_string[i];
        }
    }
    return NULL;
}
