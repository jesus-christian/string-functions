#include <stdio.h>
#include "strchr.hpp"
int main()
{
    const char* s = "When the imposter is SUS";
    const char  c = 'A';

    printf("%p\n", _strchr(s, c));

    return 0;
}
