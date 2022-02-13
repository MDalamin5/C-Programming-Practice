#include<stdio.h>
struct Person
{
    int age;
    float salary;
};

int main()
{
    struct Person person[4];
    int i;
    for(i=0;i<4;i++)
    {
        printf("Enter Information fo Person %d\n",i+1);
        printf("Enter Age : ");
        scanf("%d",&person[i].age);
        printf("Enter Salary : ");
        scanf("%f",&person[i].salary);
    }

    for(i=0;i<4;i++)
    {
        printf("\nInformation Is Person %d\n",i+1);
        printf("Age is: %d\n",person[i].age);
        printf("Salary is: %f\n",person[i].salary);

    }
    
    
    
}
