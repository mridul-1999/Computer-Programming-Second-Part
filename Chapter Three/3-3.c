#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[] = "my_file.text";

    fp = fopen(filename, "w");

    fprintf(fp,"This is a file created by my program.");
    fprintf(fp,"I am happy. ");

    fclose(fp);


    fp = fopen(filename,"a");
    fprintf(fp," second line. \n");
    fclose(fp);

    return 0;
}

