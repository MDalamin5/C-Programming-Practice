#include<stdio.h>
int main()
{
    float n,sum=0,i;
    printf("enter interger number: ");
    scanf("%f",&n);
    i=1;
    while(i<=n)
    {
        sum=sum+1/i;
        i++;

    }
    printf("%f",sum);
}