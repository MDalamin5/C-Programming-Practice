#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",col%2);

        }
        printf("\n");
    }
}