#include<stdio.h>
int reverse();
int main()
{
    int num,rev;
    printf("Enter YOur number: ");
    scanf("%d",&num);

    rev= reverse(num);

    printf("The reveres number is: %d",rev);

}

int reverse(int n)
{
    int rem,result=0;

    while(n!=0)
    {
        rem=n%10;
        result=result*10+rem;
        n=n/10;
    }

    return result;
}
