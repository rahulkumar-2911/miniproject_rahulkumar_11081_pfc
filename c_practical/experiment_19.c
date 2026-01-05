#include <stdio.h>
#include <string.h>

int main()
{
    char a[20] = "Hello";
    char b[20] = "World";

    printf("Length = %lu\n", strlen(a));
    strcpy(b, a);
    printf("Copy = %s\n", b);
    strcat(a, b);
    printf("Concat = %s\n", a);
    printf("Compare = %d\n", strcmp(a, b));

    return 0;
}

