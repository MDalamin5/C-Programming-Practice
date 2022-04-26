#include<stdio.h>
int main()
{
    int array [2][3];
    int i,j;
    int sum=0;
    printf("Enter your array: ");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Array[%d][%d]: ",i,j);
            scanf("%d",&array[i][j]);
        }
    }

    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",array[i][j]);
            sum= sum+array[i][j];
        }
        printf("\n");
    }

    printf("%d sum",sum);

}