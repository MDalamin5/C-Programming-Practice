#include<stdio.h>
int main()
{
    int n,fast,last_digit;
    printf("Enter any interger number: ");
    scanf("%d",&n);
    fast=n;

    last_digit=n%10;

    while(fast>=10)
    {
        fast=fast/10;

    }
    
    printf("Fast digit: %d\n",fast);
    printf("Fast digit: %d",last_digit);

    

}
