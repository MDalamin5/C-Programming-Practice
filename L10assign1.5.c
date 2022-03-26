#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        
        {
            k=i+j;
           if(k%2==0)
           {
               printf("%d",0);
           }

          if(k%2==1)
           {
               printf("%d",1);
           }
        }

        printf("\n");
    }
}