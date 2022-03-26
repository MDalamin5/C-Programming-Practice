#include<stdio.h>
int main()
{
    int num,rem,sum=0,i;
    printf("Enter YOur number: ");
    scanf("%d",&num);

    for(i=1;i<=num/2;i++)
    {
        rem=num%i;
        if(rem==0)
        {
            sum=sum+i;
        }
    }

    if(sum==num)
    {
        printf("Its a perfect Number");
    }
    else
    printf("Not a perfect number");

}