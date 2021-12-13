#include<stdio.h>

int main()
{
    int num;
    printf("Please enter anumber : ");
    scanf("%d",&num);
    if(num%2==0)
    printf("Even");
    if(num%2!=0)
    printf("Odd");
}