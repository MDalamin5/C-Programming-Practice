#include<stdio.h>
int main()
{
    int a,i,sum=0;
    while(1)
    {
        printf("Enter number: ");
        scanf("%d",&a);
        if(a<0)
        {
            break;
        }
        sum=sum+a;
        i++;
    }
    printf("Sum is = %d",sum);
}