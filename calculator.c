#include<stdio.h>
#include<math.h>
int main()
{
    double num1, num2;
    char ch;
printf("Enter your operater: +,-,*,/ ");
    scanf("%c",&ch);
    printf("enter two inter number: ");
    scanf("%lf %lf",&num1,&num2);
    

    switch(ch)
    {
        case '+' :
        {
        printf("%lf + %lf = %lf",num1,num2 , num1+num2);
            break;
        }
        case '-' :
        {
        printf("%lf - %lf = %lf",num1,num2 , num1-num2);
            break;
        }
        case '*' :
        {
        printf("%lf * %lf = %lf",num1,num2 , num1*num2);
            break;
        }
        case '/' :
        {
        printf("%lf / %lf = %lf",num1,num2 , num1/num2);
            break;
        }
        default:
        printf("result not faund");
    }
}