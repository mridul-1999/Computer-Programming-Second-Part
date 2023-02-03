#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *marks;
    int i, n;
    printf("Please Enter the number of student : \n");
    scanf("%d", &n);

    //allocate memory
    marks = (int *)malloc(sizeof(int) * n);
    if(marks == NULL){
        printf("Memory allocation failed for marks \n");
        return 1;
    }
    printf("Enter the marks for each student : \n");
    for(i = 0; i < n; i++){
        scanf("%d",&marks[i]);
    }

    printf("now here you can see the value : \n");
    for(i = 0; i < n; i++){
        printf("%d \n",marks[i]);
    }
    // now free the memory
    free(marks);
    return 0;
}
