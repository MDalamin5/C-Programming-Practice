#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the value of row: ");
    scanf("%d",&n);

    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            if(j==4)
            {
                printf("+ ");
            }
            else
            {
                printf("* ");
            }
        }

        printf("\n");
    }
}