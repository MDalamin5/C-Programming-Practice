#include<stdio.h>
int main()
{
    int num,i,count=0;
    printf("enter enteger number: ");
    scanf("%d",&num);
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        count++;
        break;
    }
    if(count==0)
    {
        printf("Its Prime Number");

    }
    else
    printf("Not Prime");
}
