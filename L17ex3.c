#include<stdio.h>
#include<string.h>
#include<ctype.h>
typedef struct Employee
{
     char name[100];
     int d, m, y;
     int sd, sm, sy;      //sd= starting date.
     int salary;
}info;

info person[4];

int main()
{
    int i;
    for(i=0; i<4; i++)
    {
        printf("\n\nEnter naem: ");
        gets(person[i].name);
        fflush(stdin);
        printf("Enter Dath of Birth Day, Month, Year: ");
        scanf("%d%d%d",&person[i].d,&person[i].m,&person[i].y);
        printf("Enter Job Joining Date: ");
        scanf("%d%d%d",&person[i].sd,&person[i].sm,&person[i].sy);
        printf("Enter Salary: ");
        scanf("%d",&person[i].salary);
        fflush(stdin);

    }
    int j;
    int maxSalary= person[0].salary;

    for(i=0; i<4; i++)
    {
        if(maxSalary<person[i].salary)
        {
            maxSalary= person[i].salary;
            j=i;
        }
    }
    printf("\n\nInfo of Employee Higest salary: \n");
    printf("Name: ");
    puts(person[j].name);
    printf("D.O.B: %d/%d/%d\n",person[j].d,person[j].m,person[j].y);
     printf("Starting date: %d/%d/%d\n",person[j].sd,person[j].sm,person[j].sy);
     printf("Salary: %d",person[j].salary);
}
