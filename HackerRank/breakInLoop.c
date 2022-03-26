#include<stdio.h>
int main()
{
     int i,sum=0,a;
     for(i=1;i<=5;i++)
     {
         printf("Enter a interger number: ");
         scanf("%d",&a);
         if (a<0)
         {
             break;
         }
         sum=sum+a;
         
     }
     printf("The sum is = %d\n",sum);
}