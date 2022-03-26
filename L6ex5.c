#include<stdio.h>
int main()
{
    int i,m,n;
    printf("Enter the value of m: ");
    scanf("%d",&m);

    printf("Enter the valu of n: ");
    scanf("%d",&n);

    for(i=n;i>=m;i--)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }

    return 0;

}