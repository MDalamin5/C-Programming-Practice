#include<stdio.h>
int main()
{
    int sum,a,num;
    printf("Enter Your serise last number: ");
    scanf("%d",&num);
    sum=0;
    a=1;
    while (a<=num)
    {
        sum=sum+a;
        a=a+1;
    }
    printf("%d",sum);
    
}