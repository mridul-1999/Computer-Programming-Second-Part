#include <stdio.h>

int f_calls = 0;

int factorial(int n)
{
    f_calls += 1; // f_calls = f_calls + 1;

    if(n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n;

    printf("Please, Enter the Number : ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Undefined \n");
        return 0;
    }

    printf("Factorial of %d is %d \n", n, factorial(n));

    printf("Number of funcation calls : %d \n", f_calls);

    return 0;
}
