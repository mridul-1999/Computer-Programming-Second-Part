#include <stdio.h>

int main()
{
    char small_letter, capital_letter;

    printf("Please Enter a Small letter : ");
    small_letter = getchar();

    capital_letter = small_letter - 32;
    printf("The Capital letter is %c \n", capital_letter);

    return 0;
}
