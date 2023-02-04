#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **ara, num[12];
    int i, j, total_class, n;

    printf("Enter the total number of classes : \n");
    scanf("%d",&total_class);
    ara = (int **)malloc(sizeof(int *) * total_class);
    if(ara == NULL){
        printf("Memory allocation failed \n");
        return 1;
    }

    for(i = 0; i < total_class; i++){
        printf("Enter the number of students for class %d : ", i+1);
        scanf("%d",&n);
        num[i] = n;
        ara[i] = (int *)malloc(sizeof(int) * n);
        if(ara[i] == NULL){
            printf("Memory allocation failed \n");
            return 1;
        }
        for(j = 0; j < n; j++){
            printf("Enter marks for students %d : ",j+1);
            scanf("%d",&ara[i][j]);
        }
    }
    //now print the results
    printf("output \n");
    for(i = 0; i < total_class; i++){
        printf("Class %d : ",i+1);
        for(j = 0; j < num[i]; j++){
            printf("%4d",ara[i][j]);
        }
        printf("\n");
    }
    return 0;
}
