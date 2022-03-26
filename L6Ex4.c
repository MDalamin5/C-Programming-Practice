#include<stdio.h>
#include<math.h>
int main()
{
    int i=2,sum=0,n;
    printf("Enter The value of n: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d^3 + ",i);
        sum=sum+pow(i,3);
        i=i+3;
    }

    printf(" = %d",sum);

    return 0;
}