#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Your vaccine status: ");
    scanf(" %c",&ch);
    if(ch=='0')
    {
        printf("Uncaccinated; Not eligible");
    }

    else if(ch=='1')
    {
        printf("Completet first Dose; Not eligible");
    }
    else if(ch=='2')
    {
        printf("Complete Second Dose; eligible");
    }
    else if(ch=='B')
    {
        printf("Booster Dose; eligible");
    }
}