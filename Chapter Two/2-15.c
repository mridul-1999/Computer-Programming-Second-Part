#include <stdio.h>

int main()
{
    char c = 'A';
    char *p;

    p = &c;

    printf("Address of C : %p \n", c);
    printf("Address of P : %p \n", p);

    return 0;
}
