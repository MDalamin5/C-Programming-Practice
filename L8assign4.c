#include<stdio.h>
int main()
{
    int i,n,fact=1;
    float sum=0;
    printf("Enter The Value of N: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum + 1.0/fact;
        
    }

    //printf("%d",fact);
    printf("\n The sum of the serise is = %.2f",sum);
}