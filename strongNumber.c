#include<stdio.h>
int main()
{
    int num,r,sum=0,temp;
    printf("Enter number : ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+(r*r*r);
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("its strong number");

    }
    else {
        printf("its not");
    }
}