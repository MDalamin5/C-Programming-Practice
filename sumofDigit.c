#include<stdio.h>
int main()
        {
            int num,temp,sum=0, r;
            printf("enter interger number: ");
            scanf("%d",&num);
            temp=num;

            while(temp !=0)
            {
                 r=temp%10;
                 sum=r+sum;
                 temp=temp/10;
            }
            printf("The sum is= %d",sum);
        }