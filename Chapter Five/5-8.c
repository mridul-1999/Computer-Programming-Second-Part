#include <stdio.h>

int main()
{
    int n;

    printf("Please, Enter your number : ");
    scanf("%d", &n);

    if(n > 0 && (n & (n-1)) == 0)
    {
        printf("%d is a power of 2 \n", n);
    }
    else
    {
        printf("%d is NOT a Power of 2 \n", n);
    }

    return 0;
}
