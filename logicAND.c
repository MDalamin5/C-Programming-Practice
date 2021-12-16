#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("please enter three intger number: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3)
    printf("The large number is: %d",num1);
    else if(num2>num1 && num2>num3)
    printf("The large number is: %d",num2);
    else if(num3>num1 && num3>num2)
    printf("the large number is: %d",num3);
    else
    printf("All are equal");
    
}