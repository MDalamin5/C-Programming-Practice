#include<stdio.h>
#include<math.h>
int main()

{
    int m,n,i,x,sum=0;
    printf("Enter the valu of m and x: ");
    scanf("%d%d",&m,&x);

    for(i=0;i<=m-1;i++)
    {
        sum=sum+pow(x,i);
    }
    printf("%d",sum);
}