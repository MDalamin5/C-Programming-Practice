#include<stdio.h>
struct person
{
    char name[50];
    int age;
    float salary;
};

void display(struct person p)
{
    printf("Age: %d",p.age);
}



int main()
{
    struct person person1;

    strcpy(person1.name,"Al Amin");
    person1.age=22;
    person1.salary=435.54;
    
    
    

    display(person1);
}