/*
#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter value of n : ");
    scanf("%d", &n);

    // Loop to print upper half of the pattern
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            printf("*");
        }

        for(j=1; j<=(2*i-2); j++)
        {
            printf(" ");
        }

        for(j=i; j<=n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Loop to print lower half of the pattern
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        for(j=(2*i-2); j<(2*n-2); j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
*/

#include<stdio.h>
int main()
{
    int num,Switch,elseif;
    
    printf("Enter Your number: ");

    scanf("%d",&num);
    printf( "Enter Switch value: ");
    scanf("%d",&Switch);

    printf("Enter elseif value: ");
    scanf("%d",&elseif);

    if(num>50 && num<56)
    {
        printf("Hi");
    }
    
    printf("NO NO");

    Switch=7;
    printf("\n%d\n",Switch);
    printf("\n%d\n",elseif);
    int a;
    printf("Enter the value: ");
    scanf("%d",&a);
    if(a==6)
    printf("Hi");

}