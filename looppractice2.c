#include<stdio.h>
int main()
{
    int i,n,sum=0;
    
    printf("enter interger number: ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        sum=sum+(i*i);
        i=i+1;
    }
    printf("%d",sum);
}