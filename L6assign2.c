#include<stdio.h>
int main()
{
    int num;
    printf("Enter Your Number: ");
    scanf("%d",&num);

    float i=10000,sum=0;
    while(i>=num)
    {
        sum=sum+i;
        printf("+ %.1f ",i);
        i=i/5.0;

        
    }

    printf("= %.2f ",sum);
}