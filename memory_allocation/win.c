#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x;
    char *ar;

    x = 4;
    ar = malloc(sizeof(char) * x);
    ar[0] = 'W';
    ar[1] = 'i';
    ar[2] = 'n';
    ar[3] = '\0';
    printf("What are you planning to do this year? %s\n", ar);
    return (0);
}
