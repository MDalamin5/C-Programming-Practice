#include<stdio.h>
int main()
{
    int n,i, sum=0;
    printf("Enter the Valu of n: ") ;
    scanf("%d",&n);

    for(i=1;i<=n;i++) 
    {
        sum=sum+i*i;

    }
    printf("SUM= %d",sum);
}
