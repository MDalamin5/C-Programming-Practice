#include<stdio.h>
int main()
{
    int start,sum,i,j;
    /*printf("Enter your number: ");
    scanf("%d%d",&start,&end);
    */

    int count=0,n;
    printf("Ente n: ");
    scanf("%d",&n);

    int end=1;
    int sum1=0;

for(i=1; i<=end; i++)
    {
        sum=0;
        for(j=1; j<=i/2; j++)
        {
            if(i%j==0)
            {
                sum=sum+j;

            }

            
        }

        if(i==sum && count<=n-1)
        {
            printf("%d \n",i);
                
                 
            count++;
        }

        
        
        end++;
    }
    
    

    
}