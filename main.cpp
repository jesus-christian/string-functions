#include <stdio.h>
#include "string_functions.hpp"
#include <string.h>
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
    const char* str2 = "When the imposter is SUs";
    const char* str3 = "When the imposter is SUASS";

    printf("%d\n", _strcmp(str2, str1));
    printf("%d\n", _strcmp(str3, str2));
    printf("%d\n", _strcmp(str2, str2));


    char str4[] = "pumpumpumpumpumpumpumpum";

    printf("%p\n", _strcpy(str4, str1));
    printf("%s\n", str4);

    return 0;


}

