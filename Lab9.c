
/*
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the valu Of N:  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1 || j==i || i==n || i==1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
*/

#include <stdio.h>
void main()
{
    int i, j, N;
    printf("Enter rows: ");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        //Print leading spaces
        for(j=1; j<=N - i; j++)
           printf(" ");
        //Print stars after spaces
        for(j=1; j<=N; j++)
            printf(" * ");
        printf("\n");
    }
}