#include<stdio.h>
int main()
{
    int i,j,n;
    int num=1;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        
        
        for(j=1; j<=i; j++)
        {
           if(num>9)
           {
               num=0;
           }
           printf("%d",num);
           num++;


        }

        printf("\n");
        
        
    }
}