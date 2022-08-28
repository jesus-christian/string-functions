#include <stdio.h>
#include "string_functions.hpp"

int main()
{
    const char* str = "When the imposter is SUS";


    _puts(str);


    const char a = 'A';
    const char s = 'S';

    printf("%p\n", _strchr(str, a));
    printf("%p\n", _strchr(str, s));


    printf("%lu\n", _strlen(str));


    const char* str1 = "When the imposter is SUS";
    const char* str2 = "When";
    const char* str3 = "When the imposter is SUSSS";

    printf("%d\n", _strcmp(str1, str2));
    printf("%d\n", _strcmp(str1, str3));
    printf("%d\n", _strcmp(str2, str2));

    return 0;


}

