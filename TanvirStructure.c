#include<stdio.h>
#include<string.h>
struct student
{
    char mame[20];
    int id;
    float mark;
}s1[10];

int main()
{
       /* printf("Enter student name: ");
        gets(s1.mame);
        printf("Enter student id: ");
        scanf("%d",&s1.id);
        printf("enter student mark: ");
        scanf("%f",&s1.mark);

        //printf("Name: ");
       // printf("%s\n",s.mame);
        puts(s1.mame);
        printf("ID: %d\n",s1.id);
        printf("%f",s1.mark);
        */

        for(int i=0; i<10;i++)
        {
            printf("Enter student name: ");
        gets(s1[i].mame);
        printf("Enter student id: ");
        scanf("%d",&s1[i].id);
        printf("enter student mark: ");
        scanf("%f",&s1[i].mark);
        }

        
        

        
}