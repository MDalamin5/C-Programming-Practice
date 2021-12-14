#include<stdio.h>
int main()
{
    int num1,num2;
    printf("please enter two number: ");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    printf("First Number Is Large: %d",num1);
    else if(num2>num1)
    printf("Scend number is large: %d",num2);
    else
    printf("Both are Equal");
}