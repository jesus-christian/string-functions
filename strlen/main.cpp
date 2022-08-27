#include <stdio.h>
#include "strlen.hpp"
#include <string.h>

int main()
{
    const char* s = "When the imposter is SUS";
    
    printf("%lu\n", _strlen(s));

    return 0;
}
