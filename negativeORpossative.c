#include<stdio.h>
int main()
{
    int num;
    printf("Please enter a number: ");
    scanf("%d",&num);
    if(num>0)
    printf("Its Possative Number");
    else if (num<0)
    printf("Its a negative Number");
    else
    printf("Its zero");

}