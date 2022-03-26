#include<stdio.h>
int main()
{
    int i,j,n;
    char ch=65;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        
        for(j=1; j<=n-i; j++)
        {
            printf(" ");

        }
        for(j=1; j<=i; j++)
        {
            printf(" %c",ch);


        }

        printf("\n");
        ch++;
        
    }
}