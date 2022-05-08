#include<stdio.h>
struct BirthCertificate
{
    int day, month, year;
    char name[1000], fatherName[100], motherName[100];
};

struct BirthCertificate person[2];

int main()
{
    int i;

    for(i=0; i<2; i++)
    {
        printf("\nEnter Person%d name: ",i+1);
        gets(person[i].name);
        printf("Enter Person%d Birthday Year, Month, Day: ",i+1);
        scanf("%d%d%d",&person[i].year,&person[i].month,&person[i].day);
        fflush(stdin);
        printf("Enter Person%d Father Name: ",i+1);
        gets(person[i].fatherName);
        printf("Enter Person%d Mothe Name: ",i+1);
        gets(person[i].motherName);
    }

    if(person[0].year<person[1].year)
    {
        printf("Person%d is Older.\n",1);
        printf("Father Name: ");
        puts(person[0].fatherName);
        printf("Mother Name: ");
        puts(person[0].motherName);

    }

        else if(person[0].year>person[1].year)
    {
        printf("Person%d is Older.\n",2);
        printf("Father Name: ");
        puts(person[1].fatherName);
        printf("Mother Name: ");
        puts(person[1].motherName);

    }



    else if(person[0].month<person[1].month)
    {
        printf("Person%d is Older.\n",1);
       printf("Father Name: ");
        puts(person[0].fatherName);
        printf("Mother Name: ");
        puts(person[0].motherName);
        
    }

    else if(person[0].month>person[1].month)
    {
        printf("Person%d is Older.\n",2);
        printf("Father Name: ");
        puts(person[1].fatherName);
        printf("Mother Name: ");
        puts(person[1].motherName);
        
    }

    else if(person[0].day<person[1].day)
    {
        printf("Person%d is Older.\n",1);
        printf("Father Name: ");
        puts(person[0].fatherName);
        printf("Mother Name: ");
        puts(person[0].motherName);
        
    }

    
    

    else if(person[0].day>person[1].day)
    {
        printf("Person%d is Older.\n",2);
       printf("Father Name: ");
        puts(person[1].fatherName);
        printf("Mother Name: ");
        puts(person[1].motherName);
        
    }

    else
    {
        printf("Both age ara same.");
    }
}

