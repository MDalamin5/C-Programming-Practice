#include<stdio.h>
int main()
{
     int year;
     printf("please enter a year: ");
    
     scanf("%d",&year);
     if(year%400==0)
     printf("Its leiber year");
     else if(year%4==0 && year%100!=0)
     printf("its Leabier");
     else
     printf("its not leiber year");
}