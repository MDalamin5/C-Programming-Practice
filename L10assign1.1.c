#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    for (i=n; i>=1; i--)
    {
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
           if(i==n || i==1 || j==i || j==1)
           printf("*");
           else
           {
               printf(" ");

           }
        }

        printf("\n");
    }
}