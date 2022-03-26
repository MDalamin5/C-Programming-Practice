#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the valu of N: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }

    /*for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    */
}