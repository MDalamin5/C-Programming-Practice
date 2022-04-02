#include <stdio.h>

int main()
{
    int i, j, k=1;


    for(i=0; i<5; i++)
    {
        for(j=i; j<=5; j++)
        {
            printf(" ");
        }
        for(j=0; j<=i; j++)
        {

            if(k == 1)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }

            k *= -1;
        }

        if(i % 2 == 0)
        {
            k *= -1;
        }

        printf("\n");
    }

    return 0;
}