#include <stdio.h>
#include <string.h>

struct nametype{
    char firstName[30];
    char lastName[30];
};

struct studenttype{
    int id;
    struct nametype name;
};

int main()
{
    struct studenttype student[5];

    int i, n = 5;

    for(i = 0; i < n; i++)
    {
        printf("Enter the ID for student %d : ", i+1);
        scanf("%d", &student[i].id);
        printf("Enter the first name of student %d : ", i+1);
        scanf("%s", student[i].name.firstName);
        printf("Eneter the last name of student %d : ", i+1);
        scanf("%s", student[i].name.lastName);

        printf("\n");

    }
    printf("OutPut : \n\n");

    for(i = 0; i < n; i++)
    {
        printf("ID : %d\n", student[i].id);
        printf("Name : %s %s \n", student[i].name.firstName, student[i].name.lastName);
    }
    return 0;
}
