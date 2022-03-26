#include<stdio.h>
int main()
{
    int num,rem,value;
    printf("Enter Your decimal naumber: ");
    scanf("%d",&num);

    while(num!=0)
    {
        rem=num%2;
        printf("%d",rem);
        num=num/10;

    }


}