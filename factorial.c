#include<stdio.h>
int main()
{
    int i,fact=1,n;
    printf("Enter a possative number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        fact=i * fact;
    }
    printf("%d",fact);
}