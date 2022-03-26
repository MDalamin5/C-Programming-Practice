#include<stdio.h>
int main()
{
    int num,a,rem,result=0;
    printf("Enter Your Number: ");
    scanf("%d",&num);

    a=num;

    while(a!=0)
    {
        rem=a%10;
        result=result*10 + rem;
        a=a/10;
    }
    if(num==result)
    {
        printf("%d is a palindrome",num);
    }
    else
    {
        printf("%d is not a palindrome",num);
    }
}