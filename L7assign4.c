#include<stdio.h>
int main()
{
    int num,sum=0,n,rem;
    printf("Emter Your Number: ");
    scanf("%d",&num);

    n=num;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
     int i,count=1;
     for(i=2;i<sum;i++)
     {
         if(sum%i==0)
         {
             count=0;
             break;
         }
     }

     if(count==0)
     {
         printf("Sum of its digits = %d. It is not a prinme number.",sum);
     }

     else
     {
         printf("Sum of its digits = %d. It is a prinme number.",sum);
     }
}