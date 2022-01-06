#include<stdio.h>
int main()
{
    int m,row,col;
    printf("Enter N: ");
    scanf("%d",&m);
    for(row=1; row<=m; row++)
    {
        for(col=1; col<=row; col++)
        {
            if(row==col || col==1 || row==m)
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