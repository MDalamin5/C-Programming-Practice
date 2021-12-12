#include<stdio.h>
int main()
{
    int num1=23;
    int num2=44;
    int temp;

    temp=num1;
    num1=num2;
    num2=temp;
    printf("The num1 is: %d\n",num1);
    printf(" The num2 is: %d\n",num2);
}