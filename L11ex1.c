#include<stdio.h>
int main()
{
    int i,n,j,flag;
    printf("Enter n: ");
    scanf("%d",&n);

    printf("All the prime numbers between 1 and %d (in revers order):",n);
    for(i=20; i>1; i--)
    {
        flag=0;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
        {
            printf("%d, ",i);
        }
    }
}