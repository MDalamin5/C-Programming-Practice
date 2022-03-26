#include<stdio.h>
int main()
{
    int i,j,m,n,flag;
    int sum=0;
    printf("Enter the value of m and n: ");
    scanf("%d%d",&m,&n);

    for(i=m; i<=n; i++)
    {
        flag=0;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            sum=sum + i;
        }
    }

    printf("The sum of all prime numer between m and n : %d",sum);

    
}