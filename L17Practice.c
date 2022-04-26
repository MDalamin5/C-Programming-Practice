










#include<stdio.h>
typedef struct student
{
    char name[30];
    int roll;
    float mark;
}stu;

stu s[10];


int main()
{
    int i;
    printf("Enter Student information\n");

    for(i=0; i<10; i++)
    {
        s[i].roll= i+1;
        printf("\nEnter roll number %d information: \n",s[i].roll);
        printf("Enter Student naem: ");
        scanf("%s",s[i].name);
        fflush(stdin);
        printf("Enter Marks: ");
        scanf("%f",&s[i].mark);
    }

    printf("Displaying Information of Student\n\n");
    for(i=0; i<10; i++)
    {
        s[i].roll=i+1;
        printf("Informaton of Roll number %d\n",s[i].roll);
        printf("Neme: ");
        puts(s[i].name);
        printf("Mark is: %.2f\n",s[i].mark);

    }
}
