#include<stdio.h>
int main()
{
    int num,r,temp;
    int sum=0;
    printf("Enter A interjer number: ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum=(sum*10)+r;
        temp=temp/10;
    }
    printf("The number is : %d",sum);
}