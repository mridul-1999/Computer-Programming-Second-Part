#include <stdio.h>

int main()
{
    char c = 'A';
    char *p, **q;

    p = &c;
    q = &p;

    **q = 'B';

    printf("VAlue of  c: %c \n", c);
    printf("VAlue of  c: %c \n", *p);
    printf("VAlue of  c: %c \n", **q);

    return 0;
}
