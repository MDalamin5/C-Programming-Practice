#include<stdio.h>
int main()
{
    int i=4,sum=0,n;

    printf("Enter the Value of n: ");
    scanf("%d",&n);

    while(i<=n)
    {
        printf("%d + ",i);
        sum=sum+i;
        
        i=i+7;
    }
    printf(" = %d",sum);

    return 0;

}