#include<stdio.h>
int main()
{
    int i=1,n,j,sum=0,sum1=0,count=1;
    printf("Enter N: ");
    scanf("%d",&n);

    while(count<=n)
    {
        sum=0;
        for(j=1; j<=i/2; j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==i)
        {
            if(count==n)
            {
                printf("%d^th perfect number is %d: ",n,i);
            }
            count++;
        }
        i++;
    }
    
   
}