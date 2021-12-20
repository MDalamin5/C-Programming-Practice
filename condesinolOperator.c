#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter two inter number: ");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    printf("Large number is: %d",num1);
    else if (num2>num1)
    printf("large number is: %d",num2);
    else
    printf("Both are equal");
}