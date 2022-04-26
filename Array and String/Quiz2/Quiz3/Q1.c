#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void input();
void display_search();

typedef struct student
{
    int rollo_no;
    char first_name[20];
    char last_name[20];
    int age;
    char address[100];

}stu;
int n;
stu s[100];
    

int main()
{
     stu s[n];
     int ch;
     printf("Enter No of student: ");
     scanf("%d",&n);

     while(1)
     {
         printf("\nChoose Your Option:\n");
     printf("Press 1 for add student\n");
     printf("Press 2 for Search student\n");
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
        printf("Enter student roll number: ");
        scanf("%d",&s[i].rollo_no);
        fflush(stdin);
        printf("Enter student First name: ");
        gets(s[i].first_name);
        printf("Enter student Last name: ");
        gets(s[i].last_name);
        printf("Enter student age: ");
        scanf("%d",&s[i].age);
        fflush(stdin);
        printf("Enter student adreess: ");
        gets(s[i].address);
    }
}

void display_search()
{
    char name[20];
    int flag=0;
    printf("Enter student first name: ");
    gets(name);
    
    for(int i=0; i<n; i++)
    {
       if(strcmp(s[i].first_name,name)==0)
       {
           printf("Name: %s %s\n",s[i].first_name,s[i].last_name);
           printf("Roll number %d\n",s[i].rollo_no);
           printf("Age %d\n",s[i].age);
           puts(s[i].address);
           flag=1;
       }
        
    }
    if(flag==0)
    {
        printf("Record Not found");
    }
}