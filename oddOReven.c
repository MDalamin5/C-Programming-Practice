#include<stdio.h>
int main()
{
    int num;
    printf("Please enter a number: ");
    scanf("%d",&num);
    if(num%2==0)
printf("Its a even number\n");
   else if(num%2!=0)
    printf("Its a ODDD number\n");
    else 
    printf("Both are Equal\n");
}