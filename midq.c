#include<stdio.h>
#include<math.h>
int main()
{
    int x,n,sum=0,term,i;
    printf("Enter the value of x and n: ");
    scanf("%d %d",&x,&n);

    for(i=1; i<=n; i++)
    {
        term=pow(x,i);

        if(i%2==0){
            sum=sum-term;
        }
        else
        {
            sum=sum+term;
        }
        
    }

    printf("The sum is : %d",sum);
}