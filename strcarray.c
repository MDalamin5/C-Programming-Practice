#include<stdio.h>
struct Person
{
    int age;
    float salary;
    char name[50];
};

int main()
{
    struct Person person[4];
    int i;
    for(i=0;i<4;i++)
    {
        printf("Enter Information fo Person %d\n",i+1);
        printf("Enter Name: ");
        scanf(" %[^\n]s",person[i].name);
        printf("Enter Age : ");
        scanf("%d",&person[i].age);
        printf("Enter Salary : ");
        scanf("%f",&person[i].salary);
    }

    for(i=0;i<4;i++)
    {
        printf("\nInformation Is Person %d\n",i+1);
        printf("Name is: %s\n",person[i].name);
        printf("Age is: %d\n",person[i].age);
        printf("Salary is: %f\n",person[i].salary);

    }
    
    
    
}
