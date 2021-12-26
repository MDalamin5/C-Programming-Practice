// find 1+2 +3+..........n
#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("Enter the serise last number: ");
    scanf("%d",&n);
    printf("1+2+3+......+%d",n);
    sum=0;
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    printf("=%d",sum);
}