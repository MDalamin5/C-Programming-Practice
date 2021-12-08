//write a program which two number are sum and avg
#include<stdio.h>
int main()
{
    int num1,num2,sum;
    float avg;
    printf("Enter two number: ");
    scanf(" %d %d",&num1,&num2);
    sum= num1+ num2;
    printf("Your sum: %d",sum);
    avg= sum/2.0;
    printf("the avg: %.2f",avg);
}