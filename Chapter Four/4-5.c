#include <stdio.h>

void recurse()
{
    char *s = "Hurrey, I am learing recursion!";
    printf("%s \n", s);
    recurse();
}
int main()
{
    recurse();
    return 0;
}
