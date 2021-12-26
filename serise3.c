#include<stdio.h>
int main()
{
    int n1,n2,sum,i1,i2;
    printf("enter two number: ");
    scanf("%d %d",&n1,&n2);
    i1=1;
    i2=2;
    sum=0;
    while(i1*i2<=n1*n2)
    {
        sum=sum+(i1*i2);
        i1=i1+1;
        i2=i2+1;
    }
    printf("%d",sum);
}