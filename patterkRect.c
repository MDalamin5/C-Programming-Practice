#include<stdio.h>
int main()
{
    int m,row,col;
    printf("Ennter Valu of : ");
    scanf("%d",&m);
    for(row=1;row<=m; row++)
    {
        for(col=1; col<=m; col++)
        {
            if (row==1||col==1||row==m||col==m)
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
