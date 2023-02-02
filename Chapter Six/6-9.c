#include <stdio.h>
#include <string.h>

typedef struct{
    char firstName[20];
    char lastName[20];
}nametype;

typedef struct{
    int id;
    nametype name;
    char grade[3];
}studenttype;

void calculate_grade(studenttype* s, int mark)
{
    if(mark >= 80)
    {
        strcpy(s->grade,"A+");
    }
    else if(mark >= 70)
    {
        strcpy(s->grade,"A");
    }
    else if(mark >= 60)
    {
        strcpy(s->grade,"A-");
    }
    else if(mark >= 50)
    {
        strcpy(s->grade,"B");
    }
    else if(mark >= 40)
    {
        strcpy(s->grade,"C");
    }
    else{
        strcpy(s->grade,"FAIL");
    }
}

int main()
{
    studenttype student[5];

    int i, n = 5;
    int marks[] = {72, 82, 60, 20, 50};

    for(i = 0; i < n; i++)
    {
        printf("Enter the ID for student %d : ", i+1);
        scanf("%d", &student[i].id);
        printf("Enter the first name of student %d : ", i+1);
        scanf("%s", student[i].name.firstName);
        printf("Enter the last name of student %d : ", i+1);
        scanf("%s", student[i].name.lastName);

        strcpy(student[i].grade, "");

        printf("\n");

    }
    for(i = 0; i < n; i++)
    {
        calculate_grade(&student[i],marks[i]);
    }

    printf("OutPut : \n\n");

    for(i = 0; i < n; i++)
    {
        printf("ID : %d\n", student[i].id);
        printf("Name : %s %s \n", student[i].name.firstName, student[i].name.lastName);
    }

    return 0;
}

