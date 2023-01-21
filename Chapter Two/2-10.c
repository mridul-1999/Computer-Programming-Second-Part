#include <stdio.h>

int main()
{
    int x = 100;
    int *p = NULL;

    printf("Value of X : %d \n", x);
    p = &x;
    printf("Value of P : %d \n", *p);

    return 0;
}
