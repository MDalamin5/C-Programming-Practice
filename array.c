#include<stdio.h>
int main()
{

    int row,col;
    int A[2][3]={ {1,3,5}, {2,8,9}   };
    for(row=0;row<=1;row++)
    {
        for(col=0;col<=2;col++)
        {
            printf("%d",A[row][col]);

        }
         printf("\n");
    }


}
