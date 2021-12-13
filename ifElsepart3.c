#include<stdio.h>
int main()
{
    int num1,num2;
    printf("please enter a number: ");
    scanf("%d",&num1);
    printf("Please enter another number: ");
    scanf("%d",&num2);
    if(num1>num2)
    printf("Large: %d",num1);

  else  if (num1<num2)
    printf("large: %d",num2);

    else 
    printf("Both are equal");
}