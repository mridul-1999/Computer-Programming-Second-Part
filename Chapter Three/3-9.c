#include <stdio.h>
#include <stdlib.h>

int main()
{
    int return_value;
    char *filename = "photo1.jpg";

    return_value = remove(filename);

    if(return_value != 0){
        perror("File removed failed");
        return 1;
    }

    printf("%s removed sucessfully \n", filename);

    //now try to remove again;
    return_value = remove(filename);

    if(return_value != 0){
        perror("File removed failed");
        return 1;
    }
    printf("%s removed sucessfully \n", filename);

    return 0;
}
