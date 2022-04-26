#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void input();
void display_search();

typedef struct player
{

    char name[40];
    int age;
    char country[40];
    int ranking;
    int salary;


}stu;
int n;
stu s[100];
    

int main()
{
     stu s[n];
     int ch;
     printf("Enter No of player: ");
     scanf("%d",&n);

     while(1)
     {
         printf("\nChoose Your Option:\n");
     printf("Press 1 for add player\n");
     printf("Press 2 for Search player\n");
     printf("Press 0 for exit\n");

     
     printf("\nEnter Your choose: ");
     scanf("%d",&ch);
     fflush(stdin);

     switch(ch)
     {
            case 0:
            exit(0);

            case 1:
            input();
            break;

            case 2:
            display_search();
            break;
     }
     }
     
}

void input()
{
    for(int i=0; i<n; i++)
    {
       printf("Enter student name: ");
       gets(s[i].name);
       printf("Ener age: ");
       scanf("%d",&s[i].age);
       fflush(stdin);
       printf("Enetr country: ");
       gets(s[i].country);
       printf("Enetr player ranking: ");
       scanf("%d",&s[i].ranking);
       printf("Enter salary: ");
       scanf("%d",&s[i].salary);
       printf("\nrecord save succefully");
       
    }
}

void display_search()
{
    char name[20];
    int flag=0;
    printf("Enter student name: ");
    gets(name);
    
    for(int i=0; i<n; i++)
    {
       if(strcmp(s[i].name,name)==0)
       {
           printf("age is %d\n",s[i].age);
           puts(s[i].country);
           printf("\nranking: %d",s[i].ranking);
           printf("salary: %d",s[i].salary);

           flag=1;
       }
        
    }
    if(flag==0)
    {
        printf("Not found");
    }
}