#include <stdio.h>

int main()
{
    char s[] = "Bangladesh";
    char *p;

    p = s;

    printf("Value of our country: %s \n", s);
    printf("Address of P : %p \n", p);

    return 0;
}
