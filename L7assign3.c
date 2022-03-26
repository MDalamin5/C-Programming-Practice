#include<stdio.h>
int main()
{
    int num,n,rem,result=0;
    printf("Enter Your Number: ");
    scanf("%d",&num);
    n=num;

    while(n!=0)
    {
        rem=n%10;
        result=result*10 + rem;
        n=n/10;
    }

    //printf("Current number is: %d\n",result);
    
    
   int i,count=1;
   for(i=2;i<result;i++)
   {
       if(result%i==0)
       {
           count=0;
           break;
       }
   }

   if(count == 0)
   {
       printf("Reverse number is: %d. It is not a prime number.",result);
   }
   else
   {
       printf("Reverse number is: %d. It is a prime number.",result);
   }
   
}