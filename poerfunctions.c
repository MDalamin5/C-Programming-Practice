#include<stdio.h>
#include<math.h>
int main()
{
    double num1,num2,result;
    printf("Please Provite a number: ");
    scanf("%lf",&num1);
    printf("Please Give Power Number: ");
    scanf("%lf",&num2);
    result= pow(num1, num2);
    printf("Your valu is: %.2lf",result);
}