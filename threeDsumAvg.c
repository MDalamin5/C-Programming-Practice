#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;
    float avg;
    printf("please enter tree int number: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    sum=num1+num2+num3;
    printf("The sum is %d\n",sum);
    avg=sum/3.0;
    printf("The Avg is %.2f",avg);
}