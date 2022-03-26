#include<stdio.h>
int main()
{
    int base,power,product=1;

    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter the power: ");
    scanf("%d",&power);

    int i;
    for(i=1;i<=power;i++)
    {
        product=product*base;
    }

    printf("%d to the power %d = %d",base,power,product);
}