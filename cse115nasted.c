#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    for(i=n;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                printf("+");
            }
            else
            printf("*");
        }
        printf("\n");
    }
}