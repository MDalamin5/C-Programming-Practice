
#include<stdio.h>
int main()
{
    int n,even=0,odd=0,i;
    printf("enter interger number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        even=even+i;
        else
        odd=odd+i;

    }
    printf("%d",odd-even);
}