#include<stdio.h>
#include<math.h>
int main()
{
    float num, result;
    printf("please enter a number: ");
    scanf("%f",&num);
    result= sqrt(num);
    printf("Your number is: %.2f",result);
}