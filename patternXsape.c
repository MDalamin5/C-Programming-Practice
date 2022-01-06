#include<stdio.h>
int main()
{
    int m,row,col;
    printf("Enter vsli of N: ");
    scanf("%d",&m);
    for(row=1; row<=m; row++)
    {
        for(col=1; col<=m; col++)
        {
            if (row+col==m+1||col==row)
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