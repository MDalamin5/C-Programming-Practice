#include<stdio.h>
int main()
{
    int i,j,num,sum=0;
    printf("Enter your Number: ");
    scanf("%d",&num);

    i=5;
    j=2;
    
    while(i<=num)
    {
        sum=sum+i*i;
        
        i=i+2*j;
        j++;
        
        

    }

    printf("Sum of the serise:%d",sum);

}