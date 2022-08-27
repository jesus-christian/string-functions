#include <stdio.h>

int _puts(const char* _string)
{
    for (int i = 0; _string[i]; ++i)
    {
        if (putchar(_string[i]) == EOF)
        {
            return EOF;
        }
    }

    if (putchar('\n') == EOF)
    {
        return EOF;
    }

    return 1;
}
