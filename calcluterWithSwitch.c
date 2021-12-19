#include<stdio.h>
int main()
{
    int num1,num2;
    int sum,minus,into,devid;
    char ch;
    printf("Please enter int num: \n");
    scanf("%d",&num1);
    printf("Enter your opration: \n");
    scanf("%c",&ch);
    printf("Enter your 2nd number: ");
    scanf("%d",&num2);

    sum=num1+num2;
    minus=num1-num2;
    into=num1*num2;
    devid=num1/num2;
    switch(ch)
    {
        case '+' :
        printf("Result: %d",sum);
        break;
    }

}