#include<stdio.h>
int main()
{
    int num,r,temp,sum=0;
    printf("Enter a interger number: ");
    scanf("%d",&num);
    temp=num;

    while(temp!=0)
    {
        r=temp%10;
        sum=(sum*10)+r;
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("Its pendrome");
    }
    else
    printf("Its not pendome");
}